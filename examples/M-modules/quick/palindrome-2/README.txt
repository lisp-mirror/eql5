INFO
====

This is a QML port of "examples/X-extras/palindrome/".

Instead of generating static QML (see "palinfrome-1"), it uses a timer
from Lisp (through QSLEEP, QSINGLE-SHOT) to change the item positions, and
a 'Behavior' in QML for the animations.


RUN
===

Run "palindrome.lisp" from this directory.


HELP
====

For inspecting the single items, run

    (show-properties-dialog) ; see "properties.lisp"

and use button [Select] to select an item.

You can use QML-GET and QML-SET on a selected item:

    (qml-set qsel:*q* "opacity" 2/3)

    (qml-set qsel:*q* "scale" 2)

For global settings (root item), pass 'nil' instead of 'qsel:*q*':

    (qml-set nil "scale" 1.5)
