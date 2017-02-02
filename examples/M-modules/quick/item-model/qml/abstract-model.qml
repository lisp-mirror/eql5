import QtQuick 2.0

import EQL5 1.0
import "qrc:eql5.js" as Lisp

ListView {
    x: 5; y: 5; width: 200; height: 250

    model: myModel
    delegate: Text { text: "animal: <b>" + kind + "</b>, " + size }
}
