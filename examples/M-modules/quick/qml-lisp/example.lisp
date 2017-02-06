;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

(use-package :qml)

;; utils

(defun sym (name package)
  (find-symbol (symbol-name name) package))

;; for example (5) in "qml/example.qml"

(defun show-properties-dialog ()
  (unless (find-package :properties)
    (load (in-home "gui/properties")))
  (funcall (sym :show :properties) qml:*caller*))

(defun run ()
  ;; *quick-view* can be either a QQuickView or a QQuickWidget
  (setf qml:*quick-view* (qnew "QQuickView"))
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/example.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(350 350))
    (|show|)))

(run)
