import QtQuick 2.0
import EQL5 1.0

NumberAnimation {
    onRunningChanged: Lisp.call("qsoko:animation-change", running)
}

