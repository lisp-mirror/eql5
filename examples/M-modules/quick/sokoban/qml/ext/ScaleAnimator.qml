import QtQuick 2.2
import EQL5 1.0

ScaleAnimator {
    onRunningChanged: Lisp.call("qsoko:animation-change", running)
}
