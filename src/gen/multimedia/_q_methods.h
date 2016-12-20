// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtMultimediaWidgets>

QT_BEGIN_NAMESPACE

class Q238 : public QObject { // QVideoWidgetControl
    Q_OBJECT
public:
    Q_INVOKABLE int MaspectRatioMode(QVideoWidgetControl* o) const { return o->aspectRatioMode(); }
    Q_INVOKABLE int Mbrightness(QVideoWidgetControl* o) const { return o->brightness(); }
    Q_INVOKABLE int Mcontrast(QVideoWidgetControl* o) const { return o->contrast(); }
    Q_INVOKABLE int Mhue(QVideoWidgetControl* o) const { return o->hue(); }
    Q_INVOKABLE bool MisFullScreen(QVideoWidgetControl* o) const { return o->isFullScreen(); }
    Q_INVOKABLE int Msaturation(QVideoWidgetControl* o) const { return o->saturation(); }
    Q_INVOKABLE void MsetAspectRatioMode(QVideoWidgetControl* o, Qt::AspectRatioMode x1) { o->setAspectRatioMode(x1); }
    Q_INVOKABLE void MsetBrightness(QVideoWidgetControl* o, int x1) { o->setBrightness(x1); }
    Q_INVOKABLE void MsetContrast(QVideoWidgetControl* o, int x1) { o->setContrast(x1); }
    Q_INVOKABLE void MsetFullScreen(QVideoWidgetControl* o, bool x1) { o->setFullScreen(x1); }
    Q_INVOKABLE void MsetHue(QVideoWidgetControl* o, int x1) { o->setHue(x1); }
    Q_INVOKABLE void MsetSaturation(QVideoWidgetControl* o, int x1) { o->setSaturation(x1); }
    Q_INVOKABLE QWidget* MvideoWidget(QVideoWidgetControl* o) { return o->videoWidget(); }
};

