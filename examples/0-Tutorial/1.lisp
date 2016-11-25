#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

;;; Ported Qt Widgets Tutorial - Creating a Window

(in-package :eql-user)

(let ((window (qnew "QWidget"
                    "size" '(320 240)
                    "windowTitle" "Top-level widget")))
  (|show| window))
