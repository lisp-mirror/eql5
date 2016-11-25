Some examples for JS callbacks
==============================

  (h:hset "#x" :onclick (h:lisp (button-clicked)))                                 ; trivial

  (h:hset "#x" :onclick (h:lisp (button-clicked :this)))                           ; pass QWebElement (1)

  (h:hset "#x" :onclick (h:lisp* (button-clicked "document.getElementById('y')"))) ; pass QWebElement (2)

  (h:hset "#x" :onclick (h:lisp (button-clicked (string "OK"))))                   ; pass Lisp string literal

  (h:hset "#x" :onclick (h:lisp (foo 1/2 "window.event.clientX"))))                ; pass Lisp number and JS variable

  (h:hset "#x" :onclick (h:lisp (qmsg "string(x)")))                               ; pass JS string variable


Summarizing
===========

 - any number of arguments allowed
 - if you need to pass a QWebElement, use H:LISP* (not required for :this), and pass it as first argument
 - string arguments like "x" or "window.event.keyCode" are assumed to be JS code
 - all arguments are quoted in JS and passed to READ-FROM-STRING in Lisp, so e.g. 1/2 will be preserved 
 - to pass a string, use (string "OK") for literal Lisp strings, and "string(x)" for JS string variables


Testing
=======

To test your callbacks, you can use the function H:JS (added PRINT to show the JS code, too):

  (h:js (print (h:lisp (format nil (string "~R") 100))))

