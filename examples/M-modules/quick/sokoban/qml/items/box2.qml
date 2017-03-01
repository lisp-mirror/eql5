import QtQuick 2.0
import EQL5 1.0

Image {
    id: box2

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

    // final animation

    SequentialAnimation {
        objectName: "wiggle"
        loops: 5
        onRunningChanged: { Lisp.call("qsoko:animation-change", running) }

        RotationAnimation {
            target: box2
            property: "rotation"
            from: -30; to: 30
            duration: 300
        }

        RotationAnimation {
            target: box2
            property: "rotation"
            from: 30; to: -30
            duration: 300
        }
    }
}
