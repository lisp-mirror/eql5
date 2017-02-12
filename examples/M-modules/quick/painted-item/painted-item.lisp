;;;
;;; Use of PaintedItem (a QQuickPaintedItem) and QPainter
;;; (meant as an alternative to Canvas in QML).
;;;
;;; See also "lib/qml_lisp.*" for PaintedItem.
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")
(require :clock    "clock")

(use-package :qml)

(defun clock ()
  ;; will keep working even after reloading the QML file (see QML:RELOAD);
  ;; if stored in a variable, this won't be true;
  (find-quick-item "clock"))

;; paint

(defun qml:paint (item painter)
  "This function is called on every 'paint' request of QML type 'PaintedItem'."
  (|setRenderHint| painter |QPainter.Antialiasing|)
  (cond ((qeql (clock) item)
         (clock:paint item painter))
        (t
         (qlet ((pen "QPen(QColor)" "white")
                (brush "QBrush(QColor)" (qml-get item "color"))) ; QML property
           (|setWidth| pen 5)
           (|setPen| painter pen)
           (|setBrush| painter brush)
           (|drawEllipse| painter (qml-get item "ellipse"))))))  ; QML property

(defun run ()
  (setf qml:*quick-view* (qnew "QQuickWidget"))                  ; QQuickView would crash on Windows
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/painted-item.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(340 340)))
  (let ((timer (qnew "QTimer")))
    (qconnect timer "timeout()" (lambda () (|update| (clock))))  ; repaint
    (|start| timer (* 60 1000)))                                 ; once a minute
  (|show| qml:*quick-view*))

(run)
