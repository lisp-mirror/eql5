// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtQuick>

QT_BEGIN_NAMESPACE

class N104 : public QObject { // QJSValue
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QJSValue::SpecialValue x1 = QJSValue::UndefinedValue) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, const QJSValue& x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, bool x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, uint x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, double x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLatin1String& x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE void* C(uint u, const char* x1) { return new LJSValue(u, x1); }
    Q_INVOKABLE QJSValue Mcall(QJSValue* o, const QJSValueList& x1 = QJSValueList()) { return o->call(x1); }
    Q_INVOKABLE QJSValue McallAsConstructor(QJSValue* o, const QJSValueList& x1 = QJSValueList()) { return o->callAsConstructor(x1); }
    Q_INVOKABLE QJSValue McallWithInstance(QJSValue* o, const QJSValue& x1, const QJSValueList& x2 = QJSValueList()) { return o->callWithInstance(x1, x2); }
    Q_INVOKABLE bool MdeleteProperty(QJSValue* o, const QString& x1) { return o->deleteProperty(x1); }
    Q_INVOKABLE bool Mequals(QJSValue* o, const QJSValue& x1) const { return o->equals(x1); }
    Q_INVOKABLE bool MhasOwnProperty(QJSValue* o, const QString& x1) const { return o->hasOwnProperty(x1); }
    Q_INVOKABLE bool MhasProperty(QJSValue* o, const QString& x1) const { return o->hasProperty(x1); }
    Q_INVOKABLE bool MisArray(QJSValue* o) const { return o->isArray(); }
    Q_INVOKABLE bool MisBool(QJSValue* o) const { return o->isBool(); }
    Q_INVOKABLE bool MisCallable(QJSValue* o) const { return o->isCallable(); }
    Q_INVOKABLE bool MisDate(QJSValue* o) const { return o->isDate(); }
    Q_INVOKABLE bool MisError(QJSValue* o) const { return o->isError(); }
    Q_INVOKABLE bool MisNull(QJSValue* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisNumber(QJSValue* o) const { return o->isNumber(); }
    Q_INVOKABLE bool MisObject(QJSValue* o) const { return o->isObject(); }
    Q_INVOKABLE bool MisQObject(QJSValue* o) const { return o->isQObject(); }
    Q_INVOKABLE bool MisRegExp(QJSValue* o) const { return o->isRegExp(); }
    Q_INVOKABLE bool MisString(QJSValue* o) const { return o->isString(); }
    Q_INVOKABLE bool MisUndefined(QJSValue* o) const { return o->isUndefined(); }
    Q_INVOKABLE bool MisVariant(QJSValue* o) const { return o->isVariant(); }
    Q_INVOKABLE QJSValue Mproperty(QJSValue* o, const QString& x1) const { return o->property(x1); }
    Q_INVOKABLE QJSValue Mproperty(QJSValue* o, quint32 x1) const { return o->property(x1); }
    Q_INVOKABLE QJSValue Mprototype(QJSValue* o) const { return o->prototype(); }
    Q_INVOKABLE void MsetProperty(QJSValue* o, const QString& x1, const QJSValue& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE void MsetProperty(QJSValue* o, quint32 x1, const QJSValue& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE void MsetPrototype(QJSValue* o, const QJSValue& x1) { o->setPrototype(x1); }
    Q_INVOKABLE bool MstrictlyEquals(QJSValue* o, const QJSValue& x1) const { return o->strictlyEquals(x1); }
    Q_INVOKABLE bool MtoBool(QJSValue* o) const { return o->toBool(); }
    Q_INVOKABLE QDateTime MtoDateTime(QJSValue* o) const { return o->toDateTime(); }
    Q_INVOKABLE qint32 MtoInt(QJSValue* o) const { return o->toInt(); }
    Q_INVOKABLE double MtoNumber(QJSValue* o) const { return o->toNumber(); }
    Q_INVOKABLE QObject* MtoQObject(QJSValue* o) const { return o->toQObject(); }
    Q_INVOKABLE QString MtoString(QJSValue* o) const { return o->toString(); }
    Q_INVOKABLE quint32 MtoUInt(QJSValue* o) const { return o->toUInt(); }
    Q_INVOKABLE QVariant MtoVariant(QJSValue* o) const { return o->toVariant(); }
};

class N105 : public QObject { // QJSValueIterator
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QJSValue& x1) { return new LJSValueIterator(u, x1); }
    Q_INVOKABLE bool MhasNext(QJSValueIterator* o) const { return o->hasNext(); }
    Q_INVOKABLE QString Mname(QJSValueIterator* o) const { return o->name(); }
    Q_INVOKABLE bool Mnext(QJSValueIterator* o) { return o->next(); }
    Q_INVOKABLE QJSValue Mvalue(QJSValueIterator* o) const { return o->value(); }
};

class N154 : public QObject { // QQmlAbstractUrlInterceptor
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlAbstractUrlInterceptor(u); }
    Q_INVOKABLE QUrl Mintercept(QQmlAbstractUrlInterceptor* o, const QUrl& x1, QQmlAbstractUrlInterceptor::DataType x2) { return o->intercept(x1, x2); }
};

