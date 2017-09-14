;;; QQuickView running QML

(qrequire :quick)

(require :properties "properties")

(defvar *quick-view* (qnew "QQuickView")) ; either a QQuickView or a QQuickWidget

(defun run ()
  (x:do-with *quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/palindrome.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|show|)))

(run)
