import QtQuick 2.0

import EQL5 1.0
import "qrc:eql5.js" as Lisp

Rectangle {
    color: "gray"

    PaintedItem {
        // see QML:PAINT in Lisp

        property string fillColor: "red"
        x: 10; y: 10; width: 100; height: 100
    }

    PaintedItem {
        // see QML:PAINT in Lisp

        property string fillColor: "blue"
        x: 120; y: 10; width: 100; height: 100
    }
}
