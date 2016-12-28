// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtSvg>

QT_BEGIN_NAMESPACE

class Q83 : public Q77 { // QGraphicsSvgItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsSvgItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QGraphicsItem* x2 = 0) { return new LGraphicsSvgItem(u, x1, x2); }
    Q_INVOKABLE QString MelementId(QGraphicsSvgItem* o) const { return o->elementId(); }
    Q_INVOKABLE QSize MmaximumCacheSize(QGraphicsSvgItem* o) const { return o->maximumCacheSize(); }
    Q_INVOKABLE QSvgRenderer* Mrenderer(QGraphicsSvgItem* o) const { return o->renderer(); }
    Q_INVOKABLE void MsetElementId(QGraphicsSvgItem* o, const QString& x1) { o->setElementId(x1); }
    Q_INVOKABLE void MsetMaximumCacheSize(QGraphicsSvgItem* o, const QSize& x1) { o->setMaximumCacheSize(x1); }
    Q_INVOKABLE void MsetSharedRenderer(QGraphicsSvgItem* o, QSvgRenderer* x1) { o->setSharedRenderer(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsSvgItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE void Mpaint(QGraphicsSvgItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE int Mtype(QGraphicsSvgItem* o) const { return o->type(); }
};

class Q201 : public Q140 { // QSvgRenderer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LSvgRenderer(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QObject* x2 = 0) { return new LSvgRenderer(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1, QObject* x2 = 0) { return new LSvgRenderer(u, x1, x2); }
    Q_INVOKABLE bool Manimated(QSvgRenderer* o) const { return o->animated(); }
    Q_INVOKABLE QRectF MboundsOnElement(QSvgRenderer* o, const QString& x1) const { return o->boundsOnElement(x1); }
    Q_INVOKABLE QSize MdefaultSize(QSvgRenderer* o) const { return o->defaultSize(); }
    Q_INVOKABLE bool MelementExists(QSvgRenderer* o, const QString& x1) const { return o->elementExists(x1); }
    Q_INVOKABLE int MframesPerSecond(QSvgRenderer* o) const { return o->framesPerSecond(); }
    Q_INVOKABLE bool MisValid(QSvgRenderer* o) const { return o->isValid(); }
    Q_INVOKABLE QMatrix MmatrixForElement(QSvgRenderer* o, const QString& x1) const { return o->matrixForElement(x1); }
    Q_INVOKABLE void MsetFramesPerSecond(QSvgRenderer* o, int x1) { o->setFramesPerSecond(x1); }
    Q_INVOKABLE void MsetViewBox(QSvgRenderer* o, const QRect& x1) { o->setViewBox(x1); }
    Q_INVOKABLE void MsetViewBox(QSvgRenderer* o, const QRectF& x1) { o->setViewBox(x1); }
    Q_INVOKABLE QRect MviewBox(QSvgRenderer* o) const { return o->viewBox(); }
    Q_INVOKABLE QRectF MviewBoxF(QSvgRenderer* o) const { return o->viewBoxF(); }
};

class Q202 : public Q246 { // QSvgWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LSvgWidget(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LSvgWidget(u, x1, x2); }
    Q_INVOKABLE QSvgRenderer* Mrenderer(QSvgWidget* o) const { return o->renderer(); }
    Q_INVOKABLE QSize MsizeHint(QSvgWidget* o) const { return o->sizeHint(); }
};

QT_END_NAMESPACE

#endif
