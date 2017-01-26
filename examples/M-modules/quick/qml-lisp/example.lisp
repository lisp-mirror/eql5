;;; QQuickView loading Lisp enabled QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

(use-package :qml)

;; for example (5) in "qml/example.qml"

(defun show-properties-dialog ()
  (unless (find-package :properties)
    (load (in-home "gui/properties")))
  (funcall (find-symbol "SHOW" :properties) qml:*caller*))

(defun run ()
  ;; *quick-view* can be either a QQuickView or a QQuickWidget
  (setf qml:*quick-view* (qnew "QQuickView(QUrl)"
                               (|fromLocalFile.QUrl| "qml/example.qml")))
  (|setResizeMode| qml:*quick-view* |QQuickView.SizeRootObjectToView|)
  (|resize| qml:*quick-view* '(350 350))
  (|show| qml:*quick-view*))

(run)
