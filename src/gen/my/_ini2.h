#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

// TO_QT_TYPE_PTR(Q..., q...)

void ini2() {
    // LObjects::T_Q... = qRegisterMetaType<Q...>("Q...");
}

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    // if(LObjects::T_Q... == n)      { p = new Q...(*toQ...Pointer(l_arg)); }
    // else if(LObjects::T_Q... == n) { p = new Q...(*toQ...Pointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    // if(LObjects::T_Q... == n)      { l_ret = from_q...(*(Q...*)p); }
    // else if(LObjects::T_Q... == n) { l_ret = from_q...(*(Q...*)p); }
    return l_ret; }

QT_END_NAMESPACE

#endif
