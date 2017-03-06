import QtQuick 2.0
import "../ext/"

Image {
    Behavior on x {
        NumberAnimation_notify {
            duration: 120
            easing.type: Easing.InOutSine
        }
    }

    Behavior on y {
        NumberAnimation_notify {
            duration: 120
            easing.type: Easing.InOutSine
        }
    }
}

