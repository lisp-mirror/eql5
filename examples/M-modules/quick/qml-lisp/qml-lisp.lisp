;;; enable QML to call Lisp functions
;;; (requires a C++ plugin, see "lib/")

(provide :qml-lisp)

(in-package :eql)

(defvar *qml-lisp* (qload-c++ "lib/qml_lisp"))

(defun qml-apply (function arguments)
  (let ((value (apply (intern (string-upcase function)) arguments)))
    (if (stringp value)
        value
        (princ-to-string value))))

