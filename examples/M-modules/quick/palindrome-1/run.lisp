;;; QQuickView running QML

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :properties "properties")

(defvar *quick-view* (qnew "QQuickView")) ; either a QQuickView or a QQuickWidget

(defun run ()
  (x:do-with *quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/palindrome.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|show|)))

(run)
