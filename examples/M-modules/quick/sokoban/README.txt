INFO
====

This is a QML port of example "examples/7-Sokoban/".

The main difference is the use of simple animations when moving items.


RUN
===

Please run it from this directory. For Emacs/Slime, this would be:

    eql5 ~/slime/eql-start-swank.lisp sokoban.lisp


NOTES
=====

This example shows how to dynamically create QML items from Lisp.

The ability to call Lisp from QML comes in handy for the Lisp functions
which need to wait for eventual running animations to finish.

See e.g. class:

    "qml/ext/NumberAnimation_notify.qml"


TIP
===

See also function QML-SET-ALL, which is convenient for dynamically created
QML items, since many of them may have the same 'objectName'.

Examples:

    (qml-set-all "wall" "opacity" 1/2)

    (qml-set-all "object" "scale" 2/3)
