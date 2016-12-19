// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtMultimediaWidgets>

QT_BEGIN_NAMESPACE

class N8 : public QObject { // QAudioDeviceInfo
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LAudioDeviceInfo(u); }
    Q_INVOKABLE void* C(uint u, const QAudioDeviceInfo& x1) { return new LAudioDeviceInfo(u, x1); }
    Q_INVOKABLE QString MdeviceName(QAudioDeviceInfo* o) const { return o->deviceName(); }
    Q_INVOKABLE bool MisFormatSupported(QAudioDeviceInfo* o, const QAudioFormat& x1) const { return o->isFormatSupported(x1); }
    Q_INVOKABLE bool MisNull(QAudioDeviceInfo* o) const { return o->isNull(); }
    Q_INVOKABLE QAudioFormat MnearestFormat(QAudioDeviceInfo* o, const QAudioFormat& x1) const { return o->nearestFormat(x1); }
    Q_INVOKABLE QAudioFormat MpreferredFormat(QAudioDeviceInfo* o) const { return o->preferredFormat(); }
    Q_INVOKABLE QList<QAudioFormat::Endian> MsupportedByteOrders(QAudioDeviceInfo* o) const { return o->supportedByteOrders(); }
    Q_INVOKABLE QList<int> MsupportedChannelCounts(QAudioDeviceInfo* o) const { return o->supportedChannelCounts(); }
    Q_INVOKABLE QStringList MsupportedCodecs(QAudioDeviceInfo* o) const { return o->supportedCodecs(); }
    Q_INVOKABLE QList<int> MsupportedSampleRates(QAudioDeviceInfo* o) const { return o->supportedSampleRates(); }
    Q_INVOKABLE QList<int> MsupportedSampleSizes(QAudioDeviceInfo* o) const { return o->supportedSampleSizes(); }
    Q_INVOKABLE QList<QAudioFormat::SampleType> MsupportedSampleTypes(QAudioDeviceInfo* o) const { return o->supportedSampleTypes(); }
    Q_INVOKABLE QList<QAudioDeviceInfo> SavailableDevices(QAudio::Mode x1) { return QAudioDeviceInfo::availableDevices(x1); }
    Q_INVOKABLE QAudioDeviceInfo SdefaultInputDevice() { return QAudioDeviceInfo::defaultInputDevice(); }
    Q_INVOKABLE QAudioDeviceInfo SdefaultOutputDevice() { return QAudioDeviceInfo::defaultOutputDevice(); }
};

class N9 : public QObject { // QAudioEncoderSettings
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LAudioEncoderSettings(u); }
    Q_INVOKABLE void* C(uint u, const QAudioEncoderSettings& x1) { return new LAudioEncoderSettings(u, x1); }
    Q_INVOKABLE int MbitRate(QAudioEncoderSettings* o) const { return o->bitRate(); }
    Q_INVOKABLE int MchannelCount(QAudioEncoderSettings* o) const { return o->channelCount(); }
    Q_INVOKABLE QString Mcodec(QAudioEncoderSettings* o) const { return o->codec(); }
    Q_INVOKABLE int MencodingMode(QAudioEncoderSettings* o) const { return o->encodingMode(); }
    Q_INVOKABLE QVariant MencodingOption(QAudioEncoderSettings* o, const QString& x1) const { return o->encodingOption(x1); }
    Q_INVOKABLE bool MisNull(QAudioEncoderSettings* o) const { return o->isNull(); }
    Q_INVOKABLE int Mquality(QAudioEncoderSettings* o) const { return o->quality(); }
    Q_INVOKABLE int MsampleRate(QAudioEncoderSettings* o) const { return o->sampleRate(); }
    Q_INVOKABLE void MsetBitRate(QAudioEncoderSettings* o, int x1) { o->setBitRate(x1); }
    Q_INVOKABLE void MsetChannelCount(QAudioEncoderSettings* o, int x1) { o->setChannelCount(x1); }
    Q_INVOKABLE void MsetCodec(QAudioEncoderSettings* o, const QString& x1) { o->setCodec(x1); }
    Q_INVOKABLE void MsetEncodingMode(QAudioEncoderSettings* o, QMultimedia::EncodingMode x1) { o->setEncodingMode(x1); }
    Q_INVOKABLE void MsetEncodingOption(QAudioEncoderSettings* o, const QString& x1, const QVariant& x2) { o->setEncodingOption(x1, x2); }
    Q_INVOKABLE void MsetQuality(QAudioEncoderSettings* o, QMultimedia::EncodingQuality x1) { o->setQuality(x1); }
    Q_INVOKABLE void MsetSampleRate(QAudioEncoderSettings* o, int x1) { o->setSampleRate(x1); }
};

