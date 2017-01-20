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

    ;; single object
    (qml-get "label" "text")
    (qml-set "label" "text" "hi!")
    (qml-set "label" "color" "red")

    ;; all objects matching 'objectName'
    (qml-get* "label" "text")
    (qml-set* "label" "text" "")


NOTES
=====

Please see also the documentation in "qml/example.qml".


TIP
===

In order to have uniform access to QML objects from both JS and Lisp
functions, it is convenient to set both 'id:' and 'objectName:' to the
same name.

QML Example:

    Item {
        id: myItem
        objectName: "myItem"
    }

