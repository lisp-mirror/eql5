#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(in-package :eql-user)

;; define class or struct

(defclass my-label-1 ()
  ((label :initform (qnew "QLabel" "objectName" "label_1"))))

(defstruct my-label-2
  (label (qnew "QLabel" "objectName" "label_2")))

;; specialize THE-QT-OBJECT

(defmethod the-qt-object ((object my-label-1))
  (slot-value object 'label))

(defmethod the-qt-object ((object my-label-2))
  (my-label-2-label object))

;;; The Lisp objects can now be used the same as QT-OBJECT,
;;; that is: they can be passed as arguments to any EQL function

(defvar *label-1* (make-instance 'my-label-1))
(defvar *label-2* (make-my-label-2))
(defvar *label-3* (qnew "QLabel" "objectName" "label_3"))

(defun run ()
  (let* ((dialog (qnew "QDialog"))
         (layout (qnew "QVBoxLayout(QWidget*)" dialog)))
    (x:do-with (|addWidget| layout)
      *label-1* *label-2* *label-3*)
    (flet ((print-me (label color)
             (|setText| (symbol-value label) (format nil "<h4 style='color: ~A'>~A ... ~A"
                                                     color
                                                     label
                                                     (qescape (princ-to-string (symbol-value label)))))))
      (qset-color dialog |QPalette.Window| "white")
      (print-me '*label-1* "red")
      (print-me '*label-2* "green")
      (print-me '*label-3* "blue"))
    (x:do-with dialog |show| |raise|)))

(run)
