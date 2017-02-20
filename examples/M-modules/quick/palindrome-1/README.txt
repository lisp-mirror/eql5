INFO
====

This is a QML port of "examples/X-extras/palindrome/".


RUN
===

You need to generate the QML first, running:

    eql5 generate-qml.lisp

Then you can run it:

    eql5 run.lisp


HELP
====

For inspecting the single items, run

    (show-properties-dialog) ; see "properties.lisp"

and use button [Select] to select an item.

You can use QML-GET and QML-SET on a selected item:

    (qml-set qsel:*q* "opacity" 2/3)
