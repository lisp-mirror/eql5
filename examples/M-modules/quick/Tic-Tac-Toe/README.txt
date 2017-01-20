This is a port of a QtQuick1/Qt4 example.

The JS game logic has (obviously) been ported to Lisp, see "game-logic.lisp".


RUN
===

Please run it from this directory.

For Emacs/Slime, this would be:

    eql5 ~/slime/eql-start-swank.lisp tic-tac-toe


NOTES
=====

Try the following:

    (qml-set "game" "difficulty" 8) ; one of: 2, 8, 10

Since the logic of the buttons is defined in the QML file, changes to
properties will be reflected immediately by the UI.
