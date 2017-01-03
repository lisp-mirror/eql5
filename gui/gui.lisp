;;; copyright (c) Polos Ruetz

;; load all available modules for documentation purposes
(dolist (module (list :help :multimedia :network :sql :svg :webkit))
  (eql:qrequire module :quiet))

(defpackage :gui
  (:use :common-lisp :eql)
  (:export
   #:*q*
   #:*gui*
   #:*display*
   #:*edit*))

(provide :gui)

(in-package :gui)

(defconstant +history-file+ (in-home "gui/.command-history"))
(defconstant +max-history+  50)

(defparameter *   nil)
(defparameter **  nil)
(defparameter *** nil)
(defparameter *q* nil)

(defvar *gui* (qload-ui (in-home "gui/gui.ui")))

(defvar-ui *gui*
  *display*
  *edit*
  *help*
  *main-tab*
  *n-methods*
  *n-names*
  *n-override*
  *n-super-classes*
  *package-name*
  *properties*
  *primitives*
  *q-methods*
  *q-names*
  *q-override*
  *q-properties*
  *q-signals*
  *q-slots*
  *q-super-classes*
  *qt-tab*
  *search-class*
  *search-help*
  *select*
  *selected-widget*
  *tabs-non-qobjects*
  *tabs-qobjects*)

(defvar *code-font* (qnew "QFont(QString,int)"
                          #+darwin  "Monaco"      #+darwin  12
                          #+linux   "Monospace"   #+linux   9
                          #+windows "Courier New" #+windows 10))

(defvar *completer-list* (qnew "QStringListModel"))

(defun gui ()
  (qset *gui* "windowTitle" "EQL - Embedded Qt Lisp")
  (qset *select* "toolTip" (tr "Select any (child) widget (see qsel:*q*)"))
  (qset *help* "source" (! "fromLocalFile" "QUrl" (in-home "doc/auto-doc.htm")))
  (qset-color *help* |QPalette.Highlight|       "yellow")
  (qset-color *help* |QPalette.HighlightedText| "black")
  (set-tree *q-override*)
  (set-tree *q-signals*)
  (set-tree *q-slots*)
  (set-tree *q-methods* 3 nil nil (tr "Static"))
  (set-tree *q-properties* 3 nil nil (tr "Read Only"))
  (set-tree *n-methods* 3 nil (tr "Method") (tr "Static"))
  (set-tree *n-override*)
  (set-tree *primitives* 2 (tr "Qt/C++ type") (tr "Lisp example / type"))
  ;; please see example 9: editor.lisp for better completer examples
  (let ((cpl (qnew "QCompleter")))
    (dolist (w (list *display* *edit* *package-name* *selected-widget* *search-class* (! "popup" cpl)))
      (qset w "font" *code-font*))
    (! "setModel" cpl *completer-list*)
    (! "setCompleter" *edit* cpl))
  (let ((cpl (qnew "QCompleter(QStringList)" (qobject-names))))
    (! "setCompletionMode" cpl |QCompleter.InlineCompletion|)
    (! "setCaseSensitivity" cpl |Qt.CaseInsensitive|)
    (! "setCompleter" *search-class* cpl))
  (! "addItems" *q-names* (qobject-names :q))
  (! "addItems" *n-names* (qobject-names :n))
  (qconnect *q-super-classes* "linkActivated(QString)" 'change-class-q-object)
  (qconnect *n-super-classes* "linkActivated(QString)" 'change-class-n-object)
  (qconnect *q-names* "activated(QString)" 'change-q-object)
  (qconnect *n-names* "activated(QString)" 'change-n-object)
  (qconnect *edit* "returnPressed()" 'eval-edit)
  (qconnect *select* "clicked()" (lambda () (qselect 'widget-selected)))
  (qconnect *properties* "clicked()" 'show-properties-dialog)
  (qconnect *search-class* "returnPressed()" 'select-class)
  (qconnect *search-help* "textChanged(QString)" 'search-help)
  (qconnect *search-help* "returnPressed()" 'search-help)
  (qoverride *edit* "keyPressEvent(QKeyEvent*)" 'history-move)
  (change-class-q-object "QWidget" :super)
  (change-class-n-object "QMetaObject" :super)
  (populate-primitives)
  (qsingle-shot 500 'show-package-name)
  (x:do-with (qset *gui*)
    ("pos" (list 50 50))
    ("size" (list 700 500)))
  (! "setFocus" *edit*)
  (x:do-with *gui* "show" "raise"))

(defun search-help (&optional text)
  (flet ((move-start ()
           (! "moveCursor" *help* |QTextCursor.Start|)))
    (when text
      (move-start))
    (unless (! "find" *help* (! "text" *search-help*))
      (move-start))))

(defun saved-history ()
  (let ((ex "")
        history)
    (when (probe-file +history-file+)
      (with-open-file (s +history-file+ :direction :input)
        (x:while-it (read-line s nil nil)
          (unless (string= ex x:it)
            (push (setf ex x:it) history))))
      (setf history (nthcdr (max 0 (- (length history) +max-history+)) (reverse history)))
      (delete-file +history-file+)
      (with-open-file (s +history-file+ :direction :output :if-does-not-exist :create)
        (dolist (cmd history)
          (write-line cmd s)))
      (reverse history))))

(let ((up (saved-history))
      (out (open +history-file+ :direction :output :if-exists :append :if-does-not-exist :create))
      down)
  (defun history-move (ev)
    (x:when-it (case (! "key" ev)
                 (#.|Qt.Key_Up|
                    (x:when-it (pop up)
                      (push x:it down)))
                 (#.|Qt.Key_Down|
                    (x:when-it (pop down)
                      (push x:it up))))
      (qset *edit* "text" (first x:it)))
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

(defun set-tree (tree &optional (cols 2) lb1 lb2 lb3)
  (x:do-with (qset tree)
    ("alternatingRowColors" t)
    ("sortingEnabled" t)
    ("rootIsDecorated" nil))
  (let ((lbs (list (or lb1 (tr "Type"))
                   (or lb2 (tr "Name"))
                   lb3)))
    (x:do-with tree
      ("setHeaderLabels" (butlast lbs (- 3 cols)))
      ("sortByColumn" (if (> cols 1) 1 0) |Qt.AscendingOrder|))
    (qconnect tree "itemDoubleClicked(QTreeWidgetItem*,int)" 'add-to-edit)))

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|)))
  (defun select-mode ()
    (set-listen t)
    (! "setOverrideCursor" "QGuiApplication" cross-cursor)))

(defun select-class ()
  (flet ((set-tab-index (i)
           (! "setCurrentIndex" *qt-tab* i)))
    (let ((name (! "text" *search-class*)))
      (cond ((find name (qobject-names :q) :test 'string=)
             (set-tab-index 0)
             (change-class-q-object name :super))
            ((find name (qobject-names :n) :test 'string=)
             (set-tab-index 1)
             (change-class-n-object name :super))))))

(defun change-class-q-object (s &optional super)
  (let ((i (! "findText" *q-names* s)))
    (if (= -1 i)
        (qmsg (tr "Sorry, class not found."))
        (progn
          (! "setCurrentIndex" *q-names* i)
          (change-q-object nil super)))))

(defun change-class-n-object (s &optional super)
  (! "setCurrentIndex" *n-names* (! "findText" *n-names* s))
  (change-n-object nil super))

(defun change-q-object (&optional s (super t))
  (populate-objects :q)
  (when super
    (show-super-classes :q)))

(defun change-n-object (&optional s (super t))
  (populate-objects :n)
  (when super
    (show-super-classes :n)))

(defun populate-objects (type)
  (let* ((class (qget (if (eql :q type) *q-names* *n-names*) "currentText"))
         (info (qapropos* nil class type))
         (all (rest (first info)))
         (tabs (if (eql :q type) *tabs-qobjects* *tabs-non-qobjects*))
         (i-tab -1))
    (flet ((sub (name)
             (rest (find name all :key 'first :test 'string=))))
      (mapc (lambda (name tree)
              (incf i-tab)
              (! "clear" tree)
              (dolist (curr (sub name))
                (let* ((curr* (x:string-substitute "const_" "const " curr))
                       (item (qnew "QTreeWidgetItem"))
                       (sp1 (position #\Space curr*))
                       (sp2 (when sp1 (position #\Space curr* :start (1+ sp1)))))
                  (! "setTextAlignment" item 0 (logior |Qt.AlignRight| |Qt.AlignVCenter|))
                  (when sp1
                    (! "setText" item 0 (subseq curr 0 sp1)))
                  (! "setText" item 1 (x:cc (if (string= "constructor" (! "text" item 0)) ": " "")
                                            (if sp1 (subseq curr (1+ sp1) sp2) curr)))
                  (when sp2
                    (! "setText" item 2 (subseq curr (1+ sp2))))
                  (! "addTopLevelItem" tree item)))
              (resize-tree tree)
              (! "sortByColumn" tree 1 |Qt.AscendingOrder|)
              (! "setTabEnabled" tabs i-tab (not (zerop (! "topLevelItemCount" tree)))))
            (if (eql :q type)
                (list "Properties:" "Methods:" "Slots:" "Signals:")
                (list "Methods:"))
            (if (eql :q type)
                (list *q-properties* *q-methods* *q-slots* *q-signals*)
                (list *n-methods*)))
      (incf i-tab)
      (let ((override (if (eql :q type) *q-override* *n-override*)))
        (! "clear" override)
        (dolist (curr (sub "Override:"))
          (let ((item  (qnew "QTreeWidgetItem"))
                (sp (position #\Space curr :start (if (x:starts-with "const" curr) 6 0))))
            (x:do-with item
              ("setTextAlignment" 0 (logior |Qt.AlignRight| |Qt.AlignVCenter|))
              ("setText" 0 (subseq curr 0 sp))
              ("setText" 1 (subseq curr (1+ sp))))
            (! "addTopLevelItem" override item)))
        (! "sortByColumn" override 1 |Qt.AscendingOrder|)
        (! "setTabEnabled" tabs i-tab (not (zerop (! "topLevelItemCount" override))))))
    (when (null info)
      (qmsg "<html>Class currently not available (see EQL modules and <b><code>qrequire</code></b>)."))))

(defun populate-primitives ()
  (dolist (type (list (cons "QByteArray"           "(vector -50 0 50) ; convenient for binary data exchange Lisp <-> C++")
                      (cons "QChar"                "#\\a")
                      (cons "QColor"               "(or \"#FF0000\" \"green\" (qnew \"QColor(QString)\" \"blue\"))")
                      (cons "QGradientStop"        "(cons 0 color)")
                      (cons "QLine / QLineF"       "(list x1 y1 x2 y2)")
                      (cons "QPoint / QPointF"     "(list x y)")
                      (cons "QPolygon / QPolygonF" "(list x1 y1 x2 y2 x3 y3 ...)")
                      (cons "QRect / QRectF"       "(list x y width height)")
                      (cons "QRgb"                 "(qrgb r g b &optional a)")
                      (cons "QSize / QSizeF"       "(list width height)")
                      (cons "QString"              "\"a Unicode string\"")
                      (cons "QStringList"          "(list \"one\" \"two\" \"three\")")
                      (cons "GLint"                "<integer>")
                      (cons "GLuint"               "<unsigned integer>")
                      (cons "GLenum"               "<unsigned integer>")
                      (cons "GLfloat"              "<single float>")))
    (let ((item (qnew "QTreeWidgetItem")))
      (x:do-with item
        ("setText" 0 (car type))
        ("setText" 1 (cdr type)))
      (! "addTopLevelItem" *primitives* item)))
  (x:do-with *primitives*
    ("resizeColumnToContents" 0)
    ("sortByColumn" 0 |Qt.AscendingOrder|)))

(defun show-super-classes (type)
  (qset (if (eql :q type) *q-super-classes* *n-super-classes*) "text"
        (with-output-to-string (s)
          (do ((super (qget (if (eql :q type) *q-names* *n-names*) "currentText")
                      (qsuper-class-name super)))
              ((null super))
            (format s "<a href='~A'>~A</a>&nbsp;&nbsp;" super super)))))

(defun resize-tree (tree)
  (dotimes (i (! "columnCount" tree))
    (! "resizeColumnToContents" tree i)))

(defun add-to-edit (item col)
  (let ((txt (prin1-to-string (! "text" item
                                 (min 1 (1- (! ("columnCount" "treeWidget" item))))))))
    (! (("setText" txt) "clipboard" "QApplication"))
    (let ((curr (qget *edit* "text")))
      (when (and (x:starts-with "(" curr)
                 (not (x:ends-with "\"" curr)))
        (! "setText" *edit* (x:cc (qget *edit* "text") txt)))))
  (! "setFocus" *edit*))

(defun display (x &optional color)
  (when color
    (! "insertHtml" *display* (format nil "<font color=~A>&nbsp;" color)))
  (let ((1st t))
    (dolist (val (x:ensure-list x))
      (! "insertPlainText" *display*
         (format nil "~A~A~%" (if 1st (progn (setf 1st nil) "") " ") val))))
  (when color
    (! "insertHtml" *display* "<br></font>"))
  (let ((vs (! "verticalScrollBar" *display*)))
    (qset vs "value" (qget vs "maximum")))
  (show-package-name))

(defun show-error (err color)
  (let ((e1 (prin1-to-string err))
        (e2 (princ-to-string err)))
    (display e1 color)
    (unless (string= e1 e2)
      (display e2 color)))
  nil)

(defun all-symbols ()
  (let (all)
    (do-symbols (s)
      (let ((name (symbol-name s)))
        (push (x:cc (if (or (ignore-errors (symbol-function s))
                            (macro-function s))
                        "("
                        "")
                    (if (some 'lower-case-p name)
                        (format nil "|~A|" name)
                        (string-downcase name)))
              all)))
    (sort all 'string<)))

(let (package)
  (defun show-package-name ()
    (unless package
      (in-package :eql-user))
    (let ((name (package-name *package*)))
      (qset *package-name* "text" (format nil "~A>" name))
      (when (string/= name package)
        (let ((*standard-output* nil)) ; suppress output to console (slow on Windows)
          (! "setStringList" *completer-list* (all-symbols)))
        (setf package name)))))

(defun eval-edit ()
  (let ((color "darkorange"))
    (handler-case
        (let ((txt (string-trim " " (qget *edit* "text"))))
          (unless (x:empty-string txt)
            (display (format nil "~A> ~A" (package-name *package*) txt))
            (let ((exp (read-from-string txt)))
              (setf color "red")
              (let ((vals (multiple-value-list (eval exp))))
                (setf *** ** ** * * (first vals))
                (display (mapcar 'prin1-to-string vals) "blue")
                (history-add txt)
                (! "clear" *edit*)))))
      (error (err)
        (show-error err color)))))

(defun focus-me ()
  (x:do-with *gui* "activateWindow" "raise")
  (! "setFocus" *edit*))

(defun widget-selected (widget)
  (setf *q* widget)
  (! "setText" *selected-widget* (prin1-to-string *q*))
  (! "setEnabled" *properties* t)
  (change-class-q-object (qt-object-name *q*) :super)
  (focus-me))

(defun show-properties-dialog ()
  (unless (find-package :properties)
    (load (in-home "gui/properties")))
  (funcall (find-symbol "SHOW" :properties) *q*))

(gui)

;;; profile

#|
(require :profile)

(progn
  (use-package :profile)
  (profile:profile
   qfun
   qset
   qget))
|#
