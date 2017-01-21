import QtQuick 2.0

import EQL5 1.0
import "../eql5.js" as Lisp

Item {
    id: root
    objectName: "root"

    Component.onCompleted: {

        // Please note:
        //
        // * to call lisp functions, use either Lisp.fun() or Lisp.apply();
        //   use JS arrays for lists (can be nested);
        //
        // * return values can be nested Lisp lists or vectors, which will be converted to
        //   nested JS arrays: they will be prepared in Lisp and passed to JS eval;

        // (1) call CL function
        console.log(Lisp.fun("format", false, "~R", 123))

        // (2) call EQL function
        Lisp.fun("qmsg", "hello from QML")

        // (3) pass list argument
        console.log(Lisp.fun("x:join", ["11", "55"], ":"))

        // (4) nested list arguments
        //     N.B: don't get fooled by the printed representation of the return value:
        //          it's a nested JS array internally
        console.log(Lisp.fun("list", [[1, 2, 3], ["a", "b", "c"], 4, 5], 6, [[7, 8], 9]))
    }

    Text {
        id: label
        objectName: "label"
        anchors.centerIn: parent
        color: "blue"
        text: "Lisp enabled QML"
    }
}
