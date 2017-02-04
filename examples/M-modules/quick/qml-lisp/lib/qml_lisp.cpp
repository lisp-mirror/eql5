#include "qml_lisp.h"
#include <eql_fun.h>

QT_BEGIN_NAMESPACE

static Lisp* lisp = 0;

static QObject* lisp_provider(QQmlEngine*, QJSEngine*) { return lisp; }

QObject* ini() {
    if(!lisp) {
        lisp = new Lisp;
        qmlRegisterSingletonType<Lisp>("EQL5", 1, 0, "EQL5", lisp_provider);
        qmlRegisterType<PaintedItem>("EQL5", 1, 0, "PaintedItem"); }
    return lisp; }

QVariant Lisp::apply(QObject* caller, const QString& function, const QVariantList& arguments) {
    return eql_fun("qml:qml-apply", QVariant::String,
                   Q_ARG(QObject*, caller),
                   Q_ARG(QString, function),
                   Q_ARG(QVariantList, arguments)); }

void PaintedItem::paint(QPainter* painter) {
    eql_fun("qml:paint",
            Q_ARG(QQuickPaintedItem*, this),
            Q_ARG(QPainter*, painter)); }

QT_END_NAMESPACE
