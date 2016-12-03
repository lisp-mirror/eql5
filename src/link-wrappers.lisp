(require :cmp)

(setf *break-on-signals* 'error)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *all-wrappers* (loop :for i :from 1 :to 12 :collect (format nil "all-wrappers-~D" i)))

(defparameter *lisp-files*   (append '("x" "package" "ini"
                                       "enums1" "enums2" "enums3" "enums4" "enums5"
                                       "special-extensions")
                                     *all-wrappers*))

(c:build-static-library "ini"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")
