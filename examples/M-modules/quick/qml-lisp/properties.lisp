;;; properties dialog

(defun sym (name package)
  (find-symbol (symbol-name name) package))

(defun show-properties-dialog (&optional item)
  "Lists all instance properties of a QML item (either a QQuickItem or an 'objectName'). If no item is passed, QML:*CALLER* will be used."
  (unless (find-package :properties)
    (load (in-home "gui/properties")))
  (when (stringp item)
    (setf item (qml:find-quick-item item)))
  (funcall (sym :show :properties)
           (or item qml:*caller*)))
