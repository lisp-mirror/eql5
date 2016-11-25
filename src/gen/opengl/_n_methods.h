// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtOpenGL>

QT_BEGIN_NAMESPACE

class N40 : public QObject { // QGLColormap
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LGLColormap(u); }
    Q_INVOKABLE void* C(uint u, const QGLColormap& x1) { return new LGLColormap(u, x1); }
    Q_INVOKABLE QColor MentryColor(QGLColormap* o, int x1) const { return o->entryColor(x1); }
    Q_INVOKABLE QRgb MentryRgb(QGLColormap* o, int x1) const { return o->entryRgb(x1); }
    Q_INVOKABLE int Mfind(QGLColormap* o, QRgb x1) const { return o->find(x1); }
    Q_INVOKABLE int MfindNearest(QGLColormap* o, QRgb x1) const { return o->findNearest(x1); }
    Q_INVOKABLE bool MisEmpty(QGLColormap* o) const { return o->isEmpty(); }
    Q_INVOKABLE void MsetEntries(QGLColormap* o, int x1, const QRgb* x2, int x3 = 0) { o->setEntries(x1, x2, x3); }
    Q_INVOKABLE void MsetEntry(QGLColormap* o, int x1, QRgb x2) { o->setEntry(x1, x2); }
    Q_INVOKABLE void MsetEntry(QGLColormap* o, int x1, const QColor& x2) { o->setEntry(x1, x2); }
    Q_INVOKABLE int Msize(QGLColormap* o) const { return o->size(); }
};