class N10 : public QObject { // QAudioFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LAudioFormat(u); }
    Q_INVOKABLE void* C(uint u, const QAudioFormat& x1) { return new LAudioFormat(u, x1); }
    Q_INVOKABLE int MbyteOrder(QAudioFormat* o) const { return o->byteOrder(); }
    Q_INVOKABLE qint32 MbytesForDuration(QAudioFormat* o, qint64 x1) const { return o->bytesForDuration(x1); }
    Q_INVOKABLE qint32 MbytesForFrames(QAudioFormat* o, qint32 x1) const { return o->bytesForFrames(x1); }
    Q_INVOKABLE int MbytesPerFrame(QAudioFormat* o) const { return o->bytesPerFrame(); }
    Q_INVOKABLE int MchannelCount(QAudioFormat* o) const { return o->channelCount(); }
    Q_INVOKABLE QString Mcodec(QAudioFormat* o) const { return o->codec(); }
    Q_INVOKABLE qlonglong MdurationForBytes(QAudioFormat* o, qint32 x1) const { return o->durationForBytes(x1); }
    Q_INVOKABLE qlonglong MdurationForFrames(QAudioFormat* o, qint32 x1) const { return o->durationForFrames(x1); }
    Q_INVOKABLE qint32 MframesForBytes(QAudioFormat* o, qint32 x1) const { return o->framesForBytes(x1); }
    Q_INVOKABLE qint32 MframesForDuration(QAudioFormat* o, qint64 x1) const { return o->framesForDuration(x1); }
    Q_INVOKABLE bool MisValid(QAudioFormat* o) const { return o->isValid(); }
    Q_INVOKABLE int MsampleRate(QAudioFormat* o) const { return o->sampleRate(); }
    Q_INVOKABLE int MsampleSize(QAudioFormat* o) const { return o->sampleSize(); }
    Q_INVOKABLE int MsampleType(QAudioFormat* o) const { return o->sampleType(); }
    Q_INVOKABLE void MsetByteOrder(QAudioFormat* o, QAudioFormat::Endian x1) { o->setByteOrder(x1); }
    Q_INVOKABLE void MsetChannelCount(QAudioFormat* o, int x1) { o->setChannelCount(x1); }
    Q_INVOKABLE void MsetCodec(QAudioFormat* o, const QString& x1) { o->setCodec(x1); }
    Q_INVOKABLE void MsetSampleRate(QAudioFormat* o, int x1) { o->setSampleRate(x1); }
    Q_INVOKABLE void MsetSampleSize(QAudioFormat* o, int x1) { o->setSampleSize(x1); }
    Q_INVOKABLE void MsetSampleType(QAudioFormat* o, QAudioFormat::SampleType x1) { o->setSampleType(x1); }
};

class N16 : public QObject { // QCameraInfo
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QByteArray& x1 = QByteArray()) { return new LCameraInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QCamera& x1) { return new LCameraInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QCameraInfo& x1) { return new LCameraInfo(u, x1); }
    Q_INVOKABLE QString Mdescription(QCameraInfo* o) const { return o->description(); }
    Q_INVOKABLE QString MdeviceName(QCameraInfo* o) const { return o->deviceName(); }
    Q_INVOKABLE bool MisNull(QCameraInfo* o) const { return o->isNull(); }
    Q_INVOKABLE int Morientation(QCameraInfo* o) const { return o->orientation(); }
    Q_INVOKABLE int Mposition(QCameraInfo* o) const { return o->position(); }
    Q_INVOKABLE QList<QCameraInfo> SavailableCameras(QCamera::Position x1 = QCamera::UnspecifiedPosition) { return QCameraInfo::availableCameras(x1); }
    Q_INVOKABLE QCameraInfo SdefaultCamera() { return QCameraInfo::defaultCamera(); }
};

