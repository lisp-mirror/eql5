import QtQuick 2.0
import EQL5 1.0

Item {
    id: root
    objectName: "root"
    width: 400; height: 400

    Component.onCompleted: {

        // Please note:
        //
        // * to call Lisp functions, use either Lisp.call() or Lisp.apply();
        //   use JS arrays for lists (can be nested);
        //
        // * the only limit to Lisp.call() is the number of arguments (max. 16);
        //   this is just an implementation detail; feel free to extend it (see sources);
        //
        // * return values can be nested Lisp lists or vectors, which will be converted to
        //   nested JS arrays: they will be prepared in Lisp and passed to JS eval;
        //
        // * optionally pass 'this' (or any other item) as first argument to either
        //   Lisp.call() or Lisp.apply(); it can then be accessed in Lisp via qml:*caller*;

        // (1) call CL function
        console.log(Lisp.call("format", null, "~R", 123))

        // (2) call EQL function
        Lisp.call("qmsg", "hello from QML")

        // (3) pass list argument
        console.log(Lisp.call("x:join", ["11", "55"], ":"))

        // (4) nested list arguments
        //     N.B: don't get fooled by the printed representation of the return value:
        //          it's a nested JS array internally (".length" will give 3)
        console.log(Lisp.call("list", [[1, 2, 3], ["a", "b", "c"], 4, 5], 6, [[7, 8], 9]))

        // (5) pass 'this' as first argument (can be accessed in Lisp via qml:*caller*)
        Lisp.call(this, "eql-user:show-properties-dialog")
    }

    Text {
        id: label
        objectName: "label"

        anchors.centerIn: parent
        color: "blue"
        text: "Lisp enabled QML"
        font.bold: true
        font.pixelSize: 32

        NumberAnimation on rotation {
            from: 0; to: 360;
            easing.type: Easing.InOutElastic;
            duration: 3000;
            loops: Animation.Infinite;
        }
    }
}
