// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtOpenGL>

QT_BEGIN_NAMESPACE

class Q61 : public Q124 { // QGLShader
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGLShader::ShaderType x1, QObject* x2 = 0) { return new LGLShader(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QGLShader::ShaderType x1, const QGLContext* x2, QObject* x3 = 0) { return new LGLShader(u, x1, x2, x3); }
    Q_INVOKABLE bool McompileSourceCode(QGLShader* o, const char* x1) { return o->compileSourceCode(x1); }
    Q_INVOKABLE bool McompileSourceCode(QGLShader* o, const QByteArray& x1) { return o->compileSourceCode(x1); }
    Q_INVOKABLE bool McompileSourceCode(QGLShader* o, const QString& x1) { return o->compileSourceCode(x1); }
    Q_INVOKABLE bool McompileSourceFile(QGLShader* o, const QString& x1) { return o->compileSourceFile(x1); }
    Q_INVOKABLE bool MisCompiled(QGLShader* o) const { return o->isCompiled(); }
    Q_INVOKABLE QString Mlog(QGLShader* o) const { return o->log(); }
    Q_INVOKABLE GLuint MshaderId(QGLShader* o) const { return o->shaderId(); }
    Q_INVOKABLE int MshaderType(QGLShader* o) const { return o->shaderType(); }
    Q_INVOKABLE QByteArray MsourceCode(QGLShader* o) const { return o->sourceCode(); }
    Q_INVOKABLE bool ShasOpenGLShaders(QGLShader::ShaderType x1, const QGLContext* x2 = 0) { return QGLShader::hasOpenGLShaders(x1, x2); }
};

