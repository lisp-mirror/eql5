import QtQuick 2.2
import EQL5 1.0

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

    // level change animations:

    ScaleAnimator {
	objectName: "zoomOut"
        target: root
        from: 0.8
        to: 0
        duration: 250
        onRunningChanged: { Lisp.call("qsoko:animation-change", running) }
    }

    ScaleAnimator {
	objectName: "zoomIn"
        target: root
        from: 0
        to: 0.8
        duration: 250
        onRunningChanged: { Lisp.call("qsoko:animation-change", running) }
    }
}
