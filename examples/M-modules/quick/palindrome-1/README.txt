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


'id' / 'objectName'
===================

Since we set an 'id' to the 'SequentialAnimation' in macro QML, an 'objectName'
of the same name has been added for us.

Now we can do:

    (qml-set "seq" "paused" t)   ; pause

    (qml-set "seq" "paused" nil) ; resume

