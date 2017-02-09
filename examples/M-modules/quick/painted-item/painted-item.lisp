;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")
(require :clock    "clock")

(use-package :qml)

(defvar *clock* nil)

;; paint

(defun qml:paint (item painter)
  "This function is called on every 'paint' request of QML type 'PaintedItem'."
  (|setRenderHint| painter |QPainter.Antialiasing|)
  (cond ((qeql *clock* item)
         (clock:paint item painter))
        (t
         (|fillRect| painter (|contentsBoundingRect| item)
                     (qml-get item "fillColor")))))             ; QML property

(defun run ()
  (setf qml:*quick-view* (qnew "QQuickWidget"))                 ; QQuickView would crash on Windows
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/painted-item.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(340 340)))
  (setf *clock* (find-quick-item "clock"))
  (let ((timer (qnew "QTimer")))
    (qconnect timer "timeout()" (lambda () (|update| *clock*))) ; repaint
    (|start| timer (* 60 1000)))                                ; once a minute
  (|show| qml:*quick-view*))

(run)
