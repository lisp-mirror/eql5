;;;
;;; * enables QML to call Lisp functions
;;; * allows to get/set any QML property from Lisp (needs 'objectName' to be set)
;;;
;;; (requires a C++ plugin, see "lib/")

(defpackage :qml-lisp
  (:use :common-lisp :eql)
  (:nicknames :qml)
  (:export
   #:*quick-view*
   #:root-object
   #:qml-get
   #:qml-set))

(provide :qml-lisp)

(in-package :qml-lisp)

(defvar *qml-lisp*   (qload-c++ "lib/qml_lisp"))
(defvar *quick-view* nil)

(defun string-to-symbol (name)
  (let* ((upper (string-upcase name))
         (p (position #\: name)))
    (if p
        (intern (subseq upper (1+ (position #\: name :from-end t)))
                (subseq upper 0 p))
        (intern upper))))

(defun qml-apply (function arguments)
  "Every 'Lisp.fun()' or 'Lisp.apply()' function call in QML will call this function."
  (let ((value (apply (string-to-symbol function)
                      arguments)))
    (if (stringp value)
        value
        (princ-to-string value))))

(let (root-object)
  (defun root-object ()
    (unless root-object
      (setf root-object (|rootObject| *quick-view*)))
    root-object))

(defun find-qml-object (name)
  (if (string= (|objectName| (root-object)) name)
      (root-object)
      (qfind-child (root-object) name)))

(defun qml-get (object-name property-name)
  "Get QML property. Needs 'objectName' to be set."
  (qget (find-qml-object object-name) property-name))

(defun qml-set (object-name property-name value)
  "Set QML property. Needs 'objectName' to be set."
  (qset (find-qml-object object-name) property-name value))

