;;; simple WebEngine example

(qrequire :webengine)

(defvar *view* (qnew "QWebEngineView"))

;; N.B: The following functions are asynchronous (because WebEngine
;; is all asynchronous).
;;
;; So, we won't have a return value, but need to pass a function.
;; (See 'FunctorOrLambda' in both Qt Assistant and EQL sources.)

(defun to-text ()
  (|toPlainText| (|page| *view*)
                 (lambda (text) (print text))))

(defun js (expression)
  ;; example: (js "document.title")
  (|runJavaScript| (|page| *view*) expression
                   (lambda (result) (qmsg result))))

;; Introducing macro SYN-CALL allows to call asynchronous functions
;; as if they were synchronous (more convenient in simple cases).

(defmacro syn-call (expression)
  "Converts asynchronous function calls to synchronous ones, using a local event loop."
  (let ((result (gensym))
        (ev-loop (gensym)))
    `(let (,result)
       (qlet ((,ev-loop "QEventLoop"))
         (,@expression (lambda (x)
                         (setf ,result x)
                         (|exit| ,ev-loop)))
         (|exec| ,ev-loop |QEventLoop.ExcludeUserInputEvents|))
       ,result)))

(defun to-text* ()
  (print (syn-call (|toPlainText| (|page| *view*)))))

(defun js* (expression)
  (qmsg (syn-call (|runJavaScript| (|page| *view*) expression))))

(x:do-with *view*
  (|setUrl| (qnew "QUrl(QString)" "http://planet.lisp.org/"))
  (|resize| '(800 600))
  (|show|))
