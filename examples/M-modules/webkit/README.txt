EQL WebKit examples
===================


This enables any application to embed web content, which can be fully
controlled from Lisp.

Or, if you already know Common Lisp, and have some basic knowledge of
Html/JavaScript, you can easily create a GUI, without learning much of
Qt, and without relying on a web-server.

A list of features:

1) full Lisp access to QtWebKit, see e.g. QWebElement in Qt Assistant;
   a simple example:

       document.getElementById("x")        // JavaScript
       (|findFirstElement| (frame) "#x") ;  Lisp

   (passing QWebElements between JavaScript and Lisp is just native)

2) JavaScript / Lisp bridge: call Lisp functions directly from Html/JS;
   see QWebInspector [Scripts] and [Console] for debugging and executing JS;
   (test your Lisp functions by directly calling them from the QWebInspector
   console)

3) embed your own custom QWidgets in Html (see "plugin-widget" example),
   as they integrate natively here (either written in EQL or Qt/C++,
   see QLOAD-C++)


"Html Utils"
============

See directory "Tic-Tac-Toe/" for an example of a plain WebKit application,
using only some simple convenience utility functions, defined in
"Tic-Tac-Toe/h-utils.lisp".
