;;; copyright (c) Polos Ruetz
;;;
;;; (please note that this is an outdated experiment)
;;;
;;; A basic and experimental(!) Lisp editor, featuring:
;;;
;;;   - a code completer for Qt/EQL functions
;;;   - a tab completer for CL/EQL symbols (including Qt enums)
;;;   - a tab completer for absolute pathnames
;;;   - paren highlighting
;;;   - simple auto indent, indent paragraph
;;;   - simple syntax highlighter
;;;
;;;   - an independent local Lisp server process for evaluation
;;;   - eval region
;;;
;;; N.B: requires Qt 4.7 for signal QFileSystemModel::directoryLoaded(QString)

(require :local-client (probe-file "local-client.lisp"))
(require :settings     (probe-file "settings.lisp"))

;; load all available modules for code completions
(dolist (module (list :help :network :opengl :sql :svg :webkit))
  (eql:qrequire module :quiet))

(defpackage :editor
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :editor)

(defun read-file (file &optional (set-name :set))
  (with-open-file (s (x:path file) :direction :input)
    (when (eql :set set-name)
      (setf *file-name* file))
    (x:let-it (make-string (file-length s))
      (read-sequence x:it s))))

(defun in-home* (name)
  (in-home "examples/9-simple-lisp-editor/" name))

(defun from-file (name)
  (eval (read-from-string (read-file (in-home* name) :do-not-set))))

(defparameter *auto-indent*   (from-file "data/auto-indent.lisp"))
(defparameter *eql-keywords*  (from-file "data/eql-keywords.lisp"))
(defparameter *lisp-keywords* (from-file "data/lisp-keywords.lisp"))

(defparameter *current-completer*      nil)
(defparameter *current-depth*          0)
(defparameter *current-keyword-indent* 0)
(defparameter *cursor-code-depth*      0)
(defparameter *error-region*           nil)
(defparameter *extra-selections*       nil)
(defparameter *file-name*              nil)
(defparameter *keep-extra-selections*  nil)
(defparameter *latest-eval-position*   nil)
(defparameter *try-read-error*         nil)

