;;; hello world

(in-package :eql-user)

(qnew* "QLabel"                      ; 'qnew*' is 'qnew' followed by 'show'
       "text" "<h1>hello world</h1>"
       "pos" '(50 50))
