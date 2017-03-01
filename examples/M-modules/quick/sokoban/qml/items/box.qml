import QtQuick 2.0
import EQL5 1.0

Image {
    Behavior on x {
        NumberAnimation {
            duration: 150
            easing.type: Easing.InQuart
            onRunningChanged: { Lisp.call("qsoko:animation-change", running) }
        }
    }

    Behavior on y {
        NumberAnimation {
            duration: 150
            easing.type: Easing.InQuart
            onRunningChanged: { Lisp.call("qsoko:animation-change", running) }
        }
    }
}

