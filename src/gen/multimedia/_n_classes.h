// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LAudioDeviceInfo : public QAudioDeviceInfo {
    friend class N8;
public:
    LAudioDeviceInfo(uint u) : unique(u) {}
    LAudioDeviceInfo(uint u, const QAudioDeviceInfo& x1) : QAudioDeviceInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LAudioEncoderSettings : public QAudioEncoderSettings {
    friend class N9;
public:
    LAudioEncoderSettings(uint u) : unique(u) {}
    LAudioEncoderSettings(uint u, const QAudioEncoderSettings& x1) : QAudioEncoderSettings(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LAudioFormat : public QAudioFormat {
    friend class N10;
public:
    LAudioFormat(uint u) : unique(u) {}
    LAudioFormat(uint u, const QAudioFormat& x1) : QAudioFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCameraInfo : public QCameraInfo {
    friend class N16;
public:
    LCameraInfo(uint u, const QByteArray& x1 = QByteArray()) : QCameraInfo(x1), unique(u) {}
    LCameraInfo(uint u, const QCamera& x1) : QCameraInfo(x1), unique(u) {}
    LCameraInfo(uint u, const QCameraInfo& x1) : QCameraInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCameraViewfinderSettings : public QCameraViewfinderSettings {
    friend class N17;
public:
    LCameraViewfinderSettings(uint u) : unique(u) {}
    LCameraViewfinderSettings(uint u, const QCameraViewfinderSettings& x1) : QCameraViewfinderSettings(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVideoEncoderSettings : public QVideoEncoderSettings {
    friend class N198;
public:
    LVideoEncoderSettings(uint u) : unique(u) {}
    LVideoEncoderSettings(uint u, const QVideoEncoderSettings& x1) : QVideoEncoderSettings(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVideoFrame : public QVideoFrame {
    friend class N199;
public:
    LVideoFrame(uint u) : unique(u) {}
    LVideoFrame(uint u, QAbstractVideoBuffer* x1, const QSize& x2, PixelFormat x3) : QVideoFrame(x1, x2, x3), unique(u) {}
    LVideoFrame(uint u, int x1, const QSize& x2, int x3, PixelFormat x4) : QVideoFrame(x1, x2, x3, x4), unique(u) {}
    LVideoFrame(uint u, const QImage& x1) : QVideoFrame(x1), unique(u) {}
    LVideoFrame(uint u, const QVideoFrame& x1) : QVideoFrame(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVideoSurfaceFormat : public QVideoSurfaceFormat {
    friend class N200;
public:
    LVideoSurfaceFormat(uint u) : unique(u) {}
    LVideoSurfaceFormat(uint u, const QVideoSurfaceFormat& x1) : QVideoSurfaceFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

QT_END_NAMESPACE

#endif
