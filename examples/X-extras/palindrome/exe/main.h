#ifndef MAIN_H
#define MAIN_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE

class Qt_EQL_Application : public QApplication {
    Q_OBJECT
public:
    Qt_EQL_Application(int argc, char** argv) : QApplication(argc, argv) {}

    // simple variant of "Qt_EQL" (in EXE instead of DLL)
    Q_INVOKABLE QEasingCurve* easingCurve();
};

QT_END_NAMESPACE

#endif
