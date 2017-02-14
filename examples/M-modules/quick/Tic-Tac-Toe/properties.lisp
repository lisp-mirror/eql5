;;; properties dialog

(defun sym (name package)
  (find-symbol (symbol-name name) package))

(defun show-properties-dialog (&optional item)
  (unless (find-package :properties)
    (load (in-home "gui/properties")))
  (funcall (sym :show :properties)
           (or item qml:*caller*)
           t)) ; all instance properties (for QML)
