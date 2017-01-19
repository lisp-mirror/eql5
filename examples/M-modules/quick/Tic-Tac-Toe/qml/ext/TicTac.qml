// for (c) please see COPYING.txt

import QtQuick 2.0

Item {
    signal clicked

    states: [
        State { name: "X"; PropertyChanges { target: image; source: "../../pics/x.png" } },
        State { name: "O"; PropertyChanges { target: image; source: "../../pics/o.png" } }
    ]

    Image {
        id: image
        objectName: "image"
        anchors.centerIn: parent
    }

    MouseArea {
        anchors.fill: parent
        onClicked: parent.clicked()
    }
}
