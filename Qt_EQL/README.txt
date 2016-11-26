BUILD / RUN
===========

Build the plugins in "cpp/", "cpp_calling_lisp/" before running the examples.

See "trafficlight/" for an example of integrating a Qt/C++ application.



NOTES
=====

Integrating with existing Qt/C++ projects should be straightforward, since
you can call all standard methods/slots/signals of any Qt class (see
QFIND-CHILD, QFIND-CHILDREN, QFUN+), and additionally make your own C++
functions callable by declaring them Q_INVOKABLE.

Calling Lisp from C++ through "eql_fun()" is easy, and you can use any Qt
class/type supported by EQL, see examples in "cpp_calling_lisp/lib.cpp".

To automatically generate generic function wrappers for your Qt functions,
see function DEFINE-QT-WRAPPERS.

Linux only: see also function QAUTO-RELOAD-C++.
