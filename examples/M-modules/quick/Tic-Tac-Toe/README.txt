This is a port of a QtQuick1/Qt4 example.

The JS game logic has (obviously) been ported to Lisp, see "game-logic.lisp".


RUN
===

Please run it from this directory.

For Emacs/Slime, this would be:

    eql5 ~/slime/eql-start-swank.lisp tic-tac-toe


QML FILES
=========

Always add these 2 "import" lines for Lisp access:

    import EQL5 1.0
    import "qrc:///eql5.js" as Lisp

The "eql5.js" file is compiled as a resource into the eql5 shared library,
see "eql5/src/eql5.js" and "eql5/src/eql5.qrc".


NOTES
=====

Try the following:

    (qml-set "game" "difficulty" 8) ; one of: 2, 8, 10

Since the logic of the buttons is defined in the QML file, changes to
properties will be reflected immediately by the UI.

Please see also "../qml-lisp/qml/example.lisp" for documentation on calling
Lisp functions from QML.


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