class N155 : public QObject { // QQmlError
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlError(u); }
    Q_INVOKABLE void* C(uint u, const QQmlError& x1) { return new LQmlError(u, x1); }
    Q_INVOKABLE int Mcolumn(QQmlError* o) const { return o->column(); }
    Q_INVOKABLE QString Mdescription(QQmlError* o) const { return o->description(); }
    Q_INVOKABLE bool MisValid(QQmlError* o) const { return o->isValid(); }
    Q_INVOKABLE int Mline(QQmlError* o) const { return o->line(); }
    Q_INVOKABLE QObject* Mobject(QQmlError* o) const { return o->object(); }
    Q_INVOKABLE void MsetColumn(QQmlError* o, int x1) { o->setColumn(x1); }
    Q_INVOKABLE void MsetDescription(QQmlError* o, const QString& x1) { o->setDescription(x1); }
    Q_INVOKABLE void MsetLine(QQmlError* o, int x1) { o->setLine(x1); }
    Q_INVOKABLE void MsetObject(QQmlError* o, QObject* x1) { o->setObject(x1); }
    Q_INVOKABLE void MsetUrl(QQmlError* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE QString MtoString(QQmlError* o) const { return o->toString(); }
    Q_INVOKABLE QUrl Murl(QQmlError* o) const { return o->url(); }
};

class N156 : public QObject { // QQmlImageProviderBase
    Q_OBJECT
public:
    Q_INVOKABLE int Mflags(QQmlImageProviderBase* o) const { return o->flags(); }
    Q_INVOKABLE int MimageType(QQmlImageProviderBase* o) const { return o->imageType(); }
};

class N157 : public QObject { // QQmlIncubationController
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlIncubationController(u); }
    Q_INVOKABLE QQmlEngine* Mengine(QQmlIncubationController* o) const { return o->engine(); }
    Q_INVOKABLE void MincubateFor(QQmlIncubationController* o, int x1) { o->incubateFor(x1); }
    Q_INVOKABLE int MincubatingObjectCount(QQmlIncubationController* o) const { return o->incubatingObjectCount(); }
};

class N158 : public QObject { // QQmlIncubator
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQmlIncubator::IncubationMode x1 = QQmlIncubator::Asynchronous) { return new LQmlIncubator(u, x1); }
    Q_INVOKABLE void Mclear(QQmlIncubator* o) { o->clear(); }
    Q_INVOKABLE QList<QQmlError> Merrors(QQmlIncubator* o) const { return o->errors(); }
    Q_INVOKABLE void MforceCompletion(QQmlIncubator* o) { o->forceCompletion(); }
    Q_INVOKABLE int MincubationMode(QQmlIncubator* o) const { return o->incubationMode(); }
    Q_INVOKABLE bool MisError(QQmlIncubator* o) const { return o->isError(); }
    Q_INVOKABLE bool MisLoading(QQmlIncubator* o) const { return o->isLoading(); }
    Q_INVOKABLE bool MisNull(QQmlIncubator* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisReady(QQmlIncubator* o) const { return o->isReady(); }
    Q_INVOKABLE QObject* Mobject(QQmlIncubator* o) const { return o->object(); }
    Q_INVOKABLE int Mstatus(QQmlIncubator* o) const { return o->status(); }
};