class Q18 : public Q139 { // QAbstractVideoSurface
    Q_OBJECT
public:
    Q_INVOKABLE int Merror(QAbstractVideoSurface* o) const { return o->error(); }
    Q_INVOKABLE bool MisActive(QAbstractVideoSurface* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisFormatSupported(QAbstractVideoSurface* o, const QVideoSurfaceFormat& x1) const { return o->isFormatSupported(x1); }
    Q_INVOKABLE QSize MnativeResolution(QAbstractVideoSurface* o) const { return o->nativeResolution(); }
    Q_INVOKABLE QVideoSurfaceFormat MnearestFormat(QAbstractVideoSurface* o, const QVideoSurfaceFormat& x1) const { return o->nearestFormat(x1); }
    Q_INVOKABLE bool Mpresent(QAbstractVideoSurface* o, const QVideoFrame& x1) { return o->present(x1); }
    Q_INVOKABLE bool Mstart(QAbstractVideoSurface* o, const QVideoSurfaceFormat& x1) { return o->start(x1); }
    Q_INVOKABLE void Mstop(QAbstractVideoSurface* o) { o->stop(); }
    Q_INVOKABLE QVideoSurfaceFormat MsurfaceFormat(QAbstractVideoSurface* o) const { return o->surfaceFormat(); }
};

class Q23 : public Q139 { // QAudioOutput
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QAudioFormat& x1 = QAudioFormat(), QObject* x2 = 0) { return new LAudioOutput(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QAudioDeviceInfo& x1, const QAudioFormat& x2 = QAudioFormat(), QObject* x3 = 0) { return new LAudioOutput(u, x1, x2, x3); }
    Q_INVOKABLE int MbufferSize(QAudioOutput* o) const { return o->bufferSize(); }
    Q_INVOKABLE int MbytesFree(QAudioOutput* o) const { return o->bytesFree(); }
    Q_INVOKABLE QString Mcategory(QAudioOutput* o) const { return o->category(); }
    Q_INVOKABLE qlonglong MelapsedUSecs(QAudioOutput* o) const { return o->elapsedUSecs(); }
    Q_INVOKABLE int Merror(QAudioOutput* o) const { return o->error(); }
    Q_INVOKABLE QAudioFormat Mformat(QAudioOutput* o) const { return o->format(); }
    Q_INVOKABLE int MnotifyInterval(QAudioOutput* o) const { return o->notifyInterval(); }
    Q_INVOKABLE int MperiodSize(QAudioOutput* o) const { return o->periodSize(); }
    Q_INVOKABLE qlonglong MprocessedUSecs(QAudioOutput* o) const { return o->processedUSecs(); }
    Q_INVOKABLE void Mreset(QAudioOutput* o) { o->reset(); }
    Q_INVOKABLE void Mresume(QAudioOutput* o) { o->resume(); }
    Q_INVOKABLE void MsetBufferSize(QAudioOutput* o, int x1) { o->setBufferSize(x1); }
    Q_INVOKABLE void MsetCategory(QAudioOutput* o, const QString& x1) { o->setCategory(x1); }
    Q_INVOKABLE void MsetNotifyInterval(QAudioOutput* o, int x1) { o->setNotifyInterval(x1); }
    Q_INVOKABLE void MsetVolume(QAudioOutput* o, qreal x1) { o->setVolume(x1); }
    Q_INVOKABLE int Mstate(QAudioOutput* o) const { return o->state(); }
    Q_INVOKABLE void Mstop(QAudioOutput* o) { o->stop(); }
    Q_INVOKABLE void Msuspend(QAudioOutput* o) { o->suspend(); }
    Q_INVOKABLE qreal Mvolume(QAudioOutput* o) const { return o->volume(); }
};

class Q30 : public Q139 { // QCameraExposure
    Q_OBJECT
public:
    Q_INVOKABLE qreal Maperture(QCameraExposure* o) const { return o->aperture(); }
    Q_INVOKABLE qreal MexposureCompensation(QCameraExposure* o) const { return o->exposureCompensation(); }
    Q_INVOKABLE int MexposureMode(QCameraExposure* o) const { return o->exposureMode(); }
    Q_INVOKABLE int MflashMode(QCameraExposure* o) const { return o->flashMode(); }
    Q_INVOKABLE bool MisAvailable(QCameraExposure* o) const { return o->isAvailable(); }
    Q_INVOKABLE bool MisExposureModeSupported(QCameraExposure* o, QCameraExposure::ExposureMode x1) const { return o->isExposureModeSupported(x1); }
    Q_INVOKABLE bool MisFlashModeSupported(QCameraExposure* o, QCameraExposure::FlashModes x1) const { return o->isFlashModeSupported(x1); }
    Q_INVOKABLE bool MisFlashReady(QCameraExposure* o) const { return o->isFlashReady(); }
    Q_INVOKABLE bool MisMeteringModeSupported(QCameraExposure* o, QCameraExposure::MeteringMode x1) const { return o->isMeteringModeSupported(x1); }
    Q_INVOKABLE int MisoSensitivity(QCameraExposure* o) const { return o->isoSensitivity(); }
    Q_INVOKABLE int MmeteringMode(QCameraExposure* o) const { return o->meteringMode(); }
    Q_INVOKABLE qreal MrequestedAperture(QCameraExposure* o) const { return o->requestedAperture(); }
    Q_INVOKABLE int MrequestedIsoSensitivity(QCameraExposure* o) const { return o->requestedIsoSensitivity(); }
    Q_INVOKABLE qreal MrequestedShutterSpeed(QCameraExposure* o) const { return o->requestedShutterSpeed(); }
    Q_INVOKABLE void MsetSpotMeteringPoint(QCameraExposure* o, const QPointF& x1) { o->setSpotMeteringPoint(x1); }
    Q_INVOKABLE qreal MshutterSpeed(QCameraExposure* o) const { return o->shutterSpeed(); }
    Q_INVOKABLE QPointF MspotMeteringPoint(QCameraExposure* o) const { return o->spotMeteringPoint(); }
    Q_INVOKABLE QList<qreal> MsupportedApertures(QCameraExposure* o, bool* x1 = 0) const { return o->supportedApertures(x1); }
    Q_INVOKABLE QList<int> MsupportedIsoSensitivities(QCameraExposure* o, bool* x1 = 0) const { return o->supportedIsoSensitivities(x1); }
    Q_INVOKABLE QList<qreal> MsupportedShutterSpeeds(QCameraExposure* o, bool* x1 = 0) const { return o->supportedShutterSpeeds(x1); }
};

class Q31 : public Q139 { // QCameraFocus
    Q_OBJECT
public:
    Q_INVOKABLE QPointF McustomFocusPoint(QCameraFocus* o) const { return o->customFocusPoint(); }
    Q_INVOKABLE qreal MdigitalZoom(QCameraFocus* o) const { return o->digitalZoom(); }
    Q_INVOKABLE int MfocusMode(QCameraFocus* o) const { return o->focusMode(); }
    Q_INVOKABLE int MfocusPointMode(QCameraFocus* o) const { return o->focusPointMode(); }
    Q_INVOKABLE QCameraFocusZoneList MfocusZones(QCameraFocus* o) const { return o->focusZones(); }
    Q_INVOKABLE bool MisAvailable(QCameraFocus* o) const { return o->isAvailable(); }
    Q_INVOKABLE bool MisFocusModeSupported(QCameraFocus* o, QCameraFocus::FocusModes x1) const { return o->isFocusModeSupported(x1); }
    Q_INVOKABLE bool MisFocusPointModeSupported(QCameraFocus* o, QCameraFocus::FocusPointMode x1) const { return o->isFocusPointModeSupported(x1); }
    Q_INVOKABLE qreal MmaximumDigitalZoom(QCameraFocus* o) const { return o->maximumDigitalZoom(); }
    Q_INVOKABLE qreal MmaximumOpticalZoom(QCameraFocus* o) const { return o->maximumOpticalZoom(); }
    Q_INVOKABLE qreal MopticalZoom(QCameraFocus* o) const { return o->opticalZoom(); }
    Q_INVOKABLE void MsetCustomFocusPoint(QCameraFocus* o, const QPointF& x1) { o->setCustomFocusPoint(x1); }
    Q_INVOKABLE void MsetFocusMode(QCameraFocus* o, QCameraFocus::FocusModes x1) { o->setFocusMode(x1); }
    Q_INVOKABLE void MsetFocusPointMode(QCameraFocus* o, QCameraFocus::FocusPointMode x1) { o->setFocusPointMode(x1); }
    Q_INVOKABLE void MzoomTo(QCameraFocus* o, qreal x1, qreal x2) { o->zoomTo(x1, x2); }
};

class Q32 : public Q139 { // QCameraImageCapture
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QMediaObject* x1, QObject* x2 = 0) { return new LCameraImageCapture(u, x1, x2); }
    Q_INVOKABLE int Mavailability(QCameraImageCapture* o) const { return o->availability(); }
    Q_INVOKABLE int MbufferFormat(QCameraImageCapture* o) const { return o->bufferFormat(); }
    Q_INVOKABLE int McaptureDestination(QCameraImageCapture* o) const { return o->captureDestination(); }
    Q_INVOKABLE QImageEncoderSettings MencodingSettings(QCameraImageCapture* o) const { return o->encodingSettings(); }
    Q_INVOKABLE int Merror(QCameraImageCapture* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QCameraImageCapture* o) const { return o->errorString(); }
    Q_INVOKABLE QString MimageCodecDescription(QCameraImageCapture* o, const QString& x1) const { return o->imageCodecDescription(x1); }
    Q_INVOKABLE bool MisAvailable(QCameraImageCapture* o) const { return o->isAvailable(); }
    Q_INVOKABLE bool MisCaptureDestinationSupported(QCameraImageCapture* o, QCameraImageCapture::CaptureDestinations x1) const { return o->isCaptureDestinationSupported(x1); }
    Q_INVOKABLE bool MisReadyForCapture(QCameraImageCapture* o) const { return o->isReadyForCapture(); }
    Q_INVOKABLE void MsetBufferFormat(QCameraImageCapture* o, const QVideoFrame::PixelFormat x1) { o->setBufferFormat(x1); }
    Q_INVOKABLE void MsetCaptureDestination(QCameraImageCapture* o, QCameraImageCapture::CaptureDestinations x1) { o->setCaptureDestination(x1); }
    Q_INVOKABLE void MsetEncodingSettings(QCameraImageCapture* o, const QImageEncoderSettings& x1) { o->setEncodingSettings(x1); }
    Q_INVOKABLE QList<QVideoFrame::PixelFormat> MsupportedBufferFormats(QCameraImageCapture* o) const { return o->supportedBufferFormats(); }
    Q_INVOKABLE QStringList MsupportedImageCodecs(QCameraImageCapture* o) const { return o->supportedImageCodecs(); }
    Q_INVOKABLE QList<QSize> MsupportedResolutions(QCameraImageCapture* o, const QImageEncoderSettings& x1 = QImageEncoderSettings(), bool* x2 = 0) const { return o->supportedResolutions(x1, x2); }
    Q_INVOKABLE QMediaObject* MmediaObject(QCameraImageCapture* o) const { return o->mediaObject(); }
};

