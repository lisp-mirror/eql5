import QtQuick 2.2
import "ext/"

Rectangle {
    id: root
    x: -54; y: -44
    width: 608; height: 512
    color: "lightsteelblue"

    scale: 0.8

    Text {
        y: 516
        font.pixelSize: 15
        color: "white"
        text: "<b>N</b> ext | <b>P</b> revious | <b>R</b> estart"
    }

    // level change animations

    ScaleAnimatorExt {
	objectName: "zoom_board_out"
        target: root
        from: 0.8
        to: 0
        duration: 250
    }

    ScaleAnimatorExt {
	objectName: "zoom_board_in"
        target: root
        from: 0
        to: 0.8
        duration: 250
    }
}