class N17 : public QObject { // QCameraViewfinderSettings
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LCameraViewfinderSettings(u); }
    Q_INVOKABLE void* C(uint u, const QCameraViewfinderSettings& x1) { return new LCameraViewfinderSettings(u, x1); }
    Q_INVOKABLE bool MisNull(QCameraViewfinderSettings* o) const { return o->isNull(); }
    Q_INVOKABLE qreal MmaximumFrameRate(QCameraViewfinderSettings* o) const { return o->maximumFrameRate(); }
    Q_INVOKABLE qreal MminimumFrameRate(QCameraViewfinderSettings* o) const { return o->minimumFrameRate(); }
    Q_INVOKABLE QSize MpixelAspectRatio(QCameraViewfinderSettings* o) const { return o->pixelAspectRatio(); }
    Q_INVOKABLE int MpixelFormat(QCameraViewfinderSettings* o) const { return o->pixelFormat(); }
    Q_INVOKABLE QSize Mresolution(QCameraViewfinderSettings* o) const { return o->resolution(); }
    Q_INVOKABLE void MsetMaximumFrameRate(QCameraViewfinderSettings* o, qreal x1) { o->setMaximumFrameRate(x1); }
    Q_INVOKABLE void MsetMinimumFrameRate(QCameraViewfinderSettings* o, qreal x1) { o->setMinimumFrameRate(x1); }
    Q_INVOKABLE void MsetPixelAspectRatio(QCameraViewfinderSettings* o, const QSize& x1) { o->setPixelAspectRatio(x1); }
    Q_INVOKABLE void MsetPixelAspectRatio(QCameraViewfinderSettings* o, int x1, int x2) { o->setPixelAspectRatio(x1, x2); }
    Q_INVOKABLE void MsetPixelFormat(QCameraViewfinderSettings* o, QVideoFrame::PixelFormat x1) { o->setPixelFormat(x1); }
    Q_INVOKABLE void MsetResolution(QCameraViewfinderSettings* o, const QSize& x1) { o->setResolution(x1); }
    Q_INVOKABLE void MsetResolution(QCameraViewfinderSettings* o, int x1, int x2) { o->setResolution(x1, x2); }
    Q_INVOKABLE void Mswap(QCameraViewfinderSettings* o, QCameraViewfinderSettings& x1) { o->swap(x1); }
};

class N80 : public QObject { // QImageEncoderSettings
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LImageEncoderSettings(u); }
    Q_INVOKABLE void* C(uint u, const QImageEncoderSettings& x1) { return new LImageEncoderSettings(u, x1); }
    Q_INVOKABLE QString Mcodec(QImageEncoderSettings* o) const { return o->codec(); }
    Q_INVOKABLE QVariant MencodingOption(QImageEncoderSettings* o, const QString& x1) const { return o->encodingOption(x1); }
    Q_INVOKABLE bool MisNull(QImageEncoderSettings* o) const { return o->isNull(); }
    Q_INVOKABLE int Mquality(QImageEncoderSettings* o) const { return o->quality(); }
    Q_INVOKABLE QSize Mresolution(QImageEncoderSettings* o) const { return o->resolution(); }
    Q_INVOKABLE void MsetCodec(QImageEncoderSettings* o, const QString& x1) { o->setCodec(x1); }
    Q_INVOKABLE void MsetEncodingOption(QImageEncoderSettings* o, const QString& x1, const QVariant& x2) { o->setEncodingOption(x1, x2); }
    Q_INVOKABLE void MsetQuality(QImageEncoderSettings* o, QMultimedia::EncodingQuality x1) { o->setQuality(x1); }
    Q_INVOKABLE void MsetResolution(QImageEncoderSettings* o, const QSize& x1) { o->setResolution(x1); }
    Q_INVOKABLE void MsetResolution(QImageEncoderSettings* o, int x1, int x2) { o->setResolution(x1, x2); }
};

