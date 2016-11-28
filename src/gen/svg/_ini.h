#ifndef INI_H
#define INI_H

#include <QtSvg>

#ifdef Q_OS_WIN
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
    LIB_EXPORT NumList* overrideFunctions(const QByteArray&); }

QT_END_NAMESPACE

#endif
