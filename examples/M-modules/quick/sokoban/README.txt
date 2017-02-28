INFO
====

This is a QML port of example "examples/7-Sokoban/".

The main difference is the use of simple animations when moving items.


NOTES
=====

This example shows how to dynamically create QML items from Lisp.

The ability to call Lisp from QML comes in handy for the Lisp functions
which need to wait for eventual running animations to finish.

See:

    "qml/items/player.qml"
    "qml/items/box.qml"
