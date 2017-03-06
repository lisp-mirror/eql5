// for (c) please see COPYING.txt

import QtQuick 2.0
import "ext"
import EQL5 1.0

Rectangle {
    id: game
    objectName: "game"
    width: 420; height: 480

    property bool running: true
    property int difficulty: 10 // chance it will actually think

    Image {
        id: board_image
        objectName: "board_image"
        source: "../pics/board.png"
    }

    Column {
        id: display
        objectName: "display"

        Grid {
            id: board
            objectName: "board"
            width: board_image.width; height: board_image.height
            columns: 3

            Repeater {
                model: 9

                TicTac {
                    width: board.width / 3
                    height: board.height / 3

                    onClicked: { Lisp.call("tic-tac-clicked", index) }
                }
            }
        }

        Row {
            spacing: 4
            anchors.horizontalCenter: parent.horizontalCenter

            Button {
                text: "Hard"
                pressed: game.difficulty == 10
                onClicked: { game.difficulty = 10 }
            }
            Button {
                text: "Moderate"
                pressed: game.difficulty == 8
                onClicked: { game.difficulty = 8 }
            }
            Button {
                text: "Easy"
                pressed: game.difficulty == 2
                onClicked: { game.difficulty = 2 }
            }
        }
    }

    Text {
        id: message_display
        objectName: "message_display"
        anchors.centerIn: parent
        color: "blue"
        style: Text.Outline; styleColor: "white"
        font.pixelSize: 50; font.bold: true
        visible: false

        Timer {
            running: message_display.visible
            onTriggered: { Lisp.call("restart-game") }
        }
    }
}
