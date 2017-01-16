import QtQuick 2.0
import EQL5 1.0

Item {
    id: root

    Component.onCompleted: {
        console.log(Lisp.apply("format", [null, "~R", 123])) // call CL function
        Lisp.apply("qmsg", ["hello from QML"])               // call EQL function
    }

    Text {
        anchors.centerIn: parent
        color: "blue"
        text: "Lisp enabled QML"
    }
}

