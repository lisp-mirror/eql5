;;; Simple QtWebKit Bridge Demo
;;;
;;; depends on small plugin, see "lib/"

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(load "inspector")

(defvar *web-view* (qnew "QWebView" "size" '(700 550)))

(defvar eql-user::*webkit-bridge* (qload-c++ "lib/webkit_bridge")) ; eval once only, even from other package (see CLONE)
(defvar eql-user::*clone-count*   0)                               ; (see above)

(defun frame ()
  (|mainFrame| (|page| *web-view*)))

(defun ini ()
  (qconnect (frame) "javaScriptWindowObjectCleared()"
            (lambda ()
              (|addToJavaScriptWindowObject| (frame) "Lisp"    eql-user::*webkit-bridge*) ; for examples 1, 2, 3
              (|addToJavaScriptWindowObject| (frame) "WebView" *web-view*)))              ; for examples 4, 5
  (|setUrl| *web-view* (|fromUserInput.QUrl| (namestring (probe-file "webkit-bridge.htm"))))
  (when (find "debug" (|arguments.QCoreApplication|) :test 'string=)
    (inspector))
  (|show| *web-view*))

;;; clone me

(defvar *clone-name* #.(format nil "CLONE-~D" (incf eql-user::*clone-count*)))

(defun clone ()
  (make-package #.*clone-name*)
  (in-package #.*clone-name*)
  (use-package :eql)
  (load "webkit-bridge")
  (|setWindowTitle| (symbol-value (find-symbol "*WEB-VIEW*" #.*clone-name*))
     #.*clone-name*)
  "(clone)")

;;; These functions can be called from JavaScript (see "README-GLUE-CODE.txt")

(defun test-call (now arguments)
  "Qt: QStringList testCall(QDateTime, QVariantList = 0)"
  ;;           | from                C++             to
  ;; ----------|--------------------------------------------------------
  ;; arguments | JS array of vars -> QVariantList -> LIST
  ;; return    | LIST of strings  -> QStringList  -> JS array of strings
  ;;
  (qmsg (cons now arguments))
  (mapcar (lambda (arg)
            (if (qt-object-p arg)
                (|toString| arg)
                (princ-to-string arg)))
          (cons now arguments)))

(defun eval* (expression)
  "Qt: QString eval(QString)"
  (handler-case (princ-to-string (eval (read-from-string expression)))
    (error (condition)
      (qmsg (format nil "<p><b style='color:red'>Lisp Eval Error</b></p><p>~A</p>"
                    (qescape (princ-to-string condition))))
      expression)))

(defun flip-value (web-element)
  "Qt: void flipValue(QWebElement)"
  ;; indirection fun: a 'value' of an <input> element can only be changed through JavaScript
  (flet ((js (code)
           (|toString| (|evaluateJavaScript| web-element code))))
    (js (format nil "this.value = ~S" (reverse (js "this.value"))))))

(ini)
