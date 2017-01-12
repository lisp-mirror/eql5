;;;
;;; Create a QQuickWidget in C++, since this can't be done directly in a EQL5 module (threading problem).
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

;; every call will make a new QQuickWidget
(defvar *quick-widget* (qload-c++ (in-home "Qt_EQL/quickwidget/quick_widget_cpp")))

(define-qt-wrappers *quick-widget*)

(defun print-qml-errors (errors)
  (format *debug-io* "~&### QML errors: ~A~%" (x:join errors ", ")))

(defun run ()
  ;; please note (and keep) the order:
  (qconnect *quick-widget* "qmlErrors(QStringList)" 'print-qml-errors)             ; 1
  (set-qml *quick-widget* (|fromLocalFile.QUrl|
                           (in-home "Qt_EQL/quickwidget/qml/rotatingsquare.qml"))) ; 2
  (|resize| *quick-widget* '(300 300))                                             ; 3
  (|show| *quick-widget*))                                                         ; 4

(run)
