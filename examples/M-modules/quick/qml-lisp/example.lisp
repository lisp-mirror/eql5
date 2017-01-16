;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(require :qml-lisp "qml-lisp")

(qrequire :quick)

(defun example-url (name)
  (|fromLocalFile.QUrl| (in-home (x:cc "examples/M-modules/quick/qml-lisp/qml/" name))))

;;; QQuickView

(defvar *quick-view* (qnew "QQuickView(QUrl)" (example-url "example.qml")))

(defun run ()
  (|setResizeMode| *quick-view* |QQuickView.SizeRootObjectToView|)
  (|resize| *quick-view* '(200 100))
  (|show| *quick-view*))

(run)
