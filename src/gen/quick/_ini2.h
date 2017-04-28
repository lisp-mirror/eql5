#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "qml_lisp.h"
#include "../_lobjects.h"
#include <eql5/eql.h>
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QJSValue, qjsvalue)
TO_QT_TYPE_PTR (QQmlProperty, qqmlproperty)
TO_QT_TYPE_PTR (QQmlScriptString, qqmlscriptstring)

FROM_QT_TYPE_ONLY (QQmlError, qqmlerror)

TO_CL_LIST_VAL (QQmlError, qqmlerror)

TO_CL_LIST_PTR (QQuickItem, qquickitem)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

void ini2() {
    META_TYPE_(LObjects::T_QJSValue, QJSValue)
    META_TYPE_(LObjects::T_QQmlProperty, QQmlProperty)
    META_TYPE_(LObjects::T_QQmlScriptString, QQmlScriptString)
    META_TYPE_(LObjects::T_QList_QQmlError, QList<QQmlError>)
    META_TYPE_(LObjects::T_QList_QQuickItem, QList<QQuickItem*>)
    iniQml(); }

void* toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QJSValue == n)              { p = new QJSValue(*toQJSValuePointer(l_arg)); }
    else if(LObjects::T_QQmlProperty == n)     { p = new QQmlProperty(*toQQmlPropertyPointer(l_arg)); }
    else if(LObjects::T_QQmlScriptString == n) { p = new QQmlScriptString(*toQQmlScriptStringPointer(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QJSValue == n)              { l_ret = from_qjsvalue(*(QJSValue*)p); }
    else if(LObjects::T_QQmlProperty == n)     { l_ret = from_qqmlproperty(*(QQmlProperty*)p); }
    else if(LObjects::T_QQmlScriptString == n) { l_ret = from_qqmlscriptstring(*(QQmlScriptString*)p); }
    else if(LObjects::T_QList_QQmlError == n)  { l_ret = from_qqmlerrorlist(*(QList<QQmlError>*)p); }
    else if(LObjects::T_QList_QQuickItem == n) { l_ret = from_qquickitemlist(*(QList<QQuickItem*>*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

QT_END_NAMESPACE

#endif
