;;;
;;; * enables QML to call Lisp functions
;;; * allows to get/set any QML property from Lisp (needs 'objectName' to be set)
;;; * allows to evaluate JS code from Lisp (needs 'objectName' to be set)
;;;
;;; (requires a C++ plugin, see "lib/")

(defpackage :qml-lisp
  (:use :common-lisp :eql)
  (:nicknames :qml)
  (:export
   #:*quick-view*
   #:js
   #:root-object
   #:qml-get
   #:qml-set
   #:qml-get*
   #:qml-set*))

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

;;; function calls from QML

(defun print-js-readably (object)
  "Prints lists, vectors, T, NIL, floats in JS notation, which will be passed to JS 'eval()'."
  (if (and (not (stringp object))
           (vectorp object))
      (print-js-readably (coerce object 'list))
      (typecase object
        (cons
         (write-char #\[)
         (do ((list object (rest list)))
             ((null list) (write-char #\]))
           (print-js-readably (first list))
           (when (rest list)
             (write-char #\,))))
        (float
         ;; cut off Lisp specific notations
         (princ (string-right-trim "dl0" (princ-to-string object))))
        (t
         (cond ((eql 't object)
                (princ "true"))
               ((eql 'nil object)
                (princ "false"))
               (t
                (prin1 object)))))))

(defun print-to-js-string (object)
  (with-output-to-string (*standard-output*)
    (princ "#<>") ; mark for passing to JS "eval()"
    (print-js-readably object)))

(defun qml-apply (function arguments)
  "Every 'Lisp.fun()' or 'Lisp.apply()' function call in QML will call this function."
  (let ((object (apply (string-to-symbol function)
                      arguments)))
    (if (stringp object)
        object
        (print-to-js-string object))))

;;; utils

(let (root-object)
  (defun root-object ()
    (unless root-object
      (setf root-object (|rootObject| *quick-view*)))
    root-object))

(defun find-qml-object (name &optional all)
  (if (string= (|objectName| (root-object)) name)
      (root-object)
      (if all
          (qfind-children (root-object) name)
          (qfind-child (root-object) name))))

;;; get/set QML object properties

(defun qml-get (object-name property-name)
  "Gets QML property for first object matching 'objectName'."
  (qget (find-qml-object object-name) property-name))

(defun qml-set (object-name property-name value)
  "Sets QML property for first object matching 'objectName'."
  (qset (find-qml-object object-name) property-name value))

(defun qml-get* (object-name property-name)
  "Collects QML properties for all objects matching 'objectName'."
  (mapcar (lambda (object)
            (qget object property-name))
          (find-qml-object object-name t)))

(defun qml-set* (object-name property-name value)
  "Sets QML property for all objects matching 'objectName'."
  (dolist (object (find-qml-object object-name t))
    (qset object property-name value)))

;;; JS 

(defun js (object-name js-format-string &rest arguments)
  "Evaluates a JS string with the element bound to OBJECT-NAME as 'this'."
  (qlet ((qml-exp "QQmlExpression(QQmlContext*,QObject*,QString)"
                  (|rootContext| (|engine| *quick-view*))
                  (find-qml-object object-name)
                  (apply 'format nil js-format-string arguments))
         (variant (|evaluate| qml-exp)))
    (qvariant-value variant)))

