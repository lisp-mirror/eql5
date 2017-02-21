#ifndef LIB_H
#define LIB_H

#include <QtGui>

#ifdef Q_CC_MSVC
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" { LIB_EXPORT QObject* ini(); }

QT_END_NAMESPACE

#endif
