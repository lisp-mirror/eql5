#include "lib.h"
#include "trafficlight.h"

QT_BEGIN_NAMESPACE

QObject* ini()
{
    static QWidget* widget = 0;

    if(!widget) {
        widget = new TrafficLight;
        widget->resize(110, 300);
        widget->show();
    }

    return widget;
}

QT_END_NAMESPACE
