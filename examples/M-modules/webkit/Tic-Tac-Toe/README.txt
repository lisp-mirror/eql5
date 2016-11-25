WEBKIT APP DEMO
===============

After creating a basic Html skeleton of the GUI, any Html
properties/callbacks can be set from Lisp. 

No Qt/JavaScript code needed, just use the convenience
functions in "h-utils.lisp".


WEB ELEMENT FUNCTIONS
=====================

All QWebElement methods have convenience wrappers, e.g:

  (h:geometry "#c1")
  (h:set-style-property x :color "red")
  (h:hget "*" :onclick)

Given the introspective nature of a WebKit GUI, you can easily
automate GUI testing:

  ;; calls NEW-GAME
  (h:js (h:hget "#new-game" :onclick))

  ;; calls MOVE
  (h:js (h:hget "#c5" :onclick)
        (h:find-first-element "#c5"))

Calling a JS function with e.g. a string argument is as simple as:

  ;; call JS function
  (h:js (format nil "myJavaScriptFunction(~S)" string))


THREADS NOTE
============

Using the functions in "h-utils.lisp", you don't need to
care about "eval in GUI thread" (all EQL functions are wrapped
in QRUN*).

