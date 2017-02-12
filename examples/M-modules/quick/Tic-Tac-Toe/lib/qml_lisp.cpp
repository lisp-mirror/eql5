#include "qml_lisp.h"
#include <eql_fun.h>

QT_BEGIN_NAMESPACE

static Lisp* lisp = 0;

static QObject* lisp_provider(QQmlEngine*, QJSEngine*) { return lisp; }

QObject* ini() {
    if(!lisp) {
        lisp = new Lisp;
        qmlRegisterSingletonType<Lisp>("EQL5", 1, 0, "Lisp", lisp_provider);
        qmlRegisterType<PaintedItem>("EQL5", 1, 0, "PaintedItem"); }
    return lisp; }

static QQmlContext* rootContext() {
    QVariant var = eql_fun("qml:root-context", QMetaType::VoidStar);
    return Q_PTR(QQmlContext*, var); }

static QVariant qmlApply(QObject* caller, const QString& function, const QVariantList& arguments) {
    QVariant var =
    eql_fun("qml:qml-apply", QVariant::String,
            Q_ARG(QObject*, caller),
            Q_ARG(QString, function),
            Q_ARG(QVariantList, arguments));
    QString str(var.toString());
    if(str.startsWith("#<>")) { // prepared in Lisp for JS eval
        QQmlExpression exp(rootContext(), caller, str.mid(3));
        return exp.evaluate(); }
    return var; }

QVariant Lisp::call(const QJSValue& caller_or_function, const QJSValue& function_or_arg0,
                    const QJSValue& arg1,
                    const QJSValue& arg2,
                    const QJSValue& arg3,
                    const QJSValue& arg4,
                    const QJSValue& arg5,
                    const QJSValue& arg6,
                    const QJSValue& arg7,
                    const QJSValue& arg8,
                    const QJSValue& arg9,
                    const QJSValue& arg10,
                    const QJSValue& arg11,
                    const QJSValue& arg12,
                    const QJSValue& arg13,
                    const QJSValue& arg14,
                    const QJSValue& arg15,
                    const QJSValue& arg16) {
    QObject* caller = 0;
    QString function;
    QVariantList arguments;
    if(caller_or_function.isQObject()) {
        caller = caller_or_function.toQObject();
        function = function_or_arg0.toString(); }
    else if(caller_or_function.isString()) {
        function = caller_or_function.toString();
        if(!function_or_arg0.isUndefined()) {
            arguments << function_or_arg0.toVariant(); }}
    if(!arg1.isUndefined()) {
        arguments << arg1.toVariant();
        if(!arg2.isUndefined()) {
            arguments << arg2.toVariant();
            if(!arg3.isUndefined()) {
                arguments << arg3.toVariant();
                if(!arg4.isUndefined()) {
                    arguments << arg4.toVariant();
                    if(!arg5.isUndefined()) {
                        arguments << arg5.toVariant();
                        if(!arg6.isUndefined()) {
                            arguments << arg6.toVariant();
                            if(!arg7.isUndefined()) {
                                arguments << arg7.toVariant();
                                if(!arg8.isUndefined()) {
                                    arguments << arg8.toVariant();
                                    if(!arg9.isUndefined()) {
                                        arguments << arg9.toVariant();
                                        if(!arg10.isUndefined()) {
                                            arguments << arg10.toVariant();
                                            if(!arg11.isUndefined()) {
                                                arguments << arg11.toVariant();
                                                if(!arg12.isUndefined()) {
                                                    arguments << arg12.toVariant();
                                                    if(!arg13.isUndefined()) {
                                                        arguments << arg13.toVariant();
                                                        if(!arg14.isUndefined()) {
                                                            arguments << arg14.toVariant();
                                                            if(!arg15.isUndefined()) {
                                                                arguments << arg15.toVariant();
                                                                if(!arg16.isUndefined()) {
                                                                    arguments << arg16.toVariant(); }}}}}}}}}}}}}}}}
    return qmlApply(caller, function, arguments); }

QVariant Lisp::apply(const QJSValue& caller_or_function,
                     const QJSValue& function_or_arguments,
                     const QJSValue& arguments_or_undefined) {
    QObject* caller = 0;
    QString function;
    QVariantList arguments;
    if(caller_or_function.isQObject()) {
        caller = caller_or_function.toQObject();
        function = function_or_arguments.toString();
        arguments = arguments_or_undefined.toVariant().value<QVariantList>(); }
    else if(caller_or_function.isString()) {
        function = caller_or_function.toString();
        arguments = function_or_arguments.toVariant().value<QVariantList>(); }
    return qmlApply(caller, function, arguments); }

void PaintedItem::paint(QPainter* painter) {
    eql_fun("qml:paint",
            Q_ARG(QQuickPaintedItem*, this),
            Q_ARG(QPainter*, painter)); }

QT_END_NAMESPACE
