(in-package :eql-user)

(defvar *window*    (qnew "QDialog"
                          "windowTitle" "My Personal Analyst"))
(defvar *label*     (qnew "QLabel"
                          "text" "Please enter your <b>Top Secret</b> (you will feel better)"))
(defvar *line-edit* (qnew "QLineEdit"
                          "echoMode" |QLineEdit.Password|))
(defvar *layout*    (qnew "QVBoxLayout(QWidget*)" *window*))

(defun start ()
  (x:do-with (qfun *layout* "addWidget")
    *label*
    *line-edit*)
  (qconnect *line-edit* "returnPressed()" 'analyze)
  (x:do-with *window* "show" "raise"))

(defun analyze ()
  (qlet ((dlg "QProgressDialog"
              "maximum" 20
              "labelText" "<h1 style='color:crimson'>Wow!</h1><p>(updating WikiLeaks...)</p>"))
    (x:do-with dlg "show" "raise")
    (dotimes (n (qget dlg "maximum"))
      (sleep 0.1)
      (qset dlg "value" n)
      (qprocess-events)))
  (qfun *line-edit* "clear"))

(start)
