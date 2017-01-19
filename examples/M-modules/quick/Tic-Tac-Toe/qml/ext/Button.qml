// for (c) please see COPYING.txt

import QtQuick 2.0

Rectangle {
    id: container
    objectName: "container"

    property string text
    property bool pressed: false

    signal clicked

    width: buttonLabel.width + 20; height: buttonLabel.height + 6
    border { width: 1; color: Qt.darker(container.color) }
    radius: 8
    color: "lightgray"
    smooth: true

    gradient: Gradient {
        GradientStop {
            position: 0.0
            color: container.pressed ? "darkgray" : "white"
        }
        GradientStop {
            position: 1.0
            color: container.color
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: container.clicked()
    }

    Text {
        id: buttonLabel
        objectName: "buttonLabel"
        anchors.centerIn: container
        text: container.text
        font.pixelSize: 14
    }
}
