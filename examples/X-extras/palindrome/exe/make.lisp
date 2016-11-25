#-eql5
(error "Please use the EQL5 executable")

(require :cmp)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files* '("definitions"
                             "palindrome"))

(dolist (f *lisp-files*)
  (let ((file (format nil "../~A.lisp" f)))
    (load file)
    (compile-file file :system-p t)))

(c:build-static-library "static"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "../~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_app")

(dolist (file *lisp-files*)
  (delete-file (format nil "../~A.~A" file #+msvc "obj" #-msvc "o")))

(eql:qq)
