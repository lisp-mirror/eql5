;;; QQuickWidget: a QML container behaving like a QWidget; for rendering limitations, see Qt Assistant
;;;
;;; (for a native QML container, use QQuickView)

(qrequire :quick)

(defun example-url (name)
  (|fromLocalFile.QUrl| (in-home (x:cc "examples/M-modules/quick/quickwidget/qml/" name))))

(defvar *mdi-area*       (qnew "QMdiArea"))
(defvar *quick-widget-1* (qnew "QQuickWidget(QUrl)" (example-url "example-1.qml")))
(defvar *quick-widget-2* (qnew "QQuickWidget(QUrl)" (example-url "example-2.qml")))

(defun run ()
  (dolist (widget (list *quick-widget-1* *quick-widget-2*))
    (|setResizeMode| widget |QQuickWidget.SizeRootObjectToView|)
    (|setMinimumSize| widget '(300 300))
    (|addSubWindow| *mdi-area* widget))
  (|show| *mdi-area*))

(run)
