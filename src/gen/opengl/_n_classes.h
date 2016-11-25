// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LGLColormap : public QGLColormap {
    friend class N40;
public:
    LGLColormap(uint u) : unique(u) {}
    LGLColormap(uint u, const QGLColormap& x1) : QGLColormap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGLContext : public QGLContext {
    friend class N41;
public:
    LGLContext(uint u, const QGLFormat& x1) : QGLContext(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool create(const QGLContext* x1 = 0) { quint64 id = LObjects::override_id(unique, 431); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 431, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLContext::create(x1); } return ret; }
    void doneCurrent() { quint64 id = LObjects::override_id(unique, 432); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 432, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLContext::doneCurrent(); }}
    void makeCurrent() { quint64 id = LObjects::override_id(unique, 433); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 433, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLContext::makeCurrent(); }}
    void swapBuffers() const { quint64 id = LObjects::override_id(unique, 434); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 434, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLContext::swapBuffers(); }}
    bool chooseContext(const QGLContext* x1 = 0) { quint64 id = LObjects::override_id(unique, 435); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 435, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLContext::chooseContext(x1); } return ret; }
};

class LGLFormat : public QGLFormat {
    friend class N42;
public:
    LGLFormat(uint u) : unique(u) {}
    LGLFormat(uint u, QGL::FormatOptions x1, int x2 = 0) : QGLFormat(x1, x2), unique(u) {}
    LGLFormat(uint u, const QGLFormat& x1) : QGLFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGLFramebufferObject : public QGLFramebufferObject {
    friend class N43;
public:
    LGLFramebufferObject(uint u, const QSize& x1, GLenum x2 = GL_TEXTURE_2D) : QGLFramebufferObject(x1, x2), unique(u) {}
    LGLFramebufferObject(uint u, int x1, int x2, GLenum x3 = GL_TEXTURE_2D) : QGLFramebufferObject(x1, x2, x3), unique(u) {}
    LGLFramebufferObject(uint u, const QSize& x1, const QGLFramebufferObjectFormat& x2) : QGLFramebufferObject(x1, x2), unique(u) {}
    LGLFramebufferObject(uint u, int x1, int x2, const QGLFramebufferObjectFormat& x3) : QGLFramebufferObject(x1, x2, x3), unique(u) {}
    LGLFramebufferObject(uint u, int x1, int x2, Attachment x3, GLenum x4 = GL_TEXTURE_2D, GLenum x5 = 0) : QGLFramebufferObject(x1, x2, x3, x4, x5), unique(u) {}
    LGLFramebufferObject(uint u, const QSize& x1, Attachment x2, GLenum x3 = GL_TEXTURE_2D, GLenum x4 = 0) : QGLFramebufferObject(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLFramebufferObject::metric(x1); } return ret; }
};

class LGLFramebufferObjectFormat : public QGLFramebufferObjectFormat {
    friend class N44;
public:
    LGLFramebufferObjectFormat(uint u) : unique(u) {}
    LGLFramebufferObjectFormat(uint u, const QGLFramebufferObjectFormat& x1) : QGLFramebufferObjectFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGLPixelBuffer : public QGLPixelBuffer {
    friend class N45;
public:
    LGLPixelBuffer(uint u, const QSize& x1, const QGLFormat& x2 = QGLFormat::defaultFormat(), QGLWidget* x3 = 0) : QGLPixelBuffer(x1, x2, x3), unique(u) {}
    LGLPixelBuffer(uint u, int x1, int x2, const QGLFormat& x3 = QGLFormat::defaultFormat(), QGLWidget* x4 = 0) : QGLPixelBuffer(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLPixelBuffer::metric(x1); } return ret; }
};

QT_END_NAMESPACE

#endif
