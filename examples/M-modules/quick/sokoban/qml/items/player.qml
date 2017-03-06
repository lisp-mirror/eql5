import QtQuick 2.0
import "../ext/"

Image {
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
}

