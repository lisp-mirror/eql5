;;;
;;; Use of PaintedItem (a QQuickPaintedItem) and QPainter
;;; (meant as an alternative to Canvas in QML).
;;;

(qrequire :quick)

(require :qml-lisp   "qml-lisp")
(require :clock      "clock")
(require :properties "properties")

(use-package :qml)

;; clock

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
    (|setResizeMode| |QQuickView.SizeRootObjectToView|))
  (let ((timer (qnew "QTimer")))
    (qconnect timer "timeout()" (lambda () (|update| (clock))))  ; repaint
    (|start| timer (* 30 1000)))                                 ; every half a minute
  (|show| qml:*quick-view*))

(run)
