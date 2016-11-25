#-eql5
(error "Please use the EQL5 executable")

(require :cmp)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files* '("input-hook"
                             "top-level"
                             "query-dialog"
                             "debug-dialog"
                             "settings"
                             "local-server"))

(dolist (f *lisp-files*)
  (let ((file (format nil "../~A.lisp" f)))
    (load file)
    (compile-file file :system-p t)))

(c:build-static-library "eql-local-server"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "../~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_app")

(dolist (file *lisp-files*)
  (delete-file (format nil "../~A.~A" file #+msvc "obj" #-msvc "o")))

(eql:qq)
