import QtQuick 2.0
import EQL5 1.0

Item {
    id: root

    Component.onCompleted: {

        // PLEASE NOTE:
        //
        // * for calling any CL or EQL function with max. 9 arguments, use Lisp.fun()
        // * for either more than 9 arguments or passing (nested) lists, use Lisp.apply()

        // (1) call CL function
        console.log(Lisp.fun("format", false, "~R", 123))

        // (2) call EQL function
        Lisp.fun("qmsg", "hello from QML")

        // (3) pass list argument (note Lisp.apply)
        console.log(Lisp.apply("x:join", [["11", "55"], ":"]))

        // (4) nested list arguments (note Lisp.apply)
        console.log(Lisp.apply("list", [[[1, 2, 3], ["a", "b", "c"], 4, 5], 6, [[7, 8], 9]]))
    }

    Text {
        anchors.centerIn: parent
        color: "blue"
        text: "Lisp enabled QML"
    }
}
