;;; enable QML to call Lisp functions
;;; (requires a C++ plugin, see "lib/")

(provide :qml-lisp)

(in-package :eql)

(defvar *qml-lisp* (qload-c++ "lib/qml_lisp"))

(defun string-to-symbol (name)
  (let* ((upper (string-upcase name))
         (p (position #\: name)))
    (if p
        (intern (subseq upper (1+ (position #\: name :from-end t)))
                (subseq upper 0 p))
        (intern upper))))

(defun qml-apply (function arguments)
  (let ((value (apply (string-to-symbol function)
                      arguments)))
    (if (stringp value)
        value
        (princ-to-string value))))
