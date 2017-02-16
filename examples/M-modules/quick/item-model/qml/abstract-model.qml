import QtQuick 2.0
import EQL5 1.0

ListView {
    width: 200; height: 250

    model: myModel
    delegate: Text { text: "animal: <b>" + kind + "</b>, " + size }
}
