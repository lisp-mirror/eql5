#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR2 (QWebEngineScript, qwebenginescript)

TO_QT_LIST_VAL (QWebEngineScript)

TO_CL_LIST_VAL (QWebEngineScript, qwebenginescript)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

void ini2() {
    // note: QWebEngineHistoryItem can't be registered as QMetaType, lacking a public default constructor
    META_TYPE_(LObjects::T_QWebEngineScript,       QWebEngineScript)
    META_TYPE_(LObjects::T_QList_QWebEngineScript, QList<QWebEngineScript>) }

void* toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QWebEngineScript == n)            { p = new QWebEngineScript(*toQWebEngineScriptPointer(l_arg)); }
    else if(LObjects::T_QList_QWebEngineScript == n) { p = new QList<QWebEngineScript>(toQWebEngineScriptList(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QWebEngineScript == n)                 { l_ret = from_qwebenginescript(*(QWebEngineScript*)p); }
    else if(LObjects::T_QList_QWebEngineScript == n)      { l_ret = from_qwebenginescriptlist(*(QList<QWebEngineScript>*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

QT_END_NAMESPACE

#endif
