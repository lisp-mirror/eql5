#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

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

void ini2() {
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

void* toMetaArg(int n, cl_object l_arg, bool* found) {
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

cl_object to_lisp_arg(int n, void* p, bool* found) {
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

QT_END_NAMESPACE

#endif
