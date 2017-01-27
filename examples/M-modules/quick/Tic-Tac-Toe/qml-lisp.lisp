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
   #:*caller*
   #:children
   #:find-quick-item
   #:js
   #:qml-get
   #:qml-set
   #:root-item))

(provide :qml-lisp)

(in-package :qml-lisp)

(defvar *qml-lisp*   (qload-c++ "lib/qml_lisp"))
(defvar *caller*     nil)
(defvar *quick-view* nil)

(defun string-to-symbol (name)
  (let ((upper (string-upcase name))
        (p (position #\: name)))
    (if p
        (intern (subseq upper (1+ (position #\: name :from-end t)))
                (subseq upper 0 p))
        (intern upper))))

;;; function calls from QML

(defun print-js-readably (object)
  "Prints (nested) lists, vectors, T, NIL, floats in JS notation, which will be passed to JS 'eval()'."
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

(defun qml-apply (caller function arguments)
  "Every 'Lisp.call()' or 'Lisp.apply()' function call in QML will call this function. The variable *CALLER* will be bound to the calling QQuickItem, if passed with 'this' as first argument to 'Lisp.call()' / 'Lisp.apply()'."
  (let* ((*caller* (if (qnull caller) nil (qt-object-? caller)))
         (object (apply (string-to-symbol function)
                        arguments)))
    (if (stringp object)
        object
        (print-to-js-string object))))

;;; utils

(defun root-item ()
  (when *quick-view*
    (|rootObject| *quick-view*)))

(defun find-quick-item (object-name)
  "Finds the first QQuickItem matching OBJECT-NAME."
  (if (string= (|objectName| (root-item)) object-name)
      (root-item)
      (qt-object-? (qfind-child (root-item) object-name))))

(defun quick-item (item/name)
  (if (stringp item/name)
      (find-quick-item item/name)
      item/name))

(defun children (item/name)
  (|childItems| (quick-item item/name)))

;;; get/set QQmlProperty

(defun qml-get (item/name property-name)
  "Gets QQmlProperty of either ITEM or first object matching NAME."
  (qlet ((property "QQmlProperty(QObject*,QString)"
                   (quick-item item/name)
                   property-name))
    (if (|isValid| property)
        (qlet ((variant (|read| property)))
          (values (qvariant-value variant)
                  t))
        (eql::%error-msg "QML-GET" (list item/name property-name)))))

(defun qml-set (item/name property-name value)
  "Sets QQmlProperty of either ITEM, or first object matching NAME. Returns T on success."
  (qlet ((property "QQmlProperty(QObject*,QString)"
                   (quick-item item/name)
                   property-name))
    (if (|isValid| property)
        (qlet ((variant (qvariant-from-value value (|propertyTypeName| property))))
          (|write| property variant))
        (eql::%error-msg "QML-SET" (list item/name property-name value)))))

;;; JS 

(defun js (item/name js-format-string &rest arguments)
  "Evaluates a JS string, with 'this' bound to either ITEM, or first object matching NAME. Arguments are passed through FORMAT."
  (qlet ((qml-exp "QQmlExpression(QQmlContext*,QObject*,QString)"
                  (|rootContext| *quick-view*)
                  (quick-item item/name)
                  (apply 'format nil js-format-string arguments))
         (variant (|evaluate| qml-exp)))
    (qvariant-value variant)))

