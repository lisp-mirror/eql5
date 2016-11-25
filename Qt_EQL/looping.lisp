;;; Lisp calling C++ calling Lisp

(in-package :eql-user)

(defvar *lib* (qload-c++ (in-home "Qt_EQL/eql_fun_cpp")))

(defun say-number (n)
  (format nil "~R" n))

;; see examples in "cpp_calling_lisp/lib.cpp"

(! "runExamples" (:qt *lib*)) ; note :qt

(qq)

