*** N.B: MS folks: You'll need Windows >= 7 ***


INTRO / DESCRIPTION
===================

This is a very basic example of using EQL in a Qt plugin.
So, if some 3rd party Qt application offers a way to integrate Qt plugins, you
can use EQL for your plugin.

We assume that the 3rd party application offers us a QWidget as parent for
our plugin. In this example it's a QDockWidget, which is bound to
eql:*qt-main* in Lisp.



BUILD / RUN
===========

- build dummy application in "Qt/"
- build plugin in this directory
- run the "qt_application" executable



NOTES
=====

See also the function "set-data" in "ini.lisp": it shows a simple way for data
exchange between the application and the plugin.
It uses a dynamic Qt property, which can be accessed from both sides, C++ and
Lisp, since the property is added to the plugin parent widget of the application:
"pluginWidget" in C++, "*qt-main*" in Lisp.