class Q33 : public Q139 { // QCameraImageProcessing
    Q_OBJECT
public:
    Q_INVOKABLE int McolorFilter(QCameraImageProcessing* o) const { return o->colorFilter(); }
    Q_INVOKABLE qreal Mcontrast(QCameraImageProcessing* o) const { return o->contrast(); }
    Q_INVOKABLE qreal MdenoisingLevel(QCameraImageProcessing* o) const { return o->denoisingLevel(); }
    Q_INVOKABLE bool MisAvailable(QCameraImageProcessing* o) const { return o->isAvailable(); }
    Q_INVOKABLE bool MisColorFilterSupported(QCameraImageProcessing* o, QCameraImageProcessing::ColorFilter x1) const { return o->isColorFilterSupported(x1); }
    Q_INVOKABLE bool MisWhiteBalanceModeSupported(QCameraImageProcessing* o, QCameraImageProcessing::WhiteBalanceMode x1) const { return o->isWhiteBalanceModeSupported(x1); }
    Q_INVOKABLE qreal MmanualWhiteBalance(QCameraImageProcessing* o) const { return o->manualWhiteBalance(); }
    Q_INVOKABLE qreal Msaturation(QCameraImageProcessing* o) const { return o->saturation(); }
    Q_INVOKABLE void MsetColorFilter(QCameraImageProcessing* o, QCameraImageProcessing::ColorFilter x1) { o->setColorFilter(x1); }
    Q_INVOKABLE void MsetContrast(QCameraImageProcessing* o, qreal x1) { o->setContrast(x1); }
    Q_INVOKABLE void MsetDenoisingLevel(QCameraImageProcessing* o, qreal x1) { o->setDenoisingLevel(x1); }
    Q_INVOKABLE void MsetManualWhiteBalance(QCameraImageProcessing* o, qreal x1) { o->setManualWhiteBalance(x1); }
    Q_INVOKABLE void MsetSaturation(QCameraImageProcessing* o, qreal x1) { o->setSaturation(x1); }
    Q_INVOKABLE void MsetSharpeningLevel(QCameraImageProcessing* o, qreal x1) { o->setSharpeningLevel(x1); }
    Q_INVOKABLE void MsetWhiteBalanceMode(QCameraImageProcessing* o, QCameraImageProcessing::WhiteBalanceMode x1) { o->setWhiteBalanceMode(x1); }
    Q_INVOKABLE qreal MsharpeningLevel(QCameraImageProcessing* o) const { return o->sharpeningLevel(); }
    Q_INVOKABLE int MwhiteBalanceMode(QCameraImageProcessing* o) const { return o->whiteBalanceMode(); }
};

