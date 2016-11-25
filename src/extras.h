// copyright (c) Polos Ruetz
//
// extra functions added to some Qt class
// e.g. (! "changeBrightness" image 10)

#ifndef EXTRAS_H
#define EXTRAS_H

#include <QImage>

QT_BEGIN_NAMESPACE

// QImage
QImage QImage_changeBrightness(const QImage&, int);
QImage QImage_changeContrast(const QImage&, int);
QImage QImage_changeGamma(const QImage&, int);

QT_END_NAMESPACE

#endif
