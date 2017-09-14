;;; QQuickView loading Lisp enabled QML

(qrequire :quick)

(require :qml-lisp   "qml-lisp")
(require :properties "properties")

(use-package :qml)

(defun run ()
  ;; *quick-view* can be either a QQuickView or a QQuickWidget
  (setf qml:*quick-view* (qnew "QQuickView"))
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/example.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|show|)))

(run)
