;;; Ported Qt Widgets Tutorial - Creating a Window

(in-package :eql-user)

(let ((window (qnew "QWidget"
                    "size" '(320 240)
                    "windowTitle" "Top-level widget")))
  (|show| window))
