#ifndef LIB_H
#define LIB_H

#include <QtQml>
#include <QQuickPaintedItem>
#include <eql_fun.h>

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

class PaintedItem : public QQuickPaintedItem {
    Q_OBJECT

public:
    PaintedItem(QQuickItem* parent = 0) : QQuickPaintedItem(parent) {}

    void paint(QPainter* painter) {
        eql_fun("qml:paint",
                Q_ARG(QQuickPaintedItem*, this),
                Q_ARG(QPainter*, painter)); }
};

QT_END_NAMESPACE

#endif
