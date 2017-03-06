import QtQuick 2.0
import "../ext/"

Image {
    id: box2

    Behavior on x {
        NumberAnimationExt {
            duration: 150
            easing.type: Easing.InQuart
        }
    }

    Behavior on y {
        NumberAnimationExt {
            duration: 150
            easing.type: Easing.InQuart
        }
    }

    // final animation

    SequentialAnimationExt {
        objectName: "wiggle"
        loops: 5

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