class N159 : public QObject { // QQmlNetworkAccessManagerFactory
    Q_OBJECT
public:
    Q_INVOKABLE QNetworkAccessManager* Mcreate(QQmlNetworkAccessManagerFactory* o, QObject* x1) { return o->create(x1); }
};

class N160 : public QObject { // QQmlParserStatus
    Q_OBJECT
public:
    Q_INVOKABLE void MclassBegin(QQmlParserStatus* o) { o->classBegin(); }
    Q_INVOKABLE void McomponentComplete(QQmlParserStatus* o) { o->componentComplete(); }
};

class N161 : public QObject { // QQmlProperty
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlProperty(u); }
    Q_INVOKABLE void* C(uint u, QObject* x1) { return new LQmlProperty(u, x1); }
    Q_INVOKABLE void* C(uint u, QObject* x1, QQmlContext* x2) { return new LQmlProperty(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QObject* x1, QQmlEngine* x2) { return new LQmlProperty(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QObject* x1, const QString& x2) { return new LQmlProperty(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QObject* x1, const QString& x2, QQmlContext* x3) { return new LQmlProperty(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QObject* x1, const QString& x2, QQmlEngine* x3) { return new LQmlProperty(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QQmlProperty& x1) { return new LQmlProperty(u, x1); }
    Q_INVOKABLE bool MconnectNotifySignal(QQmlProperty* o, QObject* x1, const char* x2) const { return o->connectNotifySignal(x1, x2); }
    Q_INVOKABLE bool MconnectNotifySignal(QQmlProperty* o, QObject* x1, int x2) const { return o->connectNotifySignal(x1, x2); }
    Q_INVOKABLE bool MhasNotifySignal(QQmlProperty* o) const { return o->hasNotifySignal(); }
    Q_INVOKABLE int Mindex(QQmlProperty* o) const { return o->index(); }
    Q_INVOKABLE bool MisDesignable(QQmlProperty* o) const { return o->isDesignable(); }
    Q_INVOKABLE bool MisProperty(QQmlProperty* o) const { return o->isProperty(); }
    Q_INVOKABLE bool MisResettable(QQmlProperty* o) const { return o->isResettable(); }
    Q_INVOKABLE bool MisSignalProperty(QQmlProperty* o) const { return o->isSignalProperty(); }
    Q_INVOKABLE bool MisValid(QQmlProperty* o) const { return o->isValid(); }
    Q_INVOKABLE bool MisWritable(QQmlProperty* o) const { return o->isWritable(); }
    Q_INVOKABLE QString Mname(QQmlProperty* o) const { return o->name(); }
    Q_INVOKABLE bool MneedsNotifySignal(QQmlProperty* o) const { return o->needsNotifySignal(); }
    Q_INVOKABLE QObject* Mobject(QQmlProperty* o) const { return o->object(); }
    Q_INVOKABLE int MpropertyType(QQmlProperty* o) const { return o->propertyType(); }
    Q_INVOKABLE int MpropertyTypeCategory(QQmlProperty* o) const { return o->propertyTypeCategory(); }
    Q_INVOKABLE const char* MpropertyTypeName(QQmlProperty* o) const { return o->propertyTypeName(); }
    Q_INVOKABLE QVariant Mread(QQmlProperty* o) const { return o->read(); }
    Q_INVOKABLE bool Mreset(QQmlProperty* o) const { return o->reset(); }
    Q_INVOKABLE int Mtype(QQmlProperty* o) const { return o->type(); }
    Q_INVOKABLE bool Mwrite(QQmlProperty* o, const QVariant& x1) const { return o->write(x1); }
    Q_INVOKABLE QVariant Sread(const QObject* x1, const QString& x2) { return QQmlProperty::read(x1, x2); }
    Q_INVOKABLE QVariant Sread(const QObject* x1, const QString& x2, QQmlContext* x3) { return QQmlProperty::read(x1, x2, x3); }
    Q_INVOKABLE QVariant Sread(const QObject* x1, const QString& x2, QQmlEngine* x3) { return QQmlProperty::read(x1, x2, x3); }
    Q_INVOKABLE bool Swrite(QObject* x1, const QString& x2, const QVariant& x3) { return QQmlProperty::write(x1, x2, x3); }
    Q_INVOKABLE bool Swrite(QObject* x1, const QString& x2, const QVariant& x3, QQmlContext* x4) { return QQmlProperty::write(x1, x2, x3, x4); }
    Q_INVOKABLE bool Swrite(QObject* x1, const QString& x2, const QVariant& x3, QQmlEngine* x4) { return QQmlProperty::write(x1, x2, x3, x4); }
};

class N162 : public QObject { // QQmlPropertyValueSource
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlPropertyValueSource(u); }
    Q_INVOKABLE void MsetTarget(QQmlPropertyValueSource* o, const QQmlProperty& x1) { o->setTarget(x1); }
};

class N163 : public QObject { // QQmlScriptString
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlScriptString(u); }
    Q_INVOKABLE void* C(uint u, const QQmlScriptString& x1) { return new LQmlScriptString(u, x1); }
    Q_INVOKABLE bool MbooleanLiteral(QQmlScriptString* o, bool* x1) const { return o->booleanLiteral(x1); }
    Q_INVOKABLE bool MisEmpty(QQmlScriptString* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisNullLiteral(QQmlScriptString* o) const { return o->isNullLiteral(); }
    Q_INVOKABLE bool MisUndefinedLiteral(QQmlScriptString* o) const { return o->isUndefinedLiteral(); }
    Q_INVOKABLE qreal MnumberLiteral(QQmlScriptString* o, bool* x1) const { return o->numberLiteral(x1); }
    Q_INVOKABLE QString MstringLiteral(QQmlScriptString* o) const { return o->stringLiteral(); }
};

class N176 : public QObject { // QSGGeometry
    Q_OBJECT
public:
    Q_INVOKABLE void Mallocate(QSGGeometry* o, int x1, int x2 = 0) { o->allocate(x1, x2); }
    Q_INVOKABLE int MattributeCount(QSGGeometry* o) const { return o->attributeCount(); }
    Q_INVOKABLE GLenum MdrawingMode(QSGGeometry* o) const { return o->drawingMode(); }
    Q_INVOKABLE int MindexCount(QSGGeometry* o) const { return o->indexCount(); }
    Q_INVOKABLE quint16* MindexDataAsUShort(QSGGeometry* o) { return o->indexDataAsUShort(); }
    Q_INVOKABLE const quint16* MindexDataAsUShort(QSGGeometry* o) const { return o->indexDataAsUShort(); }
    Q_INVOKABLE int MindexDataPattern(QSGGeometry* o) const { return o->indexDataPattern(); }
    Q_INVOKABLE int MindexType(QSGGeometry* o) const { return o->indexType(); }
    Q_INVOKABLE float MlineWidth(QSGGeometry* o) const { return o->lineWidth(); }
    Q_INVOKABLE void MmarkIndexDataDirty(QSGGeometry* o) { o->markIndexDataDirty(); }
    Q_INVOKABLE void MmarkVertexDataDirty(QSGGeometry* o) { o->markVertexDataDirty(); }
    Q_INVOKABLE void MsetDrawingMode(QSGGeometry* o, GLenum x1) { o->setDrawingMode(x1); }
    Q_INVOKABLE void MsetIndexDataPattern(QSGGeometry* o, QSGGeometry::DataPattern x1) { o->setIndexDataPattern(x1); }
    Q_INVOKABLE void MsetLineWidth(QSGGeometry* o, float x1) { o->setLineWidth(x1); }
    Q_INVOKABLE void MsetVertexDataPattern(QSGGeometry* o, QSGGeometry::DataPattern x1) { o->setVertexDataPattern(x1); }
    Q_INVOKABLE int MsizeOfIndex(QSGGeometry* o) const { return o->sizeOfIndex(); }
    Q_INVOKABLE int MsizeOfVertex(QSGGeometry* o) const { return o->sizeOfVertex(); }
    Q_INVOKABLE int MvertexCount(QSGGeometry* o) const { return o->vertexCount(); }
    Q_INVOKABLE int MvertexDataPattern(QSGGeometry* o) const { return o->vertexDataPattern(); }
    Q_INVOKABLE void SupdateRectGeometry(QSGGeometry* x1, const QRectF& x2) { QSGGeometry::updateRectGeometry(x1, x2); }
    Q_INVOKABLE void SupdateTexturedRectGeometry(QSGGeometry* x1, const QRectF& x2, const QRectF& x3) { QSGGeometry::updateTexturedRectGeometry(x1, x2, x3); }
};

class N178 : public QObject { // QSGMaterial
    Q_OBJECT
public:
    Q_INVOKABLE int Mcompare(QSGMaterial* o, const QSGMaterial* x1) const { return o->compare(x1); }
    Q_INVOKABLE QSGMaterialShader* McreateShader(QSGMaterial* o) const { return o->createShader(); }
    Q_INVOKABLE int Mflags(QSGMaterial* o) const { return o->flags(); }
    Q_INVOKABLE void MsetFlag(QSGMaterial* o, QSGMaterial::Flags x1, bool x2 = true) { o->setFlag(x1, x2); }
    Q_INVOKABLE QSGMaterialType* Mtype(QSGMaterial* o) const { return o->type(); }
};

class N179 : public QObject { // QSGMaterialShader
    Q_OBJECT
public:
    Q_INVOKABLE void Mactivate(QSGMaterialShader* o) { o->activate(); }
    Q_INVOKABLE void Mdeactivate(QSGMaterialShader* o) { o->deactivate(); }
    Q_INVOKABLE QOpenGLShaderProgram* Mprogram(QSGMaterialShader* o) { return o->program(); }
    Q_INVOKABLE void MupdateState(QSGMaterialShader* o, const QSGMaterialShader::RenderState& x1, QSGMaterial* x2, QSGMaterial* x3) { o->updateState(x1, x2, x3); }
};

class N180 : public QObject { // QSGMaterialType
    Q_OBJECT
public:
};

class N181 : public QObject { // QSGNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGNode(u); }
    Q_INVOKABLE void MappendChildNode(QSGNode* o, QSGNode* x1) { o->appendChildNode(x1); }
    Q_INVOKABLE QSGNode* MchildAtIndex(QSGNode* o, int x1) const { return o->childAtIndex(x1); }
    Q_INVOKABLE int MchildCount(QSGNode* o) const { return o->childCount(); }
    Q_INVOKABLE QSGNode* MfirstChild(QSGNode* o) const { return o->firstChild(); }
    Q_INVOKABLE int Mflags(QSGNode* o) const { return o->flags(); }
    Q_INVOKABLE void MinsertChildNodeAfter(QSGNode* o, QSGNode* x1, QSGNode* x2) { o->insertChildNodeAfter(x1, x2); }
    Q_INVOKABLE void MinsertChildNodeBefore(QSGNode* o, QSGNode* x1, QSGNode* x2) { o->insertChildNodeBefore(x1, x2); }
    Q_INVOKABLE bool MisSubtreeBlocked(QSGNode* o) const { return o->isSubtreeBlocked(); }
    Q_INVOKABLE QSGNode* MlastChild(QSGNode* o) const { return o->lastChild(); }
    Q_INVOKABLE void MmarkDirty(QSGNode* o, QSGNode::DirtyState x1) { o->markDirty(x1); }
    Q_INVOKABLE QSGNode* MnextSibling(QSGNode* o) const { return o->nextSibling(); }
    Q_INVOKABLE QSGNode* Mparent(QSGNode* o) const { return o->parent(); }
    Q_INVOKABLE void MprependChildNode(QSGNode* o, QSGNode* x1) { o->prependChildNode(x1); }
    Q_INVOKABLE void Mpreprocess(QSGNode* o) { o->preprocess(); }
    Q_INVOKABLE QSGNode* MpreviousSibling(QSGNode* o) const { return o->previousSibling(); }
    Q_INVOKABLE void MremoveAllChildNodes(QSGNode* o) { o->removeAllChildNodes(); }
    Q_INVOKABLE void MremoveChildNode(QSGNode* o, QSGNode* x1) { o->removeChildNode(x1); }
    Q_INVOKABLE void MsetFlag(QSGNode* o, QSGNode::Flag x1, bool x2 = true) { o->setFlag(x1, x2); }
    Q_INVOKABLE void MsetFlags(QSGNode* o, QSGNode::Flags x1, bool x2 = true) { o->setFlags(x1, x2); }
    Q_INVOKABLE int Mtype(QSGNode* o) const { return o->type(); }
};

class N165 : public N156 { // QQuickImageProvider
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQuickImageProvider::ImageType x1, QQuickImageProvider::Flags x2 = 0) { return new LQuickImageProvider(u, x1, x2); }
    Q_INVOKABLE int Mflags(QQuickImageProvider* o) const { return o->flags(); }
    Q_INVOKABLE int MimageType(QQuickImageProvider* o) const { return o->imageType(); }
    Q_INVOKABLE QImage MrequestImage(QQuickImageProvider* o, const QString& x1, QSize* x2, const QSize& x3) { return o->requestImage(x1, x2, x3); }
    Q_INVOKABLE QPixmap MrequestPixmap(QQuickImageProvider* o, const QString& x1, QSize* x2, const QSize& x3) { return o->requestPixmap(x1, x2, x3); }
    Q_INVOKABLE QQuickTextureFactory* MrequestTexture(QQuickImageProvider* o, const QString& x1, QSize* x2, const QSize& x3) { return o->requestTexture(x1, x2, x3); }
};

class N173 : public N181 { // QSGBasicGeometryNode
    Q_OBJECT
public:
    Q_INVOKABLE const QSGGeometry* Mgeometry(QSGBasicGeometryNode* o) const { return o->geometry(); }
    Q_INVOKABLE QSGGeometry* Mgeometry(QSGBasicGeometryNode* o) { return o->geometry(); }
    Q_INVOKABLE void MsetGeometry(QSGBasicGeometryNode* o, QSGGeometry* x1) { o->setGeometry(x1); }
};

class N174 : public N173 { // QSGClipNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGClipNode(u); }
    Q_INVOKABLE QRectF MclipRect(QSGClipNode* o) const { return o->clipRect(); }
    Q_INVOKABLE bool MisRectangular(QSGClipNode* o) const { return o->isRectangular(); }
    Q_INVOKABLE void MsetClipRect(QSGClipNode* o, const QRectF& x1) { o->setClipRect(x1); }
    Q_INVOKABLE void MsetIsRectangular(QSGClipNode* o, bool x1) { o->setIsRectangular(x1); }
};

class N175 : public N178 { // QSGFlatColorMaterial
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGFlatColorMaterial(u); }
    Q_INVOKABLE QColor Mcolor(QSGFlatColorMaterial* o) const { return o->color(); }
    Q_INVOKABLE void MsetColor(QSGFlatColorMaterial* o, const QColor& x1) { o->setColor(x1); }
};

class N177 : public N173 { // QSGGeometryNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGGeometryNode(u); }
    Q_INVOKABLE QSGMaterial* Mmaterial(QSGGeometryNode* o) const { return o->material(); }
    Q_INVOKABLE QSGMaterial* MopaqueMaterial(QSGGeometryNode* o) const { return o->opaqueMaterial(); }
    Q_INVOKABLE void MsetMaterial(QSGGeometryNode* o, QSGMaterial* x1) { o->setMaterial(x1); }
    Q_INVOKABLE void MsetOpaqueMaterial(QSGGeometryNode* o, QSGMaterial* x1) { o->setOpaqueMaterial(x1); }
};

class N182 : public N181 { // QSGOpacityNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGOpacityNode(u); }
    Q_INVOKABLE qreal Mopacity(QSGOpacityNode* o) const { return o->opacity(); }
    Q_INVOKABLE void MsetOpacity(QSGOpacityNode* o, qreal x1) { o->setOpacity(x1); }
};

class N183 : public N178 { // QSGOpaqueTextureMaterial
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGOpaqueTextureMaterial(u); }
    Q_INVOKABLE int Mfiltering(QSGOpaqueTextureMaterial* o) const { return o->filtering(); }
    Q_INVOKABLE int MhorizontalWrapMode(QSGOpaqueTextureMaterial* o) const { return o->horizontalWrapMode(); }
    Q_INVOKABLE int MmipmapFiltering(QSGOpaqueTextureMaterial* o) const { return o->mipmapFiltering(); }
    Q_INVOKABLE void MsetFiltering(QSGOpaqueTextureMaterial* o, QSGTexture::Filtering x1) { o->setFiltering(x1); }
    Q_INVOKABLE void MsetHorizontalWrapMode(QSGOpaqueTextureMaterial* o, QSGTexture::WrapMode x1) { o->setHorizontalWrapMode(x1); }
    Q_INVOKABLE void MsetMipmapFiltering(QSGOpaqueTextureMaterial* o, QSGTexture::Filtering x1) { o->setMipmapFiltering(x1); }
    Q_INVOKABLE void MsetTexture(QSGOpaqueTextureMaterial* o, QSGTexture* x1) { o->setTexture(x1); }
    Q_INVOKABLE void MsetVerticalWrapMode(QSGOpaqueTextureMaterial* o, QSGTexture::WrapMode x1) { o->setVerticalWrapMode(x1); }
    Q_INVOKABLE QSGTexture* Mtexture(QSGOpaqueTextureMaterial* o) const { return o->texture(); }
    Q_INVOKABLE int MverticalWrapMode(QSGOpaqueTextureMaterial* o) const { return o->verticalWrapMode(); }
};

