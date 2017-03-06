import QtQuick 2.0
import "../ext/"

Image {
    Behavior on x {
        NumberAnimation_notify {
            duration: 150
            easing.type: Easing.InQuart
        }
    }

    Behavior on y {
        NumberAnimation_notify {
            duration: 150
            easing.type: Easing.InQuart
        }
    }
}
