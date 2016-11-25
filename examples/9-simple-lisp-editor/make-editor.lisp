#-eql5
(error "Please use the EQL5 executable")

(require :cmp)

(defparameter *lisp-files* '("local-client"
                             "settings"
                             "editor"))

(dolist (f *lisp-files*)
  (let ((file (format nil "~A.lisp" f)))
    (load file)
    (compile-file file :system-p t)))

(c:build-fasl "eql-editor"
              :lisp-files (mapcar (lambda (file)
                                    (format nil "~A.~A" file #+msvc "obj" #-msvc "o"))
                                  *lisp-files*))

(dolist (file *lisp-files*)
  (delete-file (format nil "~A.~A" file #+msvc "obj" #-msvc "o")))

(eql:qq)
