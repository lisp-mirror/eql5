// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtSvg>

QT_BEGIN_NAMESPACE

class N151 : public N104 { // QSvgGenerator
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSvgGenerator(u); }
    Q_INVOKABLE QString Mdescription(QSvgGenerator* o) const { return o->description(); }
    Q_INVOKABLE QString MfileName(QSvgGenerator* o) const { return o->fileName(); }
    Q_INVOKABLE int Mresolution(QSvgGenerator* o) const { return o->resolution(); }
    Q_INVOKABLE void MsetDescription(QSvgGenerator* o, const QString& x1) { o->setDescription(x1); }
    Q_INVOKABLE void MsetFileName(QSvgGenerator* o, const QString& x1) { o->setFileName(x1); }
    Q_INVOKABLE void MsetResolution(QSvgGenerator* o, int x1) { o->setResolution(x1); }
    Q_INVOKABLE void MsetSize(QSvgGenerator* o, const QSize& x1) { o->setSize(x1); }
    Q_INVOKABLE void MsetTitle(QSvgGenerator* o, const QString& x1) { o->setTitle(x1); }
    Q_INVOKABLE void MsetViewBox(QSvgGenerator* o, const QRect& x1) { o->setViewBox(x1); }
    Q_INVOKABLE void MsetViewBox(QSvgGenerator* o, const QRectF& x1) { o->setViewBox(x1); }
    Q_INVOKABLE QSize Msize(QSvgGenerator* o) const { return o->size(); }
    Q_INVOKABLE QString Mtitle(QSvgGenerator* o) const { return o->title(); }
    Q_INVOKABLE QRect MviewBox(QSvgGenerator* o) const { return o->viewBox(); }
    Q_INVOKABLE QRectF MviewBoxF(QSvgGenerator* o) const { return o->viewBoxF(); }
};

QT_END_NAMESPACE

#endif
