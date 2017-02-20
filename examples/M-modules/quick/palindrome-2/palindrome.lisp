;;; palindrome

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp   "qml-lisp")
(require :properties "properties")
(require :utils      "utils")

(use-package :qml)

(defvar *timer* (qnew "QTimer"))

(defun run-animation ()
  (dolist (move-to (rest *move-to-positions*))
    (let ((target 0))
      (dolist (xy move-to)
        (incf target)
        (let ((img (find-quick-item (format nil "img~D" target))))
          (qml-set img "x" (* 31 (first xy)))
          (qml-set img "y" (* 31 (second xy)))
          (qsleep 0.03))))           ; delay between item start      (in sec)
    (qsleep 4))                      ; duration of animation + pause (in sec)
  (qsingle-shot 500 'run-animation)) ; pause                         (in msec)

(defun run ()
  (setf qml:*quick-view* (qnew "QQuickView"))
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/palindrome.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|show|))
  (qlater 'run-animation)) ; don't block REPL (for eql5 -qtpl)

(run)
