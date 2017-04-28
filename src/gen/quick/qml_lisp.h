#ifndef QML_LISP_H
#define QML_LISP_H

#include "../../ecl_fun.h"
#include "../../qt_eql.h"
#include <QtQml>
#include <QQuickPaintedItem>

QT_BEGIN_NAMESPACE

#define Q_PTR(type, var) (eql_check_type(var.value<eql_pointer>().id, #type) \
                         ? (type)var.value<eql_pointer>().pointer \
                         : 0)

QObject* iniQml();

class Lisp : public QObject {
    Q_OBJECT

public:
    Q_INVOKABLE QVariant call(const QJSValue&,
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue(),
                              const QJSValue& = QJSValue());

    Q_INVOKABLE QVariant apply(const QJSValue&,
                               const QJSValue& = QJSValue(),
                               const QJSValue& = QJSValue());
};

class EQLPaintedItem : public QQuickPaintedItem {
    Q_OBJECT

public:
    EQLPaintedItem(QQuickItem* parent = 0) : QQuickPaintedItem(parent) {}

    void paint(QPainter* painter) {
        eql_fun("qml:paint",
                Q_ARG(QQuickPaintedItem*, this),
                Q_ARG(QPainter*, painter)); }
};

QT_END_NAMESPACE

#endif
