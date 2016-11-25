;;; Html utils (for easy WebKit GUIs)
;;;
;;; (depends on small plugin, see "lib/")
;;;
;;; Thread-safe utility functions, including convenience wrappers for all QWebElement methods
;;; (see also HGET, HSET, JS, TO-PIXMAP, ASSIGN-PIXMAP...).

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(defpackage :h-utils
  (:nicknames :h)
  (:use :common-lisp :eql)
  (:export
   #:*web-view*
   #:add-class
   #:append-html
   #:append-inside
   #:append-outside
   #:assign-pixmap
   #:attribute-names
   #:classes
   #:clear-html
   #:clear-pixmap
   #:clone
   #:document
   #:document-element
   #:element
   #:enclose-contents-with
   #:enclose-with
   #:find-all-elements
   #:find-first
   #:find-first-element
   #:first-child
   #:frame
   #:geometry
   #:has-attribute
   #:has-attributes
   #:has-class
   #:has-focus
   #:hget
   #:hset
   #:inspector
   #:is-null
   #:iterate-child-elements
   #:iterate-elements
   #:lisp
   #:lisp*
   #:js
   #:last-child
   #:local-name
   #:namespace-uri
   #:next-sibling
   #:parent
   #:pause
   #:prefix
   #:prepend-inside
   #:prepend-outside
   #:previous-sibling
   #:remove-all-children
   #:remove-attribute
   #:remove-class
   #:remove-from-document
   #:replace*
   #:scroll-to-anchor
   #:scroll-to-bottom
   #:scroll-to-top
   #:set-focus
   #:set-style-property
   #:style-property
   #:tag-name
   #:toggle-class
   #:to-html
   #:to-pixmap
   #:web-frame))

(provide :h-utils)

(in-package :h-utils)

(defvar *web-view*      (qnew "QWebView")) 
(defvar *webkit-bridge* (qload-c++ "lib/webkit_bridge"))
(defvar *web-pixmap*)

(defun frame ()
  (qrun* (! ("mainFrame" "page" *web-view*))))

;;; utils

(defmacro iterate-elements (selector &body body)
  "Iterate over web elements of QWebFrame, binding H:ELEMENT to the current QWebElement."
  (let ((i (gensym)))
    `(let ((elements (qrun* (! "findAllElements" (frame) ,selector))))
       (dotimes (,i (qrun* (! "count" elements)))
         (let ((element (qrun* (! "at" elements ,i))))
           ,@body)))))

(defmacro iterate-child-elements (web-element selector &body body)
  "Iterate over child elements of a QWebElement, binding H:ELEMENT to the current QWebElement."
  (let ((i (gensym)))
    `(let ((elements (qrun* (! "findAll" (ensure-web-element ,web-element) ,selector))))
       (dotimes (,i (qrun* (! "count" elements)))
         (let ((element (qrun* (! "at" elements ,i))))
           ,@body)))))

(defun >> (expression)
  "Convert to string if needed."
  (if (stringp expression)
      expression
      (princ-to-string expression)))

(defun << (expression)
  "Convert from string if needed (to preserve strings, quote them in JavaScript)."
  (cond ((stringp expression)
         (read-from-string expression))
        ((listp expression)
         (mapcar (lambda (x) (if (stringp x) (read-from-string x) x))
                 expression))
        (t
         expression)))

(defun assert-web-element (x)
  (assert (= #.(qid "QWebElement") (qt-object-id x)) nil
          "Wanted <QWebElement>, got: ~S." x)
  x)

(defun ensure-web-element (x)
  (if (stringp x)
      (find-first-element x)
      (assert-web-element x)))

(defun %input-text-p (web-element)
  (and (string-equal "INPUT" (tag-name web-element))
       (string-equal "text" (qrun* (! "attribute" web-element "type")))))

(defun js (javascript &optional web-element)
  "Evaluate JavaScript in the context (as 'this') of either a QWebElement or the main QWebFrame."
  (qrun* (! ("toString" ("evaluateJavaScript" javascript)
                        (or web-element (frame))))))

;;; Special functions HGET and HSET for :text :inner-xml :outer-xml and attributes like :value :src etc.;
;;; additionally, they can be used for any custom string property, e.g. :image-label "sunset"

(defun hget (selector/web-element attribute)
  "Return (as multiple values) Html attribute of either all elements matching selector, or of the given web element."
  (let (values)
    (flet ((%do (element)
             (push (cond ((eql :text attribute)
                          (qrun* (! "toPlainText" element)))
                         ((eql :inner-xml attribute)
                          (qrun* (! "toInnerXml" element)))
                         ((eql :outer-xml attribute)
                          (qrun* (! "toOuterXml" element)))
                         ((and (%input-text-p element)
                               (member attribute '(:value :size)))
                          (js (format nil "this.~(~A~)" attribute) element))
                         (t
                          (let ((a (! "attribute" element (string-downcase attribute) "NIL")))
                            (unless (string= "NIL" a)
                              a))))
                   values)))
      (if (stringp selector/web-element)
          (iterate-elements selector/web-element
            (%do element))
          (progn
            (assert-web-element selector/web-element)
            (%do selector/web-element))))
    (values-list (nreverse values))))

(defun hset (selector/web-element &rest attributes)
  "Set Html attributes (any number of attribute/value pairs) of either all elements matching selector, or of the given web element."
  (flet ((%do (element)
           (do ((curr attributes (cddr curr)))
               ((null curr))
             (let ((attribute (first curr))
                   (value (second curr)))
               (cond ((eql :text attribute)
                      (qrun* (! "setPlainText" element value)))
                     ((eql :inner-xml attribute)
                      (qrun* (! "setInnerXml" element value)))
                     ((eql :outer-xml attribute)
                      (qrun* (! "setOuterXml" element value)))
                     ((and (%input-text-p element)
                           (member attribute '(:value :size)))
                      (js (format nil "this.~(~A~) = ~S" attribute value) element))
                     (t
                      (qrun* (! "setAttribute" element (string-downcase attribute) value))))))))
    (if (stringp selector/web-element)
        (iterate-elements selector/web-element
          (%do element))
        (progn
          (assert-web-element selector/web-element)
          (%do selector/web-element)))))

;;; convenience wrappers for all QWebElement methods

(defmacro defun-web-element ((name qt-name &optional check-null))
  `(defun ,name (x)
     "QWebElement convenience function."
     ,(if check-null
          `(qrun* (let ((el (! ,qt-name (ensure-web-element x))))
                    (unless (! "isNull" el)
                      el)))
          `(qrun* (! ,qt-name (ensure-web-element x))))))

(defmacro defun-web-element-arg ((name qt-name &optional check-null))
  `(defun ,name (x arg)
     "QWebElement convenience function."
     ,(if check-null
          `(qrun* (let ((el (! ,qt-name (ensure-web-element x) arg)))
                    (unless (! "isNull" el)
                      el)))
          `(qrun* (! ,qt-name (ensure-web-element x) arg)))))

(defun attribute-names (web-element &optional namespace-uri)
  "QWebElement convenience function."
  (qrun* (! "attributeNames" (ensure-web-element web-element) namespace-uri)))

(defun append-inside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "appendInside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "appendInside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun append-outside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "appendOutside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "appendOutside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun enclose-contents-with (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "encloseContentsWith(QString)" (ensure-web-element web-element) x))
      (qrun* (! "encloseContentsWith(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun enclose-with (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "encloseWith(QString)" (ensure-web-element web-element) x))
      (qrun* (! "encloseWith(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun prepend-inside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "prependInside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "prependInside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun prepend-outside (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "prependOutside(QString)" (ensure-web-element web-element) x))
      (qrun* (! "prependOutside(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun replace* (web-element x)
  "QWebElement convenience function."
  (if (stringp x)
      (qrun* (! "replace(QString)" (ensure-web-element web-element) x))
      (qrun* (! "replace(QWebElement)" (ensure-web-element web-element) (ensure-web-element x)))))

(defun set-style-property (selector/web-element property value)
  "QWebElement convenience function."
  (qrun* (! "setStyleProperty" (ensure-web-element selector/web-element)
            (string-downcase property) value)))

(defun style-property (selector/web-element property &optional (resolve |QWebElement.ComputedStyle|))
  "QWebElement convenience function."
  (qrun* (! "styleProperty" (ensure-web-element selector/web-element)
            (string-downcase property) resolve)))

(defun-web-element-arg (add-class "addClass"))

(defun-web-element (classes "classes"))

(defun-web-element (clone "clone"))

(defun-web-element (document "document"))

(defun-web-element-arg (find-first "findFirst" :check-null))

(defun-web-element (first-child "firstChild" :check-null))

(defun-web-element (geometry "geometry"))

(defun-web-element-arg (has-attribute "hasAttribute"))

(defun-web-element (has-attributes "hasAttributes"))

(defun-web-element-arg (has-class "hasClass"))

(defun-web-element (has-focus "hasFocus"))

(defun-web-element (is-null "isNull"))

(defun-web-element (last-child "lastChild" :check-null))

(defun-web-element (local-name "localName"))

(defun-web-element (namespace-uri "namespaceUri"))

(defun-web-element (next-sibling "nextSibling" :check-null))

(defun-web-element (parent "parent" :check-null))

(defun-web-element (prefix "prefix"))

(defun-web-element (previous-sibling "previousSibling" :check-null))

(defun-web-element-arg (remove-attribute "removeAttribute"))

(defun-web-element (remove-all-children "removeAllChildren"))

(defun-web-element-arg (remove-class "removeClass"))

(defun-web-element (remove-from-document "removeFromDocument"))

(defun-web-element (set-focus "setFocus"))

(defun-web-element (tag-name "tagName"))

(defun-web-element-arg (toggle-class "toggleClass"))

(defun-web-element (web-frame "webFrame"))

;;; macros for JavaScript callback code; the functions can be tested like this:
;;; (h:js (print (h:lisp (format nil (string "~R") 100))))

(defun %quote (arguments)
  "Quote arguments, to prepare them for READ-FROM-STRING in Lisp. Strings are supposed to be JavaScript code, e.g. \"window.event.keyCode\". Literal strings can be passed using STRING, e.g. (string \"ok\")."
  (mapcar (lambda (arg)
            (cond ((consp arg)
                   (if (eql 'string (first arg))
                       (format nil "'~S'" (second arg))
                       (error "Only atom arguments allowed in JavaScript callback code: ~S" arg)))
                  ((stringp arg)
                   arg)
                  (t
                   (format nil "'~A'" arg))))
          arguments))

(defmacro lisp* (arguments)
  "Generate JavaScript function call from a lispy definition. The first argument to the Lisp function is expected to be a QWebElement (see function WEB).
  Example: (h:lisp* (foo :this 42 \"window.event.keyCode\" (string \"ok\")))"
  (format nil "Lisp.fun2('~A::~A', ~A, [~{~A~^, ~}])"
          (package-name (symbol-package (first arguments)))
          (symbol-name (first arguments))
          (if (eql :this (second arguments))
              "this"
              (second arguments))
          (%quote (nthcdr 2 arguments))))

(defmacro lisp (arguments)
  "Generate JavaScript function call from a lispy definition (see function FUN).
  Example: (h:lisp (foo 42 \"window.event.keyCode\" (string \"ok\")))"
  (if (eql :this (second arguments)) ; QWebElement argument
      `(lisp* ,arguments)
      (format nil "Lisp.fun('~A::~A', [~{~A~^, ~}])"
              (package-name (symbol-package (first arguments)))
              (symbol-name (first arguments))
              (%quote (rest arguments)))))

;;; to be called from JavaScript

(defun fun (function arguments)
  "Qt: QString fun(QString, QVariantList = 0)
   Use this variant for ordinary function calls, e.g. Lisp.fun('+', ['1/2', '1/3'])"
  (if arguments
      (>> (apply (<< function) (<< arguments)))
      (>> (funcall (<< function)))))

(defun fun* (function web-element arguments)
  "Qt: QString fun2(QString, QWebElement, QVariantList = 0)
   Use this variant if you need to pass a QWebElement, e.g. Lisp.fun2('move', this)"
  (flet ((not-null (el)
           (if (qrun* (! "isNull" el)) nil el)))
    (if arguments
        (>> (apply (<< function) (not-null web-element) (<< arguments)))
        (>> (funcall (<< function) (not-null web-element))))))

(defun %web-pixmap ()
  "Qt: QPixmap pixmap()" ; see "Lisp.pixmap()" in ASSIGN-PIXMAP
  *web-pixmap*)

;;; pixmap utilities

(defun assign-pixmap (web-element pixmap)
  "Directly assign a QPixmap to a <img> web element."
  (let ((*web-pixmap* pixmap)
        (element (ensure-web-element web-element)))
    (assert (string= "IMG" (tag-name element)) nil
            "Wanted <img>, got <~(~A~)>." (tag-name element))
    ;; HACK: we call the same JS function using 2 different names (see your Qt version)
    (js "Lisp.pixmap().assignTo(this)" element)                   ; new name      (latest Qt 4.8)
    (js "Lisp.pixmap().assignToHTMLImageElement(this)" element))) ; original name (earlier versions)

(defun to-pixmap (web-element &optional scale-factor)
  "Render web element into a pixmap, optionally scaling it."
  (qrun* (let* ((element (ensure-web-element web-element))
                (size (nthcdr 2 (! "geometry" element)))
                (pixmap (qnew "QPixmap(QSize)" size)))
           (if (find 0 size)
               pixmap
               (progn
                 (! "fill" pixmap "transparent")
                 (qlet ((painter "QPainter(QPixmap*)" pixmap))
                   (x:do-with (! "setRenderHint" painter)
                     (|QPainter.Antialiasing| t)
                     (|QPainter.TextAntialiasing| t)
                     (|QPainter.SmoothPixmapTransform| t))
                   (! "render" element painter))
                 (if scale-factor
                     (! "scaled(QSize,Qt::AspectRatioMode,Qt::TransformationMode)" pixmap
                        (mapcar (lambda (x) (truncate (+ 0.5 (* scale-factor x))))
                                size)
                        |Qt.IgnoreAspectRatio| |Qt.SmoothTransformation|)
                     pixmap))))))

(let (dummy)
  (defun clear-pixmap (web-element)
    (unless dummy
      (qrun* (setf dummy (qnew "QPixmap(int,int)" 1 1))
             (! "fill" dummy "transparent")))
    (assign-pixmap web-element dummy)))

;;; generic utilities

(defun inspector ()
  (when (probe-file "inspector.lisp")
    (load "inspector")
    (inspector) ; redefined function
    t))

(defun clear-html ()
  (qrun* (! "setHtml" *web-view* "")))

(defun append-html (text/html &optional scroll-to-bottom)
  (append-inside "BODY" text/html)
  (when scroll-to-bottom
    (qrun* (qlater 'scroll-to-bottom))))

(defun pause (seconds)
  (qrun* (qsleep seconds)))

;;; wrappers for some QFrame methods

(defun to-html ()
  (qrun* (! "toHtml" (frame))))

(defun document-element ()
  (qrun* (! "documentElement" (frame))))

(defun find-all-elements (selector)
  "Return all matching web elements for given selector."
  (let ((els (qrun* (! "findAllElements" (frame) selector))))
    (unless (qrun* (zerop (! "count" els)))
      els)))

(defun find-first-element (selector)
  "Return first matching web element for given selector."
  (let ((el (qrun* (! "findFirstElement" (frame) selector))))
    (unless (qrun* (! "isNull" el))
      el)))

(defun scroll-to-top ()
  (qrun* (! "setScrollPosition" (frame) '(0 0))))

(defun scroll-to-bottom ()
  (qrun* (! "setScrollPosition" (frame) '(0 #.(expt 2 15)))))

(defun scroll-to-anchor (anchor)
  (qrun* (! "scrollToAnchor" (frame) anchor)))

;;; ini

(qconnect (frame) "javaScriptWindowObjectCleared()"
          (lambda ()
            (! "addToJavaScriptWindowObject" (frame) "Lisp" *webkit-bridge*)
            (! "addToJavaScriptWindowObject" (frame) "WebView" *web-view*)
            (js "function string (x) { return '\"' + x + '\"'; }"))) ; global JS function for H:LISP

