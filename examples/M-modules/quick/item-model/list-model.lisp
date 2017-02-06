;;; string-list model

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

(use-package :qml)

(defvar *items* (loop :for i :from 1 :to 5 :collect (format nil "Item ~D" i)))

;; list model

(defun set-my-model ()
  ;; this function needs to be called after every change to *items*
  (qlet ((data (qvariant-from-value *items* "QStringList")))
    (|setContextProperty| (|rootContext| qml:*quick-view*) "myModel" data))) ; see 'myModel' in QML

(defun change-items (items)
  (setf *items* items)
  (set-my-model))

(defun run ()
  (setf qml:*quick-view* (qnew "QQuickView"))
  (set-my-model) ; add before setting the QML source file
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/list-model.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(150 250))
    (|show|)))

(run)
