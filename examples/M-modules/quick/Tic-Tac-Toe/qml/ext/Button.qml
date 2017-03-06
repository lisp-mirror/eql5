// for (c) please see COPYING.txt

import QtQuick 2.0

Rectangle {
    id: container
    objectName: "container"

    property string text
    property bool pressed: false

    signal clicked

    width: button_label.width + 20; height: button_label.height + 6
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
        id: button_label
        objectName: "button_label"
        anchors.centerIn: container
        text: container.text
        font.pixelSize: 14
    }
}
