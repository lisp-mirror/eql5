#-unicode
(error "Please build ECL with unicode support (configure --enable-unicode)")

(require :cmp)

(setf *break-on-signals* 'error)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files* (list "x" "package" "ini"
                                 "enums1" "enums2" "enums3" "enums4" "enums5"
                                 "special-extensions"))

(dolist (f *lisp-files*)
  (let* ((file (format nil "lisp/~A" f))
         (file.o (format nil "~A.~A" file #+msvc "obj" #-msvc "o")))
    (when (probe-file file.o)
      (delete-file file.o))
    (compile-file file :system-p t)))

(c:build-static-library "ini_eql5"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")

;; for eql5.pro (doesn't create directories)

(dolist (module (mapcar 'file-namestring (directory "module_*.pro")))
  (ensure-directories-exist (format nil "tmp/~A/tmp/"
                                    (subseq module (1+ (position #\_ module)) (position #\. module)))))
