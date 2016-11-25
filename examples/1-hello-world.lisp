#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

;;; hello world

(in-package :eql-user)

(qnew* "QLabel"                      ; QNEW* is QNEW followed by |show|
       "text" "<h1>hello world</h1>"
       "pos" '(50 50))