class Q86 : public Q77 { // QGraphicsVideoItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsVideoItem(u, x1); }
    Q_INVOKABLE int MaspectRatioMode(QGraphicsVideoItem* o) const { return o->aspectRatioMode(); }
    Q_INVOKABLE QMediaObject* MmediaObject(QGraphicsVideoItem* o) const { return o->mediaObject(); }
    Q_INVOKABLE QSizeF MnativeSize(QGraphicsVideoItem* o) const { return o->nativeSize(); }
    Q_INVOKABLE QPointF Moffset(QGraphicsVideoItem* o) const { return o->offset(); }
    Q_INVOKABLE void MsetAspectRatioMode(QGraphicsVideoItem* o, Qt::AspectRatioMode x1) { o->setAspectRatioMode(x1); }
    Q_INVOKABLE void MsetOffset(QGraphicsVideoItem* o, const QPointF& x1) { o->setOffset(x1); }
    Q_INVOKABLE void MsetSize(QGraphicsVideoItem* o, const QSizeF& x1) { o->setSize(x1); }
    Q_INVOKABLE QSizeF Msize(QGraphicsVideoItem* o) const { return o->size(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsVideoItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE void Mpaint(QGraphicsVideoItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
};

class Q124 : public Q139 { // QMediaObject
    Q_OBJECT
public:
    Q_INVOKABLE int Mavailability(QMediaObject* o) const { return o->availability(); }
    Q_INVOKABLE QStringList MavailableMetaData(QMediaObject* o) const { return o->availableMetaData(); }
    Q_INVOKABLE bool Mbind(QMediaObject* o, QObject* x1) { return o->bind(x1); }
    Q_INVOKABLE bool MisAvailable(QMediaObject* o) const { return o->isAvailable(); }
    Q_INVOKABLE bool MisMetaDataAvailable(QMediaObject* o) const { return o->isMetaDataAvailable(); }
    Q_INVOKABLE QVariant MmetaData(QMediaObject* o, const QString& x1) const { return o->metaData(x1); }
    Q_INVOKABLE int MnotifyInterval(QMediaObject* o) const { return o->notifyInterval(); }
    Q_INVOKABLE QMediaService* Mservice(QMediaObject* o) const { return o->service(); }
    Q_INVOKABLE void MsetNotifyInterval(QMediaObject* o, int x1) { o->setNotifyInterval(x1); }
    Q_INVOKABLE void Munbind(QMediaObject* o, QObject* x1) { o->unbind(x1); }
    Q_INVOKABLE void MaddPropertyWatch(QMediaObject* o, const QByteArray& x1) { ((LMediaObject*)o)->addPropertyWatch(x1); }
    Q_INVOKABLE void MremovePropertyWatch(QMediaObject* o, const QByteArray& x1) { ((LMediaObject*)o)->removePropertyWatch(x1); }
};

class Q125 : public Q124 { // QMediaPlayer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0, QMediaPlayer::Flags x2 = 0) { return new LMediaPlayer(u, x1, x2); }
    Q_INVOKABLE int MaudioRole(QMediaPlayer* o) const { return o->audioRole(); }
    Q_INVOKABLE int MbufferStatus(QMediaPlayer* o) const { return o->bufferStatus(); }
    Q_INVOKABLE QMediaContent McurrentMedia(QMediaPlayer* o) const { return o->currentMedia(); }
    Q_INVOKABLE QNetworkConfiguration McurrentNetworkConfiguration(QMediaPlayer* o) const { return o->currentNetworkConfiguration(); }
    Q_INVOKABLE qlonglong Mduration(QMediaPlayer* o) const { return o->duration(); }
    Q_INVOKABLE int Merror(QMediaPlayer* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QMediaPlayer* o) const { return o->errorString(); }
    Q_INVOKABLE bool MisAudioAvailable(QMediaPlayer* o) const { return o->isAudioAvailable(); }
    Q_INVOKABLE bool MisMuted(QMediaPlayer* o) const { return o->isMuted(); }
    Q_INVOKABLE bool MisSeekable(QMediaPlayer* o) const { return o->isSeekable(); }
    Q_INVOKABLE bool MisVideoAvailable(QMediaPlayer* o) const { return o->isVideoAvailable(); }
    Q_INVOKABLE QMediaContent Mmedia(QMediaPlayer* o) const { return o->media(); }
    Q_INVOKABLE int MmediaStatus(QMediaPlayer* o) const { return o->mediaStatus(); }
    Q_INVOKABLE qreal MplaybackRate(QMediaPlayer* o) const { return o->playbackRate(); }
    Q_INVOKABLE QMediaPlaylist* Mplaylist(QMediaPlayer* o) const { return o->playlist(); }
    Q_INVOKABLE qlonglong Mposition(QMediaPlayer* o) const { return o->position(); }
    Q_INVOKABLE void MsetAudioRole(QMediaPlayer* o, QAudio::Role x1) { o->setAudioRole(x1); }
    Q_INVOKABLE void MsetVideoOutput(QMediaPlayer* o, QVideoWidget* x1) { o->setVideoOutput(x1); }
    Q_INVOKABLE void MsetVideoOutput(QMediaPlayer* o, QGraphicsVideoItem* x1) { o->setVideoOutput(x1); }
    Q_INVOKABLE void MsetVideoOutput(QMediaPlayer* o, QAbstractVideoSurface* x1) { o->setVideoOutput(x1); }
    Q_INVOKABLE int Mstate(QMediaPlayer* o) const { return o->state(); }
    Q_INVOKABLE QList<QAudio::Role> MsupportedAudioRoles(QMediaPlayer* o) const { return o->supportedAudioRoles(); }
    Q_INVOKABLE int Mvolume(QMediaPlayer* o) const { return o->volume(); }
    Q_INVOKABLE int Mavailability(QMediaPlayer* o) const { return o->availability(); }
    Q_INVOKABLE int ShasSupport(const QString& x1, const QStringList& x2 = QStringList(), QMediaPlayer::Flags x3 = 0) { return QMediaPlayer::hasSupport(x1, x2, x3); }
};

class Q126 : public Q139 { // QMediaPlaylist
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LMediaPlaylist(u, x1); }
    Q_INVOKABLE bool MaddMedia(QMediaPlaylist* o, const QMediaContent& x1) { return o->addMedia(x1); }
    Q_INVOKABLE bool MaddMedia(QMediaPlaylist* o, const QList<QMediaContent>& x1) { return o->addMedia(x1); }
    Q_INVOKABLE bool Mclear(QMediaPlaylist* o) { return o->clear(); }
    Q_INVOKABLE int McurrentIndex(QMediaPlaylist* o) const { return o->currentIndex(); }
    Q_INVOKABLE QMediaContent McurrentMedia(QMediaPlaylist* o) const { return o->currentMedia(); }
    Q_INVOKABLE int Merror(QMediaPlaylist* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QMediaPlaylist* o) const { return o->errorString(); }
    Q_INVOKABLE bool MinsertMedia(QMediaPlaylist* o, int x1, const QMediaContent& x2) { return o->insertMedia(x1, x2); }
    Q_INVOKABLE bool MinsertMedia(QMediaPlaylist* o, int x1, const QList<QMediaContent>& x2) { return o->insertMedia(x1, x2); }
    Q_INVOKABLE bool MisEmpty(QMediaPlaylist* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisReadOnly(QMediaPlaylist* o) const { return o->isReadOnly(); }
    Q_INVOKABLE void Mload(QMediaPlaylist* o, const QNetworkRequest& x1, const char* x2 = 0) { o->load(x1, x2); }
    Q_INVOKABLE void Mload(QMediaPlaylist* o, const QUrl& x1, const char* x2 = 0) { o->load(x1, x2); }
    Q_INVOKABLE QMediaContent Mmedia(QMediaPlaylist* o, int x1) const { return o->media(x1); }
    Q_INVOKABLE int MmediaCount(QMediaPlaylist* o) const { return o->mediaCount(); }
    Q_INVOKABLE bool MmoveMedia(QMediaPlaylist* o, int x1, int x2) { return o->moveMedia(x1, x2); }
    Q_INVOKABLE int MnextIndex(QMediaPlaylist* o, int x1 = 1) const { return o->nextIndex(x1); }
    Q_INVOKABLE int MplaybackMode(QMediaPlaylist* o) const { return o->playbackMode(); }
    Q_INVOKABLE int MpreviousIndex(QMediaPlaylist* o, int x1 = 1) const { return o->previousIndex(x1); }
    Q_INVOKABLE bool MremoveMedia(QMediaPlaylist* o, int x1) { return o->removeMedia(x1); }
    Q_INVOKABLE bool MremoveMedia(QMediaPlaylist* o, int x1, int x2) { return o->removeMedia(x1, x2); }
    Q_INVOKABLE bool Msave(QMediaPlaylist* o, const QUrl& x1, const char* x2 = 0) { return o->save(x1, x2); }
    Q_INVOKABLE void MsetPlaybackMode(QMediaPlaylist* o, QMediaPlaylist::PlaybackMode x1) { o->setPlaybackMode(x1); }
    Q_INVOKABLE QMediaObject* MmediaObject(QMediaPlaylist* o) const { return o->mediaObject(); }
};

class Q127 : public Q139 { // QMediaRecorder
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QMediaObject* x1, QObject* x2 = 0) { return new LMediaRecorder(u, x1, x2); }
    Q_INVOKABLE QUrl MactualLocation(QMediaRecorder* o) const { return o->actualLocation(); }
    Q_INVOKABLE QString MaudioCodecDescription(QMediaRecorder* o, const QString& x1) const { return o->audioCodecDescription(x1); }
    Q_INVOKABLE QAudioEncoderSettings MaudioSettings(QMediaRecorder* o) const { return o->audioSettings(); }
    Q_INVOKABLE int Mavailability(QMediaRecorder* o) const { return o->availability(); }
    Q_INVOKABLE QStringList MavailableMetaData(QMediaRecorder* o) const { return o->availableMetaData(); }
    Q_INVOKABLE QString McontainerDescription(QMediaRecorder* o, const QString& x1) const { return o->containerDescription(x1); }
    Q_INVOKABLE QString McontainerFormat(QMediaRecorder* o) const { return o->containerFormat(); }
    Q_INVOKABLE qlonglong Mduration(QMediaRecorder* o) const { return o->duration(); }
    Q_INVOKABLE int Merror(QMediaRecorder* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QMediaRecorder* o) const { return o->errorString(); }
    Q_INVOKABLE bool MisAvailable(QMediaRecorder* o) const { return o->isAvailable(); }
    Q_INVOKABLE bool MisMetaDataAvailable(QMediaRecorder* o) const { return o->isMetaDataAvailable(); }
    Q_INVOKABLE bool MisMetaDataWritable(QMediaRecorder* o) const { return o->isMetaDataWritable(); }
    Q_INVOKABLE bool MisMuted(QMediaRecorder* o) const { return o->isMuted(); }
    Q_INVOKABLE QVariant MmetaData(QMediaRecorder* o, const QString& x1) const { return o->metaData(x1); }
    Q_INVOKABLE QUrl MoutputLocation(QMediaRecorder* o) const { return o->outputLocation(); }
    Q_INVOKABLE void MsetAudioSettings(QMediaRecorder* o, const QAudioEncoderSettings& x1) { o->setAudioSettings(x1); }
    Q_INVOKABLE void MsetContainerFormat(QMediaRecorder* o, const QString& x1) { o->setContainerFormat(x1); }
    Q_INVOKABLE void MsetEncodingSettings(QMediaRecorder* o, const QAudioEncoderSettings& x1, const QVideoEncoderSettings& x2 = QVideoEncoderSettings(), const QString& x3 = QString()) { o->setEncodingSettings(x1, x2, x3); }
    Q_INVOKABLE void MsetMetaData(QMediaRecorder* o, const QString& x1, const QVariant& x2) { o->setMetaData(x1, x2); }
    Q_INVOKABLE bool MsetOutputLocation(QMediaRecorder* o, const QUrl& x1) { return o->setOutputLocation(x1); }
    Q_INVOKABLE void MsetVideoSettings(QMediaRecorder* o, const QVideoEncoderSettings& x1) { o->setVideoSettings(x1); }
    Q_INVOKABLE int Mstate(QMediaRecorder* o) const { return o->state(); }
    Q_INVOKABLE int Mstatus(QMediaRecorder* o) const { return o->status(); }
    Q_INVOKABLE QStringList MsupportedAudioCodecs(QMediaRecorder* o) const { return o->supportedAudioCodecs(); }
    Q_INVOKABLE QList<int> MsupportedAudioSampleRates(QMediaRecorder* o, const QAudioEncoderSettings& x1 = QAudioEncoderSettings(), bool* x2 = 0) const { return o->supportedAudioSampleRates(x1, x2); }
    Q_INVOKABLE QStringList MsupportedContainers(QMediaRecorder* o) const { return o->supportedContainers(); }
    Q_INVOKABLE QList<qreal> MsupportedFrameRates(QMediaRecorder* o, const QVideoEncoderSettings& x1 = QVideoEncoderSettings(), bool* x2 = 0) const { return o->supportedFrameRates(x1, x2); }
    Q_INVOKABLE QList<QSize> MsupportedResolutions(QMediaRecorder* o, const QVideoEncoderSettings& x1 = QVideoEncoderSettings(), bool* x2 = 0) const { return o->supportedResolutions(x1, x2); }
    Q_INVOKABLE QStringList MsupportedVideoCodecs(QMediaRecorder* o) const { return o->supportedVideoCodecs(); }
    Q_INVOKABLE QString MvideoCodecDescription(QMediaRecorder* o, const QString& x1) const { return o->videoCodecDescription(x1); }
    Q_INVOKABLE QVideoEncoderSettings MvideoSettings(QMediaRecorder* o) const { return o->videoSettings(); }
    Q_INVOKABLE qreal Mvolume(QMediaRecorder* o) const { return o->volume(); }
    Q_INVOKABLE QMediaObject* MmediaObject(QMediaRecorder* o) const { return o->mediaObject(); }
};

class Q128 : public Q139 { // QMediaService
    Q_OBJECT
public:
    Q_INVOKABLE void MreleaseControl(QMediaService* o, QMediaControl* x1) { o->releaseControl(x1); }
    Q_INVOKABLE QMediaControl* MrequestControl(QMediaService* o, const char* x1) { return o->requestControl(x1); }
};

class Q166 : public Q124 { // QRadioTuner
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LRadioTuner(u, x1); }
    Q_INVOKABLE int Mband(QRadioTuner* o) const { return o->band(); }
    Q_INVOKABLE int Merror(QRadioTuner* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QRadioTuner* o) const { return o->errorString(); }
    Q_INVOKABLE int Mfrequency(QRadioTuner* o) const { return o->frequency(); }
    Q_INVOKABLE int MfrequencyStep(QRadioTuner* o, QRadioTuner::Band x1) const { return o->frequencyStep(x1); }
    Q_INVOKABLE bool MisAntennaConnected(QRadioTuner* o) const { return o->isAntennaConnected(); }
    Q_INVOKABLE bool MisBandSupported(QRadioTuner* o, QRadioTuner::Band x1) const { return o->isBandSupported(x1); }
    Q_INVOKABLE bool MisMuted(QRadioTuner* o) const { return o->isMuted(); }
    Q_INVOKABLE bool MisSearching(QRadioTuner* o) const { return o->isSearching(); }
    Q_INVOKABLE bool MisStereo(QRadioTuner* o) const { return o->isStereo(); }
    Q_INVOKABLE QRadioData* MradioData(QRadioTuner* o) const { return o->radioData(); }
    Q_INVOKABLE void MsetStereoMode(QRadioTuner* o, QRadioTuner::StereoMode x1) { o->setStereoMode(x1); }
    Q_INVOKABLE int MsignalStrength(QRadioTuner* o) const { return o->signalStrength(); }
    Q_INVOKABLE int Mstate(QRadioTuner* o) const { return o->state(); }
    Q_INVOKABLE int MstereoMode(QRadioTuner* o) const { return o->stereoMode(); }
    Q_INVOKABLE int Mvolume(QRadioTuner* o) const { return o->volume(); }
    Q_INVOKABLE int Mavailability(QRadioTuner* o) const { return o->availability(); }
};

class Q24 : public Q127 { // QAudioRecorder
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LAudioRecorder(u, x1); }
    Q_INVOKABLE QString MaudioInput(QAudioRecorder* o) const { return o->audioInput(); }
    Q_INVOKABLE QString MaudioInputDescription(QAudioRecorder* o, const QString& x1) const { return o->audioInputDescription(x1); }
    Q_INVOKABLE QStringList MaudioInputs(QAudioRecorder* o) const { return o->audioInputs(); }
    Q_INVOKABLE QString MdefaultAudioInput(QAudioRecorder* o) const { return o->defaultAudioInput(); }
};

