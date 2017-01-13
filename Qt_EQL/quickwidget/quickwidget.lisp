;;;
;;; Create a QQuickWidget in C++, since this can't be done directly in a EQL5 module (threading problem).
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defun make-quick-widget ()
  (qload-c++ (in-home "Qt_EQL/quickwidget/quick_widget_cpp")))

(defvar *mdi-area*       (qnew "QMdiArea"))
(defvar *quick-widget-1* (make-quick-widget))
(defvar *quick-widget-2* (make-quick-widget))

(define-qt-wrappers *quick-widget-1*)

(defun print-qml-errors (errors)
  (format *debug-io* "~&### QML errors: ~A~%" (x:join errors ", ")))

(defun run ()
  (mapc (lambda (widget file)
          ;; please note (and keep) the order:
          (qconnect widget "qmlErrors(QStringList)" 'print-qml-errors)                   ; 1
          (set-qml widget (|fromLocalFile.QUrl|                                          ; 2
                           (in-home (format nil "Qt_EQL/quickwidget/qml/~A.qml" file))))
          (|setMinimumSize| widget '(300 300))                                           ; 3
          (|addSubWindow| *mdi-area* widget))
        (list *quick-widget-1* *quick-widget-2*)
        (list "example-1" "example-2"))
  (|show| *mdi-area*))

(run)
