#ifndef LIB_H
#define LIB_H

#include <QtGui>
#include <QtWebKit>
#include <eql_fun.h>

#ifdef Q_CC_MSVC
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

class CPP : public QObject {
    Q_OBJECT
public:
#include "_invokables.h"
};

extern "C" {
    LIB_EXPORT QObject* ini() {
        static QObject* cpp = 0;
        if(!cpp) {
            cpp = new CPP; }
        return cpp; }}

QT_END_NAMESPACE

#endif
