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
NumList LMediaControl::overrideIds = NumList();
NumList LMediaObject::overrideIds = NumList() << 178 << 179 << 180 << 181 << 182;
NumList LMediaPlayer::overrideIds = NumList() << 178;
NumList LMediaPlaylist::overrideIds = NumList() << 161;
NumList LMediaRecorder::overrideIds = NumList() << 161;
NumList LRadioTuner::overrideIds = NumList() << 178;
NumList LVideoWidget::overrideIds = NumList() << 25 << 35 << 39 << 20 << 40 << 41;
NumList LVideoWidgetControl::overrideIds = NumList() << 420 << 421 << 422 << 423 << 424 << 425 << 426 << 427 << 428 << 429 << 430 << 431 << 432;
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
    LObjects::Q[125] = new Q126;
    LObjects::Q[126] = new Q127;
    LObjects::Q[127] = new Q128;
    LObjects::Q[128] = new Q129;
    LObjects::Q[129] = new Q130;
    LObjects::Q[130] = new Q131;
    LObjects::Q[187] = new Q188;
    LObjects::Q[263] = new Q264;
    LObjects::Q[264] = new Q265;
    LObjects::N[17] = new N18;
    LObjects::N[18] = new N19;
    LObjects::N[19] = new N20;
    LObjects::N[26] = new N27;
    LObjects::N[27] = new N28;
    LObjects::N[96] = new N97;
    LObjects::N[116] = new N117;
    LObjects::N[117] = new N118;
    LObjects::N[260] = new N261;
    LObjects::N[261] = new N262;
    LObjects::N[262] = new N263; }

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
        case 126: m = &QMediaControl::staticMetaObject; break;
        case 127: m = &QMediaObject::staticMetaObject; break;
        case 128: m = &QMediaPlayer::staticMetaObject; break;
        case 129: m = &QMediaPlaylist::staticMetaObject; break;
        case 130: m = &QMediaRecorder::staticMetaObject; break;
        case 131: m = &QMediaService::staticMetaObject; break;
        case 188: m = &QRadioTuner::staticMetaObject; break;
        case 264: m = &QVideoWidget::staticMetaObject; break;
        case 265: m = &QVideoWidgetControl::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 18: if(gc) delete (QAudioDeviceInfo*)p; else delete (LAudioDeviceInfo*)p; break;
        case 19: if(gc) delete (QAudioEncoderSettings*)p; else delete (LAudioEncoderSettings*)p; break;
        case 20: if(gc) delete (QAudioFormat*)p; else delete (LAudioFormat*)p; break;
        case 27: if(gc) delete (QCameraInfo*)p; else delete (LCameraInfo*)p; break;
        case 28: if(gc) delete (QCameraViewfinderSettings*)p; else delete (LCameraViewfinderSettings*)p; break;
        case 97: if(gc) delete (QImageEncoderSettings*)p; else delete (LImageEncoderSettings*)p; break;
        case 117: if(gc) delete (QMediaContent*)p; else delete (LMediaContent*)p; break;
        case 118: if(gc) delete (QMediaResource*)p; else delete (LMediaResource*)p; break;
        case 261: if(gc) delete (QVideoEncoderSettings*)p; else delete (LVideoEncoderSettings*)p; break;
        case 262: if(gc) delete (QVideoFrame*)p; else delete (LVideoFrame*)p; break;
        case 263: if(gc) delete (QVideoSurfaceFormat*)p; else delete (LVideoSurfaceFormat*)p; break; }}

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
            case 126: ids = &LMediaControl::overrideIds; break;
            case 127: ids = &LMediaObject::overrideIds; break;
            case 128: ids = &LMediaPlayer::overrideIds; break;
            case 129: ids = &LMediaPlaylist::overrideIds; break;
            case 130: ids = &LMediaRecorder::overrideIds; break;
            case 188: ids = &LRadioTuner::overrideIds; break;
            case 264: ids = &LVideoWidget::overrideIds; break;
            case 265: ids = &LVideoWidgetControl::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 18: ids = &LAudioDeviceInfo::overrideIds; break;
            case 19: ids = &LAudioEncoderSettings::overrideIds; break;
            case 20: ids = &LAudioFormat::overrideIds; break;
            case 27: ids = &LCameraInfo::overrideIds; break;
            case 28: ids = &LCameraViewfinderSettings::overrideIds; break;
            case 97: ids = &LImageEncoderSettings::overrideIds; break;
            case 117: ids = &LMediaContent::overrideIds; break;
            case 118: ids = &LMediaResource::overrideIds; break;
            case 261: ids = &LVideoEncoderSettings::overrideIds; break;
            case 262: ids = &LVideoFrame::overrideIds; break;
            case 263: ids = &LVideoSurfaceFormat::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
