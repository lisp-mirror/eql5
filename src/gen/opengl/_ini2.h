#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QGLFormat, qglformat)
TO_QT_TYPE_PTR (QGLFramebufferObjectFormat, qglframebufferobjectformat)

static GLfloat toFloat(cl_object l_num) {
    GLfloat f = 0;
    if(ECL_SINGLE_FLOAT_P(l_num)) {
        f = sf(l_num); }
    else if(ECL_DOUBLE_FLOAT_P(l_num)) {
        f = df(l_num); }
#ifdef ECL_LONG_FLOAT
    else if(ECL_LONG_FLOAT_P(l_num)) {
        f = ecl_long_float(l_num); }
#endif
    else if(FIXNUMP(l_num)) {
        f = fixint(l_num); }
    else {
        cl_object l_f = cl_float(1, l_num);
        if(ECL_DOUBLE_FLOAT_P(l_f)) {
            f = df(l_f); }
        else if(ECL_SINGLE_FLOAT_P(l_f)) {
            f = sf(l_f); }}
    return f; }

static GLint toInt(cl_object l_num) {
    GLint i = 0;
    if(FIXNUMP(l_num)) {
        i = fixint(l_num); }
    return i; }

static GLuint toUInt(cl_object l_num) {
    GLuint i = 0;
    if(FIXNUMP(l_num)) {
        i = fixnnint(l_num); }
    return i; }

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

void ini2() {
    META_TYPE_(LObjects::T_GLenum,                     GLenum)
    META_TYPE_(LObjects::T_GLfloat,                    GLfloat)
    META_TYPE_(LObjects::T_GLint,                      GLint)
    META_TYPE_(LObjects::T_GLuint,                     GLuint)
    META_TYPE_(LObjects::T_QGLFormat,                  QGLFormat)
    META_TYPE_(LObjects::T_QGLFramebufferObjectFormat, QGLFramebufferObjectFormat) }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_GLenum == n)                           { p = new GLenum(toInt(l_arg)); }
    else if(LObjects::T_GLfloat == n)                     { p = new GLfloat(toFloat(l_arg)); }
    else if(LObjects::T_GLint == n)                       { p = new GLint(toInt(l_arg)); }
    else if(LObjects::T_GLuint == n)                      { p = new GLuint(toUInt(l_arg)); }
    else if(LObjects::T_QGLFormat == n)                   { p = new QGLFormat(*toQGLFormatPointer(l_arg)); }
    else if(LObjects::T_QGLFramebufferObjectFormat == n)  { p = new QGLFramebufferObjectFormat(*toQGLFramebufferObjectFormatPointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_GLenum == n)                           { l_ret = MAKE_FIXNUM(*(GLenum*)p); }
    else if(LObjects::T_GLfloat == n)                     { l_ret = ecl_make_doublefloat(*(GLfloat*)p); }
    else if(LObjects::T_GLint == n)                       { l_ret = MAKE_FIXNUM(*(GLint*)p); }
    else if(LObjects::T_GLuint == n)                      { l_ret = MAKE_FIXNUM(*(GLuint*)p); }
    else if(LObjects::T_QGLFormat == n)                   { l_ret = from_qglformat(*(QGLFormat*)p); }
    else if(LObjects::T_QGLFramebufferObjectFormat == n)  { l_ret = from_qglframebufferobjectformat(*(QGLFramebufferObjectFormat*)p); }
    return l_ret; }

QT_END_NAMESPACE

#endif
