#ifndef LIB_H
#define LIB_H

#include <QtQml>

#ifdef Q_OS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" { LIB_EXPORT QObject* ini(); }

class Lisp : public QObject {
    Q_OBJECT

public:
    Q_INVOKABLE QString fun(const QString&, // function name plus max. 9 arguments
                            const QVariant& = QVariant(), const QVariant& = QVariant(), const QVariant& = QVariant(),
                            const QVariant& = QVariant(), const QVariant& = QVariant(), const QVariant& = QVariant(),
                            const QVariant& = QVariant(), const QVariant& = QVariant(), const QVariant& = QVariant());

    Q_INVOKABLE QString apply(const QString&, const QVariantList& = QVariantList());
};

QT_END_NAMESPACE

#endif
