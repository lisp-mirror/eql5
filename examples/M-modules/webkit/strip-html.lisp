;;;
;;; REMOVE WEB ELEMENTS ------------------------------------------------
;;;
;;; (open-file)                ; a) select local file
;;; (open-url)                 ; b) enter URL
;;; (set-url "http://lisp.it") ; c) set URL directly
;;;
;;; (count* :img)              ; count matching web elements
;;; (count* "*")               ; see CSS2 selectors
;;;
;;; (strip :img)               ; removes all <img>
;;; (strip :div :id   "main")  ; removes <div id="main">
;;; (strip :a   :rel  "next")  ; removes <a rel="next" ...>
;;; (strip :a   :text "spam")  ; removes <a href="...">This is spam.</a>
;;;
;;; optionally use CSS2 selector syntax:
;;;
;;; (strip "*")                ; oops! (see context menu / reload)
;;; 
;;; (view :div :id "main")     ; displays "outerHtml" of single element
;;;
;;; (save-file)
;;;
;;;
;;; INSPECTOR ----------------------------------------------------------
;;;
;;; (inspector) ; see context menu / inspect
;;;
;;;
;;; ITERATE ------------------------------------------------------------
;;;
;;; (iterate-elements "A" (|setOuterXml| element text)) ; unlink
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

#+win32 (si:trap-fpe 'floating-point-underflow nil) ; for QWebInspector

(qrequire :webkit)

(in-package :eql-user)

(load "inspector")

(defvar *web-view* (qnew "QWebView"))

(defmacro iterate-elements (tag/selector &body body)
  "Iterates over web elements of QWebFrame, locally binding ELEMENT to QWebElement, and TEXT to its plain text."
  (let ((i (gensym)))
    `(let ((elements (|findAllElements| (frame) ,tag/selector)))
       (dotimes (,i (|count| elements))
         (let* ((element (|at| elements ,i))
                (text (|toPlainText| element)))
           ,@body)))))

(defun set-url (name)
  (unless (x:empty-string name)
    (|setWindowTitle| *web-view* name)
    (x:do-with *web-view*
      (|load| (|fromUserInput.QUrl| name))
      (|show|))))

(defun open-url ()
  (let ((name (|getText.QInputDialog| *web-view* nil (tr "Enter URL:") |QLineEdit.Normal|
                                      "http://planet.lisp.org/"
                                      nil))) ; ok
    (when (qok)
      (set-url name))))

(let ((filter "Html files (*.htm *.html)"))
  (defun open-file ()
    (set-url (|getOpenFileName.QFileDialog| nil nil nil filter)))
  (defun save-file ()
    (let ((file (|getSaveFileName.QFileDialog| nil nil nil filter)))
      (unless (x:empty-string file)
        (with-open-file (s (x:path file) :direction :output :if-exists :supersede)
          (write-string (|toHtml| (frame)) s)
          file)))))

(defun frame ()
  (|mainFrame| (|page| *web-view*)))

(defun to-string (x)
  (cond ((stringp x)
         x)
        ((keywordp x)
         (symbol-name x))
        (t
         "*")))

(defun count* (&optional (tag/selector "*"))
  (|count| (|findAllElements| (frame) (to-string tag/selector))))

(defun strip (tag/selector &optional attribute value)
  "Removes all web elements matching tag/selector. Returns number of removed elements."
  (let ((removed 0))
    (flet ((rm (el)
             (incf removed)
             (|removeFromDocument| el)))
      (let ((attr (to-string attribute)))
        (iterate-elements (to-string tag/selector)
          (if (eql :text attribute)
              (when (search value text :test 'string-equal)
                (rm element))
              (when (or (not attribute)
                        (string-equal value (|attribute| element attr)))
                (rm element))))))
    removed))

(defun web-view-dialog (html)
  "Displays html in temporary dialog."
  (qlet ((dialog "QDialog")
         (layout "QVBoxLayout(QWidget*)" dialog)
         (view   "QWebView"))
    (|addWidget| layout view)
    (|setHtml| view html)
    (|exec| dialog))) ; delete on closing (see QLET)

(defun view (tag/selector &optional attribute value)
  "Displays 'outerHtml' of first tag/selector found."
  (flet ((view* (el)
           (web-view-dialog (|toOuterXml| el))
           (return-from view)))
    (let ((attr (to-string attribute)))
      (iterate-elements (to-string tag/selector)
        (if (eql :text attribute)
            (when (search value text :test 'string-equal)
              (view* element))
            (when (or (not attribute)
                      (string-equal value (|attribute| element attr)))
              (view* element)))))))

(open-url)
