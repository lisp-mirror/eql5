#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

;;; Ported Qt Widgets Tutorial - Using Layouts

(in-package :eql-user)

(let ((window    (qnew "QWidget"
                       "windowTitle" "Window layout"))
      (label     (qnew "QLabel"
                       "text" "Name:"))
      (line-edit (qnew "QLineEdit"))
      (layout    (qnew "QHBoxLayout")))
  (dolist (w (list label line-edit))
    (|addWidget| layout w))
  (|setLayout| window layout)
  (|show| window))
