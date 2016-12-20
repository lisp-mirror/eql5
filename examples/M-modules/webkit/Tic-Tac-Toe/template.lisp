;;; WebKit Application

(require :h-utils "h-utils")

(defpackage :template
  (:nicknames)
  (:use :common-lisp :eql)
  (:export))

(in-package :template)

(defun ini (html-file size)
  (qconnect h:*web-view* "loadFinished(bool)" (lambda (ok) (ini-html)))
  (x:do-with h:*web-view*
    ("setUrl" (|fromUserInput.QUrl| html-file))
    ("setWindowTitle" "")
    ("resize" size)
    ("show")))

(defun ini-html ()
  )

(ini "template.htm" '(500 400))
