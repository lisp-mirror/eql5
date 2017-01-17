#include "qml_lisp.h"
#include <eql_fun.h>

QT_BEGIN_NAMESPACE

static Lisp* lisp = 0;

static QObject* lisp_provider(QQmlEngine*, QJSEngine*) { return lisp; }

QObject* ini() {
    if(!lisp) {
        lisp = new Lisp;
        qmlRegisterSingletonType<Lisp>("EQL5", 1, 0, "Lisp", lisp_provider); }
    return lisp; }

QString Lisp::fun(const QString& function,
                  const QVariant& argument1, const QVariant& argument2, const QVariant& argument3,
                  const QVariant& argument4, const QVariant& argument5, const QVariant& argument6,
                  const QVariant& argument7, const QVariant& argument8, const QVariant& argument9) {
    QVariantList arguments;
    if(!argument1.isNull()) {
        arguments << argument1;
        if(!argument2.isNull()) {
            arguments << argument2;
            if(!argument3.isNull()) {
                arguments << argument3;
                if(!argument4.isNull()) {
                    arguments << argument4;
                    if(!argument5.isNull()) {
                        arguments << argument5;
                        if(!argument6.isNull()) {
                            arguments << argument6;
                            if(!argument7.isNull()) {
                                arguments << argument7;
                                if(!argument8.isNull()) {
                                    arguments << argument8;
                                    if(!argument9.isNull()) {
                                        arguments << argument9; }}}}}}}}}
    return apply(function, arguments); }

QString Lisp::apply(const QString& function, const QVariantList& arguments) {
    QVariant ret =
    eql_fun("eql::qml-apply", QVariant::String,
            Q_ARG(QString, function),
            Q_ARG(QVariantList, arguments));
    return ret.toString(); }

QT_END_NAMESPACE
