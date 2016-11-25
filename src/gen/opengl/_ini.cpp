// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGLShader::overrideIds = NumList();
NumList LGLShaderProgram::overrideIds = NumList() << 221;
NumList LGLWidget::overrideIds = NumList() << 222 << 223 << 224 << 225 << 226 << 227 << 228 << 229 << 20 << 40;
NumList LGLColormap::overrideIds = NumList();
NumList LGLContext::overrideIds = NumList() << 431 << 432 << 433 << 434 << 435;
NumList LGLFormat::overrideIds = NumList();
NumList LGLFramebufferObject::overrideIds = NumList() << 45;
NumList LGLFramebufferObjectFormat::overrideIds = NumList();
NumList LGLPixelBuffer::overrideIds = NumList() << 45;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[60] = new Q61;
    LObjects::Q[61] = new Q62;
    LObjects::Q[62] = new Q63;
    LObjects::N[39] = new N40;
    LObjects::N[40] = new N41;
    LObjects::N[41] = new N42;
    LObjects::N[42] = new N43;
    LObjects::N[43] = new N44;
    LObjects::N[44] = new N45; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 61: m = &QGLShader::staticMetaObject; break;
        case 62: m = &QGLShaderProgram::staticMetaObject; break;
        case 63: m = &QGLWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 40: if(gc) delete (QGLColormap*)p; else delete (LGLColormap*)p; break;
        case 41: if(gc) delete (QGLContext*)p; else delete (LGLContext*)p; break;
        case 42: if(gc) delete (QGLFormat*)p; else delete (LGLFormat*)p; break;
        case 43: if(gc) delete (QGLFramebufferObject*)p; else delete (LGLFramebufferObject*)p; break;
        case 44: if(gc) delete (QGLFramebufferObjectFormat*)p; else delete (LGLFramebufferObjectFormat*)p; break;
        case 45: if(gc) delete (QGLPixelBuffer*)p; else delete (LGLPixelBuffer*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 61: ids = &LGLShader::overrideIds; break;
            case 62: ids = &LGLShaderProgram::overrideIds; break;
            case 63: ids = &LGLWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 40: ids = &LGLColormap::overrideIds; break;
            case 41: ids = &LGLContext::overrideIds; break;
            case 42: ids = &LGLFormat::overrideIds; break;
            case 43: ids = &LGLFramebufferObject::overrideIds; break;
            case 44: ids = &LGLFramebufferObjectFormat::overrideIds; break;
            case 45: ids = &LGLPixelBuffer::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
