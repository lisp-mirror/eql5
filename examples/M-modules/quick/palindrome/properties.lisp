;;; properties dialog and QML utils

;; QML utils

(defun root-item ()
  (when *quick-view*
    (qt-object-? (|rootObject| *quick-view*))))

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

(defun children (item/name)
  "Like QML function 'children'."
  (mapcar 'qt-object-? (|childItems| (quick-item item/name))))

(defun reload ()
  "Force reloading of QML file after changes made to it."
  (|clearComponentCache| (|engine| *quick-view*))
  (|setSource| *quick-view* (|source| *quick-view*)))

;; properties dialog

(defun sym (name package)
  (find-symbol (symbol-name name) package))

(defun show-properties-dialog (&optional item)
  "Lists all instance properties of a QML item (either a QQuickItem or an 'objectName')."
  (unless (find-package :properties)
    (load (in-home "gui/properties")))
  (funcall (sym :show :properties)
           (if (stringp item)
               (find-quick-item item)
               item)))

