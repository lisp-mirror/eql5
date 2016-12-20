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
NumList LMediaResource::overrideIds = NumList();
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
    LObjects::Q[85] = new Q86;
    LObjects::Q[123] = new Q124;
    LObjects::Q[124] = new Q125;
    LObjects::Q[125] = new Q126;
    LObjects::Q[126] = new Q127;
    LObjects::Q[127] = new Q128;
    LObjects::Q[165] = new Q166;
    LObjects::Q[236] = new Q237;
    LObjects::Q[237] = new Q238;
    LObjects::N[17] = new N18;
    LObjects::N[18] = new N19;
    LObjects::N[19] = new N20;
    LObjects::N[26] = new N27;
    LObjects::N[27] = new N28;
    LObjects::N[95] = new N96;
    LObjects::N[113] = new N114;
    LObjects::N[114] = new N115;
    LObjects::N[228] = new N229;
    LObjects::N[229] = new N230;
    LObjects::N[230] = new N231; }

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
        case 86: m = &QGraphicsVideoItem::staticMetaObject; break;
        case 124: m = &QMediaObject::staticMetaObject; break;
        case 125: m = &QMediaPlayer::staticMetaObject; break;
        case 126: m = &QMediaPlaylist::staticMetaObject; break;
        case 127: m = &QMediaRecorder::staticMetaObject; break;
        case 128: m = &QMediaService::staticMetaObject; break;
        case 166: m = &QRadioTuner::staticMetaObject; break;
        case 237: m = &QVideoWidget::staticMetaObject; break;
        case 238: m = &QVideoWidgetControl::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 18: if(gc) delete (QAudioDeviceInfo*)p; else delete (LAudioDeviceInfo*)p; break;
        case 19: if(gc) delete (QAudioEncoderSettings*)p; else delete (LAudioEncoderSettings*)p; break;
        case 20: if(gc) delete (QAudioFormat*)p; else delete (LAudioFormat*)p; break;
        case 27: if(gc) delete (QCameraInfo*)p; else delete (LCameraInfo*)p; break;
        case 28: if(gc) delete (QCameraViewfinderSettings*)p; else delete (LCameraViewfinderSettings*)p; break;
        case 96: if(gc) delete (QImageEncoderSettings*)p; else delete (LImageEncoderSettings*)p; break;
        case 114: if(gc) delete (QMediaContent*)p; else delete (LMediaContent*)p; break;
        case 115: if(gc) delete (QMediaResource*)p; else delete (LMediaResource*)p; break;
        case 229: if(gc) delete (QVideoEncoderSettings*)p; else delete (LVideoEncoderSettings*)p; break;
        case 230: if(gc) delete (QVideoFrame*)p; else delete (LVideoFrame*)p; break;
        case 231: if(gc) delete (QVideoSurfaceFormat*)p; else delete (LVideoSurfaceFormat*)p; break; }}

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
            case 86: ids = &LGraphicsVideoItem::overrideIds; break;
            case 124: ids = &LMediaObject::overrideIds; break;
            case 125: ids = &LMediaPlayer::overrideIds; break;
            case 126: ids = &LMediaPlaylist::overrideIds; break;
            case 127: ids = &LMediaRecorder::overrideIds; break;
            case 166: ids = &LRadioTuner::overrideIds; break;
            case 237: ids = &LVideoWidget::overrideIds; break;
            case 238: ids = &LVideoWidgetControl::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 18: ids = &LAudioDeviceInfo::overrideIds; break;
            case 19: ids = &LAudioEncoderSettings::overrideIds; break;
            case 20: ids = &LAudioFormat::overrideIds; break;
            case 27: ids = &LCameraInfo::overrideIds; break;
            case 28: ids = &LCameraViewfinderSettings::overrideIds; break;
            case 96: ids = &LImageEncoderSettings::overrideIds; break;
            case 114: ids = &LMediaContent::overrideIds; break;
            case 115: ids = &LMediaResource::overrideIds; break;
            case 229: ids = &LVideoEncoderSettings::overrideIds; break;
            case 230: ids = &LVideoFrame::overrideIds; break;
            case 231: ids = &LVideoSurfaceFormat::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
