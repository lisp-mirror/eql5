#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defpackage :main-window
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :main-window)

(defvar *main*        (qload-ui (in-home "examples/data/main-window.ui")))
(defvar *editor*      (qfind-child *main* "editor"))
(defvar *action-open* (qfind-child *main* "action_open"))
(defvar *action-save* (qfind-child *main* "action_save"))

(defun read-file (file)
  ;; "x:path" for unicode file names (OS specific)
  (with-open-file (s (x:path file) :direction :input)
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      str)))

(defun set-icon (action name)
  "Icon from current theme."
  (|setIcon| action (|fromTheme.QIcon| name)))

(defun set-icon-from-file (action name)
  "Icon from custom pixmap."
  (|setIcon| action (qnew "QIcon(QString)"
                          (in-home (format nil "examples/data/icons/~A.png" name)))))

(defun start ()
  (x:do-with (qset *main*)
    ("pos" '(50 50))
    ("size" '(700 500)))
  (set-icon *action-open* "document-open")
  (set-icon *action-save* "document-save")
  (qconnect *action-open* "triggered()" 'file-open)
  (qconnect *action-save* "triggered()" 'file-save)
  (|setHtml| *editor* (read-file (in-home "examples/data/utf8.htm")))
  (x:do-with *main* |show| |raise|))

(defun file-open ()
  (let ((file (|getOpenFileName.QFileDialog|)))
    (unless (x:empty-string file)
      (|setHtml| *editor* (read-file file)))))

(defun file-save ()
  (let ((file (|getSaveFileName.QFileDialog|)))
    (unless (x:empty-string file)
      ;; "x:path" for unicode file names (OS specific)
      (with-open-file (s (x:path file) :direction :output :if-exists :supersede)
        (write-string (|toHtml| *editor*) s)))))

(start)
