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

(defun os-pathname (name)
  "Needed because ECL uses base strings (not Unicode) for pathnames internally."
  #+(or darwin linux)
  (qutf8 name)
  #+win32
  (qlocal8bit name))

(defun read-file (file)
  (with-open-file (s (os-pathname file) :direction :input)
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      str)))

(defun set-icon (action name)
  (|setIcon| action (qnew "QIcon(QString)"
                          (in-home (format nil "examples/data/icons/~A.png" name)))))

(defun start ()
  (x:do-with (qset *main*)
    ("pos" '(50 50))
    ("size" '(700 500)))
  (set-icon *action-open* "open")
  (set-icon *action-save* "save")
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
      (with-open-file (s (os-pathname file) :direction :output :if-exists :supersede)
        (write-string (|toHtml| *editor*) s)))))

(start)
