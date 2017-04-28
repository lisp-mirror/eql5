#include "qt_plugin.h"
#include <eql5/eql.h>

QT_BEGIN_NAMESPACE

void onShowPlugin(QWidget* widget)
{
    static EQL* eql = 0;
    if(!eql) {
        eql = new EQL;
        eql->exec(widget, "ini.lisp");
    }
}

void onHidePlugin()
{
}

QT_END_NAMESPACE