class Q62 : public Q124 { // QGLShaderProgram
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LGLShaderProgram(u, x1); }
    Q_INVOKABLE void* C(uint u, const QGLContext* x1, QObject* x2 = 0) { return new LGLShaderProgram(u, x1, x2); }
    Q_INVOKABLE bool MaddShader(QGLShaderProgram* o, QGLShader* x1) { return o->addShader(x1); }
    Q_INVOKABLE bool MaddShaderFromSourceCode(QGLShaderProgram* o, QGLShader::ShaderType x1, const char* x2) { return o->addShaderFromSourceCode(x1, x2); }
    Q_INVOKABLE bool MaddShaderFromSourceCode(QGLShaderProgram* o, QGLShader::ShaderType x1, const QByteArray& x2) { return o->addShaderFromSourceCode(x1, x2); }
    Q_INVOKABLE bool MaddShaderFromSourceCode(QGLShaderProgram* o, QGLShader::ShaderType x1, const QString& x2) { return o->addShaderFromSourceCode(x1, x2); }
    Q_INVOKABLE bool MaddShaderFromSourceFile(QGLShaderProgram* o, QGLShader::ShaderType x1, const QString& x2) { return o->addShaderFromSourceFile(x1, x2); }
    Q_INVOKABLE int MattributeLocation(QGLShaderProgram* o, const char* x1) const { return o->attributeLocation(x1); }
    Q_INVOKABLE int MattributeLocation(QGLShaderProgram* o, const QByteArray& x1) const { return o->attributeLocation(x1); }
    Q_INVOKABLE int MattributeLocation(QGLShaderProgram* o, const QString& x1) const { return o->attributeLocation(x1); }
    Q_INVOKABLE bool Mbind(QGLShaderProgram* o) { return o->bind(); }
    Q_INVOKABLE void MbindAttributeLocation(QGLShaderProgram* o, const char* x1, int x2) { o->bindAttributeLocation(x1, x2); }
    Q_INVOKABLE void MbindAttributeLocation(QGLShaderProgram* o, const QByteArray& x1, int x2) { o->bindAttributeLocation(x1, x2); }
    Q_INVOKABLE void MbindAttributeLocation(QGLShaderProgram* o, const QString& x1, int x2) { o->bindAttributeLocation(x1, x2); }
    Q_INVOKABLE void MdisableAttributeArray(QGLShaderProgram* o, int x1) { o->disableAttributeArray(x1); }
    Q_INVOKABLE void MdisableAttributeArray(QGLShaderProgram* o, const char* x1) { o->disableAttributeArray(x1); }
    Q_INVOKABLE void MenableAttributeArray(QGLShaderProgram* o, int x1) { o->enableAttributeArray(x1); }
    Q_INVOKABLE void MenableAttributeArray(QGLShaderProgram* o, const char* x1) { o->enableAttributeArray(x1); }
    Q_INVOKABLE GLenum MgeometryInputType(QGLShaderProgram* o) const { return o->geometryInputType(); }
    Q_INVOKABLE GLenum MgeometryOutputType(QGLShaderProgram* o) const { return o->geometryOutputType(); }
    Q_INVOKABLE int MgeometryOutputVertexCount(QGLShaderProgram* o) const { return o->geometryOutputVertexCount(); }
    Q_INVOKABLE bool MisLinked(QGLShaderProgram* o) const { return o->isLinked(); }
    Q_INVOKABLE bool Mlink(QGLShaderProgram* o) { return o->link(); }
    Q_INVOKABLE QString Mlog(QGLShaderProgram* o) const { return o->log(); }
    Q_INVOKABLE int MmaxGeometryOutputVertices(QGLShaderProgram* o) const { return o->maxGeometryOutputVertices(); }
    Q_INVOKABLE GLuint MprogramId(QGLShaderProgram* o) const { return o->programId(); }
    Q_INVOKABLE void Mrelease(QGLShaderProgram* o) { o->release(); }
    Q_INVOKABLE void MremoveAllShaders(QGLShaderProgram* o) { o->removeAllShaders(); }
    Q_INVOKABLE void MremoveShader(QGLShaderProgram* o, QGLShader* x1) { o->removeShader(x1); }
    Q_INVOKABLE void MsetAttributeArray(QGLShaderProgram* o, int x1, const QVector2D* x2, int x3 = 0) { o->setAttributeArray(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeArray(QGLShaderProgram* o, int x1, const QVector3D* x2, int x3 = 0) { o->setAttributeArray(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeArray(QGLShaderProgram* o, int x1, const QVector4D* x2, int x3 = 0) { o->setAttributeArray(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeArray(QGLShaderProgram* o, const char* x1, const QVector2D* x2, int x3 = 0) { o->setAttributeArray(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeArray(QGLShaderProgram* o, const char* x1, const QVector3D* x2, int x3 = 0) { o->setAttributeArray(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeArray(QGLShaderProgram* o, const char* x1, const QVector4D* x2, int x3 = 0) { o->setAttributeArray(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeBuffer(QGLShaderProgram* o, int x1, GLenum x2, int x3, int x4, int x5 = 0) { o->setAttributeBuffer(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetAttributeBuffer(QGLShaderProgram* o, const char* x1, GLenum x2, int x3, int x4, int x5 = 0) { o->setAttributeBuffer(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, GLfloat x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, GLfloat x2, GLfloat x3) { o->setAttributeValue(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, GLfloat x2, GLfloat x3, GLfloat x4) { o->setAttributeValue(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, GLfloat x2, GLfloat x3, GLfloat x4, GLfloat x5) { o->setAttributeValue(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, const QVector2D& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, const QVector3D& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, const QVector4D& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, int x1, const QColor& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, GLfloat x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, GLfloat x2, GLfloat x3) { o->setAttributeValue(x1, x2, x3); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, GLfloat x2, GLfloat x3, GLfloat x4) { o->setAttributeValue(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, GLfloat x2, GLfloat x3, GLfloat x4, GLfloat x5) { o->setAttributeValue(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, const QVector2D& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, const QVector3D& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, const QVector4D& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetAttributeValue(QGLShaderProgram* o, const char* x1, const QColor& x2) { o->setAttributeValue(x1, x2); }
    Q_INVOKABLE void MsetGeometryInputType(QGLShaderProgram* o, GLenum x1) { o->setGeometryInputType(x1); }
    Q_INVOKABLE void MsetGeometryOutputType(QGLShaderProgram* o, GLenum x1) { o->setGeometryOutputType(x1); }
    Q_INVOKABLE void MsetGeometryOutputVertexCount(QGLShaderProgram* o, int x1) { o->setGeometryOutputVertexCount(x1); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, GLfloat x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QPointF& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QSize& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QSizeF& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix2x2& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix2x3& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix2x4& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix3x2& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix3x3& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix3x4& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix4x2& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix4x3& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QMatrix4x4& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QTransform& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, GLint x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, GLuint x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, GLfloat x2, GLfloat x3) { o->setUniformValue(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, GLfloat x2, GLfloat x3, GLfloat x4) { o->setUniformValue(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, GLfloat x2, GLfloat x3, GLfloat x4, GLfloat x5) { o->setUniformValue(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QVector2D& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QVector3D& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QVector4D& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QColor& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QPoint& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QPointF& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QSize& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QSizeF& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix2x2& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix2x3& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix2x4& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix3x2& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix3x3& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix3x4& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix4x2& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix4x3& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QMatrix4x4& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, int x1, const QTransform& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, GLfloat x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, GLint x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, GLuint x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, GLfloat x2, GLfloat x3) { o->setUniformValue(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, GLfloat x2, GLfloat x3, GLfloat x4) { o->setUniformValue(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, GLfloat x2, GLfloat x3, GLfloat x4, GLfloat x5) { o->setUniformValue(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QVector2D& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QVector3D& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QVector4D& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QColor& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValue(QGLShaderProgram* o, const char* x1, const QPoint& x2) { o->setUniformValue(x1, x2); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QVector2D* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QVector3D* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QVector4D* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix2x2* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix2x3* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix2x4* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix3x2* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix3x3* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix3x4* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix4x2* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix4x3* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, int x1, const QMatrix4x4* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QVector2D* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QVector3D* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QVector4D* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix2x2* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix2x3* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix2x4* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix3x2* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix3x3* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix3x4* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix4x2* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix4x3* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE void MsetUniformValueArray(QGLShaderProgram* o, const char* x1, const QMatrix4x4* x2, int x3) { o->setUniformValueArray(x1, x2, x3); }
    Q_INVOKABLE QList<QGLShader*> Mshaders(QGLShaderProgram* o) const { return o->shaders(); }
    Q_INVOKABLE int MuniformLocation(QGLShaderProgram* o, const char* x1) const { return o->uniformLocation(x1); }
    Q_INVOKABLE int MuniformLocation(QGLShaderProgram* o, const QByteArray& x1) const { return o->uniformLocation(x1); }
    Q_INVOKABLE int MuniformLocation(QGLShaderProgram* o, const QString& x1) const { return o->uniformLocation(x1); }
    Q_INVOKABLE bool ShasOpenGLShaderPrograms(const QGLContext* x1 = 0) { return QGLShaderProgram::hasOpenGLShaderPrograms(x1); }
};

class Q63 : public Q215 { // QGLWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, const QGLWidget* x2 = 0, Qt::WindowFlags x3 = 0) { return new LGLWidget(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QGLContext* x1, QWidget* x2 = 0, const QGLWidget* x3 = 0, Qt::WindowFlags x4 = 0) { return new LGLWidget(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QGLFormat& x1, QWidget* x2 = 0, const QGLWidget* x3 = 0, Qt::WindowFlags x4 = 0) { return new LGLWidget(u, x1, x2, x3, x4); }
    Q_INVOKABLE GLuint MbindTexture(QGLWidget* o, const QImage& x1, GLenum x2 = GL_TEXTURE_2D, GLint x3 = GL_RGBA) { return o->bindTexture(x1, x2, x3); }
    Q_INVOKABLE GLuint MbindTexture(QGLWidget* o, const QPixmap& x1, GLenum x2 = GL_TEXTURE_2D, GLint x3 = GL_RGBA) { return o->bindTexture(x1, x2, x3); }
    Q_INVOKABLE GLuint MbindTexture(QGLWidget* o, const QImage& x1, GLenum x2, GLint x3, QGLContext::BindOptions x4) { return o->bindTexture(x1, x2, x3, x4); }
    Q_INVOKABLE GLuint MbindTexture(QGLWidget* o, const QPixmap& x1, GLenum x2, GLint x3, QGLContext::BindOptions x4) { return o->bindTexture(x1, x2, x3, x4); }
    Q_INVOKABLE GLuint MbindTexture(QGLWidget* o, const QString& x1) { return o->bindTexture(x1); }
    Q_INVOKABLE QGLColormap Mcolormap(QGLWidget* o) const { return o->colormap(); }
    Q_INVOKABLE QGLContext* Mcontext(QGLWidget* o) const { return o->context(); }
    Q_INVOKABLE void MdeleteTexture(QGLWidget* o, GLuint x1) { o->deleteTexture(x1); }
    Q_INVOKABLE void MdoneCurrent(QGLWidget* o) { o->doneCurrent(); }
    Q_INVOKABLE bool MdoubleBuffer(QGLWidget* o) const { return o->doubleBuffer(); }
    Q_INVOKABLE void MdrawTexture(QGLWidget* o, const QRectF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE void MdrawTexture(QGLWidget* o, const QPointF& x1, GLuint x2, GLenum x3 = GL_TEXTURE_2D) { o->drawTexture(x1, x2, x3); }
    Q_INVOKABLE QGLFormat Mformat(QGLWidget* o) const { return o->format(); }
    Q_INVOKABLE QImage MgrabFrameBuffer(QGLWidget* o, bool x1 = false) { return o->grabFrameBuffer(x1); }
    Q_INVOKABLE bool MisSharing(QGLWidget* o) const { return o->isSharing(); }
    Q_INVOKABLE bool MisValid(QGLWidget* o) const { return o->isValid(); }
    Q_INVOKABLE void MmakeCurrent(QGLWidget* o) { o->makeCurrent(); }
    Q_INVOKABLE void MmakeOverlayCurrent(QGLWidget* o) { o->makeOverlayCurrent(); }
    Q_INVOKABLE const QGLContext* MoverlayContext(QGLWidget* o) const { return o->overlayContext(); }
    Q_INVOKABLE void MqglClearColor(QGLWidget* o, const QColor& x1) const { o->qglClearColor(x1); }
    Q_INVOKABLE void MqglColor(QGLWidget* o, const QColor& x1) const { o->qglColor(x1); }
    Q_INVOKABLE QPixmap MrenderPixmap(QGLWidget* o, int x1 = 0, int x2 = 0, bool x3 = false) { return o->renderPixmap(x1, x2, x3); }
    Q_INVOKABLE void MrenderText(QGLWidget* o, int x1, int x2, const QString& x3, const QFont& x4 = QFont()) { o->renderText(x1, x2, x3, x4); }
    Q_INVOKABLE void MrenderText(QGLWidget* o, double x1, double x2, double x3, const QString& x4, const QFont& x5 = QFont()) { o->renderText(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetColormap(QGLWidget* o, const QGLColormap& x1) { o->setColormap(x1); }
    Q_INVOKABLE void MswapBuffers(QGLWidget* o) { o->swapBuffers(); }
    Q_INVOKABLE bool MautoBufferSwap(QGLWidget* o) const { return ((LGLWidget*)o)->autoBufferSwap(); }
    Q_INVOKABLE void MsetAutoBufferSwap(QGLWidget* o, bool x1) { ((LGLWidget*)o)->setAutoBufferSwap(x1); }
    Q_INVOKABLE QImage SconvertToGLFormat(const QImage& x1) { return QGLWidget::convertToGLFormat(x1); }
};

QT_END_NAMESPACE

#endif
