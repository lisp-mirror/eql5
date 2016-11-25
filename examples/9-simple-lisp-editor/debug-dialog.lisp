(defpackage :debug-dialog
  (:use :common-lisp :eql)
  (:export
   #:command))

(provide :debug-dialog)

(in-package :debug-dialog)

(defun command (messages font)
  (qlet ((dlg "QDialog(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
              "windowTitle" (tr "Debug Dialog")
              "size" '(600 400))
         (msg "QTextEdit")
         (lb  "QLabel" "text" (tr "Enter debug command (:h for help)"))
         (cmd "QLineEdit")
         (box "QDialogButtonBox")
         (lay "QVBoxLayout(QWidget*)" dlg))
    (x:do-with (qset msg)
      ("readOnly" t)
      ("font" font)
      ("tabStopWidth" (qlet ((fm "QFontMetrics(QFont)" font))
                        (* 8 (! "width(QChar)" fm #\Space)))))
    (x:do-with (! "addButton" box)
      |QDialogButtonBox.Ok|
      |QDialogButtonBox.Cancel|)
    (x:do-with (! "addWidget" lay)
      msg lb cmd box)
    (qset-color msg |QPalette.Base| "lightyellow")
    (qconnect box "accepted()" dlg "accept()")
    (qconnect box "rejected()" dlg "reject()")
    (! "setFocus" cmd)
    (qlater (lambda () (x:do-with dlg "activateWindow" "raise")))
    (add-messages msg messages)
    (if (= |QDialog.Accepted| (! "exec" dlg))
        (qget cmd "text")
        ":r1")))

(defun add-messages (text-edit messages)
  (dolist (msg messages)
    (x:do-with text-edit
      ("setTextColor" (cdr msg))
      ("insertPlainText" (car msg)))))
