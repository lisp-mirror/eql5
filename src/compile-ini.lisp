#-unicode
(error "Please build ECL with unicode support (configure --enable-unicode)")

(require :cmp)

(setf *break-on-signals* 'error)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files* (list "x" "package" "ini"))

(dolist (f *lisp-files*)
  (let ((file (format nil "lisp/~A" f)))
    (when (probe-file file)
      (delete-file (format nil "~A.~A" file #+msvc "obj" #-msvc "o")))
    (compile-file file :system-p t)))