class N96 : public QObject { // QMediaContent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMediaContent(u); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1) { return new LMediaContent(u, x1); }
    Q_INVOKABLE void* C(uint u, const QNetworkRequest& x1) { return new LMediaContent(u, x1); }
    Q_INVOKABLE void* C(uint u, const QMediaResource& x1) { return new LMediaContent(u, x1); }
    Q_INVOKABLE void* C(uint u, const QMediaResourceList& x1) { return new LMediaContent(u, x1); }
    Q_INVOKABLE void* C(uint u, const QMediaContent& x1) { return new LMediaContent(u, x1); }
    Q_INVOKABLE void* C(uint u, QMediaPlaylist* x1, const QUrl& x2 = QUrl(), bool x3 = false) { return new LMediaContent(u, x1, x2, x3); }
    Q_INVOKABLE QNetworkRequest McanonicalRequest(QMediaContent* o) const { return o->canonicalRequest(); }
    Q_INVOKABLE QMediaResource McanonicalResource(QMediaContent* o) const { return o->canonicalResource(); }
    Q_INVOKABLE QUrl McanonicalUrl(QMediaContent* o) const { return o->canonicalUrl(); }
    Q_INVOKABLE bool MisNull(QMediaContent* o) const { return o->isNull(); }
    Q_INVOKABLE QMediaPlaylist* Mplaylist(QMediaContent* o) const { return o->playlist(); }
    Q_INVOKABLE QMediaResourceList Mresources(QMediaContent* o) const { return o->resources(); }
};

class N97 : public QObject { // QMediaResource
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMediaResource(u); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1, const QString& x2 = QString()) { return new LMediaResource(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QNetworkRequest& x1, const QString& x2 = QString()) { return new LMediaResource(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QMediaResource& x1) { return new LMediaResource(u, x1); }
    Q_INVOKABLE int MaudioBitRate(QMediaResource* o) const { return o->audioBitRate(); }
    Q_INVOKABLE QString MaudioCodec(QMediaResource* o) const { return o->audioCodec(); }
    Q_INVOKABLE int MchannelCount(QMediaResource* o) const { return o->channelCount(); }
    Q_INVOKABLE qlonglong MdataSize(QMediaResource* o) const { return o->dataSize(); }
    Q_INVOKABLE bool MisNull(QMediaResource* o) const { return o->isNull(); }
    Q_INVOKABLE QString Mlanguage(QMediaResource* o) const { return o->language(); }
    Q_INVOKABLE QString MmimeType(QMediaResource* o) const { return o->mimeType(); }
    Q_INVOKABLE QNetworkRequest Mrequest(QMediaResource* o) const { return o->request(); }
    Q_INVOKABLE QSize Mresolution(QMediaResource* o) const { return o->resolution(); }
    Q_INVOKABLE int MsampleRate(QMediaResource* o) const { return o->sampleRate(); }
    Q_INVOKABLE void MsetAudioBitRate(QMediaResource* o, int x1) { o->setAudioBitRate(x1); }
    Q_INVOKABLE void MsetAudioCodec(QMediaResource* o, const QString& x1) { o->setAudioCodec(x1); }
    Q_INVOKABLE void MsetChannelCount(QMediaResource* o, int x1) { o->setChannelCount(x1); }
    Q_INVOKABLE void MsetDataSize(QMediaResource* o, const qint64 x1) { o->setDataSize(x1); }
    Q_INVOKABLE void MsetLanguage(QMediaResource* o, const QString& x1) { o->setLanguage(x1); }
    Q_INVOKABLE void MsetResolution(QMediaResource* o, const QSize& x1) { o->setResolution(x1); }
    Q_INVOKABLE void MsetResolution(QMediaResource* o, int x1, int x2) { o->setResolution(x1, x2); }
    Q_INVOKABLE void MsetSampleRate(QMediaResource* o, int x1) { o->setSampleRate(x1); }
    Q_INVOKABLE void MsetVideoBitRate(QMediaResource* o, int x1) { o->setVideoBitRate(x1); }
    Q_INVOKABLE void MsetVideoCodec(QMediaResource* o, const QString& x1) { o->setVideoCodec(x1); }
    Q_INVOKABLE QUrl Murl(QMediaResource* o) const { return o->url(); }
    Q_INVOKABLE int MvideoBitRate(QMediaResource* o) const { return o->videoBitRate(); }
    Q_INVOKABLE QString MvideoCodec(QMediaResource* o) const { return o->videoCodec(); }
};

class N205 : public QObject { // QVideoEncoderSettings
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVideoEncoderSettings(u); }
    Q_INVOKABLE void* C(uint u, const QVideoEncoderSettings& x1) { return new LVideoEncoderSettings(u, x1); }
    Q_INVOKABLE int MbitRate(QVideoEncoderSettings* o) const { return o->bitRate(); }
    Q_INVOKABLE QString Mcodec(QVideoEncoderSettings* o) const { return o->codec(); }
    Q_INVOKABLE int MencodingMode(QVideoEncoderSettings* o) const { return o->encodingMode(); }
    Q_INVOKABLE QVariant MencodingOption(QVideoEncoderSettings* o, const QString& x1) const { return o->encodingOption(x1); }
    Q_INVOKABLE qreal MframeRate(QVideoEncoderSettings* o) const { return o->frameRate(); }
    Q_INVOKABLE bool MisNull(QVideoEncoderSettings* o) const { return o->isNull(); }
    Q_INVOKABLE int Mquality(QVideoEncoderSettings* o) const { return o->quality(); }
    Q_INVOKABLE QSize Mresolution(QVideoEncoderSettings* o) const { return o->resolution(); }
    Q_INVOKABLE void MsetBitRate(QVideoEncoderSettings* o, int x1) { o->setBitRate(x1); }
    Q_INVOKABLE void MsetCodec(QVideoEncoderSettings* o, const QString& x1) { o->setCodec(x1); }
    Q_INVOKABLE void MsetEncodingMode(QVideoEncoderSettings* o, QMultimedia::EncodingMode x1) { o->setEncodingMode(x1); }
    Q_INVOKABLE void MsetEncodingOption(QVideoEncoderSettings* o, const QString& x1, const QVariant& x2) { o->setEncodingOption(x1, x2); }
    Q_INVOKABLE void MsetFrameRate(QVideoEncoderSettings* o, qreal x1) { o->setFrameRate(x1); }
    Q_INVOKABLE void MsetQuality(QVideoEncoderSettings* o, QMultimedia::EncodingQuality x1) { o->setQuality(x1); }
    Q_INVOKABLE void MsetResolution(QVideoEncoderSettings* o, const QSize& x1) { o->setResolution(x1); }
    Q_INVOKABLE void MsetResolution(QVideoEncoderSettings* o, int x1, int x2) { o->setResolution(x1, x2); }
};

