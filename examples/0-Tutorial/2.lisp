;;; Ported Qt Widgets Tutorial - Child Widgets

(in-package :eql-user)

(let ((window (qnew "QWidget"
                    "size" '(320 240)
                    "windowTitle" "Child widget"))
      (button (qnew "QPushButton"
                    "text" "Press me"
                    "pos" '(100 100))))
  (|setParent| button window)
  (|show| window))
