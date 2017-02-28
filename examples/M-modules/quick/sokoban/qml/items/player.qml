import QtQuick 2.0
import EQL5 1.0

Image {
    Behavior on x {
        NumberAnimation {
            duration: 120
            easing.type: Easing.InOutSine
            onRunningChanged: { Lisp.call("qsoko:animation-change", running) }
        }
    }
    Behavior on y {
        NumberAnimation {
            duration: 120
            easing.type: Easing.InOutSine
            onRunningChanged: { Lisp.call("qsoko:animation-change", running) }
        }
    }
}