class N41 : public QObject { // QGLContext
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QGLFormat& x1) { return new LGLContext(u, x1); }
    Q_INVOKABLE GLuint MbindTexture(QGLContext* o, const QImage& x1, GLenum x2, GLint x3, QGLContext::BindOptions x4) { return o->bindTexture(x1, x2, x3, x4); }
    Q_INVOKABLE GLuint MbindTexture(QGLContext* o, const QString& x1) { return o->bindTexture(x1); }
    Q_INVOKABLE GLuint MbindTexture(QGLContext* o, const QImage& x1, GLenum x2 = GL_TEXTURE_2D, GLint x3 = GL_RGBA) { return o->bindTexture(x1, x2, x3); }
    Q_INVOKABLE GLuint MbindTexture(QGLContext* o, const QPixmap& x1, GLenum x2 = GL_TEXTURE_2D, GLint x3 = GL_RGBA) { return o->bindTexture(x1, x2, x3); }
    Q_INVOKABLE GLuint MbindTexture(QGLContext* o, const QPixmap& x1, GLenum x2, GLint x3, QGLContext::BindOptions x4) { return o->bindTexture(x1, x2, x3, x4); }
    Q_INVOKABLE bool Mcreate(QGLContext* o, const QGLContext* x1 = 0) { return o->create(x1); }
    Q_INVOKABLE void MdeleteTexture(QGLContext* o, GLuint x1) { o->deleteTexture(x1); }
    Q_INVOKABLE QPaintDevice* Mdevice(QGLContext* o) const { return o->device(); }
    Q_INVOKABLE void MdoneCurrent(QGLContext* o) { o->doneCurrent(); }
    Q_INVOKABLE void MdrawTexture(QGLContext* o, const QRectF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE void MdrawTexture(QGLContext* o, const QPointF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE QGLFormat Mformat(QGLContext* o) const { return o->format(); }
    Q_INVOKABLE QGLFunctions* Mfunctions(QGLContext* o) const { return o->functions(); }
    Q_INVOKABLE QFunctionPointer MgetProcAddress(QGLContext* o, const QString& x1) const { return o->getProcAddress(x1); }
    Q_INVOKABLE bool MisSharing(QGLContext* o) const { return o->isSharing(); }
    Q_INVOKABLE bool MisValid(QGLContext* o) const { return o->isValid(); }
    Q_INVOKABLE void MmakeCurrent(QGLContext* o) { o->makeCurrent(); }
    Q_INVOKABLE void MmoveToThread(QGLContext* o, QThread* x1) { o->moveToThread(x1); }
    Q_INVOKABLE QColor MoverlayTransparentColor(QGLContext* o) const { return o->overlayTransparentColor(); }
    Q_INVOKABLE QGLFormat MrequestedFormat(QGLContext* o) const { return o->requestedFormat(); }
    Q_INVOKABLE void Mreset(QGLContext* o) { o->reset(); }
    Q_INVOKABLE void MsetFormat(QGLContext* o, const QGLFormat& x1) { o->setFormat(x1); }
    Q_INVOKABLE void MswapBuffers(QGLContext* o) const { o->swapBuffers(); }
    Q_INVOKABLE bool MdeviceIsPixmap(QGLContext* o) const { return ((LGLContext*)o)->deviceIsPixmap(); }
    Q_INVOKABLE bool Minitialized(QGLContext* o) const { return ((LGLContext*)o)->initialized(); }
    Q_INVOKABLE void MsetInitialized(QGLContext* o, bool x1) { ((LGLContext*)o)->setInitialized(x1); }
    Q_INVOKABLE void MsetWindowCreated(QGLContext* o, bool x1) { ((LGLContext*)o)->setWindowCreated(x1); }
    Q_INVOKABLE bool MwindowCreated(QGLContext* o) const { return ((LGLContext*)o)->windowCreated(); }
    Q_INVOKABLE bool SareSharing(const QGLContext* x1, const QGLContext* x2) { return QGLContext::areSharing(x1, x2); }
    Q_INVOKABLE const QGLContext* ScurrentContext() { return QGLContext::currentContext(); }
    Q_INVOKABLE QGLContext* SfromOpenGLContext(QOpenGLContext* x1) { return QGLContext::fromOpenGLContext(x1); }
    Q_INVOKABLE void SsetTextureCacheLimit(int x1) { QGLContext::setTextureCacheLimit(x1); }
    Q_INVOKABLE int StextureCacheLimit() { return QGLContext::textureCacheLimit(); }
};

class N42 : public QObject { // QGLFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LGLFormat(u); }
    Q_INVOKABLE void* C(uint u, QGL::FormatOptions x1, int x2 = 0) { return new LGLFormat(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QGLFormat& x1) { return new LGLFormat(u, x1); }
    Q_INVOKABLE bool Maccum(QGLFormat* o) const { return o->accum(); }
    Q_INVOKABLE int MaccumBufferSize(QGLFormat* o) const { return o->accumBufferSize(); }
    Q_INVOKABLE bool Malpha(QGLFormat* o) const { return o->alpha(); }
    Q_INVOKABLE int MalphaBufferSize(QGLFormat* o) const { return o->alphaBufferSize(); }
    Q_INVOKABLE int MblueBufferSize(QGLFormat* o) const { return o->blueBufferSize(); }
    Q_INVOKABLE bool Mdepth(QGLFormat* o) const { return o->depth(); }
    Q_INVOKABLE int MdepthBufferSize(QGLFormat* o) const { return o->depthBufferSize(); }
    Q_INVOKABLE bool MdirectRendering(QGLFormat* o) const { return o->directRendering(); }
    Q_INVOKABLE bool MdoubleBuffer(QGLFormat* o) const { return o->doubleBuffer(); }
    Q_INVOKABLE int MgreenBufferSize(QGLFormat* o) const { return o->greenBufferSize(); }
    Q_INVOKABLE bool MhasOverlay(QGLFormat* o) const { return o->hasOverlay(); }
    Q_INVOKABLE int MmajorVersion(QGLFormat* o) const { return o->majorVersion(); }
    Q_INVOKABLE int MminorVersion(QGLFormat* o) const { return o->minorVersion(); }
    Q_INVOKABLE int Mplane(QGLFormat* o) const { return o->plane(); }
    Q_INVOKABLE int Mprofile(QGLFormat* o) const { return o->profile(); }
    Q_INVOKABLE int MredBufferSize(QGLFormat* o) const { return o->redBufferSize(); }
    Q_INVOKABLE bool Mrgba(QGLFormat* o) const { return o->rgba(); }
    Q_INVOKABLE bool MsampleBuffers(QGLFormat* o) const { return o->sampleBuffers(); }
    Q_INVOKABLE int Msamples(QGLFormat* o) const { return o->samples(); }
    Q_INVOKABLE void MsetAccum(QGLFormat* o, bool x1) { o->setAccum(x1); }
    Q_INVOKABLE void MsetAccumBufferSize(QGLFormat* o, int x1) { o->setAccumBufferSize(x1); }
    Q_INVOKABLE void MsetAlpha(QGLFormat* o, bool x1) { o->setAlpha(x1); }
    Q_INVOKABLE void MsetAlphaBufferSize(QGLFormat* o, int x1) { o->setAlphaBufferSize(x1); }
    Q_INVOKABLE void MsetBlueBufferSize(QGLFormat* o, int x1) { o->setBlueBufferSize(x1); }
    Q_INVOKABLE void MsetDepth(QGLFormat* o, bool x1) { o->setDepth(x1); }
    Q_INVOKABLE void MsetDepthBufferSize(QGLFormat* o, int x1) { o->setDepthBufferSize(x1); }
    Q_INVOKABLE void MsetDirectRendering(QGLFormat* o, bool x1) { o->setDirectRendering(x1); }
    Q_INVOKABLE void MsetDoubleBuffer(QGLFormat* o, bool x1) { o->setDoubleBuffer(x1); }
    Q_INVOKABLE void MsetGreenBufferSize(QGLFormat* o, int x1) { o->setGreenBufferSize(x1); }
    Q_INVOKABLE void MsetOption(QGLFormat* o, QGL::FormatOptions x1) { o->setOption(x1); }
    Q_INVOKABLE void MsetOverlay(QGLFormat* o, bool x1) { o->setOverlay(x1); }
    Q_INVOKABLE void MsetPlane(QGLFormat* o, int x1) { o->setPlane(x1); }
    Q_INVOKABLE void MsetProfile(QGLFormat* o, QGLFormat::OpenGLContextProfile x1) { o->setProfile(x1); }
    Q_INVOKABLE void MsetRedBufferSize(QGLFormat* o, int x1) { o->setRedBufferSize(x1); }
    Q_INVOKABLE void MsetRgba(QGLFormat* o, bool x1) { o->setRgba(x1); }
    Q_INVOKABLE void MsetSampleBuffers(QGLFormat* o, bool x1) { o->setSampleBuffers(x1); }
    Q_INVOKABLE void MsetSamples(QGLFormat* o, int x1) { o->setSamples(x1); }
    Q_INVOKABLE void MsetStencil(QGLFormat* o, bool x1) { o->setStencil(x1); }
    Q_INVOKABLE void MsetStencilBufferSize(QGLFormat* o, int x1) { o->setStencilBufferSize(x1); }
    Q_INVOKABLE void MsetStereo(QGLFormat* o, bool x1) { o->setStereo(x1); }
    Q_INVOKABLE void MsetSwapInterval(QGLFormat* o, int x1) { o->setSwapInterval(x1); }
    Q_INVOKABLE void MsetVersion(QGLFormat* o, int x1, int x2) { o->setVersion(x1, x2); }
    Q_INVOKABLE bool Mstencil(QGLFormat* o) const { return o->stencil(); }
    Q_INVOKABLE int MstencilBufferSize(QGLFormat* o) const { return o->stencilBufferSize(); }
    Q_INVOKABLE bool Mstereo(QGLFormat* o) const { return o->stereo(); }
    Q_INVOKABLE int MswapInterval(QGLFormat* o) const { return o->swapInterval(); }
    Q_INVOKABLE bool MtestOption(QGLFormat* o, QGL::FormatOptions x1) const { return o->testOption(x1); }
    Q_INVOKABLE QGLFormat SdefaultFormat() { return QGLFormat::defaultFormat(); }
    Q_INVOKABLE QGLFormat SdefaultOverlayFormat() { return QGLFormat::defaultOverlayFormat(); }
    Q_INVOKABLE QGLFormat SfromSurfaceFormat(const QSurfaceFormat& x1) { return QGLFormat::fromSurfaceFormat(x1); }
    Q_INVOKABLE bool ShasOpenGL() { return QGLFormat::hasOpenGL(); }
    Q_INVOKABLE bool ShasOpenGLOverlays() { return QGLFormat::hasOpenGLOverlays(); }
    Q_INVOKABLE int SopenGLVersionFlags() { return QGLFormat::openGLVersionFlags(); }
    Q_INVOKABLE void SsetDefaultFormat(const QGLFormat& x1) { QGLFormat::setDefaultFormat(x1); }
    Q_INVOKABLE void SsetDefaultOverlayFormat(const QGLFormat& x1) { QGLFormat::setDefaultOverlayFormat(x1); }
    Q_INVOKABLE QSurfaceFormat StoSurfaceFormat(const QGLFormat& x1) { return QGLFormat::toSurfaceFormat(x1); }
};

class N44 : public QObject { // QGLFramebufferObjectFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LGLFramebufferObjectFormat(u); }
    Q_INVOKABLE void* C(uint u, const QGLFramebufferObjectFormat& x1) { return new LGLFramebufferObjectFormat(u, x1); }
    Q_INVOKABLE int Mattachment(QGLFramebufferObjectFormat* o) const { return o->attachment(); }
    Q_INVOKABLE GLenum MinternalTextureFormat(QGLFramebufferObjectFormat* o) const { return o->internalTextureFormat(); }
    Q_INVOKABLE bool Mmipmap(QGLFramebufferObjectFormat* o) const { return o->mipmap(); }
    Q_INVOKABLE int Msamples(QGLFramebufferObjectFormat* o) const { return o->samples(); }
    Q_INVOKABLE void MsetAttachment(QGLFramebufferObjectFormat* o, QGLFramebufferObject::Attachment x1) { o->setAttachment(x1); }
    Q_INVOKABLE void MsetInternalTextureFormat(QGLFramebufferObjectFormat* o, GLenum x1) { o->setInternalTextureFormat(x1); }
    Q_INVOKABLE void MsetMipmap(QGLFramebufferObjectFormat* o, bool x1) { o->setMipmap(x1); }
    Q_INVOKABLE void MsetSamples(QGLFramebufferObjectFormat* o, int x1) { o->setSamples(x1); }
    Q_INVOKABLE void MsetTextureTarget(QGLFramebufferObjectFormat* o, GLenum x1) { o->setTextureTarget(x1); }
    Q_INVOKABLE GLenum MtextureTarget(QGLFramebufferObjectFormat* o) const { return o->textureTarget(); }
};

class N43 : public N108 { // QGLFramebufferObject
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QSize& x1, GLenum x2 = GL_TEXTURE_2D) { return new LGLFramebufferObject(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, GLenum x3 = GL_TEXTURE_2D) { return new LGLFramebufferObject(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, const QGLFramebufferObjectFormat& x2) { return new LGLFramebufferObject(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, const QGLFramebufferObjectFormat& x3) { return new LGLFramebufferObject(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, QGLFramebufferObject::Attachment x3, GLenum x4 = GL_TEXTURE_2D, GLenum x5 = 0) { return new LGLFramebufferObject(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, QGLFramebufferObject::Attachment x2, GLenum x3 = GL_TEXTURE_2D, GLenum x4 = 0) { return new LGLFramebufferObject(u, x1, x2, x3, x4); }
    Q_INVOKABLE int Mattachment(QGLFramebufferObject* o) const { return o->attachment(); }
    Q_INVOKABLE bool Mbind(QGLFramebufferObject* o) { return o->bind(); }
    Q_INVOKABLE void MdrawTexture(QGLFramebufferObject* o, const QRectF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE void MdrawTexture(QGLFramebufferObject* o, const QPointF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE QGLFramebufferObjectFormat Mformat(QGLFramebufferObject* o) const { return o->format(); }
    Q_INVOKABLE GLuint Mhandle(QGLFramebufferObject* o) const { return o->handle(); }
    Q_INVOKABLE bool MisBound(QGLFramebufferObject* o) const { return o->isBound(); }
    Q_INVOKABLE bool MisValid(QGLFramebufferObject* o) const { return o->isValid(); }
    Q_INVOKABLE bool Mrelease(QGLFramebufferObject* o) { return o->release(); }
    Q_INVOKABLE QSize Msize(QGLFramebufferObject* o) const { return o->size(); }
    Q_INVOKABLE GLuint Mtexture(QGLFramebufferObject* o) const { return o->texture(); }
    Q_INVOKABLE QImage MtoImage(QGLFramebufferObject* o) const { return o->toImage(); }
    Q_INVOKABLE bool SbindDefault() { return QGLFramebufferObject::bindDefault(); }
    Q_INVOKABLE void SblitFramebuffer(QGLFramebufferObject* x1, const QRect& x2, QGLFramebufferObject* x3, const QRect& x4, GLbitfield x5 = GL_COLOR_BUFFER_BIT, GLenum x6 = GL_NEAREST) { QGLFramebufferObject::blitFramebuffer(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE bool ShasOpenGLFramebufferBlit() { return QGLFramebufferObject::hasOpenGLFramebufferBlit(); }
    Q_INVOKABLE bool ShasOpenGLFramebufferObjects() { return QGLFramebufferObject::hasOpenGLFramebufferObjects(); }
};

class N45 : public N108 { // QGLPixelBuffer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QSize& x1, const QGLFormat& x2 = QGLFormat::defaultFormat(), QGLWidget* x3 = 0) { return new LGLPixelBuffer(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, const QGLFormat& x3 = QGLFormat::defaultFormat(), QGLWidget* x4 = 0) { return new LGLPixelBuffer(u, x1, x2, x3, x4); }
    Q_INVOKABLE GLuint MbindTexture(QGLPixelBuffer* o, const QImage& x1, GLenum x2 = GL_TEXTURE_2D) { return o->bindTexture(x1, x2); }
    Q_INVOKABLE GLuint MbindTexture(QGLPixelBuffer* o, const QPixmap& x1, GLenum x2 = GL_TEXTURE_2D) { return o->bindTexture(x1, x2); }
    Q_INVOKABLE GLuint MbindTexture(QGLPixelBuffer* o, const QString& x1) { return o->bindTexture(x1); }
    Q_INVOKABLE bool MbindToDynamicTexture(QGLPixelBuffer* o, GLuint x1) { return o->bindToDynamicTexture(x1); }
    Q_INVOKABLE QGLContext* Mcontext(QGLPixelBuffer* o) const { return o->context(); }
    Q_INVOKABLE void MdeleteTexture(QGLPixelBuffer* o, GLuint x1) { o->deleteTexture(x1); }
    Q_INVOKABLE bool MdoneCurrent(QGLPixelBuffer* o) { return o->doneCurrent(); }
    Q_INVOKABLE void MdrawTexture(QGLPixelBuffer* o, const QRectF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE void MdrawTexture(QGLPixelBuffer* o, const QPointF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE QGLFormat Mformat(QGLPixelBuffer* o) const { return o->format(); }
    Q_INVOKABLE GLuint MgenerateDynamicTexture(QGLPixelBuffer* o) const { return o->generateDynamicTexture(); }
    Q_INVOKABLE bool MisValid(QGLPixelBuffer* o) const { return o->isValid(); }
    Q_INVOKABLE bool MmakeCurrent(QGLPixelBuffer* o) { return o->makeCurrent(); }
    Q_INVOKABLE void MreleaseFromDynamicTexture(QGLPixelBuffer* o) { o->releaseFromDynamicTexture(); }
    Q_INVOKABLE QSize Msize(QGLPixelBuffer* o) const { return o->size(); }
    Q_INVOKABLE QImage MtoImage(QGLPixelBuffer* o) const { return o->toImage(); }
    Q_INVOKABLE void MupdateDynamicTexture(QGLPixelBuffer* o, GLuint x1) const { o->updateDynamicTexture(x1); }
    Q_INVOKABLE bool ShasOpenGLPbuffers() { return QGLPixelBuffer::hasOpenGLPbuffers(); }
};

QT_END_NAMESPACE

#endif