class N206 : public QObject { // QVideoFrame
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVideoFrame(u); }
    Q_INVOKABLE void* C(uint u, QAbstractVideoBuffer* x1, const QSize& x2, QVideoFrame::PixelFormat x3) { return new LVideoFrame(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, int x1, const QSize& x2, int x3, QVideoFrame::PixelFormat x4) { return new LVideoFrame(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QImage& x1) { return new LVideoFrame(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVideoFrame& x1) { return new LVideoFrame(u, x1); }
    Q_INVOKABLE int MbytesPerLine(QVideoFrame* o) const { return o->bytesPerLine(); }
    Q_INVOKABLE int MbytesPerLine(QVideoFrame* o, int x1) const { return o->bytesPerLine(x1); }
    Q_INVOKABLE qlonglong MendTime(QVideoFrame* o) const { return o->endTime(); }
    Q_INVOKABLE int MfieldType(QVideoFrame* o) const { return o->fieldType(); }
    Q_INVOKABLE QVariant Mhandle(QVideoFrame* o) const { return o->handle(); }
    Q_INVOKABLE int Mheight(QVideoFrame* o) const { return o->height(); }
    Q_INVOKABLE bool MisMapped(QVideoFrame* o) const { return o->isMapped(); }
    Q_INVOKABLE bool MisReadable(QVideoFrame* o) const { return o->isReadable(); }
    Q_INVOKABLE bool MisValid(QVideoFrame* o) const { return o->isValid(); }
    Q_INVOKABLE bool MisWritable(QVideoFrame* o) const { return o->isWritable(); }
    Q_INVOKABLE bool Mmap(QVideoFrame* o, QAbstractVideoBuffer::MapMode x1) { return o->map(x1); }
    Q_INVOKABLE int MmapMode(QVideoFrame* o) const { return o->mapMode(); }
    Q_INVOKABLE int MmappedBytes(QVideoFrame* o) const { return o->mappedBytes(); }
    Q_INVOKABLE QVariant MmetaData(QVideoFrame* o, const QString& x1) const { return o->metaData(x1); }
    Q_INVOKABLE int MpixelFormat(QVideoFrame* o) const { return o->pixelFormat(); }
    Q_INVOKABLE int MplaneCount(QVideoFrame* o) const { return o->planeCount(); }
    Q_INVOKABLE void MsetEndTime(QVideoFrame* o, qint64 x1) { o->setEndTime(x1); }
    Q_INVOKABLE void MsetFieldType(QVideoFrame* o, QVideoFrame::FieldType x1) { o->setFieldType(x1); }
    Q_INVOKABLE void MsetMetaData(QVideoFrame* o, const QString& x1, const QVariant& x2) { o->setMetaData(x1, x2); }
    Q_INVOKABLE void MsetStartTime(QVideoFrame* o, qint64 x1) { o->setStartTime(x1); }
    Q_INVOKABLE QSize Msize(QVideoFrame* o) const { return o->size(); }
    Q_INVOKABLE qlonglong MstartTime(QVideoFrame* o) const { return o->startTime(); }
    Q_INVOKABLE void Munmap(QVideoFrame* o) { o->unmap(); }
    Q_INVOKABLE int Mwidth(QVideoFrame* o) const { return o->width(); }
    Q_INVOKABLE int SimageFormatFromPixelFormat(QVideoFrame::PixelFormat x1) { return QVideoFrame::imageFormatFromPixelFormat(x1); }
    Q_INVOKABLE int SpixelFormatFromImageFormat(QImage::Format x1) { return QVideoFrame::pixelFormatFromImageFormat(x1); }
};

class N207 : public QObject { // QVideoSurfaceFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVideoSurfaceFormat(u); }
    Q_INVOKABLE void* C(uint u, const QVideoSurfaceFormat& x1) { return new LVideoSurfaceFormat(u, x1); }
    Q_INVOKABLE int MframeHeight(QVideoSurfaceFormat* o) const { return o->frameHeight(); }
    Q_INVOKABLE qreal MframeRate(QVideoSurfaceFormat* o) const { return o->frameRate(); }
    Q_INVOKABLE QSize MframeSize(QVideoSurfaceFormat* o) const { return o->frameSize(); }
    Q_INVOKABLE int MframeWidth(QVideoSurfaceFormat* o) const { return o->frameWidth(); }
    Q_INVOKABLE bool MisValid(QVideoSurfaceFormat* o) const { return o->isValid(); }
    Q_INVOKABLE QSize MpixelAspectRatio(QVideoSurfaceFormat* o) const { return o->pixelAspectRatio(); }
    Q_INVOKABLE int MpixelFormat(QVideoSurfaceFormat* o) const { return o->pixelFormat(); }
    Q_INVOKABLE QVariant Mproperty(QVideoSurfaceFormat* o, const char* x1) const { return o->property(x1); }
    Q_INVOKABLE QList<QByteArray> MpropertyNames(QVideoSurfaceFormat* o) const { return o->propertyNames(); }
    Q_INVOKABLE int MscanLineDirection(QVideoSurfaceFormat* o) const { return o->scanLineDirection(); }
    Q_INVOKABLE void MsetFrameRate(QVideoSurfaceFormat* o, qreal x1) { o->setFrameRate(x1); }
    Q_INVOKABLE void MsetFrameSize(QVideoSurfaceFormat* o, const QSize& x1) { o->setFrameSize(x1); }
    Q_INVOKABLE void MsetFrameSize(QVideoSurfaceFormat* o, int x1, int x2) { o->setFrameSize(x1, x2); }
    Q_INVOKABLE void MsetPixelAspectRatio(QVideoSurfaceFormat* o, const QSize& x1) { o->setPixelAspectRatio(x1); }
    Q_INVOKABLE void MsetPixelAspectRatio(QVideoSurfaceFormat* o, int x1, int x2) { o->setPixelAspectRatio(x1, x2); }
    Q_INVOKABLE void MsetProperty(QVideoSurfaceFormat* o, const char* x1, const QVariant& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE void MsetScanLineDirection(QVideoSurfaceFormat* o, QVideoSurfaceFormat::Direction x1) { o->setScanLineDirection(x1); }
    Q_INVOKABLE void MsetViewport(QVideoSurfaceFormat* o, const QRect& x1) { o->setViewport(x1); }
    Q_INVOKABLE void MsetYCbCrColorSpace(QVideoSurfaceFormat* o, QVideoSurfaceFormat::YCbCrColorSpace x1) { o->setYCbCrColorSpace(x1); }
    Q_INVOKABLE QSize MsizeHint(QVideoSurfaceFormat* o) const { return o->sizeHint(); }
    Q_INVOKABLE QRect Mviewport(QVideoSurfaceFormat* o) const { return o->viewport(); }
    Q_INVOKABLE int MyCbCrColorSpace(QVideoSurfaceFormat* o) const { return o->yCbCrColorSpace(); }
};

QT_END_NAMESPACE

#endif