class N184 : public N177 { // QSGSimpleRectNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QRectF& x1, const QColor& x2) { return new LSGSimpleRectNode(u, x1, x2); }
    Q_INVOKABLE void* C(uint u) { return new LSGSimpleRectNode(u); }
    Q_INVOKABLE QColor Mcolor(QSGSimpleRectNode* o) const { return o->color(); }
    Q_INVOKABLE QRectF Mrect(QSGSimpleRectNode* o) const { return o->rect(); }
    Q_INVOKABLE void MsetColor(QSGSimpleRectNode* o, const QColor& x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetRect(QSGSimpleRectNode* o, const QRectF& x1) { o->setRect(x1); }
    Q_INVOKABLE void MsetRect(QSGSimpleRectNode* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setRect(x1, x2, x3, x4); }
};

class N185 : public N177 { // QSGSimpleTextureNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGSimpleTextureNode(u); }
    Q_INVOKABLE int Mfiltering(QSGSimpleTextureNode* o) const { return o->filtering(); }
    Q_INVOKABLE bool MownsTexture(QSGSimpleTextureNode* o) const { return o->ownsTexture(); }
    Q_INVOKABLE QRectF Mrect(QSGSimpleTextureNode* o) const { return o->rect(); }
    Q_INVOKABLE void MsetFiltering(QSGSimpleTextureNode* o, QSGTexture::Filtering x1) { o->setFiltering(x1); }
    Q_INVOKABLE void MsetOwnsTexture(QSGSimpleTextureNode* o, bool x1) { o->setOwnsTexture(x1); }
    Q_INVOKABLE void MsetRect(QSGSimpleTextureNode* o, const QRectF& x1) { o->setRect(x1); }
    Q_INVOKABLE void MsetRect(QSGSimpleTextureNode* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetSourceRect(QSGSimpleTextureNode* o, const QRectF& x1) { o->setSourceRect(x1); }
    Q_INVOKABLE void MsetSourceRect(QSGSimpleTextureNode* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setSourceRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetTexture(QSGSimpleTextureNode* o, QSGTexture* x1) { o->setTexture(x1); }
    Q_INVOKABLE void MsetTextureCoordinatesTransform(QSGSimpleTextureNode* o, QSGSimpleTextureNode::TextureCoordinatesTransformMode x1) { o->setTextureCoordinatesTransform(x1); }
    Q_INVOKABLE QRectF MsourceRect(QSGSimpleTextureNode* o) const { return o->sourceRect(); }
    Q_INVOKABLE QSGTexture* Mtexture(QSGSimpleTextureNode* o) const { return o->texture(); }
    Q_INVOKABLE int MtextureCoordinatesTransform(QSGSimpleTextureNode* o) const { return o->textureCoordinatesTransform(); }
};

class N186 : public N183 { // QSGTextureMaterial
    Q_OBJECT
public:
};

class N187 : public N181 { // QSGTransformNode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGTransformNode(u); }
    Q_INVOKABLE QMatrix4x4 Mmatrix(QSGTransformNode* o) const { return o->matrix(); }
    Q_INVOKABLE void MsetMatrix(QSGTransformNode* o, const QMatrix4x4& x1) { o->setMatrix(x1); }
};

class N188 : public N178 { // QSGVertexColorMaterial
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGVertexColorMaterial(u); }
};

QT_END_NAMESPACE

#endif
