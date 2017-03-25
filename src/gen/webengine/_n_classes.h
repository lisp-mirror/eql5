// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LWebEngineCertificateError : public QWebEngineCertificateError {
    friend class N267;
public:

    static NumList overrideIds;
    uint unique;
};

class LWebEngineFullScreenRequest : public QWebEngineFullScreenRequest {
    friend class N268;
public:

    static NumList overrideIds;
    uint unique;
};

class LWebEngineScript : public QWebEngineScript {
    friend class N269;
public:
    LWebEngineScript(uint u) : unique(u) {}
    LWebEngineScript(uint u, const QWebEngineScript& x1) : QWebEngineScript(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

QT_END_NAMESPACE

#endif
