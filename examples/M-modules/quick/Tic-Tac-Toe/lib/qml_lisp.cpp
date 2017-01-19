#include "qml_lisp.h"
#include <eql_fun.h>

QT_BEGIN_NAMESPACE

static Lisp* lisp = 0;

static QObject* lisp_provider(QQmlEngine*, QJSEngine*) { return lisp; }

QObject* ini() {
    if(!lisp) {
        lisp = new Lisp;
        qmlRegisterSingletonType<Lisp>("EQL5", 1, 0, "EQL5", lisp_provider); }
    return lisp; }

QVariant Lisp::apply(const QString& function, const QVariantList& arguments) {
    QVariant ret =
    eql_fun("qml:qml-apply", QVariant::String,
            Q_ARG(QString, function),
            Q_ARG(QVariantList, arguments));
    if(ret.toString() == "NIL") {
        ret = QVariant(); }
    return ret; }

QT_END_NAMESPACE
