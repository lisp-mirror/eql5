import QtQuick 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4
import "ext/"
import EQL5 1.0

Rectangle {
    width: 444; height: 444
    color: "#404040"

    Slider {
        objectName: "level"
        x: 6; y: 6; height: 410
        orientation: Qt.Vertical
        stepSize: 1.0
        updateValueWhileDragging: false

        onValueChanged: { Lisp.call("qsoko:set-maze") }

        style: SliderStyle {
            groove: Rectangle {
                implicitWidth: 200
                implicitHeight: 2
                color: "white"
            }
            handle: Rectangle {
                anchors.centerIn: parent
                color: control.pressed ? "white" : "coral"
                implicitWidth: 16
                implicitHeight: 16
                radius: 8
            }
        }
    }

    Rectangle {
        id: board
        objectName: "board"
        x: -24; y: -44
        width: 512; height: 512
        color: "lightsteelblue"
        scale: 0.8
    }

    Text {
        x: 8; y: 424
        font.pixelSize: 12
        color: "white"
        text: "<b>N</b> ext | <b>P</b> revious | <b>R</b> estart | <b>S</b> olve"
    }

    // level change animations

    ScaleAnimatorExt {
	objectName: "zoom_board_out"
        target: board
        from: 0.8
        to: 0.0
        duration: 250
    }

    ScaleAnimatorExt {
	objectName: "zoom_board_in"
        target: board
        from: 0.0
        to: 0.8
        duration: 250
    }
}
