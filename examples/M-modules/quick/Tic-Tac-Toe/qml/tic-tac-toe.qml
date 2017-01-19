// for (c) please see COPYING.txt

import QtQuick 2.0
import "ext"

import EQL5 1.0
import "../eql5.js" as Lisp

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

                    onClicked: {
                        if (game.running && Lisp.fun("can-play-at-pos", index)) {
                            if (!Lisp.fun("make-move", index, "X"))
                                Lisp.fun("computer-turn");
                        }
                    }
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
            onTriggered: {
                messageDisplay.visible = false;
                Lisp.fun("restart-game");
            }
        }
    }
}