(defconstant +max-shown-completions+ 10)
(defconstant +max-history+           50)
(defconstant +package-char-dummy+    #\$)
(defconstant +history-file+          ".command-history")

;;; Qt

(defvar *main* (qload-ui (in-home* "data/editor.ui")))

(defvar-ui *main*
  *editor*
  *output*
  *command*
  *splitter*
  *find*
  *replace*
  *button-next*
  *button-replace*
  *sel-label*
  *select*
  *action-open*
  *action-save*
  *action-save-as*
  *action-save-and-run*
  *action-copy*
  *action-cut*
  *action-insert-file*
  *action-eval-region*
  *action-repeat-eval*
  *action-reset-lisp*)

(defparameter *current-editor*       *editor*)
(defparameter *lisp-match-rule*      nil)
(defparameter *eql-keyword-format*   nil)
(defparameter *lisp-keyword-format*  nil)
(defparameter *comment-format*       nil)
(defparameter *parenthesis-color*    "lightslategray")
(defparameter *string-color*         "saddlebrown")
(defparameter *eql-completer*        nil)
(defparameter *file-completer*       nil)
(defparameter *symbol-completer*     nil)
(defparameter *file-model            nil)
(defparameter *symbol-model          nil)
(defparameter *file-popup*           nil)
(defparameter *symbol-popup*         nil)
(defparameter *editor-highlighter*   nil)
(defparameter *command-highlighter*  nil)

(defun file-open (&optional name)
  (unless name
    (setf name (! "getOpenFileName" "QFileDialog" nil "" "" "Lisp files (*.lisp)")))
  (unless (x:empty-string name)
    (file-save)
    (! "setPlainText" *editor* (read-file name))
    (show-file-name)))

(defun save-file (name)
  (when (and (stringp name)
             (not (x:empty-string name)))
    (with-open-file (s (x:path name) :direction :output
                       :if-exists :supersede)
      (write-string (string-right-trim '(#\Space #\Tab #\Newline) (qget *editor* "plainText")) s)
      (write-char #\Newline s)
      (setf *file-name* name)
      (show-file-name))))

(defun file-save ()
  (save-file *file-name*))

(defun file-save-as ()
  (let ((name (! "getSaveFileName" "QFileDialog" nil "" "" "Lisp files (*.lisp)")))
    (unless (x:ends-with ".lisp" name)
      (setf name (x:cc name ".lisp")))
    (save-file name)))

(defun show-file-name ()
  (! "setWindowTitle" *main* (file-namestring *file-name*)))

(defun ini ()
  (x:do-with (qset *command*)
    ("horizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|)
    ("verticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|))
  (x:do-with (qset *output*)
    ("readOnly" t)
    ("tabStopWidth" (* 8 (first (font-metrics-size)))))
  (x:do-with *splitter*
    ("setStretchFactor" 0 2)
    ("setStretchFactor" 1 1))
  (x:do-with (qset *main*)
    ("size" '(800 500))
    ("windowTitle" "Simple Lisp Editor"))
  (! "setFixedHeight" *command* (+ (second (font-metrics-size))
                                   (* 2 (! "frameWidth" *command*))))
  (qset-color *output* |QPalette.Base| "lavender")
  (dolist (ed (list *editor* *command*))
    (qconnect ed  "cursorPositionChanged()" 'cursor-position-changed))
  (qconnect *find*    "returnPressed()" 'find-text)
  (qconnect *replace* "returnPressed()" 'replace-text)
  (qconnect *button-next*    "clicked()" 'find-text)
  (qconnect *button-replace* "clicked()" 'replace-text)
  (qconnect *select* "clicked()" (lambda () (run-on-server "(qselect 'local-server::widget-selected)")))
  (qconnect (qapp) "aboutToQuit()" 'clean-up)
  (qoverride *editor*  "keyPressEvent(QKeyEvent*)" 'editor-key-pressed)
  (qoverride *command* "keyPressEvent(QKeyEvent*)" 'command-key-pressed)
  (ini-actions)
  (ini-highlighter)
  (ini-completer)
  (set-debugger-hook)
  (dolist (w (list *editor* *output* *command* *eql-completer* *symbol-popup* *sel-label*))
    (qset w "font" eql::*code-font*))
  (local-client:ini 'data-from-server)
  (show-status-message (format nil (tr "<b style='color:#4040E0'>Eval Region:</b> move to paren <b>(</b> or <b>)</b>, hit <b>~A</b>")
                               (! (("toString" |QKeySequence.NativeText|) "shortcut" *action-eval-region*)))
                       :html)
  (! "show" *main*)
  (qlater 'delayed-ini))

(defun ini-actions ()
  (flet ((ini (action keys &optional fun)
           (when keys
             (qset action "shortcut" (qnew "QKeySequence(QString)" keys)))
           (when fun
             (qconnect action "triggered()" fun))))
    (ini *action-open*         "Ctrl+O"      'file-open)
    (ini *action-save*         "Ctrl+S"      'file-save)
    (ini *action-save-as*      nil           'file-save-as)
    (ini *action-save-and-run* "Ctrl+R"      'save-and-run)
    (ini *action-copy*         "Alt+C"       (lambda () (copy/cut-highlighted-region :copy)))
    (ini *action-cut*          "Alt+X"       (lambda () (copy/cut-highlighted-region :cut)))
    (ini *action-insert-file*  "Ctrl+I"      'insert-file)
    (ini *action-eval-region*  "Ctrl+Return" 'eval-region)
    (ini *action-repeat-eval*  "Ctrl+E"      'repeat-eval)
    (ini *action-reset-lisp*   "Ctrl+Alt+R"  'restart-server)
    (ini *button-next*         "Ctrl+F")
    (ini *button-replace*      "Ctrl+G")))

(defun ini-highlighter ()
  (setf *eql-keyword-format*  (qnew "QTextCharFormat")
        *lisp-keyword-format* (qnew "QTextCharFormat")
        *comment-format*      (qnew "QTextCharFormat")
        *lisp-match-rule*     (qnew "QRegExp(QString)" "[(']:*[^ )]+"))
  (! "setForeground" *eql-keyword-format*  (qnew "QBrush(QColor)" "#0000C0"))
  (! "setForeground" *lisp-keyword-format* (qnew "QBrush(QColor)" "#C00000"))
  (x:do-with *comment-format*
    ("setForeground" (qnew "QBrush(QColor)" "#80A080"))
    ("setFontItalic" t))
  (setf *editor-highlighter*  (qnew "QSyntaxHighlighter(QTextDocument*)" (! "document" *editor*))
        *command-highlighter* (qnew "QSyntaxHighlighter(QTextDocument*)" (! "document" *command*)))
  (qoverride *editor-highlighter*  "highlightBlock(QString)"
             (lambda (str) (highlight-block *editor-highlighter* str)))
  (qoverride *command-highlighter* "highlightBlock(QString)"
             (lambda (str) (highlight-block *command-highlighter* str))))

(defun ini-completer ()
  (setf *eql-completer*    (qnew "QListWidget"
                                 "horizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|
                                 "verticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|)
        *symbol-completer* (qnew "QCompleter"
                                 "maxVisibleItems" 10)
        *symbol-model*     (qnew "QStringListModel")
        *symbol-popup*     (! "popup" *symbol-completer*))
  (x:do-with (qset *eql-completer*)
    ("frameShape" |QFrame.Box|)
    ("frameShadow" |QFrame.Plain|)
    ("lineWidth" 1))
  (! "setWindowFlags" *eql-completer* |Qt.Popup|)
  (! "setWidget" *symbol-completer* *command*)
  (! "setModel" *symbol-completer* *symbol-model*)
  (qset-color *symbol-popup* |QPalette.Base| "palegreen")
  (qconnect *eql-completer* "itemDoubleClicked(QListWidgetItem*)" 'insert-completer-option-text)
  (qconnect *symbol-completer* "highlighted(QString)" 'item-highlighted)
  (qoverride *eql-completer* "keyPressEvent(QKeyEvent*)" 'completer-key-pressed)
  (qoverride *eql-completer* "focusOutEvent(QFocusEvent*)" 'close-completer)
  (update-completer-symbols))

(defun delayed-ini ()
  (let* ((buttons (list *button-next* *button-replace*))
         (width (apply 'max (mapcar (lambda (w) (! "width" w)) buttons))))
    (dolist (button buttons)
      (! "setFixedWidth" button width))))

(defun clean-up ()
  (file-save))

(defun document ()
  (! "document" *current-editor*))

(let (size)
  (defun font-metrics-size ()
    (or size (qlet ((fm "QFontMetrics(QFont)" eql::*code-font*))
               (setf size (list (! "width(QChar)" fm #\Space)
                                (! "height" fm)))))))

(let (label)
  (defun show-status-message (msg &optional html)
    (let ((bar (! "statusBar" *main*)))
      (when (and html (not label))
        (! "addWidget" bar (setf label (qnew "QLabel" "wordWrap" t)) 1))
      (if html
          (! "setText" label msg)
          (! "showMessage" bar msg)))))

(defun read* (str &optional (start 0))
  (setf *try-read-error* nil)
  (let ((*package* #.(find-package :eql)))
    (multiple-value-bind (exp x)
        (ignore-errors (read-from-string (substitute +package-char-dummy+ #\: str)
                                         nil nil :start start :preserve-whitespace t))
      (unless exp
        (setf *try-read-error* (typecase x
                                 (end-of-file :end-of-file)
                                 (t t))))
      (values exp x))))

(defun end-position (expr)
  (multiple-value-bind (x end)
      (read* expr)
    (when (numberp end)
      end)))

(defun text-until-cursor (&optional text-cursor text-block)
  (unless text-cursor
    (setf text-cursor (! "textCursor" *current-editor*)))
  (unless text-block
    (setf text-block (! "block" text-cursor)))
  (subseq (! "text" text-block) 0 (- (! "position" text-cursor)
                                     (! "position" text-block))))

(defun insert-text (text &optional select)
  (let* ((text-cursor (! "textCursor" *current-editor*))
         (text-block (! "block" text-cursor))
         (text* (text-until-cursor text-cursor text-block))
         (p (position #\" text* :from-end t)))
    (when (and select
               (not (x:ends-with "\"" text*)))
      (! "movePosition" text-cursor |QTextCursor.Left| |QTextCursor.KeepAnchor| (1- (- (length text*) p))))
    (! "insertText" text-cursor text)
    (! "setTextCursor" *current-editor* text-cursor)))

(defun constructor-args (name)
  (sort (mapcar (lambda (el)
                  (subseq el (position #\( el)))
                (cdadar (qapropos* "constructor" name)))
        'string<))

(defun fun-args (fun)
  (subseq fun (1+ (position #\( fun)) (position #\) fun :from-end t)))

(defun call-candidates (name type &optional args (const t) static)
  (let ((types (case type
                 (:properties
                  '("Properties:"))
                 (:functions
                  (if static '("Methods:") '("Methods:" "Slots:" "Signals:")))
                 (:signals
                  '("Signals:"))
                 (:slots
                  '("Slots:"))
                 (:override
                  '("Override:"))))
        candidates)
    (do ((curr name (qsuper-class-name curr)))
        ((null curr))
      (let ((all (cdar (qapropos* nil curr))))
        (flet ((add (x)
                 (dolist (fun (rest (find x all :test 'string= :key 'first)))
                   (if (eql :properties type)
                       (when (or const (not (x:ends-with " const" fun)))
                         (let* ((start (1+ (position #\Space fun)))
                                (end (position #\Space fun :start start)))
                           (push (subseq fun start (if end end (length fun)))
                                 candidates)))
                       (let ((static* (x:ends-with "static" fun)))
                         (when (if args
                                   (x:starts-with (fun-args fun) args)
                                   (if static
                                       static*
                                       (and (not (or static*
                                                     (x:starts-with "constructor" fun))))))
                           (let ((fun* (subseq fun (1+ (position #\Space fun :end (position #\( fun) :from-end t)))))
                             (push (if static
                                       (subseq fun* 0 (- (length fun*) 7))
                                       fun*)
                                   candidates))))))))
          (dolist (x types)
            (add x)))))
    (remove-duplicates (sort candidates 'string<) :test 'string=)))

(defun cut-optional-type-list (fun-name)
  (flet ((arg-count (x)
           (if (x:ends-with "()" x)
               0
               (1+ (count #\, x)))))
    (let ((no-types (subseq fun-name 0 (position #\( fun-name)))
          (num-args* (arg-count fun-name)))
      (dolist (name (mapcar (lambda (item) (! "text" item))
                            (! "findItems" *eql-completer*
                               (format nil "~A(" no-types) (logior |Qt.MatchStartsWith| |Qt.MatchCaseSensitive|))))
        (when (string/= fun-name name)
          (let ((num-args (arg-count name)))
            (when (= num-args* num-args)
              (return-from cut-optional-type-list fun-name)))))
      no-types)))

(defun global-var-name-p (var)
  (when (symbolp var)
    (let ((name (symbol-name var)))
      (flet ((enclosed (ch)
               (and (x:starts-with ch name)
                    (x:ends-with ch name))))
        (or (enclosed "*")
            (enclosed "+"))))))

(let (qt-matches cache-matches)
  (flet ((qt-fun (pos)
           (cdr (assoc (- pos 2) qt-matches)))
         (qt-pos (fun)
           (car (find fun qt-matches :key 'cdr))))
    (defun highlight-block (highlighter text)
      (unless (x:empty-string text)
        (setf latest highlighter)
        (when cache-matches
          (setf qt-matches nil))
        (let ((i (! "indexIn" *lisp-match-rule* text)))
          (x:while (>= i 0)
            (let* ((len (! "matchedLength" *lisp-match-rule*))
                   (kw* (subseq text (1+ i) (+ i len)))
                   (kw (x:if-it (position #\: kw* :from-end t)
                           (subseq kw* (1+ x:it))
                           kw*)))
              (flet ((set-format (frm)
                       (! "setFormat(int,int,QTextCharFormat)" highlighter (1+ i) (1- len) frm)))
                (cond ((find kw *eql-keywords* :test 'string=)
                       (when cache-matches
                         (push (cons (+ i len) (intern (string-upcase kw) :keyword))
                               qt-matches))
                       (set-format *eql-keyword-format*))
                      ((gethash kw *lisp-keywords*)
                       (set-format *lisp-keyword-format*))))
              (setf i (! "indexIn" *lisp-match-rule* text (+ i len))))))
        (setf cache-matches nil)
        ;; comments, strings, parenthesis
        (flet ((set-color (pos len color)
                 (! "setFormat(int,int,QColor)" highlighter pos len color)))
          (let ((ex #\Space))
            (dotimes (i (length text))
              (let ((ch (char text i)))
                (unless (char= #\\ ex)
                  (case ch
                    ((#\( #\))
                     (set-color i 1 *parenthesis-color*))
                    (#\"
                     (x:when-it (end-position (subseq text i))
                       (set-color i x:it *string-color*)
                       (incf i (1- x:it))))
                    (#\;
                     (! "setFormat(int,int,QTextCharFormat)" highlighter i (- (length text) i) *comment-format*)
                     (return))))
                (setf ex ch)))))))
    (defun cursor-position-changed ()
      (setf *current-editor* (qsender))
      (setf cache-matches t)
      (when (and *extra-selections*
                 (not *keep-extra-selections*))
        (setf *extra-selections* nil
              *error-region* nil)
        (! "setExtraSelections" *current-editor* nil))
      (setf *current-depth*          0
            *current-keyword-indent* 0)
      (let* ((text-cursor (! "textCursor" *current-editor*))
             (text-block (! "block" text-cursor))
             (line (! "text" text-block))
             (pos (! "columnNumber" text-cursor)))
        (when (and (plusp (length line))
                   (< pos (length line))
                   (char= #\( (char line pos))
                   (or (zerop pos)
                       (char/= #\\ (char line (1- pos)))))
          (let ((pos* pos))
            (when (and (plusp pos)
                       (char= #\` (char line (1- pos)))) ; macros etc.
              (decf pos*))
            (show-matching-parenthesis text-cursor (subseq line pos*) :left pos*)))
        (unless (zerop pos)
          (let ((pos-char (char line (1- pos))))
            (if *current-completer*
                (if (char= #\Space pos-char)
                    (close-completer)
                    (x:when-it (position #\" line :end pos :from-end t)
                      (let* ((begin (subseq line (1+ x:it) pos))
                             (item (first (! "findItems" *eql-completer*
                                             begin (logior |Qt.MatchStartsWith| |Qt.MatchCaseSensitive|)))))
                        (if item
                            (set-current-item item begin)
                            (! "clearSelection" *eql-completer*)))))
                (let ((fun (qt-fun pos)))
                  (if (find fun '(:qnew :qnew* :qfun))
                      ;; show object name completer?
                      (when (char= #\" pos-char)
                        (completer (qobject-names) (if (find fun '(:qnew :qnew*)) :qnew :qfun-static))
                        (return-from cursor-position-changed))
                      (flet ((ending (start)
                               (if (< start pos)
                                   (subseq line start pos)
                                   ""))
                             (var (str &optional (n 1))
                               (let ((start 0)
                                     var)
                                 (dotimes (i n)
                                   (multiple-value-setq (var start)
                                     (read* str start)))
                                 var))
                             (type (var)
                               (let ((global (global-var-name-p var)))
                                 (find-in-source var
                                                 (current-source-code text-cursor (subseq line 0 pos) (when global :all))
                                                 global))))
                        (case pos-char
                          (#\(
                           (cond ((x:when-it (or (qt-pos :qnew)
                                                 (qt-pos :qnew*))
                                    ;; show QNEW constructor completer?
                                    (when (> pos x:it)
                                      (x:when-it* (position #\Q line :start x:it)
                                        (let ((qt-name (subseq line x:it* (1- pos))))
                                          (when (qid qt-name)
                                            (completer (constructor-args qt-name) :qnew-constructor)
                                            (return-from cursor-position-changed)))))))
                                 ((x:when-it (search " \"Q" line :test 'string= :end2 pos)
                                    ;; show QLET constructor completer?
                                    (let ((qt-name (read* (format nil "~A\"" (subseq line x:it (1- pos))))))
                                      (when (and (stringp qt-name)
                                                 (qid qt-name))
                                        (completer (constructor-args qt-name) :qnew-constructor)
                                        (return-from cursor-position-changed)))))))
                          (#\)
                           (show-matching-parenthesis text-cursor (subseq line 0 pos) :right))
                          (#\"
                           (let* ((qget (qt-pos :qget))
                                  (qset (unless qget (qt-pos :qset))))
                             (cond ((or qget qset)
                                    (let* ((ending (ending (or qget qset)))
                                           (var (var ending)))
                                      (when (= 1 (count #\" ending))
                                        ;; show QGET or QSET completer?
                                        (when var
                                          (let ((global (global-var-name-p var)))
                                            (x:when-it (type var)
                                              (completer (call-candidates x:it :properties nil qget) :qget)
                                              (return-from cursor-position-changed)))))))
                                   ((x:when-it (qt-pos :qfun)
                                      (let* ((ending (ending x:it))
                                             (var (var ending)))
                                        (case (count #\" ending)
                                          (1
                                           ;; show QFUN completer?
                                           (when var
                                             (let ((global (global-var-name-p var)))
                                               (x:when-it* (type var)
                                                 (completer (call-candidates x:it* :functions) :qfun)
                                                 (return-from cursor-position-changed)))))
                                          (3
                                           ;; show QFUN completer for static functions?
                                           (when (qid var)
                                             (completer (call-candidates var :functions nil t :static) :qfun)
                                             (return-from cursor-position-changed)))))))
                                   ((x:when-it (qt-pos :qconnect)
                                      (let ((ending (ending x:it)))
                                        (case (count #\" ending)
                                          (1
                                           ;; show QCONNECT-FROM completer?
                                           (let ((var (var ending)))
                                             (when var
                                               (let ((global (global-var-name-p var)))
                                                 (x:when-it* (type var)
                                                   (completer (call-candidates x:it* :signals) :qconnect-from)
                                                   (return-from cursor-position-changed))))))
                                          (3
                                           ;; show QCONNECT-TO completer?
                                           (let ((sig (var ending 2))
                                                 (var (var ending 3)))
                                             (when (and (stringp sig)
                                                        var)
                                               (let ((global (global-var-name-p var)))
                                                 (x:when-it* (type var)
                                                   (completer (call-candidates x:it* :slots (fun-args sig))
                                                              :qconnect-to)
                                                   (return-from cursor-position-changed))))))))))
                                   ((x:when-it (qt-pos :qoverride)
                                      ;; show QOVERRIDE completer?
                                      (let* ((ending (ending x:it))
                                             (var (var ending)))
                                        (when (and var (= 1 (count #\" ending)))
                                          (let ((global (global-var-name-p var)))
                                            (x:when-it* (type var)
                                              (completer (call-candidates x:it* :override) :qoverride)
                                              (return-from cursor-position-changed)))))))
                                   ((x:when-it (qt-pos :qfind-child)
                                      ;; show QFIND-CHILD completer?
                                      (let* ((ending (ending x:it))
                                             (var (var ending)))
                                        (when (= 1 (count #\" ending))
                                          (let* ((global (global-var-name-p var))
                                                 (exp (find-in-source var
                                                                      (current-source-code text-cursor (subseq line 0 pos) :all)
                                                                      global
                                                                      :exp))
                                                 (ui-name (ignore-errors
                                                            (eval (second (if global (third exp) exp))))))
                                            (x:when-it* (qui-names ui-name)
                                              (completer (sort x:it* 'string<) :qfind-child)
                                              (return-from cursor-position-changed)))))))
                                   (t
                                    ;; show QLET object name completer?
                                    (when (var-in-qlet-tree-p (current-source-code text-cursor (subseq line 0 pos)))
                                      (completer (qobject-names) :qnew)
                                      (return-from cursor-position-changed)))))))))))))))))

(defun insert-completer-option-text (&optional item)
  (! "resize" *eql-completer* '(0 0))
  (flet ((add-quote (x)
           (format nil "~A\"" x)))
    (x:when-it (current-completer-option)
      (case *current-completer*
        (:qnew
         (insert-text x:it :select))
        (:qnew-constructor
         (insert-text (add-quote (subseq x:it 1))))
        (:qfun
         (insert-text (add-quote (cut-optional-type-list x:it)) :select))
        ((:qget :qset :qfun-static :qfind-child :qconnect-from :qconnect-to :qoverride)
         (insert-text (add-quote x:it) :select)))))
  (close-completer))

(defun completer-key-pressed (key-event)
  (when *current-completer*
    (let ((forward t))
      (case (! "key" key-event)
        ((#.|Qt.Key_Up| #.|Qt.Key_Down| #.|Qt.Key_PageUp| #.|Qt.Key_PageDown| #.|Qt.Key_Home| #.|Qt.Key_End|)
         (setf forward nil))
        ((#.|Qt.Key_Return| #.|Qt.Key_Enter|)
         (insert-completer-option-text)
         (return-from completer-key-pressed))
        (#.|Qt.Key_Escape|
         (close-completer)
         (return-from completer-key-pressed)))
      (if forward
          (! "sendEvent" "QCoreApplication" *current-editor* key-event)
          (qcall-default)))))

(defun current-completer-option ()
  (! "text" (first (! "selectedItems" *eql-completer*))))

(let (cursor-pos height)
  (defun completer (options name)
    (setf *current-completer* name)
    (unless (null options)
      (x:do-with *eql-completer*
        ("clear")
        ("addItems" options)
        ("adjustSize"))
      (setf height (! "sizeHintForRow" *eql-completer* 0))
      (qset *eql-completer* "size"
            (list (+ 25 (* (min 80 (apply 'max (mapcar 'length options)))
                           (first (font-metrics-size))))
                  (+ 2 (* (min +max-shown-completions+ (length options)) height))))
      (set-current-item (! "item" *eql-completer* 0))
      (adjust-completer-pos :ini)
      (x:do-with *eql-completer* "show" "setFocus")))
  (defun adjust-completer-pos (&optional ini)
    (let* ((desktop (! ("availableGeometry" "desktop" "QApplication")))
           (cursor (if ini
                       (setf cursor-rect (! "cursorRect" *current-editor*))
                       cursor-rect))
           (pos (! (("mapToGlobal" (list (+ (first cursor) (third cursor))
                                         (+ (second cursor) (fourth cursor))))
                    "viewport" *current-editor*)))
           (size (! "size" *eql-completer*))
           (dx (- (+ (first pos) (first size))
                  (third desktop)))
           (dy (- (+ (second pos) (second size))
                  (fourth desktop))))
      (when (plusp dx)
        (decf (first pos) dx))
      (when (plusp dy)
        (decf (second pos) (+ (fourth cursor) (second size))))
      (qset *eql-completer* "pos" pos)))
  (defun set-current-item (item &optional begin)
    (when begin
      (do ((row (! "row" *eql-completer* item) (1+ row))
           (n-shown 0 (1+ n-shown)))
          ((or (= row (! "count" *eql-completer*))
               (= +max-shown-completions+ n-shown)
               (not (x:starts-with begin (! ("text" ("item" row) *eql-completer*)))))
           (! "resize" *eql-completer* (list (! "width" *eql-completer*)
                                             (+ 2 (* n-shown height))))
           (adjust-completer-pos))))
    (! "setSelected" item t)
    (x:do-with *eql-completer*
      ("scrollToItem" item |QAbstractItemView.PositionAtTop|)
      ("setCurrentItem" item))))

(defun close-completer (&optional event)
  (setf *current-completer* nil)
  (x:do-with *eql-completer* "hide" "clear")
  (! "setFocus" *current-editor*))

(defun current-source-code (text-cursor &optional curr-line all)
  (let ((lines (when curr-line (list curr-line))))
    (do ((n (- (! "blockNumber" text-cursor) (if curr-line 1 0)) (1- n)))
        ((minusp n))
      (let* ((text-block (! "findBlockByNumber" (document) n))
             (text (! "text" text-block)))
        (push text lines)
        (when (and (not all)
                   (x:starts-with "(" text))
          (return))))
    (push "(" lines)
    (code-tree (with-output-to-string (s)
                 (dolist (line lines)
                   (write-line line s))))))

(defun code-tree (str)
  (let ((tree (read* (x:cc (string-right-trim '(#\Newline #\Space #\") str)
                           #.(make-string 99 :initial-element #\))))))
    (do ((exp tree (first (last exp)))
         (depth -1 (1+ depth)))
        ((atom exp) (setf *cursor-code-depth* depth)))
    tree))

(defun find-in-source (var code &optional global exp)
  (let (found)
    (labels ((class-only (name)
               (x:if-it (position #\( name)
                   (subseq name 0 x:it)
                   name))
             (walk-tree (tree var depth)
               (when tree
                 (dolist (el tree)
                   (unless (atom el)
                     (if global
                         (when (and (find (first el) '(defconstant defparameter defvar))
                                    (eql var (second el)))
                           (case (first (third el))
                             ((qnew qnew*)
                              (return-from find-in-source
                                (class-only (second (third el)))))
                             (qload-ui
                              (return-from find-in-source
                                (if exp el (qui-class (eval (second (third el)))))))
                             (qfind-child
                              (return-from find-in-source
                                (qui-class (eval (second (third (find-in-source (second (third el)) code :global :exp))))
                                           (third (third el)))))))
                         (when (< depth *cursor-code-depth*)
                           (case (first el)
                             ((let let*)
                                (dolist (curr (second el))
                                  (unless (atom curr)
                                    (when (eql var (first curr))
                                      (case (first (second curr))
                                        ((qnew qnew*)
                                           (setf found (second (second curr))))
                                        (qfind-child
                                           (setf found (qui-class (eval (second (find-in-source (second (second curr)) code nil :exp)))
                                                                  (third (second curr))))))))))
                             (qlet
                                 (dolist (curr (second el))
                                   (when (eql var (first curr))
                                     (let ((name (second curr)))
                                       (setf found (subseq name 0 (position #\( name))))))))))
                     (walk-tree el var (1+ depth)))))))
      (walk-tree code var 1)
      (class-only found))))

(defun var-in-qlet-tree-p (code)
  (labels ((walk-tree (tree depth)
             (when tree
               (dolist (el tree)
                 (unless (atom el)
                   (when (and (eql 'qlet (first el))
                              (= 2 (- *cursor-code-depth* depth)))
                     (return-from var-in-qlet-tree-p t))
                   (walk-tree el (1+ depth)))))))
    (walk-tree code 1)))

;;; auto indent

(defun auto-indent-spaces (kw)
  (when (symbolp kw)
    (let ((name (symbol-name kw)))
      (x:when-it (position +package-char-dummy+ name :from-end t)
        (setf name (subseq name (1+ x:it))))
      (cdr (find name *auto-indent* :test 'string= :key 'car)))))

(defun cut-comment (line)
  (let ((ex #\Space))
    (dotimes (i (length line))
      (let ((ch (char line i)))
        (when (and (char= #\; ch)
                   (char/= #\\ ex))
          (return-from cut-comment (subseq line 0 i)))
        (setf ex ch))))
  line)

(defun last-expression-indent (line)
  (let* ((line* (string-right-trim " " (x:string-substitute "  " "\\(" (x:string-substitute "  " "\\)" (cut-comment line)))))
         (open  (position #\( line* :from-end t))
         (space (when open (position #\Space line* :start open)))
         (one   (and open (not space) (not (x:ends-with ")" line*)))))
    (if one
        (1+ open)
        (or (position #\Space (if space line* line) :test 'char/= :start (or space 0))
            0))))

(defun indentation (line)
  (if (x:empty-string (string-trim " " line))
      0
      (let ((pos-1 (position #\Space line :test 'char/=))
            (pos-x (last-expression-indent line)))
        (if (char= #\; (char line pos-1))
            pos-1
            (let ((spaces (+ *current-depth* *current-keyword-indent*)))
              (when (and (zerop spaces)
                         (not *extra-selections*)
                         pos-1)
                (setf spaces (if (and (char= #\( (char line pos-1))
                                      (find (read* (subseq line (1+ pos-1)))
                                            '(case ccase ecase defvar-ui defstruct let-it loop prog progn prog1 prog2
                                              typecase ctypecase etypecase unless when when-it when-it* while while-it)))
                                 (+ pos-1 2)
                                 pos-x)))
              spaces)))))

(defun no-string-parens (line)
  (let ((ex #\Space)
        in-string)
    (dotimes (i (length line))
      (let ((ch (char line i)))
        (case ch
          (#\"
           (unless (char= #\\ ex)
             (setf in-string (not in-string))))
          ((#\( #\))
           (when in-string
             (setf (char line i) #\Space))))
        (setf ex ch))))
  line)

(defun editor-key-pressed (key-event)
  (case (! "key" key-event)
    ((#.|Qt.Key_Return| #.|Qt.Key_Enter|)
     (if (or (and *file-popup* (qget *file-popup* "visible"))
             (qget *symbol-popup* "visible"))
         (insert-tab-completion)
         (let* ((cursor (! "textCursor" *editor*))
                (curr (! "block" cursor))
                (spaces (indentation (! "text" curr))))
           (if (zerop spaces)
               (qcall-default)
               (qlater (lambda ()
                         (! "insertText" cursor (format nil "~%~A" (make-string spaces)))
                         (! "ensureCursorVisible" *editor*)))))))
    (#.|Qt.Key_Tab|
     (if (zerop (! "modifiers" key-event))
         (update-tab-completer nil :show)
         ;; auto indent paragraph: current line -> next empty line
         (let ((cursor* (! "textCursor" *editor*)))
           (! "movePosition" cursor* |QTextCursor.StartOfLine| |QTextCursor.MoveAnchor|)
           (! "setTextCursor" *editor* cursor*)
           (let ((orig* (! "textCursor" *editor*)))
             (loop
               (let ((spaces 0))
                 (let ((cursor (! "textCursor" *editor*))  ; returns a copy
                       (orig   (! "textCursor" *editor*))) ; (see above)
                   (unless (zerop (! "blockNumber" cursor))
                     (! "movePosition" cursor |QTextCursor.PreviousBlock| |QTextCursor.MoveAnchor|)
                     (! "setTextCursor" *editor* cursor)
                     (let ((curr (! "block" cursor)))
                       (let ((line (no-string-parens (! "text" curr))))
                         (unless (or (x:empty-string line)
                                     (char= #\; (find #\Space line :test 'char/=)))
                           ;; apply right paren matcher (for indent info)
                           (do* ((i (1- (length line)) (1- i))
                                 (ch (char line i) (char line i)))
                               ((zerop i))
                             (when (char= #\) ch)
                               (show-matching-parenthesis cursor (subseq line 0 (1+ i)) :right)
                               (when *extra-selections*
                                 (return)))))
                         (setf spaces (indentation line)))))
                   (! "setTextCursor" *editor* orig)
                   ;; select current indent spaces (to be substituted)
                   (let* ((curr (! "block" orig))
                          (line (! "text" curr))
                          (pos (position #\Space line :test 'char/=)))
                     (when (x:empty-string (string-trim " " line))
                       (return))                                                                      ; exit 1
                     (when (not (zerop pos))
                       (x:do-with (! "movePosition" orig)
                         (|QTextCursor.StartOfLine| |QTextCursor.MoveAnchor|)
                         (|QTextCursor.NextCharacter| |QTextCursor.KeepAnchor| pos))))
                   (unless (zerop spaces)
                     (! "insertText" orig (make-string spaces)))))
               (unless (! "movePosition" cursor* |QTextCursor.NextBlock| |QTextCursor.MoveAnchor|)
                 (return))                                                                            ; exit 2
               (! "setTextCursor" *editor* cursor*))
             (x:do-with *editor*
               ("setTextCursor" orig*)
               ("ensureCursorVisible"))))))
    (t
     (update-tab-completer key-event)
     (qcall-default))))

;;; paren highlighting

(defun code-parens-only (code &optional right)
  "Substitute all non code related parenthesis with a space character."
  (let ((ex #\Space)
        (len (length code))
        comment in-string)
    (dotimes (i len)
      (let* ((i* (if right (- len i 1) i))
             (ch (char code i*)))
        (cond ((char= #\\ ex)
               (when (find ch "();\"")
                 (setf (char code i*) #\Space)))
              ((and (not in-string) (char= #\; ch))
               (setf comment t))
              ((char= #\Newline ch)
               (setf comment nil))
              ((char= #\" ch)
               (setf in-string (not in-string)))
              ((or comment in-string)
               (when (find ch "()")
                 (setf (char code i*) #\Space))))
        (setf ex ch))))
  code)

(defun paren-match-index (code &optional (n 0))
  (dotimes (i (length code))
    (let ((ch (char code i)))
      (case ch
        (#\( (incf n))
        (#\) (decf n))))
    (when (zerop n)
      (return-from paren-match-index i))))

(defun code-region (text-cursor curr-line &optional right)
  (let ((max (! "blockCount" (document))))
    (with-output-to-string (s)
      (write-line (if right (nreverse curr-line) curr-line) s)
      (do* ((n (! "blockNumber" text-cursor) (+ n (if right -1 1)))
            (text-block (! (if right "previous" "next") (! "block" text-cursor))
                        (! (if right "previous" "next") text-block ))
            (text (! "text" text-block) (! "text" text-block)))
           ((or (if right (zerop n) (= n max))
                (x:empty-string (string-trim '(" ") text))))
        (write-line (if right (nreverse text) text) s)))))

(defun left-right-paren (right text-cursor curr-line &optional pos)
  (let ((match-index (unless right (paren-match-index (code-parens-only (copy-seq curr-line))))))
    (if match-index
        (values 0 (+ (or pos 0) match-index))
        (progn
          (setf code (code-parens-only (code-region text-cursor curr-line right) right))
          (x:when-it (paren-match-index code)
            (let ((pos (1- (if right
                               (- (position #\Newline code :start x:it) x:it)
                               (- x:it (position #\Newline code :end x:it :from-end t))))))
              (when right
                (update-indentations code x:it pos))
              (values (count #\Newline code :end x:it) pos)))))))

(defun left-paren (text-cursor curr-line pos)
  (left-right-paren nil text-cursor curr-line pos))

(defun right-paren (text-cursor curr-line)
  (unless (x:ends-with "\\)" curr-line)
    (left-right-paren :right text-cursor curr-line)))

(defun update-indentations (code indent pos)
  (flet ((pos-newline (start)
           (when start
             (or (position #\Newline code :start start) (length code)))))
    (let* ((pos-keyword    (paren-match-index code -1))
           (pos-local      (paren-match-index code -3))
           (keyword-indent (x:when-it (pos-newline pos-keyword) (- x:it pos-keyword 1)))
           (auto-indent    (auto-indent-spaces (read* (reverse (subseq code 0 pos-keyword)))))
           (in-local       (find (read* (reverse (subseq code 0 pos-local))) '(flet labels macrolet)))
           (local-indent   (x:when-it (and in-local (pos-newline pos-local)) (- x:it pos-local 1))))
      (setf *current-depth*          (or local-indent (if auto-indent (or keyword-indent pos) pos))
            *current-keyword-indent* (if local-indent
                                         (+ 5 (length (symbol-name in-local)))
                                         (or auto-indent 0))))))

(let ((color (qnew "QBrush(QColor)" "#FFFF40"))
      (color-region (qnew "QBrush(QColor)" "#FFD0D0"))
      pos-open pos-close)
  (defun show-matching-parenthesis (text-cursor line type &optional pos)
    (multiple-value-bind (move-lines move-characters)
        (if (eql :left type)
            (left-paren text-cursor line pos)
            (right-paren text-cursor line))
      (when move-lines
        (qlet ((format "QTextCharFormat"))
          (let ((cursor1 (! "textCursor" *current-editor*))
                (cursor2 (! "textCursor" *current-editor*)))
            (! "setBackground" format (if *error-region* color-region color))
            (! "movePosition" cursor1  (if (eql :left type)
                                           |QTextCursor.NextCharacter|
                                           |QTextCursor.PreviousCharacter|)
               |QTextCursor.KeepAnchor|)
            (if (zerop move-lines)
                (! "movePosition" cursor2
                   |QTextCursor.StartOfLine|
                   (if *error-region* |QTextCursor.KeepAnchor| |QTextCursor.MoveAnchor|))
                (! "movePosition" cursor2
                   (if (eql :left type) |QTextCursor.NextBlock| |QTextCursor.PreviousBlock|)
                   (if *error-region* |QTextCursor.KeepAnchor| |QTextCursor.MoveAnchor|)
                   move-lines))
            (unless (zerop move-characters)
              (! "movePosition" cursor2
                 |QTextCursor.NextCharacter|
                 (if *error-region* |QTextCursor.KeepAnchor| |QTextCursor.MoveAnchor|)
                 move-characters))
            (unless *error-region*
              (! "movePosition" cursor2 |QTextCursor.NextCharacter| |QTextCursor.KeepAnchor|))
            (! "setExtraSelections" *current-editor* (list (list cursor1 format)
                                                           (list cursor2 format)))
            (when (qeql *editor* *current-editor*)
              (let ((p1 (! "position" cursor1))
                    (p2 (! "position" cursor2)))
                (setf pos-open (1- (min p1 p2))
                      pos-close (max p1 p2))
                (when (= p1 pos-close)
                  (incf pos-close))))
            (setf *extra-selections* t))))))
  (defun highlighted-parenthesis-text ()
    (setf *latest-eval-position* pos-open)
    (subseq (qget *editor* "plainText") pos-open pos-close))
  (defun copy/cut-highlighted-region (type)
    (when (and pos-open pos-close)
      (let ((cursor (! "textCursor" *editor*))
            (copy (eql :copy type)))
        (x:do-with cursor
          ("setPosition" pos-open)
          ("setPosition" pos-close |QTextCursor.KeepAnchor|))
        (! "setTextCursor" *editor* cursor)
        (when copy
          (dotimes (n #+darwin 25 #-darwin 1) ; hack
            (! "repaint" *editor*)
            (qprocess-events))
          (sleep 0.2))
        (! (if copy "copy" "cut") *editor*)
        (setf cursor (! "textCursor" *editor*))
        (! "setPosition" cursor pos-open)
        (! "setTextCursor" *editor* cursor)
        (qsingle-shot 100 (lambda () (! "setFocus" *editor*))))))) ; hack

(defun mark-error-region (file-pos)
  (when (string= *file-name* (file-namestring (car file-pos)))
    (let* ((text (qget *editor* "plainText"))
           (end (nth-value 1 (read* text (cdr file-pos))))
           (*keep-extra-selections* t)
           (text-cursor (! "textCursor" *editor*)))
      (! "moveCursor" *editor* |QTextCursor.Start|)
      (setf *error-region* t)
      (! "setPosition" text-cursor end)
      (x:do-with *editor*
        ("setTextCursor" text-cursor)
        ("ensureCursorVisible")))))

;;; external lisp process

(defun run-on-server (str &optional restart)
  (flet ((path-to-server (name)
           (x:when-it (probe-file (in-home "examples/9-simple-lisp-editor/" name))
             (namestring x:it))))
    (qprocess-events)
    (or (local-client:request str)
        (when (or restart
                  (= |QMessageBox.Yes|
                     (qlet ((msg "QMessageBox"))
                       (x:do-with msg
                         ("setText" (tr "<p>The <code><b style='color: blue'>local-server</b></code> seems not running.</p><p>Start it now?</p>"))
                         ("setStandardButtons" (logior |QMessageBox.Yes| |QMessageBox.No|))
                         ("setDefaultButton(QMessageBox::StandardButton)" |QMessageBox.No|)
                         ("exec")))))
          (! "startDetached" "QProcess" "eql" (list "-norc" (or (path-to-server "eql-local-server.fas")
                                                                (path-to-server "local-server.lisp"))))
          ;; wait max. 15 seconds
          (dotimes (i 150)
            (qprocess-events)
            (when (local-client:request str)
              (return-from run-on-server t))
            (sleep 0.1))
          nil))))

(defun restart-server ()
  (run-on-server "(eql:qq)" :restart)
  (qprocess-events)
  (sleep 1)
  (run-on-server ":reset" :restart))

(defun save-and-run ()
  (file-save)
  (run-on-server (format nil "(load ~S)" *file-name*)))

(defun eval-region ()
  (run-on-server (highlighted-parenthesis-text)))

(defun repeat-eval ()
  (when *latest-eval-position*
    (let ((text (qget *current-editor* "plainText")))
      (when (< *latest-eval-position* (length text))
        (let ((text* (subseq text *latest-eval-position*)))
          (x:when-it (end-position text*)
            (run-on-server (subseq text* 0 x:it))
            (return-from repeat-eval))))))
  (qmsg (tr "No valid latest region found.")))

(defun data-from-server (type str)
  (case type
    ((:expression :output :values :trace :error)
     (when (find type '(:trace :error))
       ;; fresh line
       (let ((nl (string #\Newline)))
         (unless (x:starts-with nl str)
           (let ((cur (! "textCursor" *output*)))
             (unless (zerop (! "columnNumber" cur))
               (! "insertPlainText" *output* nl))))))
     (x:do-with *output*
       ("moveCursor" |QTextCursor.End|)
       ("setTextColor" (case type
                         (:output "saddlebrown")
                         (:values "blue")
                         (:trace  "darkmagenta")
                         (:error  "red")
                         (t       "black")))
       ("insertPlainText" (if (eql :values type)
                              (x:string-substitute (string #\Newline) "#||#" str)
                              str)))
     (let ((vs (! "verticalScrollBar" *output*)))
       (qset vs "value" (! "maximum" vs))))
    (:file-position
     (mark-error-region (read-from-string str)))
    (:activate-editor
     (x:do-with *main* "activateWindow" "raise"))
    (:widget-selected
     (widget-selected str))))

;;; command line

(defun command ()
  (let ((text (string-trim '(#\Newline) (qget *command* "plainText"))))
    (when (run-on-server text)
      (history-add text))
    (! "clear" *command*)))

(defun saved-history ()
  (let ((ex "")
        history)
    (when (probe-file +history-file+)
      (with-open-file (s +history-file+ :direction :input)
        (x:while-it (read-line s nil nil)
          (unless (string= ex x:it)
            (push (setf ex x:it) history))))
      (setf history (nthcdr (max 0 (- (length history) +max-history+)) (reverse history)))
      (ignore-errors (delete-file +history-file+))
      (with-open-file (s +history-file+ :direction :output
                         :if-does-not-exist :create)
        (dolist (cmd history)
          (write-line cmd s)))
      (reverse history))))

(let ((up (saved-history))
      (out (open +history-file+ :direction :output
                 :if-exists :append :if-does-not-exist :create))
      down)
  (defun command-key-pressed (key-event)
    (x:if-it (case (! "key" key-event)
               (#.|Qt.Key_Up|
                (x:when-it (pop up)
                  (push x:it down)))
               (#.|Qt.Key_Down|
                (x:when-it (pop down)
                  (push x:it up)))
               (#.|Qt.Key_Tab|
                (update-tab-completer nil :show)
                (return-from command-key-pressed))
               ((#.|Qt.Key_Return| #.|Qt.Key_Enter|)
                (if (or (and *file-popup* (qget *file-popup* "visible"))
                        (qget *symbol-popup* "visible"))
                    (progn
                      (insert-tab-completion)
                      (return-from command-key-pressed))
                    (command))))
        (qset *command* "plainText" (first x:it))
        (update-tab-completer key-event))
    (qcall-default))
  (defun history-add (cmd)
    (when (or (not up)
              (and up (string/= cmd (first up))))
      (push cmd up)
      (princ cmd out)
      (terpri out)
      (when (and down (string= cmd (first down)))
        (pop down))))
  (defun history ()
    (append (reverse up) down)))

;;; symbol completer

(defun all-symbols (package-name)
  (let ((unique (make-hash-table))
        all)
    (dolist (pkg (list package-name :keyword))
      (let ((*package* (find-package pkg)))
        (do-symbols (sym)
          (unless (gethash sym unique)
            (setf (gethash sym unique) t)
            (let ((name (symbol-name sym)))
              (unless (char= #\% (char name 0)) ; exclude internally used symbols
                (push (if (and (x:starts-with "Q" name)
                               (find #\. name))
                          (write-to-string sym) ; preserve case (for Qt enums)
                          (write-to-string sym :case :downcase))
                      all)))))))
    (sort all 'string<)))

(defun function-lambda-list* (name)
  (let* ((symbol (intern (string-upcase name)))
         (args (or (get symbol :function-lambda-list)
                   (and (ignore-errors (symbol-function symbol))
                        (ignore-errors (ext:function-lambda-list symbol))))))
    (if args
        (let ((*package* (find-package (if (x:starts-with "q" name) :eql :sys)))) ; no package prefix with FORMAT ~S
          (format nil "<b>~A</b> ~(~S~)" name args))
        "")))

(let (name*)
  (defun update-completer-symbols (&optional (package-name :eql))
    (when (string/= package-name name*)
      (setf name* package-name)
      (! "setStringList" *symbol-model* (all-symbols package-name)))))

(defun in-string-p (line)
  (let ((ex #\Space)
        in-string)
    (x:do-string (ch line)
      (when (and (char= #\" ch)
                 (char/= #\\ ex))
        (setf in-string (not in-string)))
      (setf ex ch))
    in-string))

(let (prefix current completer file*)
  (defun update-tab-completer (key-event &optional show)
    (when (and (or (not key-event)
                   (not (= |Qt.Key_Escape| (! "key" key-event))))
               (or show
                   (and *file-popup* (qget *file-popup* "visible"))
                   (qget *symbol-popup* "visible")))
      (let* ((cursor (! "textCursor" *current-editor*))
             (text (x:cc (text-until-cursor cursor)
                         (if show "" (! "text" key-event))))
             (file (in-string-p text))
             (start (cond (file
                           (1+ (position #\" text :from-end t)))
                          ((x:empty-string text)
                           0)
                          ((x:ends-with " " text)
                           (length text))
                          (t
                           (let ((p1 (position-if (lambda (ch) (find ch ":*|")) text :from-end t))
                                 (p2 (position-if (lambda (ch) (find ch " '(")) text :from-end t)))
                             (unless (or p1 p2)
                               (return-from update-tab-completer))
                             (when (and p1
                                        (plusp p1)
                                        (char= #\: (char text p1))
                                        (char/= #\Space (char text (1- p1))))
                               (incf p1))
                             (if (and p1 p2)
                                 (max p1 (1+ p2))
                                 (or p1 (1+ p2))))))))
        (setf completer (if file (new-file-completer) *symbol-completer*))
        (when show
          (unless (qeql *current-editor* (! "widget" completer))
            (! "setWidget" completer *current-editor*)))
        (! "setCompletionPrefix" completer (setf prefix (subseq text start)))
        (when file
          (! "setRootPath" *file-model* prefix))
        (update-tab-completer-2 file))))
  (defun update-tab-completer-2 (&optional file) ; see "directoryLoaded(QString)" from file-model
    (! "complete" completer)
    (let ((popup (if file *file-popup* *symbol-popup*)))
      (! "resize" popup (list (! "width" *current-editor*)
                              (+ (* 2 (! "frameWidth" popup))
                                 (* (min (! "maxVisibleItems" completer)
                                         (! "completionCount" completer))
                                    (! "sizeHintForRow" popup 0)))))
      (dotimes (n 10) ; hack (pathname completer)  
        (qprocess-events))
      (! "setCurrentIndex" popup (! "indexAt" popup '(0 0)))))
  (defun item-highlighted (name &optional file)
    (setf current name
          file* file))
  (defun insert-tab-completion ()
    (when (and current
               (not (x:empty-string current)))
      (let ((txt (subseq current (length prefix))))
        (when file*
          (let* ((line (x:cc (text-until-cursor) txt))
                 (path (subseq line (1+ (position #\" line :from-end t)))))
            (qlet ((info "QFileInfo(QString)" path))
              (when (! "isDir" info)
                (setf txt (x:cc txt "/"))))))
        (! "insertPlainText" *current-editor* txt)))
    (unless file*
      (show-status-message (function-lambda-list* current) :html))
    (close-tab-popups))
  (defun close-tab-popups ()
    (! "hide" *symbol-popup*)
    (delete-file-completer)
    (setf current nil)
    (qlater (lambda () (! "setFocus" *current-editor*)))))

(defun insert-file ()
  (let ((file (! "getOpenFileName" "QFileDialog")))
    (unless (x:empty-string file)
      (! "insertText" (! "textCursor" *editor*) (read-file file :do-not-set)))))

;;; file completer

(defun new-file-completer ()
  (or *file-completer*
      (prog1
          (setf *file-completer* (qnew "QCompleter" "maxVisibleItems" 10))
        (setf *file-model* (qnew "QFileSystemModel"))
        (setf *file-popup* (! "popup" *file-completer*))
        (! "setWidget" *file-completer* *command*)
        (! "setModel" *file-completer* *file-model*)
        (qconnect *file-completer* "highlighted(QString)" (lambda (str) (item-highlighted str :file)))
        (qconnect *file-model* "directoryLoaded(QString)" (lambda (arg) (update-tab-completer-2 :file))))))

(defun delete-file-completer ()
  (when *file-completer*
    (qdisconnect *file-completer*)
    (qdisconnect *file-model*)
    (qdel *file-completer* :later)
    (qdel *file-model*     :later)
    (setf *file-completer* nil
          *file-popup*     nil)))

;;; find, replace

(defun find-text ()
  (unless (! "find" *editor* (! "text" *find*))
    (! "setFocus" *find*)
    (! "moveCursor" *editor* |QTextCursor.Start|)))

(defun replace-text ()
  (! "insertText" (! "textCursor" *editor*) (! "text" *replace*))
  (find-text))

;;; select

(defun widget-selected (str)
  (qset *sel-label* "text" str)
  (run-on-server "qsel:*q*"))

;;; debugger hook

(defun set-debugger-hook ()
  (setf *debugger-hook* (lambda (&rest args)
                          (when (= |QMessageBox.Save|
                                   (! "critical" "QMessageBox" nil "EQL"
                                      (tr "<p>Internal editor error, sorry.</p><p>Save changes?</p>")
                                      (logior |QMessageBox.Save| |QMessageBox.Discard|)))
                            (file-save))
                          ;; hide current popup to prevent possible freezing of mouse click events
                          (dolist (w (! "topLevelWidgets" "QApplication"))
                            (unless (qeql *main* w)
                              (! "hide" w))))))

;;; start

(defun start ()
  (ini)
  (let* ((args (remove-if (lambda (arg) (x:starts-with "-" arg))
                          (! "arguments" "QApplication")))
         (last-arg (first (last args))))
    (file-open (if (and (> (length args) 2)
                        (x:ends-with ".lisp" last-arg))
                   last-arg
                   (progn
                     (open "my.lisp" :if-does-not-exist :create)
                     "my.lisp"))))
  (let ((ini ".ini-eql-editor.lisp"))
    (when (probe-file ini)
      (load ini))))

;;; profile

#|
(require :profile)

(progn
  (use-package :profile)
  (profile:profile
   all-symbols
   update-completer-symbols
   highlight-block
   left-paren
   right-paren
   read*))
|#

(start)
