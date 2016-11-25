#ifndef LIB_H
#define LIB_H

#include <QtWidgets>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" { LIB_EXPORT QObject* ini(); }

class CPP : public QObject
{
    Q_OBJECT
public:
    // insert here your function declarations, prepended by Q_INVOKABLE
    Q_INVOKABLE QVariantList hello(const QVariantList&);
};

QT_END_NAMESPACE

#endif
