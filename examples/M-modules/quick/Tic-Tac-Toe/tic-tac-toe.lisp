;;;
;;; for (c) please see COPYING.txt
;;;
;;; This is a port of a QtQuick1/Qt4 example.
;;; The JS game logic has been ported to Lisp.
;;;
;;; (requires a C++ plugin, see "lib/")
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp   "qml-lisp")
(require :game-logic "game-logic")

(defun run ()
  ;; *quick-view* can be either a QQuickView or a QQuickWidget
  (setf qml:*quick-view* (qnew "QQuickView"))
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/tic-tac-toe.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(420 480))
    (|show|)))

(run)
