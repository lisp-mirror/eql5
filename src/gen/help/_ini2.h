#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR2 (QHelpSearchQuery, qhelpsearchquery)

TO_QT_LIST_VAL (QHelpSearchQuery)

TO_CL_LIST_VAL (QHelpSearchQuery, qhelpsearchquery)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

void ini2() {
    META_TYPE_(LObjects::T_QHelpSearchQuery, QHelpSearchQuery)
    META_TYPE_(LObjects::T_QList_QHelpSearchQuery, QList<QHelpSearchQuery>) }

void* toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QHelpSearchQuery == n)            { p = new QHelpSearchQuery(*toQHelpSearchQueryPointer(l_arg)); }
    else if(LObjects::T_QList_QHelpSearchQuery == n) { p = new QList<QHelpSearchQuery>(toQHelpSearchQueryList(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }
    
cl_object to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QHelpSearchQuery == n)            { l_ret = from_qhelpsearchquery(*(QHelpSearchQuery*)p); }
    else if(LObjects::T_QList_QHelpSearchQuery == n) { l_ret = from_qhelpsearchquerylist(*(QList<QHelpSearchQuery>*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

QT_END_NAMESPACE

#endif
