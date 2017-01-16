#include "lib.h"

QT_BEGIN_NAMESPACE

QObject* ini() {
    static CPP* cpp = 0;
    if(!cpp) {
        cpp = new CPP; }
    return cpp; }

static void _toGrayscale(QImage* image) { 
    if(image) {
        // stolen from Stack Overflow
        for(int y = 0; y < image->height(); y++) {
            uchar* scan = image->scanLine(y);
            int depth = 4;
            for(int x = 0; x < image->width(); x++) {
                QRgb* rgbpixel = reinterpret_cast<QRgb*>(scan + x * depth);
                int gray = qGray(*rgbpixel);
                *rgbpixel = QColor(gray, gray, gray).rgba(); }}}}

QImage CPP::toGrayscale(const QImage& image) { 
    QImage image2 = image;
    image2.detach();
    _toGrayscale(&image2);
    return image2; }

void CPP::toGrayscaleReplace(QImage* image) { 
    _toGrayscale(image); }

QT_END_NAMESPACE