class Q29 : public Q124 { // QCamera
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LCamera(u, x1); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1, QObject* x2 = 0) { return new LCamera(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QCameraInfo& x1, QObject* x2 = 0) { return new LCamera(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QCamera::Position x1, QObject* x2 = 0) { return new LCamera(u, x1, x2); }
    Q_INVOKABLE int McaptureMode(QCamera* o) const { return o->captureMode(); }
    Q_INVOKABLE int Merror(QCamera* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QCamera* o) const { return o->errorString(); }
    Q_INVOKABLE QCameraExposure* Mexposure(QCamera* o) const { return o->exposure(); }
    Q_INVOKABLE QCameraFocus* Mfocus(QCamera* o) const { return o->focus(); }
    Q_INVOKABLE QCameraImageProcessing* MimageProcessing(QCamera* o) const { return o->imageProcessing(); }
    Q_INVOKABLE bool MisCaptureModeSupported(QCamera* o, QCamera::CaptureModes x1) const { return o->isCaptureModeSupported(x1); }
    Q_INVOKABLE int MlockStatus(QCamera* o) const { return o->lockStatus(); }
    Q_INVOKABLE int MlockStatus(QCamera* o, QCamera::LockType x1) const { return o->lockStatus(x1); }
    Q_INVOKABLE int MrequestedLocks(QCamera* o) const { return o->requestedLocks(); }
    Q_INVOKABLE void MsetViewfinder(QCamera* o, QVideoWidget* x1) { o->setViewfinder(x1); }
    Q_INVOKABLE void MsetViewfinder(QCamera* o, QGraphicsVideoItem* x1) { o->setViewfinder(x1); }
    Q_INVOKABLE void MsetViewfinder(QCamera* o, QAbstractVideoSurface* x1) { o->setViewfinder(x1); }
    Q_INVOKABLE void MsetViewfinderSettings(QCamera* o, const QCameraViewfinderSettings& x1) { o->setViewfinderSettings(x1); }
    Q_INVOKABLE int Mstate(QCamera* o) const { return o->state(); }
    Q_INVOKABLE int Mstatus(QCamera* o) const { return o->status(); }
    Q_INVOKABLE int MsupportedLocks(QCamera* o) const { return o->supportedLocks(); }
    Q_INVOKABLE QList<QCamera::FrameRateRange> MsupportedViewfinderFrameRateRanges(QCamera* o, const QCameraViewfinderSettings& x1 = QCameraViewfinderSettings()) const { return o->supportedViewfinderFrameRateRanges(x1); }
    Q_INVOKABLE QList<QVideoFrame::PixelFormat> MsupportedViewfinderPixelFormats(QCamera* o, const QCameraViewfinderSettings& x1 = QCameraViewfinderSettings()) const { return o->supportedViewfinderPixelFormats(x1); }
    Q_INVOKABLE QList<QSize> MsupportedViewfinderResolutions(QCamera* o, const QCameraViewfinderSettings& x1 = QCameraViewfinderSettings()) const { return o->supportedViewfinderResolutions(x1); }
    Q_INVOKABLE QList<QCameraViewfinderSettings> MsupportedViewfinderSettings(QCamera* o, const QCameraViewfinderSettings& x1 = QCameraViewfinderSettings()) const { return o->supportedViewfinderSettings(x1); }
    Q_INVOKABLE QCameraViewfinderSettings MviewfinderSettings(QCamera* o) const { return o->viewfinderSettings(); }
    Q_INVOKABLE int Mavailability(QCamera* o) const { return o->availability(); }
};

class Q237 : public Q245 { // QVideoWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LVideoWidget(u, x1); }
    Q_INVOKABLE int MaspectRatioMode(QVideoWidget* o) const { return o->aspectRatioMode(); }
    Q_INVOKABLE int Mbrightness(QVideoWidget* o) const { return o->brightness(); }
    Q_INVOKABLE int Mcontrast(QVideoWidget* o) const { return o->contrast(); }
    Q_INVOKABLE int Mhue(QVideoWidget* o) const { return o->hue(); }
    Q_INVOKABLE bool MisFullScreen(QVideoWidget* o) const { return o->isFullScreen(); }
    Q_INVOKABLE QMediaObject* MmediaObject(QVideoWidget* o) const { return o->mediaObject(); }
    Q_INVOKABLE int Msaturation(QVideoWidget* o) const { return o->saturation(); }
    Q_INVOKABLE QSize MsizeHint(QVideoWidget* o) const { return o->sizeHint(); }
};

class Q34 : public Q237 { // QCameraViewfinder
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LCameraViewfinder(u, x1); }
    Q_INVOKABLE QMediaObject* MmediaObject(QCameraViewfinder* o) const { return o->mediaObject(); }
    Q_INVOKABLE bool MsetMediaObject(QCameraViewfinder* o, QMediaObject* x1) { return ((LCameraViewfinder*)o)->setMediaObject(x1); }
};

QT_END_NAMESPACE

#endif
