;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

(use-package :qml)

;; paint

(defun qml:paint (item painter)
  "This function is called on every 'paint' request of QML type 'PaintedItem'."
  (|fillRect| painter (|contentsBoundingRect| item)
              (qml-get item "fillColor"))) ; QML property

(defun run ()
  (setf qml:*quick-view* (qnew "QQuickWidget")) ; QQuickView would crash on Windows
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/painted-item.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(350 350))
    (|show|)))

(run)
