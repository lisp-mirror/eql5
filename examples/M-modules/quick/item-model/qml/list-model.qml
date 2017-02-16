import QtQuick 2.0
import EQL5 1.0

ListView {
    width: 150; height: 250

    model: myModel
    delegate: Rectangle {
        height: 25
        width: 150
        Text { text: modelData }
    }
}
