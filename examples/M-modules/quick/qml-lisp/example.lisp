;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

;;; QQuickView

(defvar *quick-view* (qnew "QQuickView(QUrl)"
                           (|fromLocalFile.QUrl| "qml/example.qml")))

(defun run ()
  (|setResizeMode| *quick-view* |QQuickView.SizeRootObjectToView|)
  (|resize| *quick-view* '(200 100))
  (|show| *quick-view*))

(run)
