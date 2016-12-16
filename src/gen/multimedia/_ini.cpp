// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LAudioOutput::overrideIds = NumList();
NumList LAudioRecorder::overrideIds = NumList();
NumList LCamera::overrideIds = NumList() << 178;
NumList LCameraImageCapture::overrideIds = NumList() << 161 << 183;
NumList LCameraViewfinder::overrideIds = NumList();
NumList LGraphicsVideoItem::overrideIds = NumList() << 260 << 231;
NumList LMediaObject::overrideIds = NumList() << 178 << 179 << 180 << 181 << 182;
NumList LMediaPlayer::overrideIds = NumList() << 178;
NumList LMediaPlaylist::overrideIds = NumList() << 161;
NumList LMediaRecorder::overrideIds = NumList() << 161;
NumList LRadioTuner::overrideIds = NumList() << 178;
NumList LVideoWidget::overrideIds = NumList() << 25 << 35 << 39 << 20 << 40 << 41;
NumList LVideoWidgetControl::overrideIds = NumList() << 384 << 385 << 386 << 387 << 388 << 389 << 390 << 391 << 392 << 393 << 394 << 395 << 396;
NumList LAudioDeviceInfo::overrideIds = NumList();
NumList LAudioEncoderSettings::overrideIds = NumList();
NumList LAudioFormat::overrideIds = NumList();
NumList LCameraInfo::overrideIds = NumList();
NumList LCameraViewfinderSettings::overrideIds = NumList();
NumList LImageEncoderSettings::overrideIds = NumList();
NumList LMediaContent::overrideIds = NumList();
NumList LVideoEncoderSettings::overrideIds = NumList();
NumList LVideoFrame::overrideIds = NumList();
NumList LVideoSurfaceFormat::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[17] = new Q18;
    LObjects::Q[22] = new Q23;
    LObjects::Q[23] = new Q24;
    LObjects::Q[28] = new Q29;
    LObjects::Q[29] = new Q30;
    LObjects::Q[30] = new Q31;
    LObjects::Q[31] = new Q32;
    LObjects::Q[32] = new Q33;
    LObjects::Q[33] = new Q34;
    LObjects::Q[84] = new Q85;
    LObjects::Q[120] = new Q121;
    LObjects::Q[121] = new Q122;
    LObjects::Q[122] = new Q123;
    LObjects::Q[123] = new Q124;
    LObjects::Q[124] = new Q125;
    LObjects::Q[161] = new Q162;
    LObjects::Q[230] = new Q231;
    LObjects::Q[231] = new Q232;
    LObjects::N[7] = new N8;
    LObjects::N[8] = new N9;
    LObjects::N[9] = new N10;
    LObjects::N[15] = new N16;
    LObjects::N[16] = new N17;
    LObjects::N[79] = new N80;
    LObjects::N[94] = new N95;
    LObjects::N[199] = new N200;
    LObjects::N[200] = new N201;
    LObjects::N[201] = new N202; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 18: m = &QAbstractVideoSurface::staticMetaObject; break;
        case 23: m = &QAudioOutput::staticMetaObject; break;
        case 24: m = &QAudioRecorder::staticMetaObject; break;
        case 29: m = &QCamera::staticMetaObject; break;
        case 30: m = &QCameraExposure::staticMetaObject; break;
        case 31: m = &QCameraFocus::staticMetaObject; break;
        case 32: m = &QCameraImageCapture::staticMetaObject; break;
        case 33: m = &QCameraImageProcessing::staticMetaObject; break;
        case 34: m = &QCameraViewfinder::staticMetaObject; break;
        case 85: m = &QGraphicsVideoItem::staticMetaObject; break;
        case 121: m = &QMediaObject::staticMetaObject; break;
        case 122: m = &QMediaPlayer::staticMetaObject; break;
        case 123: m = &QMediaPlaylist::staticMetaObject; break;
        case 124: m = &QMediaRecorder::staticMetaObject; break;
        case 125: m = &QMediaService::staticMetaObject; break;
        case 162: m = &QRadioTuner::staticMetaObject; break;
        case 231: m = &QVideoWidget::staticMetaObject; break;
        case 232: m = &QVideoWidgetControl::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 8: if(gc) delete (QAudioDeviceInfo*)p; else delete (LAudioDeviceInfo*)p; break;
        case 9: if(gc) delete (QAudioEncoderSettings*)p; else delete (LAudioEncoderSettings*)p; break;
        case 10: if(gc) delete (QAudioFormat*)p; else delete (LAudioFormat*)p; break;
        case 16: if(gc) delete (QCameraInfo*)p; else delete (LCameraInfo*)p; break;
        case 17: if(gc) delete (QCameraViewfinderSettings*)p; else delete (LCameraViewfinderSettings*)p; break;
        case 80: if(gc) delete (QImageEncoderSettings*)p; else delete (LImageEncoderSettings*)p; break;
        case 95: if(gc) delete (QMediaContent*)p; else delete (LMediaContent*)p; break;
        case 200: if(gc) delete (QVideoEncoderSettings*)p; else delete (LVideoEncoderSettings*)p; break;
        case 201: if(gc) delete (QVideoFrame*)p; else delete (LVideoFrame*)p; break;
        case 202: if(gc) delete (QVideoSurfaceFormat*)p; else delete (LVideoSurfaceFormat*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 23: ids = &LAudioOutput::overrideIds; break;
            case 24: ids = &LAudioRecorder::overrideIds; break;
            case 29: ids = &LCamera::overrideIds; break;
            case 32: ids = &LCameraImageCapture::overrideIds; break;
            case 34: ids = &LCameraViewfinder::overrideIds; break;
            case 85: ids = &LGraphicsVideoItem::overrideIds; break;
            case 121: ids = &LMediaObject::overrideIds; break;
            case 122: ids = &LMediaPlayer::overrideIds; break;
            case 123: ids = &LMediaPlaylist::overrideIds; break;
            case 124: ids = &LMediaRecorder::overrideIds; break;
            case 162: ids = &LRadioTuner::overrideIds; break;
            case 231: ids = &LVideoWidget::overrideIds; break;
            case 232: ids = &LVideoWidgetControl::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 8: ids = &LAudioDeviceInfo::overrideIds; break;
            case 9: ids = &LAudioEncoderSettings::overrideIds; break;
            case 10: ids = &LAudioFormat::overrideIds; break;
            case 16: ids = &LCameraInfo::overrideIds; break;
            case 17: ids = &LCameraViewfinderSettings::overrideIds; break;
            case 80: ids = &LImageEncoderSettings::overrideIds; break;
            case 95: ids = &LMediaContent::overrideIds; break;
            case 200: ids = &LVideoEncoderSettings::overrideIds; break;
            case 201: ids = &LVideoFrame::overrideIds; break;
            case 202: ids = &LVideoSurfaceFormat::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
