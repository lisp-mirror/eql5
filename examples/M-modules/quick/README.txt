Please note that you will need to build a small C++ plugin for most of the
examples (see "lib/"); this is just for providing the "import EQL5" in QML.

If you are new to QML/EQL5, you probably want to go through the examples
(and READMEs) in this order:

    * qml-lisp
    * Tic-Tac-Toe
    * item-model
    * painted-item

The trivial "quickwidget" example just demonstrates that you can integrate
a QML widget in any Qt application, combining both traditional Qt and QML.

* "palindrome-1" is a demo of generating QML code from Lisp (static QML);

* "palindrome-2" is the same using a 'Behavior' in QML, and a QTimer from Lisp
  (dynamic QML);
