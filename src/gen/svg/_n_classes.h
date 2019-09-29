// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtSvg>
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LSvgGenerator : public QSvgGenerator {
    friend class N217;
public:
    LSvgGenerator(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(QPaintDevice::PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 528); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 528, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgGenerator::metric(x1); } return ret; }
};

QT_END_NAMESPACE

#endif
