import QtQuick 2.0
import "../ext/"

Image {
    id: player

    Behavior on x {
        NumberAnimationExt {
            duration: 120
            easing.type: Easing.InOutSine
        }
    }

    Behavior on y {
        NumberAnimationExt {
            duration: 120
            easing.type: Easing.InOutSine
        }
    }

    // final animation

    RotationAnimation {
        objectName: "rotate_player"
        target: player
        property: "rotation"
        from: 0; to: 360
        duration: 600
        loops: 5
    }
}
