;;;
;;; Linux only!
;;;
;;; just edit/recompile "cpp/*"
;;;

(in-package :eql-user)

#+linux
(qauto-reload-c++ *lib* (in-home "Qt_EQL/eql_cpp"))

#+linux
(setf *lib-reloaded* 'show-current-apropos)

(defun show-current-apropos (variable plugin)
  (qset (qapp) "quitOnLastWindowClosed" nil) 
  (let ((obj (symbol-value variable)))
    (assert (qt-object-p obj))
    (qmsg (with-output-to-string (*standard-output*)
            (format t "<b>Plugin ~S currently offers:</b><pre>" plugin)
            (qapropos nil obj)))))
