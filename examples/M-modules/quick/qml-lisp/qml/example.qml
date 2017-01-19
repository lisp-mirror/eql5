import QtQuick 2.0

import EQL5 1.0
import "../eql5.js" as Lisp

Item {
    id: root
    objectName: "root"

    Component.onCompleted: {

        // Please note:
        // Lisp.fun() is limited to 9 arguments; use Lisp.apply() for more arguments.

        // (1) call CL function
        console.log(Lisp.fun("format", false, "~R", 123))

        // (2) call EQL function
        Lisp.fun("qmsg", "hello from QML")

        // (3) pass list argument
        console.log(Lisp.fun("x:join", ["11", "55"], ":"))

        // (4) nested list arguments; note Lisp.apply() for any number of arguments
        console.log(Lisp.apply("list", [[[1, 2, 3], ["a", "b", "c"], 4, 5], 6, [[7, 8], 9]]))
    }

    Text {
        id: label
        objectName: "label"
        anchors.centerIn: parent
        color: "blue"
        text: "Lisp enabled QML"
    }
}
