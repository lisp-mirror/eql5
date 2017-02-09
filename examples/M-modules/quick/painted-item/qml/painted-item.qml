import QtQuick 2.2
import EQL5 1.0

Rectangle {
    color: "gray"

    PaintedItem {
        x: 10; y: 10; width: 100; height: 100
        property string fillColor: "red"
    }

    PaintedItem {
        id: clock
        objectName: "clock"
        x: 120; y: 10; width: 100; height: 100

        SequentialAnimation {
            running: true
            loops: Animation.Infinite

            ScaleAnimator {
                target: clock
                from: 0.95; to: 1.0
                duration: 500
                easing.type: Easing.InOutSine
            }

            ScaleAnimator {
                target: clock
                from: 1.0; to: 0.95
                duration: 500
                easing.type: Easing.InOutSine
            }
        }
    }

    PaintedItem {
        x: 230; y: 10; width: 100; height: 100
        property string fillColor: "blue"
    }
}
