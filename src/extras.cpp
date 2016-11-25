// copyright (c) Polos Ruetz

#include "extras.h"
#include <math.h>

QT_BEGIN_NAMESPACE

// *** QImage *** (code found in a Qt forum)

template<class T>
inline const T& clamp(const T& x, const T& low, const T& high) {
    return (x < low) ? low : ((x > high) ? high : x); }

inline int changeBrightness(int value, int brightness) {
    return clamp(value + brightness * 255 / 100, 0, 255); }

inline int changeContrast(int value, int contrast) {
    return clamp(((value - 127) * contrast / 100) + 127, 0, 255); }

inline int changeGamma(int value, int gamma) {
    return clamp(int(pow(value / 255.0, 100.0 / gamma) * 255), 0, 255); }

inline int changeUsingTable(int value, const int table[]) {
    return table[value]; }

template<int operation(int, int) >
static QImage changeImage(const QImage& image, int value) {
    QImage image2 = image;
    image2.detach();
    if(!image2.colorCount()) {
        if(image2.format() != QImage::Format_RGB32) {
            image2 = image2.convertToFormat(QImage::Format_RGB32); }
        int table[256];
        for(int i = 0; i < 256; ++i) {
            table[i] = operation(i, value); }
        if(image2.hasAlphaChannel()) {
            for(int y = 0; y < image2.height(); ++y) {
                QRgb* line = reinterpret_cast<QRgb*>(image2.scanLine(y));
                for(int x = 0; x < image2.width(); ++x) {
                    line[x] = qRgba(changeUsingTable(qRed(line[x]), table),
                                    changeUsingTable(qGreen(line[x]), table),
                                    changeUsingTable(qBlue(line[x]), table),
                                    changeUsingTable(qAlpha(line[x]), table)); }}}
        else {
            for(int y = 0; y < image2.height(); ++y) {
                QRgb* line = reinterpret_cast<QRgb*>(image2.scanLine(y));
                for(int x = 0; x < image2.width(); ++x) {
                    line[x] = qRgb(changeUsingTable(qRed(line[x]), table),
                                   changeUsingTable(qGreen(line[x]), table),
                                   changeUsingTable(qBlue(line[x]), table)); }}}}
    else {
        QVector<QRgb> colors = image2.colorTable();
        for(int i = 0; i < image2.colorCount(); ++i) {
            colors[i] = qRgb(operation(qRed(colors[i]), value),
                             operation(qGreen(colors[i]), value),
                             operation(qBlue(colors[i]), value)); }}
    return image2; }

QImage QImage_changeBrightness(const QImage& image, int brightness) {
    // example for range: -75 .. 75 (0)
    if(0 == brightness) {
        return image; }
    return changeImage<changeBrightness>(image, brightness); }

QImage QImage_changeContrast(const QImage& image, int contrast) {
    // example for range: 1 .. 10,000 (100)
    if(100 == contrast) {
        return image; }
    return changeImage<changeContrast>(image, contrast); }

QImage QImage_changeGamma(const QImage& image, int gamma) {
    // example for range: 1 .. 10,000 (100)
    if(100 == gamma) {
        return image; }
    return changeImage<changeGamma>(image, gamma); }

QT_END_NAMESPACE
