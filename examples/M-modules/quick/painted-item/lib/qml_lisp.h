#ifndef LIB_H
#define LIB_H

#include <QtQml>
#include <QQuickPaintedItem>

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
    Q_INVOKABLE QVariant apply(QObject*, const QString&, const QVariantList& = QVariantList());
};

class PaintedItem : public QQuickPaintedItem {
    Q_OBJECT

public:
    PaintedItem(QQuickItem* parent = 0) : QQuickPaintedItem(parent) {}

    void paint(QPainter*);
};



QT_END_NAMESPACE

#endif
