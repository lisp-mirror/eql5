A trivial example of calling Lisp functions from QML.


RUN
===

Please run it from this directory.

For Emacs/Slime, this would be:

    eql5 ~/slime/eql-start-swank.lisp example


GET/SET QML OBJECT PROPERTIES
=============================

You can access any QML property from Lisp (needs 'objectName' to be set).

Examples:

    (in-package :qml)

    (qml-get "label" "text")
    (qml-set "label" "color" "red")
    (qml-set "label" "font.pixelSize" 24)


QML FILES
=========

Always add these 2 "import" lines for Lisp access:

    import EQL5 1.0
    import "qrc:///eql5.js" as Lisp

The "eql5.js" file is compiled as a resource into the eql5 shared library,
see "eql5/src/eql5.js" and "eql5/src/eql5.qrc".


NOTES
=====

Please see also the documentation in "qml/example.qml".


TIP
===

In order to have uniform access to QQuickItems from both QML and Lisp
functions, it is convenient to set both 'id:' and 'objectName:' to the
same name.

QML Example:

    Item {
        id: myItem
        objectName: "myItem"
    }

