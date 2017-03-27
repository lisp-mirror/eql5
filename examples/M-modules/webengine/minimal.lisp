;;; minimal WebEngine (requires Qt >= 5.6)

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :webengine)

(defvar *view* (qnew "QWebEngineView"))

;; N.B: The following functions are asynchronous (because WebEngine
;; is all asynchronous).
;; So, we won't have a return value, but need to pass a function.
;; (See 'FunctorOrLambda' in both Qt Assistant and EQL sources.)

(defun to-text ()
  (|toPlainText| (|page| *view*)
                 (lambda (text) (print text))))

(defun js (expression)
  ;; example: (js "document.title")
  (|runJavaScript| (|page| *view*) expression
                   (lambda (result) (qmsg result))))

(x:do-with *view*
  (|setUrl| (qnew "QUrl(QString)" "http://planet.lisp.org/"))
  (|resize| '(800 600))
  (|show|))
