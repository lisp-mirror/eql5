;;; WebKit & WebEngine as plugin widgets in WebKit
;;;
;;; "Just For Fun"

(qrequire :webkit)
(qrequire :webengine)

(in-package :eql-user)

(defvar *web-view*        (qnew "QWebView"))               ; browser 1
(defvar *web-engine-view* (qnew "QWebEngineView"))         ; browser 2
(defvar *main-view*       (qnew "QWebView"))               ; container
(defvar *webkit-bridge*   (qload-c++ "lib/webkit_bridge"))

(defparameter *parallel-browsing*  t)
(defparameter *parallel-scrolling* t)
(defparameter *scroll-position-1*  0)
(defparameter *scroll-position-2*  0)
(defparameter *scroll-max-1*       nil)
(defparameter *scroll-max-2*       nil)
(defparameter *scrollbar-to-sync*  nil)

(defun frame ()
  (|mainFrame| (|page| *main-view*)))

(defun js-webkit (expression view)
  (qvariant-value (|evaluateJavaScript| (|mainFrame| (|page| view)) expression)))

(defun js-webengine (expression view &optional function)
  (if function
      (|runJavaScript| (|page| view) expression function)
      (|runJavaScript| (|page| view) expression)))

(defun set-params (arg-names arg-values)
  "Qt: void setParams(QStringList, QStringList)" ; for JS
  (mapc (lambda (name value)
          (cond ((string= "parallel-browsing" name)
                 (setf *parallel-browsing* (string= "true" value)))
                ((string= "parallel-scrolling" name)
                 (setf *parallel-scrolling* (string= "true" value)))))
        arg-names arg-values))

(defun set-url (name)
  "Qt: void setUrl(QString)" ; for JS
  (setf *scroll-position-1* 0
        *scroll-position-2* 0
        *scroll-max-1*      nil
        *scroll-max-2*      nil)
  (js-webkit (format nil "document.getElementById('url').value = ~S" name)
             *main-view*)
  (qlet ((url (qnew "QUrl(QString)" name)))
    (dolist (view (list *web-view* *web-engine-view*))
      (unless (string= name (|toString| (|url| view)))
        (|setUrl| view url)))))

(defun get-scroll-max (view)
  (let ((exp "document.body.scrollHeight - window.innerHeight"))
    (cond ((qeql *web-view* view)
           (setf *scroll-max-1* (js-webkit exp *web-view*)))
          ((qeql *web-engine-view* view)
           (js-webengine exp *web-engine-view*
                         (lambda (max) (setf *scroll-max-2* max)))))))

(defun sync-scrollbar (other)
  (when *parallel-scrolling*
    (qsingle-shot 500 (lambda () (setf *scrollbar-to-sync* nil))) ; prevent recursion loops
    (unless *scrollbar-to-sync*
      (setf *scrollbar-to-sync* other))
    (when (eql other *scrollbar-to-sync*)                         ; see above
      (get-scroll-max *web-view*)
      (get-scroll-max *web-engine-view*) ; async
      (let ((f (if (and *scroll-max-1* *scroll-max-2* (plusp *scroll-max-2*))
                   (/ *scroll-max-1* *scroll-max-2*)
                   1)))
        (case other
          (1 (js-webkit
              (format nil "window.scrollTo(0, ~D)" (truncate (* *scroll-position-2* f)))
              *web-view*))
          (2 (js-webengine
              (format nil "window.scrollTo(0, ~D)" (truncate (/ *scroll-position-1* f)))
              *web-engine-view*)))))))

(defun ini-container ()
  (let ((web-plugin (qnew "QWebPluginFactory(QObject*)" *main-view*))
        (settings (|settings| *main-view*)))
    (|setAttribute| settings |QWebSettings.PluginsEnabled| t)
    (qoverride web-plugin "create(QString,QUrl,QStringList,QStringList)"
               (lambda (mime-type url arg-names arg-values)
                 (cond ((string= "application/x-web-kit" mime-type)
                        (set-params arg-names arg-values)
                        *web-view*)
                       ((string= "application/x-web-engine" mime-type)
                        (set-params arg-names arg-values)
                        *web-engine-view*))))
    (|setPluginFactory| (|page| *main-view*) web-plugin))
  (qconnect (frame) "javaScriptWindowObjectCleared()"
            (lambda ()
              (|addToJavaScriptWindowObject| (frame) "Lisp" *webkit-bridge*)))
  (|setUrl| *main-view* (|fromUserInput.QUrl| (namestring (probe-file "web-kit-engine.htm"))))
  (|showMaximized| *main-view*))

(defun ini-browsers ()
  (dolist (view (list *web-view* *web-engine-view*))
    (qconnect view "urlChanged(QUrl)"
              (lambda (url)
                (when *parallel-browsing*
                  (set-url (|toString| url))))))
  (qconnect (|page| *web-view*) "scrollRequested(int,int,QRect)"
            (lambda (x y rect)
              (decf *scroll-position-1* y)
              (sync-scrollbar 2)))
  (qconnect (|page| *web-engine-view*) "scrollPositionChanged(QPointF)"
            (lambda (pos)
              (setf *scroll-position-2* (truncate (second pos)))
              (sync-scrollbar 1))))

(progn
  (ini-container)
  (ini-browsers)
  (set-url "http://planet.lisp.org/"))
