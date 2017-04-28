(require :cmp)

(setf *break-on-signals* 'error)

#+msvc
(setf c::*compile-in-constants* t)

(defparameter *lisp-files* (list "x" "package" "ini"
                                 "enums1" "enums2" "enums3" "enums4" "enums5"
                                 "special-extensions"))

(c:build-static-library "ini_eql5"
                        :lisp-files (mapcar (lambda (file)
                                              (format nil "lisp/~A.~A" file #+msvc "obj" #-msvc "o"))
                                            *lisp-files*)
                        :init-name "ini_EQL")
