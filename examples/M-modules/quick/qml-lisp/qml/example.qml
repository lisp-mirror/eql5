import QtQuick 2.0
import EQL5 1.0

Item {
    id: root

    Component.onCompleted: {

        console.log(Lisp.apply("format", [null, "~R", 123]))   // (1) call CL function

        console.log(Lisp.apply("x:join", [["11", "55"], ":"])) // (2) nested arrays are possible

        Lisp.apply("qmsg", ["hello from QML"])                 // (3) call EQL function
    }

    Text {
        anchors.centerIn: parent
        color: "blue"
        text: "Lisp enabled QML"
    }
}
