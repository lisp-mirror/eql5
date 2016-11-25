#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QWebElement, qwebelement)
TO_QT_TYPE_PTR (QWebElementCollection, qwebelementcollection)
TO_QT_TYPE_PTR (QWebHitTestResult, qwebhittestresult)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

void ini2() {
    // note: QWebHistoryItem can't be registered as QMetaType, lacking a public default constructor
    META_TYPE_(LObjects::T_QWebElement,           QWebElement)
    META_TYPE_(LObjects::T_QWebElementCollection, QWebElementCollection)
    META_TYPE_(LObjects::T_QWebHitTestResult,     QWebHitTestResult) }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_QWebElement == n)                { p = new QWebElement(*toQWebElementPointer(l_arg)); }
    else if(LObjects::T_QWebElementCollection == n) { p = new QWebElementCollection(*toQWebElementCollectionPointer(l_arg)); }
    else if(LObjects::T_QWebHitTestResult == n)     { p = new QWebHitTestResult(*toQWebHitTestResultPointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_QWebElement == n)                { l_ret = from_qwebelement(*(QWebElement*)p); }
    else if(LObjects::T_QWebElementCollection == n) { l_ret = from_qwebelementcollection(*(QWebElementCollection*)p); }
    else if(LObjects::T_QWebHitTestResult == n)     { l_ret = from_qwebhittestresult(*(QWebHitTestResult*)p); }
    return l_ret; }

QT_END_NAMESPACE

#endif
