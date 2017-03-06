import QtQuick 2.0
import "../ext/"

Image {
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
}
