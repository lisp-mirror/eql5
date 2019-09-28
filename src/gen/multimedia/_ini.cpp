// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR  (QAudioDeviceInfo, qaudiodeviceinfo)
TO_QT_TYPE_PTR  (QAudioEncoderSettings, qaudioencodersettings)
TO_QT_TYPE_PTR  (QAudioFormat, qaudioformat)
TO_QT_TYPE_PTR  (QCameraInfo, qcamerainfo)
TO_QT_TYPE_PTR  (QCameraViewfinderSettings, qcameraviewfindersettings)
TO_QT_TYPE_PTR  (QImageEncoderSettings, qimageencodersettings)
TO_QT_TYPE_PTR2 (QMediaContent, qmediacontent)
TO_QT_TYPE_PTR  (QVideoEncoderSettings, qvideoencodersettings)
TO_QT_TYPE_PTR  (QVideoSurfaceFormat, qvideosurfaceformat)

TO_QT_LIST_VAL (QMediaContent)

TO_CL_LIST_VAL (QAudioDeviceInfo, qaudiodeviceinfo)
TO_CL_LIST_VAL (QCameraInfo, qcamerainfo)
TO_CL_LIST_VAL (QCameraViewfinderSettings, qcameraviewfindersettings)
TO_CL_LIST_VAL (QMediaContent, qmediacontent)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

NumList LAudioOutput::overrideIds = NumList();
NumList LAudioRecorder::overrideIds = NumList();
NumList LCamera::overrideIds = NumList() << 179;
NumList LCameraImageCapture::overrideIds = NumList() << 162 << 184;
NumList LCameraViewfinder::overrideIds = NumList();
NumList LGraphicsVideoItem::overrideIds = NumList() << 261 << 232;
NumList LMediaControl::overrideIds = NumList();
NumList LMediaObject::overrideIds = NumList() << 179 << 180 << 181 << 182 << 183;
NumList LMediaPlayer::overrideIds = NumList() << 179;
NumList LMediaPlaylist::overrideIds = NumList() << 162;
NumList LMediaRecorder::overrideIds = NumList() << 162;
NumList LRadioTuner::overrideIds = NumList() << 179;
NumList LVideoWidget::overrideIds = NumList() << 25 << 35 << 39 << 20 << 40 << 41;
NumList LVideoWidgetControl::overrideIds = NumList() << 419 << 420 << 421 << 422 << 423 << 424 << 425 << 426 << 427 << 428 << 429 << 430 << 431;
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

void* multimedia_ini() {
    static bool _ = false; if(_) return 0; _ = true;
    ModuleMultimedia* module = new ModuleMultimedia;
    module->ini2();
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
    LObjects::Q[186] = new Q187;
    LObjects::Q[262] = new Q263;
    LObjects::Q[263] = new Q264;
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
    LObjects::N[262] = new N263;
    return module; }

ModuleMultimedia::ModuleMultimedia() {
    multimedia_ini(); }

void ModuleMultimedia::ini2() {
    META_TYPE_(LObjects::T_QAudioDeviceInfo,                QAudioDeviceInfo)
    META_TYPE_(LObjects::T_QList_QAudioDeviceInfo,          QList<QAudioDeviceInfo>)
    META_TYPE_(LObjects::T_QAudioEncoderSettings,           QAudioEncoderSettings)
    META_TYPE_(LObjects::T_QAudioFormat,                    QAudioFormat)
    META_TYPE_(LObjects::T_QCameraInfo,                     QCameraInfo)
    META_TYPE_(LObjects::T_QList_QCameraInfo,               QList<QCameraInfo>)
    META_TYPE_(LObjects::T_QCameraViewfinderSettings,       QCameraViewfinderSettings)
    META_TYPE_(LObjects::T_QList_QCameraViewfinderSettings, QList<QCameraViewfinderSettings>)
    META_TYPE_(LObjects::T_QImageEncoderSettings,           QImageEncoderSettings)
    META_TYPE_(LObjects::T_QMediaContent,                   QMediaContent)
    META_TYPE_(LObjects::T_QList_QMediaContent,             QList<QMediaContent>)
    META_TYPE_(LObjects::T_QVideoEncoderSettings,           QVideoEncoderSettings)
    META_TYPE_(LObjects::T_QVideoSurfaceFormat,             QVideoSurfaceFormat) }

