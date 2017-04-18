GENERATION OF C++ GLUE CODE
===========================


1) Add a special documentation string (first line) in the functions you want
   to call from JavaScript (optionally defining default values):

   (defun my-function (web-element arguments)
     "Qt: void myFunction(QWebElement, QVariantList = 0)"
     ...)

2) Run: eql5 qt.lisp (the first time just type :c for :continue on "break"/debugger)

3) Build library in "lib/".

