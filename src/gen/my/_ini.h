#ifndef INI_H
#define INI_H

#include "../../ecl_fun.h"
#include <QtMy>

// Q_DECLARE_METATYPE(Q...)

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

typedef QList<int> NumList;

extern "C" {
    LIB_EXPORT void ini();
    LIB_EXPORT const QMetaObject* staticMetaObject(int);
    LIB_EXPORT void deleteNObject(int, void*, int);
    LIB_EXPORT NumList* overrideFunctions(const QByteArray&);
    LIB_EXPORT void* toMetaArg(int, cl_object);
    LIB_EXPORT cl_object to_lisp_arg(int, void*); }

QT_END_NAMESPACE

#endif
