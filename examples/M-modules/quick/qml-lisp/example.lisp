;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

(defun run ()
  (setf qml:*quick-view* (qnew "QQuickView(QUrl)"
                               (|fromLocalFile.QUrl| "qml/example.qml")))
  (|setResizeMode| qml:*quick-view* |QQuickView.SizeRootObjectToView|)
  (|resize| qml:*quick-view* '(300 200))
  (|show| qml:*quick-view*))

(run)
