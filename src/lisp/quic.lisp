;;; copyright (c) Polos Ruetz
;;;
;;; user interface compiler

(defpackage :quic
  (:use :common-lisp :eql)
  (:export
   #:run))

(in-package :quic)

(defvar *defvars*)
(defvar *qlets*)
(defvar *lets-ini*)
(defvar *lets-tr*)
(defvar *main-var*)
(defvar *main-class*)
(defvar *classes*)
(defvar *line-nr*)
(defvar *section*)

(defmacro with-setq-reset ((&rest vars) &body body)
  (let ((set-nil (mapcar (lambda (x) (list 'setq x nil)) vars)))
    `(progn
       ,@set-nil
       ,@body
       ,@set-nil)))

(defun load-ui-related-qt-modules ()
  (dolist (module (list :help :svg :webkit))
    (eql:qrequire module :quiet)))

(defun run (&optional (ui.h "ui.h") (ui.lisp "ui.lisp") (ui-package :ui) properties)
  (load-ui-related-qt-modules)
  (with-setq-reset (*defvars* *qlets* *lets-ini* *lets-tr* *main-var* *main-class* *classes* *line-nr* *section*)
    (setf *defvars* (make-hash-table :test 'equal)
          *classes* (make-hash-table :test 'equal)
          *line-nr* 0)
    (with-open-file (in ui.h :direction :input)
      (with-open-file (out ui.lisp :direction :output :if-exists :supersede)
        (format out ";;; THIS FILE IS GENERATED (see 'eql5 -quic')~
                   ~%~
                   ~%(defpackage ~(~S~)~%  (:use :common-lisp :eql)"
                ui-package)
        (let (code tr)
          (x:while-it (read-line in nil nil)
            (setf x:it (x:string-substitute "" "QStringLiteral" x:it))
            (incf *line-nr*)
            (x:when-it* (c-to-lisp x:it)
              (if (eql :tr *section*)
                  (push x:it* tr)
                  (push x:it* code))))
          (let ((max-len 0))
            (format out "~%  (:export~%   ;; all DEFVARs except layouts, spacers~{~%   #:~A~}~
                         ~%   #:ini~
                         ~%   #:retranslate-ui))~
                         ~%~
                         ~%(in-package ~(~S~))~
                         ~%~
                         ~%(defvar ~A)~A (main widget)~
                         ~{~%(defvar ~{~A)~A~}~}~
                         ~%~
                         ~%(defun ini ()~
                         ~%  (qlet (~{~A~^ ~})~
                         ~%    (let (~{~A~^ ~})~
                         ~%      (setf ~A (qnew ~S))"
                    (let (export)
                      (maphash (lambda (var x)
                                 (setf max-len (max (length var) max-len))
                                 (when (notany (lambda (skip) (search skip (gethash var *classes*))) '("Layout" "Spacer"))
                                   (push (var-name var) export)))
                               *defvars*)
                      (sort export 'string<))
                    ui-package
                    (var-name *main-var*)
                    (format nil "~A ; ~A" (make-string (- max-len (length *main-var*))) *main-class*)
                    (let (defvars)
                      (maphash (lambda (var x)
                                 (unless (string= *main-var* var)
                                   (push (list (var-name var) (format nil "~A ; ~A"
                                                                      (make-string (- max-len (length var)))
                                                                      (gethash var *classes*)))
                                         defvars)))
                               *defvars*)
                      (sort defvars 'string< :key 'first))
                    (mapcar 'var-name (reverse *qlets*))
                    (mapcar 'var-name (reverse *lets-ini*))
                    (var-name *main-var*)
                    *main-class*))
          (dolist (line (nreverse code))
            (write-string line out))
          (format out "~%      (retranslate-ui)~
                       ~%      (qfun ~A ~S))))~
                       ~%~
                       ~%(defun retranslate-ui ()~
                       ~%  (let (~{~A~^ ~})"
                  (var-name *main-var*)
                  (if (find :maximized properties) "showMaximized" "show")
                  (mapcar 'var-name (reverse *lets-tr*)))
          (dolist (line (nreverse tr))
            (write-string line out))
          (format out "))~%~%(ini)~%"))))))

(defun trim (string)
  (string-trim " .;*" string))

(defun find* (x list)
  (find x list :test 'string=))

(defun remove-parens (list)
  (remove ")" list :test 'string=))

(defun from-qt-utf8 (string)
  (let ((vector (make-array 0 :adjustable t :fill-pointer t)))
    (flet ((push* (x)
             (vector-push-extend (if (characterp x) (char-code x) x) vector)))
      (dotimes (i (length string))
        (let ((ch (char string i)))
          (if (char= #\\ ch)
              (if (find (char string (1+ i)) '(#\" #\\))
                  (push* ch)
                  (progn
                    (push* (parse-integer (subseq string (1+ i) (+ 4 i)) :radix 8))
                    (incf i 3)))
              (push* ch)))))
    (qfrom-utf8 vector)))

(defun var-name (name)
  (let ((name* (trim name)))
    (flet ((find-in (var)
             (find* name* var)))
      (let* ((local  (or (find-in *qlets*)
                         (find-in *lets-ini*)
                         (find-in *lets-tr*)))
             (global (and (not local)
                          (gethash name* *defvars*))))
        (when global
          (setf name* (format nil "*~A*" name*)))
        (if (or global local)
            (string-downcase (substitute #\- #\_ name*))
            name*)))))

(defun constructor-arg (class)
  (dolist (arg '("(QWidget*)"
                 "(QObject*)"
                 "(QListWidget*)"
                 "(QColor)"
                 "(QSizePolicy::Policy,QSizePolicy::Policy)"
                 "(int,int,QSizePolicy::Policy,QSizePolicy::Policy)"))
    (when (find arg (cadar (qapropos* "constructor" class)) :test 'x:ends-with)
      (return arg))))

(defun find-qt-method (var name)
  (let ((class (gethash var *classes*))
        (name* (format nil " ~A(" name)))
    (loop
      (unless class
        (return))
      (x:when-it (qapropos* name* class)
        ;; resolve ambiguous
        (let ((name** (assoc name '(("addAction" . "addAction(QAction*)"))
                             :test 'string=)))
          (return-from find-qt-method (prin1-to-string (if name** (cdr name**) name)))))
      (setf class (qsuper-class-name class)))))

(defun prepare-args (args)
  (remove-if (lambda (x) (search "static_cast<" x))
             (cond ((and (string= "QColor" (first args)) (find (length args) '(4 5)))
                    (list (format nil "(qfun \"QColor\" \"fromRgb\"~{ ~A~})" (rest args))))
                   (t
                    (let ((args* (copy-list args))
                          variant variant-type cursor url)
                      (dotimes (i (length args))
                        (x:when-it (and (string= "(qfun" (nth i args))
                                        (find-qt-method (nth (1+ i) args) (nth (+ i 2) args)))
                          (setf (nth (+ i 2) args*) x:it)))
                      (mapcar (lambda (arg)
                                (cond (variant
                                       (setf variant nil)
                                       (if (char= #\Q (char arg 0))
                                           (progn
                                             (setf variant-type arg)
                                             "")
                                           (let ((type (cond ((find* arg '("t" "nil"))
                                                              "bool")
                                                             (t (error "QVariant type not implemented for: ~A" arg)))))
                                             (format nil "(qnew \"QVariant(~A)\" ~A)" type arg))))
                                      (variant-type
                                       (prog1
                                           (format nil "(qnew \"QVariant(~A)\" ~A)"
                                                   variant-type
                                                   (cond ((string= "QChar" variant-type)
                                                          (prin1-to-string (code-char (parse-integer arg))))
                                                         ((string= "QCursor" variant-type)
                                                          (format nil "(qnew \"QCursor(Qt::CursorShape)\" ~A)" arg))
                                                         (t
                                                          (prin1-to-string arg))))
                                         (setf variant-type nil)))
                                      (cursor
                                        (setf cursor nil)
                                        (format nil "(qnew \"QCursor(Qt::CursorShape)\" ~A)" arg))
                                      (url
                                        (setf url nil)
                                        (format nil "(qnew \"QUrl(QString)\" ~A)" arg))
                                      ((string= "QVariant" arg)
                                       (setf variant t)
                                       "")
                                      ((string= "QCursor" arg)
                                       (setf cursor t)
                                       "")
                                      ((string= "QUrl" arg)
                                       (setf url t)
                                       "")
                                      ((> (count #\| arg) 2)
                                       (format nil "(logior |~A|)" (string-trim " |" (string-substitute "| |" "|" arg))))
                                      (t
                                       (if (string= "QString" arg)
                                           "\"\""
                                           (var-name arg)))))
                              args*))))))

(defun split (line)
  (let ((ex-char #\?)
        list in-string arg)
    (flet ((add-arg ()
             (when arg
               (push (coerce (nreverse arg) 'string) list)
               (setf arg nil))))
      (x:do-string (char line)
        (if (and (not in-string)
                 (char= #\Space char))
            (add-arg)
            (progn
              (push char arg)
              (when (and (char= #\" char)
                         (char/= #\\ ex-char))
                (when in-string
                  (add-arg))
                (setf in-string (not in-string)))))
        (setf ex-char char))
      (add-arg))
    (nreverse list)))

(defun string-substitute (new old str)
  (let ((l (length old)))
    (with-output-to-string (s)
      (do ((e (search old str) (search old str :start2 (+ e l)))
           (b 0 (+ e l)))
          ((not e) (write-string (subseq str b) s))
        (write-string (subseq str b e) s)
        (write-string (if (evenp (count #\" (subseq str e))) ; exclude strings
                          new
                          old)
                      s)))))

(defun string-substitute* (new-old str)
  (let ((str* (copy-seq str)))
    (do ((n-o new-old (cddr n-o)))
        ((null n-o) str*)
      (setf str* (string-substitute (first n-o) (second n-o) str*)))))

(defun no (no line)
  (if (stringp no)
      (string-substitute " " no line)
      (let (line* in-string)
        (x:do-string (ch line)
          (push (if (and (not in-string)
                         (char= no ch))
                    #\Space
                    ch)
                line*)
          (when (char= #\" ch)
            (setf in-string (not in-string))))
        (coerce (nreverse line*) 'string))))

(defun insert-tr (line string-lines-pos)
  (let* ((pos       (position-if (lambda (x) (search ".translate" x)) line))
         (tr-string (if pos (nth (+ 2 pos) line) "\"\""))
         (shortcut  (if pos (string= "setShortcut" (nth (1- pos) line))))
         line*)
    (if pos
        (let ((start (eql :start string-lines-pos)))
          (dotimes (n (length line))
            (cond ((= n pos)
                   (push (format nil "~A(tr ~A~A"
                                 (if shortcut "(qnew \"QKeySequence\" " "")
                                 (from-qt-utf8 (if start (string-right-trim "\"\\n" tr-string) tr-string))
                                 (if start "" (if shortcut "))" ")")))
                         line*))
                  ((or (< n pos)
                       (> n (+ 4 pos)))
                   (push (nth n line) line*))))
          (nreverse line*))
        line)))

(defun join-args (args)
  (with-output-to-string (s)
    (dolist (arg args)
      (unless (x:empty-string arg)
        (unless (string= ")" arg)
          (write-char #\Space s))
        (write-string arg s)))))

(let (string-lines-pos)
  (defun qt-to-eql (qt-line &optional tr)
    (flet ((to-list (line)
             (remove-if (lambda (x) (find x '("QSize" "QRect" "QString::fromUtf8")
                                          :test 'string=))
                        (split line)))
           (show-warning (line)
             (format *debug-io* "~%Not implemented, see line ~D of \"ui.h\":~%~%[Qt] ~A~%[??] ~S~%" *line-nr* qt-line line)
             (format nil "~%;;[?] ~A" qt-line)))
      ;; special cases first
      (cond ((string= ");" qt-line)
             ;; end string-list
             (format nil "~%~A    ))" (if tr "" "  ")))
            ((x:starts-with "QObject::connect" qt-line)
             ;; qconnect
             (let ((line (mapcar (lambda (x) (string-trim " " x)) (x:split qt-line #\,))))
               (format nil "~%~A    (qconnect ~A \"~A\" ~A \"~A\")"
                       (if tr "" "  ")
                       (var-name (subseq (first line) 17))
                       (subseq (second line) 7 (- (length (second line)) 1))
                       (var-name (third line))
                       (subseq (fourth line) 5 (- (length (fourth line)) 3)))))
            (t
             ;; multiple line strings
             (let ((string-start (and tr (x:starts-with "\"" qt-line)))
                   (string-end   (and tr (x:ends-with   "\"" qt-line))))
               (setf string-lines-pos (if tr
                                          (cond ((and string-start string-end)
                                                 :mid)
                                                (string-start
                                                 :end)
                                                (string-end
                                                 :start))
                                          nil)))
             (case string-lines-pos
               (:mid
                (format nil "~A~%" (from-qt-utf8 (string-trim "\"\\n" (subseq qt-line 0 (position #\" qt-line :from-end t))))))
               (:end
                (format nil "~A))" (from-qt-utf8 (subseq qt-line 1 (1+ (position #\" qt-line :from-end t))))))
               (t
                (let* ((line (trim (no #\, (string-substitute* '("()->"  "()."
                                                                 "->set" ".set"
                                                                 " "     "("
                                                                 " ) "   ")")
                                                               qt-line))))
                       (type (cond ((qid (subseq line 0 (position #\Space line)))
                                    :new-local)
                                   ((search "= new" line)
                                    :new)
                                   ((x:starts-with "new " line)
                                    :new-item)
                                   ((search "->" line)
                                    :fun))))
                  (setf line (to-list (string-substitute* '(" (qfun " "->"
                                                            " (setf " "=")
                                                          (no "new " line))))
                  (when (and (string= "const" (first  line))
                             (string= "bool"  (second line)))
                    (setf line (nthcdr 1 line)
                          type :new-local))
                  (when (eql :new type)
                    (let ((name (first line)))
                      (setf (gethash name *defvars*) t
                            (gethash name *classes*) (third line))))
                  (dotimes (n (length line))
                    (when (find* (nth n line) '("(qfun" "(setf"))
                      (rotatef (nth (1- n) line) (nth n line))))
                  (when (eql :new-local type)
                    (if (find* "(setf" line)
                        (let ((name (trim (third line))))
                          (setf (gethash name *classes*) (first line))
                          (setf line (rest line))
                          (if tr
                              (push name *lets-tr*)
                              (push name *lets-ini*)))
                        (let ((name (trim (second line))))
                          (push name *qlets*)
                          (setf (gethash name *classes*) (first line))
                          (rotatef (nth 0 line) (nth 1 line))
                          (setf line (cons "(setf" line)))))
                  (when (search "::" (first line))
                    (setf type :fun-static))
                  (dotimes (n (- (length line) 3))
                    (let ((arg (nth (+ 3 n) line)))
                      (setf (nth (+ 3 n) line)
                            (cond ((search "::" arg)
                                   (format nil "|~A|" (string-substitute "." "::" arg)))
                                  ((string= "true" arg)
                                   "t")
                                  ((string= "false" arg)
                                   "nil")
                                  (t
                                   arg)))))
                  (unless (eql :fun type)
                    (setf line (remove-parens line)))
                  (cond ((x:starts-with "<< QApplication::translate" qt-line)
                         ;; single string of string-list
                         (format nil "~%~A      (tr ~A)"
                                 (if tr "" "  ")
                                 (fourth line)))
                        ((find type '(:new :new-local))
                         ;; qnew
                         (if (find* "(qfun" line)
                             (format nil "~%~A    ~A ~A~{ ~A~}))"
                                     (if tr "" "  ")
                                     (first line)
                                     (var-name (second line))
                                     (prepare-args (nthcdr 2 line)))
                             (format nil "~%~A    ~A ~A (qnew \"~A~A\"~{ ~A~}))"
                                     (if tr "" "  ")
                                     (first line)
                                     (var-name (second line))
                                     (third line)
                                     (if (fourth line) (constructor-arg (third line)) "")
                                     (prepare-args (nthcdr 3 line)))))
                        ((eql :new-item type)
                         ;; qnew item
                         (format nil "~%~A    (qnew \"~A~A\"~{ ~A~})"
                                 (if tr "" "  ")
                                 (first line)
                                 (if (second line) (constructor-arg (first line)) "")
                                 (prepare-args (rest line))))
                        ((eql :fun-static type)
                         ;; static function
                         (let ((p (search "::" (first line))))
                           (format nil "~%~A    (qfun \"~A\" \"~A\"~{ ~A~})"
                                   (if tr "" "  ")
                                   (subseq (first line) 0 p)
                                   (subseq (first line) (+ 2 p))
                                   (prepare-args (nthcdr (if (eql :fun type) 2 1) line)))))
                        ((eql :fun type)
                         (unless (find* "(qfun" (rest line))
                           (setf line (remove-parens line)))
                         (when tr
                           (setf line (insert-tr line string-lines-pos)))
                         (x:when-it (position ")" line :test 'string=)
                           (when (string= "(qfun" (nth (1- x:it) line))
                             ;; special case: adjust "qfun" position
                             (rotatef (nth (- x:it 1) line)
                                      (nth (- x:it 2) line)
                                      (nth (- x:it 3) line))
                             ;; add quotes to method name
                             (setf (nth (1+ x:it) line) (prin1-to-string (nth (1+ x:it) line)))))
                         (let* ((string-list-p (x:ends-with "QStringList()" qt-line))
                                (fun (format nil "~%~A   ~A~A"
                                             (if tr "" "  ")
                                             (join-args (let ((args (prepare-args line)))
                                                          (if string-list-p
                                                              (append (nbutlast args 1) (list "(list")) ; start string-list
                                                              args)))
                                             (make-string (if (find "(tr " line :test 'x:starts-with)
                                                              (if (eql :start string-lines-pos) 0 1)
                                                              (- (count "(qfun" line :test 'string=) (if string-list-p 1 0)))
                                                          :initial-element #\) ))))
                           (if (or string-list-p string-lines-pos)
                               fun
                               (multiple-value-bind (x end) ; ensure balanced closing parenthesis (multiple "qfun"s)
                                   (read-from-string fun)
                                 (subseq fun 0 end)))))
                        (t (show-warning line)))))))))))

(defun c-to-lisp (c-line)
  (let ((line (string-trim '(#\Space #\Tab) c-line)))
    (when (and (not (x:empty-string line))
               (not (find (char line 0) "/*#{"))
               (not (cond ((x:starts-with "public:" line)
                           (setf *section* :defvar))
                          ((x:starts-with "void setupUi" line)
                           (let ((main  (x:split (subseq line (1+ (position #\( line)) (position #\) line)))))
                             (setf *main-var*   (trim (second main))
                                   *main-class* (first main)))
                           (setf (gethash *main-var* *defvars*) t)
                           (setf (gethash *main-var* *classes*) *main-class*)
                           (setf *section* :ini))
                          ((x:starts-with "void retranslateUi" line)
                           (setf *section* :tr))
                          ((x:starts-with "}" line)
                           (setf *section* :end))
                          ((dolist (skip '("QMetaObject::" "retranslateUi"))
                             (when (x:starts-with skip line)
                               (return :skip)))))))
      (case *section*
        (:defvar
         (setf (gethash (trim (subseq line (position #\* line))) *classes*)
               (subseq line 0 (position #\Space line)))
         nil)
        (:ini
         (unless (x:starts-with "if" line)
           (qt-to-eql line)))
        (:tr
         (qt-to-eql line :tr))))))
