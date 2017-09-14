;;; QtWebKit Plugin Widget Example
;;;
;;; (depends on small plugin, see "lib/")
;;;
;;; This is a simple example of embedding a custom QWidget in a QWebView.
;;;
;;; Note: Adding QNetworkRequest to the plugin widget would allow to get
;;;       any data from the web, but this is not shown here.

(qrequire :webkit)

(in-package :eql-user)

(load "inspector")

(defvar *web-view*      (qnew "QWebView"))
(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))

(defun frame ()
  (|mainFrame| (|page| *web-view*)))

(defun clock ()
  (symbol-value (find-symbol "*CLOCK*" :clock)))

(defun set-params (arg-names arg-values)
  "Qt: void setParams(QStringList, QStringList)" ; see "README-GLUE-CODE.txt"
  (mapc (lambda (name value)
          (when (find name '("show-minutes" "show-seconds") :test 'string-equal)
            (setf (symbol-value (find-symbol (string-upcase (format nil "*~A*" name)) :clock))
                  (string-equal "true" value))))
        arg-names arg-values))

(defun ini ()
  ;; use example "clock" as plugin widget
  (load "../../2-clock")
  (|hide| (clock))
  (let ((web-plugin (qnew "QWebPluginFactory(QObject*)" *web-view*))
        (settings (|settings| *web-view*)))
    (|setAttribute| settings |QWebSettings.PluginsEnabled| t)
    (qoverride web-plugin "create(QString,QUrl,QStringList,QStringList)"
               (lambda (mime-type url arg-names arg-values)
                 (when (string= "application/x-clock" mime-type)
                   (set-params arg-names arg-values)
                   (clock))))
    (|setPluginFactory| (|page| *web-view*) web-plugin))
  (qconnect (frame) "javaScriptWindowObjectCleared()"
            (lambda ()
              (|addToJavaScriptWindowObject| (frame) "Lisp" *webkit-bridge*)))
  (|setUrl| *web-view* (|fromUserInput.QUrl| (namestring (probe-file "plugin-widget.htm"))))
  (|show| *web-view*))

(ini)