void* ModuleMultimedia::toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QAudioDeviceInfo == n)               { p = new QAudioDeviceInfo(*toQAudioDeviceInfoPointer(l_arg)); }
    else if(LObjects::T_QAudioEncoderSettings == n)     { p = new QAudioEncoderSettings(*toQAudioEncoderSettingsPointer(l_arg)); }
    else if(LObjects::T_QAudioFormat == n)              { p = new QAudioFormat(*toQAudioFormatPointer(l_arg)); }
    else if(LObjects::T_QCameraInfo == n)               { p = new QCameraInfo(*toQCameraInfoPointer(l_arg)); }
    else if(LObjects::T_QCameraViewfinderSettings == n) { p = new QCameraViewfinderSettings(*toQCameraViewfinderSettingsPointer(l_arg)); }
    else if(LObjects::T_QImageEncoderSettings == n)     { p = new QImageEncoderSettings(*toQImageEncoderSettingsPointer(l_arg)); }
    else if(LObjects::T_QMediaContent == n)             { p = new QMediaContent(*toQMediaContentPointer(l_arg)); }
    else if(LObjects::T_QList_QMediaContent == n)       { p = new QList<QMediaContent>(toQMediaContentList(l_arg)); }
    else if(LObjects::T_QVideoEncoderSettings == n)     { p = new QVideoEncoderSettings(*toQVideoEncoderSettingsPointer(l_arg)); }
    else if(LObjects::T_QVideoSurfaceFormat == n)       { p = new QVideoSurfaceFormat(*toQVideoSurfaceFormatPointer(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object ModuleMultimedia::to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QAudioDeviceInfo == n)                     { l_ret = from_qaudiodeviceinfo(*(QAudioDeviceInfo*)p); }
    else if(LObjects::T_QList_QAudioDeviceInfo == n)          { l_ret = from_qaudiodeviceinfolist(*(QList<QAudioDeviceInfo>*)p); }
    else if(LObjects::T_QAudioEncoderSettings == n)           { l_ret = from_qaudioencodersettings(*(QAudioEncoderSettings*)p); }
    else if(LObjects::T_QAudioFormat == n)                    { l_ret = from_qaudioformat(*(QAudioFormat*)p); }
    else if(LObjects::T_QCameraInfo == n)                     { l_ret = from_qcamerainfo(*(QCameraInfo*)p); }
    else if(LObjects::T_QList_QCameraInfo == n)               { l_ret = from_qcamerainfolist(*(QList<QCameraInfo>*)p); }
    else if(LObjects::T_QCameraViewfinderSettings == n)       { l_ret = from_qcameraviewfindersettings(*(QCameraViewfinderSettings*)p); }
    else if(LObjects::T_QList_QCameraViewfinderSettings == n) { l_ret = from_qcameraviewfindersettingslist(*(QList<QCameraViewfinderSettings>*)p); }
    else if(LObjects::T_QImageEncoderSettings == n)           { l_ret = from_qimageencodersettings(*(QImageEncoderSettings*)p); }
    else if(LObjects::T_QMediaContent == n)                   { l_ret = from_qmediacontent(*(QMediaContent*)p); }
    else if(LObjects::T_QList_QMediaContent == n)             { l_ret = from_qmediacontentlist(*(QList<QMediaContent>*)p); }
    else if(LObjects::T_QVideoEncoderSettings == n)           { l_ret = from_qvideoencodersettings(*(QVideoEncoderSettings*)p); }
    else if(LObjects::T_QVideoSurfaceFormat == n)             { l_ret = from_qvideosurfaceformat(*(QVideoSurfaceFormat*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

const QMetaObject* ModuleMultimedia::staticMetaObject(int n) {
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
        case 187: m = &QRadioTuner::staticMetaObject; break;
        case 263: m = &QVideoWidget::staticMetaObject; break;
        case 264: m = &QVideoWidgetControl::staticMetaObject; break; }
    return m; }

void ModuleMultimedia::deleteNObject(int n, void* p, int gc) {
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

NumList* ModuleMultimedia::overrideIds(const QByteArray& name) {
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
            case 187: ids = &LRadioTuner::overrideIds; break;
            case 263: ids = &LVideoWidget::overrideIds; break;
            case 264: ids = &LVideoWidgetControl::overrideIds; break; }}
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
