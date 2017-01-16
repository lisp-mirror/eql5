#ifndef LIB_H
#define LIB_H

#include <QtQml>
#include <eql_fun.h>

#ifdef Q_OS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

class Lisp : public QObject {
    Q_OBJECT

public:
    Q_INVOKABLE QString apply(const QString& function, const QVariantList& arguments = QVariantList()) {
        QVariant ret =
        eql_fun("eql::qml-apply", QVariant::String,
                Q_ARG(QString, function),
                Q_ARG(QVariantList, arguments));
        return ret.toString(); }
};

static Lisp* lisp = 0;

static QObject *lisp_provider(QQmlEngine*, QJSEngine*) { return lisp; }

extern "C" {
    LIB_EXPORT QObject* ini() {
        if(!lisp) {
            qmlRegisterSingletonType<Lisp>("EQL5", 1, 0, "Lisp", lisp_provider);
            lisp = new Lisp; }
        return lisp; }
}

QT_END_NAMESPACE

#endif
