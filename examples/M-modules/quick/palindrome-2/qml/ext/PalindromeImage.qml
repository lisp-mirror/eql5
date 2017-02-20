import QtQuick 2.0

Image {
    Behavior on x { NumberAnimation { duration: 3000; easing.type: Easing.InOutSine } }
    Behavior on y { NumberAnimation { duration: 3000; easing.type: Easing.InOutSine } }
}

