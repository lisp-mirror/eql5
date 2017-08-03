;;;
;;; * enables QML to call Lisp functions
;;; * allows to get/set any QML property from Lisp (needs 'objectName' to be set)
;;; * allows to call QML methods from Lisp (needs 'objectName' to be set)
;;; * allows to evaluate JS code from Lisp (needs 'objectName' to be set)
;;;

(defpackage :qml-lisp
  (:use :common-lisp :eql)
  (:nicknames :qml)
  (:export
   #:*quick-view*
   #:*caller*
   #:children
   #:find-quick-item
   #:js
   #:qml-call
   #:qml-get
   #:qml-set
   #:qml-set-all
   #:paint
   #:reload
   #:root-context
   #:root-item))

(provide :qml-lisp)

(in-package :qml-lisp)

(defvar *quick-view* nil)
(defvar *caller*     nil)

(defun string-to-symbol (name)
  (let ((upper (string-upcase name))
        (p (position #\: name)))
    (if p
        (find-symbol (subseq upper (1+ (position #\: name :from-end t)))
                     (subseq upper 0 p))
        (find-symbol upper))))

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
  (let* ((*caller* (if (qnull caller) *caller* (qt-object-? caller)))
         (object (apply (string-to-symbol function)
                        arguments)))
    (if (stringp object)
        object
        (print-to-js-string object))))

;;; utils

(defun root-item ()
  (when *quick-view*
    (if (= (qt-object-id *quick-view*) #.(qid "QQmlApplicationEngine"))
        (let ((object (first (|rootObjects| *quick-view*))))
          (setf (qt-object-id object) #.(qid "QObject")) ; unknown to EQL, so resort to QObject
          object)
        (qt-object-? (|rootObject| *quick-view*)))))

(defun root-context ()
  (when *quick-view*
    (|rootContext| *quick-view*)))

(defun find-quick-item (object-name)
  "Finds the first QQuickItem matching OBJECT-NAME."
  (if (string= (|objectName| (root-item)) object-name)
      (root-item)
      (qt-object-? (qfind-child (root-item) object-name))))

(defun quick-item (item/name)
  (cond ((stringp item/name)
         (find-quick-item item/name))
        ((qt-object-p item/name)
         item/name)
        ((not item/name)
         (root-item))))

(defun children (item/name)
  "Like QML function 'children'."
  (mapcar 'qt-object-? (|childItems| (quick-item item/name))))

(defun reload ()
  "Force reloading of QML file after changes made to it."
  (|clearComponentCache| (|engine| *quick-view*))
  (|setSource| *quick-view* (|source| *quick-view*)))

;;; call QML methods

(defun qml-call (item/name method-name &rest arguments)
  ;; QFUN+ comes in handy here
  (apply 'qfun+ (quick-item item/name) method-name arguments))

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

(defun qml-set (item/name property-name value &optional update)
  "Sets QQmlProperty of either ITEM, or first object matching NAME. Returns T on success. If UPDATE is not NIL and ITEM is a QQuickPaintedItem, |update| will be called on it."
  (let ((item (quick-item item/name)))
    (qlet ((property "QQmlProperty(QObject*,QString)" item property-name))
      (if (|isValid| property)
          (qlet ((variant (qvariant-from-value value (|propertyTypeName| property))))
            (prog1
                (|write| property variant)
              (when (and update (= (qt-object-id item) #.(qid "QQuickPaintedItem")))
                (|update| item))))
          (eql::%error-msg "QML-SET" (list item/name property-name value))))))

(defun qml-set-all (name property-name value &optional update)
  "Sets QQmlProperty of all objects matching NAME."
  (assert (stringp name))
  (dolist (item (qfind-children (root-item) name))
    (qml-set item property-name value update)))

;;; JS 

(defun js (item/name js-format-string &rest arguments)
  "Evaluates a JS string, with 'this' bound to either ITEM, or first object matching NAME. Arguments are passed through FORMAT."
  (qlet ((qml-exp "QQmlExpression(QQmlContext*,QObject*,QString)"
                  (root-context)
                  (quick-item item/name)
                  (apply 'format nil js-format-string arguments))
         (variant (|evaluate| qml-exp)))
    (qvariant-value variant)))

