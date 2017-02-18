import QtQuick 2.2
import EQL5 1.0

Rectangle {
    color: "gray"
    width: 340; height: 340

    PaintedItem {
        x: 10; y: 10; width: 100; height: 100
        objectName: "left"

        property rect ellipse: Qt.rect(10, 10, 80, 80)
        property string color: "coral"
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
                from: 0.9; to: 1.0
                duration: 500
                easing.type: Easing.InOutSine
            }

            ScaleAnimator {
                target: clock
                from: 1.0; to: 0.9
                duration: 500
                easing.type: Easing.InOutSine
            }
        }
    }

    PaintedItem {
        x: 230; y: 10; width: 100; height: 100
        objectName: "right"

        property rect ellipse: Qt.rect(10, 10, 80, 80)
        property string color: "cornflowerblue"
    }
}
