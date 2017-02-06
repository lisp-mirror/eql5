;;; abstract item model (please see README.txt)

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp "qml-lisp")

(use-package :qml)

;; data and model

(defvar *animals*      (make-array 0 :fill-pointer t :adjustable t))
(defvar *animal-model* nil)

(defmacro define-roles (start &rest roles)
  (let ((n (symbol-value start)))
    `(progn
       ,@(mapcar (lambda (role) `(defconstant ,role ,(incf n))) roles))))

(define-roles |Qt.UserRole|
  +kind-role+ +size-role+)

(defstruct animal
  kind
  size)

(defvar *empty-model-index* (qnew "QModelIndex"))

(defun add-animal (kind size)
  (|beginInsertRows| *animal-model* *empty-model-index*
                     (|rowCount| *animal-model*) (|rowCount| *animal-model*))
  (vector-push-extend (make-animal :kind kind :size size)
                      *animals*)
  (|endInsertRows| *animal-model*))

(defvar *empty-variant* (qnew "QVariant"))

(defun make-animal-model ()
  (setf *animal-model* (qnew "QAbstractListModel"))
  (qoverride *animal-model* "rowCount(QModelIndex)"
             (lambda (index)
               (length *animals*)))
  (qoverride *animal-model* "data(QModelIndex,int)"
             (lambda (index role)
               (let* ((row (|row| index))
                      (data (when (< -1 row (length *animals*))
                              (let ((animal (aref *animals* row)))
                                (case role
                                  (#.+kind-role+
                                   (qvariant-from-value (animal-kind animal) "QString"))
                                  (#.+size-role+
                                   (qvariant-from-value (animal-size animal) "QString")))))))
                 (or data *empty-variant*))))
  (qoverride *animal-model* "roleNames()"
             (lambda ()
               (list (cons +kind-role+ "kind")     ; see 'kind' in QML
                     (cons +size-role+ "size"))))) ; see 'size' in QML

(defun run ()
  ;; data
  (make-animal-model)
  (add-animal "wolf" "medium")
  (add-animal "bear" "large")
  (add-animal "mouse" "small")
  ;; view
  (setf qml:*quick-view* (qnew "QQuickView"))
  (|setContextProperty| (|rootContext| qml:*quick-view*)
                        "myModel" *animal-model*) ; see 'myModel' in QML
  (x:do-with qml:*quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/abstract-model.qml"))
    (|setResizeMode| |QQuickView.SizeRootObjectToView|)
    (|resize| '(200 250))
    (|show|)))

(run)
