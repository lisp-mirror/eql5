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

    (qml:qml-get "label" "text")
    (qml:qml-set "label" "text" "hi!")
    (qml:qml-set "label" "color" "red")

