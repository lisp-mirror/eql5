BUILD / RUN
===========

Build the plugins in "cpp/", "cpp_calling_lisp/" before running the examples.

See "trafficlight/" for an example of integrating a Qt/C++ application.



NOTES
=====

This offers the same possibilities as found in the "Qt_EQL/" example,
but with a better, more dynamic workflow, and without the restriction of
"CONFIG += no_keywords" in your "*.pro" file.

So, integrating any existing Qt/C++ project is straightforward, since you can
call any property/method/slot/signal of any Qt class (see QFIND-CHILD,
QFIND-CHILDREN, QFUN+).

Calling Lisp from C++ through "eql_fun()" is easy, and you can use any Qt
class/type supported by EQL, see examples in "cpp_calling_lisp/lib.cpp".

To automatically generate generic function wrappers for your Qt functions,
see function DEFINE-QT-WRAPPERS.

Linux only: see also function QAUTO-RELOAD-C++.
