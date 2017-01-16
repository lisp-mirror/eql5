import QtQuick 2.0

Rectangle {
    id: root

    Rectangle {
        property int d: 120
        id: square
        width: d
        height: d
        anchors.centerIn: parent
        color: "cornflowerblue"
        NumberAnimation on rotation { from: 0; to: -360; duration: 4000; loops: Animation.Infinite; }
    }

    Text {
        anchors.centerIn: parent
        text: "Qt Quick running in a widget"
    }
}

