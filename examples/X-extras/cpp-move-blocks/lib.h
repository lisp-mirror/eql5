#ifndef LIB_H
#define LIB_H

#include <QtGui>

#ifdef Q_OS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" { LIB_EXPORT QObject* ini(); }

class CPP : public QObject {
    Q_OBJECT
public:

    Q_INVOKABLE QEasingCurve* easingCurve();
};

QT_END_NAMESPACE

#endif
