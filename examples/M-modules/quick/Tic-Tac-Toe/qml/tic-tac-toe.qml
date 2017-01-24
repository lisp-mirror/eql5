// for (c) please see COPYING.txt

import QtQuick 2.0
import "ext"

import EQL5 1.0
import "qrc:///eql5.js" as Lisp

Rectangle {
    id: game
    objectName: "game"

    property bool running: true
    property int difficulty: 10 // chance it will actually think

    width: display.width; height: display.height + 10

    Image {
        id: boardImage
        objectName: "boardImage"
        source: "../pics/board.png"
    }

    Column {
        id: display
        objectName: "display"

        Grid {
            id: board
            objectName: "board"
            width: boardImage.width; height: boardImage.height
            columns: 3

            Repeater {
                model: 9

                TicTac {
                    width: board.width / 3
                    height: board.height / 3

                    onClicked: { Lisp.fun("tic-tac-clicked", index) }
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
        id: messageDisplay
        objectName: "messageDisplay"
        anchors.centerIn: parent
        color: "blue"
        style: Text.Outline; styleColor: "white"
        font.pixelSize: 50; font.bold: true
        visible: false

        Timer {
            running: messageDisplay.visible
            onTriggered: { Lisp.fun("restart-game") }
        }
    }
}
