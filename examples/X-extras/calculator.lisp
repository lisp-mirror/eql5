;;; A simple calculator
;;;
;;; - displays exact value + float value
;;; - runs visual automations

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defpackage :calculator
  (:nicknames :clc)
  (:use :common-lisp :eql)
  (:export
   #:*main*
   #:auto
   #:run))

(in-package :calculator)

(defvar *main*  (qnew "QDialog"))
(defvar *real*  (qnew "QLabel"
                      "frameShape" |QFrame.Box|))
(defvar *float* (qnew "QLineEdit"
                      "readOnly" t
                      "font" (x:let-it (|font.QApplication|)
                               (|setPointSize| x:it (+ 6 (|pointSize| x:it))))))

(defvar *precision* 0f0) ; f = float, d = double, l = long
(defvar *value1*    nil)
(defvar *value2*    nil)
(defvar *reset*     nil)
(defvar *operation*)
(defvar *decimals*)

(defun error-to-string (err)
  (let ((err (string-trim "#<a >" (write-to-string err :case :downcase))))
    (subseq err 0 (position #\# err))))

(defun funcall-protect (fun &rest args)
  (multiple-value-bind (val err)
      (ignore-errors (apply fun args))
    (or val
        (progn
          (|critical.QMessageBox| nil "Error" (error-to-string err))
          0))))

(defun display-number (n)
  (flet ((str (x)
           (format nil "~:D" x)))
    (x:when-it (funcall-protect (lambda (x) (float x *precision*)) n)
      (|setText| *float* (princ-to-string x:it)))
    (let* ((num (str (numerator n)))
           (den (str (denominator n)))
           (dif (- (length den) (length num))))
      (|setText| *real* (format nil "<pre><u>~A~A</u><br>~A" (if (plusp dif) (make-string dif) "") num den))
      (|setEnabled| (qfind-child *main* "blah") (= 1 (denominator n))))))

(defun clear-display ()
  (setf *value1* 0
        *decimals* nil)
  (display-number 0))

(defun words-clicked ()
  (qmsg (format nil "~R" *value1*)))

(defun digit-clicked ()
  (when *reset*
    (clear-display)
    (setf *reset* nil))
  (let ((clicked (parse-integer (|text| (qsender)))))
    (setf *value1* (if *decimals*
                       (+ (* clicked (expt 10 (- (incf *decimals*))))
                          *value1*)
                       (+ clicked
                          (* 10 *value1*)))))
  (display-number *value1*))

(defun back-clicked ()
  (when (and *decimals* (zerop *decimals*))
    (setf *decimals* nil))
  (setf *value1* (if *decimals*
                     (let ((n (expt 10 (decf *decimals*))))
                       (/ (truncate (* n *value1*)) n))
                     (truncate (/ *value1* 10))))
  (display-number *value1*))

(defun invert (operation)
  (setf *value1* (funcall-protect operation *value1*))
  (display-number *value1*))

(defun sign-clicked ()
  (invert '-))

(defun reci-clicked ()
  (invert '/))

(defun point-clicked ()
  (setf *decimals* 0))

(defun clear-clicked ()
  (setf *value2* nil)
  (clear-display)
  (|adjustSize| *main*))

(defun operate ()
  (x:when-it (funcall-protect *operation* *value2* *value1*)
    (setf *value2* x:it)
    (display-number *value2*)))

(defun operation-clicked ()
  (if *value2*
      (operate)
      (setf *value2* *value1*))
  (setf *operation* (intern (|text| (qsender)))
        *reset* t))

(defun equal-clicked ()
  (when *value2*
    (operate)
    (shiftf *value1* *value2* nil)
    (setf *reset* t)))

;;; UI

(defun run ()
  (flet ((b ()
           (qnew "QToolButton"
                 "minimumSize" '(35 25)
                 "sizePolicy" #.(qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)"
                                      |QSizePolicy.Expanding| |QSizePolicy.Expanding|))))
    (let* ((layout* (|layout| *main*))
           (layout (if (qnull layout*) ; for multiple calls of RUN
                       (qnew "QGridLayout(QWidget*)" *main*)
                       (qt-object-? layout*)))
           (digits (make-array 10))
           (plus (b)) (minus (b)) (multiply (b)) (divide (b)) (reci (b)) (sign (b))
           (point (b)) (clear (b)) (back (b)) (words (b)) (equal (b)))
      (dotimes (n 10)
        (setf (svref digits n) (b)))
      (x:do-with (|addWidget| layout)
        (reci     2 0)
        (divide   2 1)
        (multiply 2 2)
        (minus    2 3)
        (clear    2 4)
        (back     3 4)
        (words    4 4)
        (sign     5 3)
        (point    6 3)
        (*real*           0 0 1 5)
        (*float*          1 0 1 5)
        (plus             3 3 2 1)
        (equal            5 4 2 1)
        ((svref digits 0) 6 0 1 3))
      (let ((n 0))
        (dotimes (r 3)
          (dotimes (c 3)
            (|addWidget| layout (svref digits (incf n)) (- 5 r) c))))
      (dolist (btn (list (list plus     "+")
                         (list minus    "-")
                         (list multiply "*")
                         (list divide   "/")
                         (list reci     "1/x"  "R")
                         (list sign     "+-"   "S")
                         (list point    ".")
                         (list clear    "AC"   "Delete")
                         (list back     "<<"   "Backspace")
                         (list words    "blah" "B")
                         (list equal    "="    "Return")))
        (let ((w (first btn))
              (s (second btn)))
          (x:do-with (qset w)
            ("text" s)
            ("objectName" s)
            ("shortcut" (qnew "QKeySequence(QString)" (or (third btn) s))))))
      (dotimes (n 10)
        (let ((w (svref digits n))
              (s (princ-to-string n)))
          (x:do-with (qset w)
            ("text" s)
            ("objectName" s)
            ("shortcut" (qnew "QKeySequence(QString)" s)))))
      (dolist (w (list *float* *real*))
        (|setAlignment| w |Qt.AlignRight|))
      (dotimes (n 10)
        (qconnect (svref digits n) "clicked()" 'digit-clicked))
      (dolist (w (list plus minus multiply divide))
        (qconnect w "clicked()" 'operation-clicked))
      ;; the following lines are crying for a macro like:
      ;; (connect-clicked (list clear back sign point reci words equal))
      (mapc (lambda (w fun)
              (qconnect w "clicked()" fun))
            (list clear back sign point reci words equal)
            (list 'clear-clicked 'back-clicked 'sign-clicked 'point-clicked 'reci-clicked 'words-clicked 'equal-clicked))
      (clear-display)
      (|setFocus| *real*)
      (x:do-with *main* |show| |raise|))))

(run)

;;; visual automation

(defun prepare (buttons)
  (flet ((normalize (string)
           (string-trim " " (with-output-to-string (s)
                              (x:do-string (ch string)
                                (unless (char= #\Space ch)
                                  (format s "~C " ch)))))))
    (let ((buttons* (normalize buttons)))
      (dolist (name (sort (mapcar (lambda (o) (|objectName| o))
                                  (qfind-children *main* nil "QToolButton"))
                          '> :key 'length))
        (setf buttons* (x:string-substitute name (normalize name) buttons*)))
      (x:split buttons*))))

(defun auto (buttons &optional (milliseconds 400))
  "Run visually the passed BUTTONS (either one string or a list of button strings)."
  (when (stringp buttons)
    (setf buttons (prepare buttons)))
  (when buttons
    (|animateClick| (qfind-child *main* (first buttons)) milliseconds)
    (qsingle-shot (* 2 milliseconds) (lambda () (auto (rest buttons) milliseconds)))))

;;; example / eql5 calculator -a

(defun qarg (argument)
  (find argument (|arguments.QCoreApplication|) :test 'string=))

(when (qarg "-a")
  (auto "AC 1.25 + 3.75 = *= *= 1/x 1/x +- blah"))
