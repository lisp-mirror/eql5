#include "lib.h"

QT_BEGIN_NAMESPACE

QObject* ini()
{
    // any QObject inherited class will do (e.g. main window of a C++ application)
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("Qt_EQL_dynamic");
    }
    return cpp;
}

// insert here your function implementations

QVariantList CPP::hello(const QVariantList& list)
{
    QString msg;
    QDebug debug(&msg);
    debug << list;
    QMessageBox::information(0, "QVariantList", msg);

    QVariantList ret(list);
    if(!ret.isEmpty()) {
        ret[0] = "hello from Lisp";
    }
    return ret;
}

QT_END_NAMESPACE
