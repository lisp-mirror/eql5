// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtQuick>

QT_BEGIN_NAMESPACE

class Q112 : public Q142 { // QJSEngine
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LJSEngine(u); }
    Q_INVOKABLE void* C(uint u, QObject* x1) { return new LJSEngine(u, x1); }
    Q_INVOKABLE void McollectGarbage(QJSEngine* o) { o->collectGarbage(); }
    Q_INVOKABLE QJSValue Mevaluate(QJSEngine* o, const QString& x1, const QString& x2 = QString(), int x3 = 1) { return o->evaluate(x1, x2, x3); }
    Q_INVOKABLE QJSValue MglobalObject(QJSEngine* o) const { return o->globalObject(); }
    Q_INVOKABLE void MinstallTranslatorFunctions(QJSEngine* o, const QJSValue& x1 = QJSValue()) { o->installTranslatorFunctions(x1); }
    Q_INVOKABLE QJSValue MnewArray(QJSEngine* o, uint x1 = 0) { return o->newArray(x1); }
    Q_INVOKABLE QJSValue MnewObject(QJSEngine* o) { return o->newObject(); }
    Q_INVOKABLE QJSValue MnewQObject(QJSEngine* o, QObject* x1) { return o->newQObject(x1); }
};

class Q169 : public Q142 { // QQmlComponent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, QObject* x2 = 0) { return new LQmlComponent(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, const QString& x2, QObject* x3 = 0) { return new LQmlComponent(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, const QString& x2, QQmlComponent::CompilationMode x3, QObject* x4 = 0) { return new LQmlComponent(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, const QUrl& x2, QObject* x3 = 0) { return new LQmlComponent(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, const QUrl& x2, QQmlComponent::CompilationMode x3, QObject* x4 = 0) { return new LQmlComponent(u, x1, x2, x3, x4); }
    Q_INVOKABLE QObject* MbeginCreate(QQmlComponent* o, QQmlContext* x1) { return o->beginCreate(x1); }
    Q_INVOKABLE void McompleteCreate(QQmlComponent* o) { o->completeCreate(); }
    Q_INVOKABLE QObject* Mcreate(QQmlComponent* o, QQmlContext* x1 = 0) { return o->create(x1); }
    Q_INVOKABLE void Mcreate(QQmlComponent* o, QQmlIncubator& x1, QQmlContext* x2 = 0, QQmlContext* x3 = 0) { o->create(x1, x2, x3); }
    Q_INVOKABLE QQmlContext* McreationContext(QQmlComponent* o) const { return o->creationContext(); }
    Q_INVOKABLE QList<QQmlError> Merrors(QQmlComponent* o) const { return o->errors(); }
    Q_INVOKABLE bool MisError(QQmlComponent* o) const { return o->isError(); }
    Q_INVOKABLE bool MisLoading(QQmlComponent* o) const { return o->isLoading(); }
    Q_INVOKABLE bool MisNull(QQmlComponent* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisReady(QQmlComponent* o) const { return o->isReady(); }
    Q_INVOKABLE qreal Mprogress(QQmlComponent* o) const { return o->progress(); }
    Q_INVOKABLE int Mstatus(QQmlComponent* o) const { return o->status(); }
    Q_INVOKABLE QUrl Murl(QQmlComponent* o) const { return o->url(); }
};

class Q170 : public Q142 { // QQmlContext
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, QObject* x2 = 0) { return new LQmlContext(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QQmlContext* x1, QObject* x2 = 0) { return new LQmlContext(u, x1, x2); }
    Q_INVOKABLE QUrl MbaseUrl(QQmlContext* o) const { return o->baseUrl(); }
    Q_INVOKABLE QObject* McontextObject(QQmlContext* o) const { return o->contextObject(); }
    Q_INVOKABLE QVariant McontextProperty(QQmlContext* o, const QString& x1) const { return o->contextProperty(x1); }
    Q_INVOKABLE QQmlEngine* Mengine(QQmlContext* o) const { return o->engine(); }
    Q_INVOKABLE bool MisValid(QQmlContext* o) const { return o->isValid(); }
    Q_INVOKABLE QString MnameForObject(QQmlContext* o, QObject* x1) const { return o->nameForObject(x1); }
    Q_INVOKABLE QQmlContext* MparentContext(QQmlContext* o) const { return o->parentContext(); }
    Q_INVOKABLE QUrl MresolvedUrl(QQmlContext* o, const QUrl& x1) { return o->resolvedUrl(x1); }
    Q_INVOKABLE void MsetBaseUrl(QQmlContext* o, const QUrl& x1) { o->setBaseUrl(x1); }
    Q_INVOKABLE void MsetContextObject(QQmlContext* o, QObject* x1) { o->setContextObject(x1); }
    Q_INVOKABLE void MsetContextProperty(QQmlContext* o, const QString& x1, QObject* x2) { o->setContextProperty(x1, x2); }
    Q_INVOKABLE void MsetContextProperty(QQmlContext* o, const QString& x1, const QVariant& x2) { o->setContextProperty(x1, x2); }
};

class Q171 : public Q112 { // QQmlEngine
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LQmlEngine(u, x1); }
    Q_INVOKABLE void MaddImageProvider(QQmlEngine* o, const QString& x1, QQmlImageProviderBase* x2) { o->addImageProvider(x1, x2); }
    Q_INVOKABLE void MaddImportPath(QQmlEngine* o, const QString& x1) { o->addImportPath(x1); }
    Q_INVOKABLE void MaddPluginPath(QQmlEngine* o, const QString& x1) { o->addPluginPath(x1); }
    Q_INVOKABLE QUrl MbaseUrl(QQmlEngine* o) const { return o->baseUrl(); }
    Q_INVOKABLE void MclearComponentCache(QQmlEngine* o) { o->clearComponentCache(); }
    Q_INVOKABLE QQmlImageProviderBase* MimageProvider(QQmlEngine* o, const QString& x1) const { return o->imageProvider(x1); }
    Q_INVOKABLE QStringList MimportPathList(QQmlEngine* o) const { return o->importPathList(); }
    Q_INVOKABLE bool MimportPlugin(QQmlEngine* o, const QString& x1, const QString& x2, QList<QQmlError>* x3) { return o->importPlugin(x1, x2, x3); }
    Q_INVOKABLE QQmlIncubationController* MincubationController(QQmlEngine* o) const { return o->incubationController(); }
    Q_INVOKABLE QNetworkAccessManager* MnetworkAccessManager(QQmlEngine* o) const { return o->networkAccessManager(); }
    Q_INVOKABLE QQmlNetworkAccessManagerFactory* MnetworkAccessManagerFactory(QQmlEngine* o) const { return o->networkAccessManagerFactory(); }
    Q_INVOKABLE QString MofflineStoragePath(QQmlEngine* o) const { return o->offlineStoragePath(); }
    Q_INVOKABLE bool MoutputWarningsToStandardError(QQmlEngine* o) const { return o->outputWarningsToStandardError(); }
    Q_INVOKABLE QStringList MpluginPathList(QQmlEngine* o) const { return o->pluginPathList(); }
    Q_INVOKABLE void MremoveImageProvider(QQmlEngine* o, const QString& x1) { o->removeImageProvider(x1); }
    Q_INVOKABLE QQmlContext* MrootContext(QQmlEngine* o) const { return o->rootContext(); }
    Q_INVOKABLE void MsetBaseUrl(QQmlEngine* o, const QUrl& x1) { o->setBaseUrl(x1); }
    Q_INVOKABLE void MsetImportPathList(QQmlEngine* o, const QStringList& x1) { o->setImportPathList(x1); }
    Q_INVOKABLE void MsetIncubationController(QQmlEngine* o, QQmlIncubationController* x1) { o->setIncubationController(x1); }
    Q_INVOKABLE void MsetNetworkAccessManagerFactory(QQmlEngine* o, QQmlNetworkAccessManagerFactory* x1) { o->setNetworkAccessManagerFactory(x1); }
    Q_INVOKABLE void MsetOfflineStoragePath(QQmlEngine* o, const QString& x1) { o->setOfflineStoragePath(x1); }
    Q_INVOKABLE void MsetOutputWarningsToStandardError(QQmlEngine* o, bool x1) { o->setOutputWarningsToStandardError(x1); }
    Q_INVOKABLE void MsetPluginPathList(QQmlEngine* o, const QStringList& x1) { o->setPluginPathList(x1); }
    Q_INVOKABLE void MtrimComponentCache(QQmlEngine* o) { o->trimComponentCache(); }
    Q_INVOKABLE QQmlContext* ScontextForObject(const QObject* x1) { return QQmlEngine::contextForObject(x1); }
    Q_INVOKABLE int SobjectOwnership(QObject* x1) { return QQmlEngine::objectOwnership(x1); }
    Q_INVOKABLE void SsetContextForObject(QObject* x1, QQmlContext* x2) { QQmlEngine::setContextForObject(x1, x2); }
    Q_INVOKABLE void SsetObjectOwnership(QObject* x1, QQmlEngine::ObjectOwnership x2) { QQmlEngine::setObjectOwnership(x1, x2); }
};

class Q172 : public Q142 { // QQmlExpression
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQmlExpression(u); }
    Q_INVOKABLE void* C(uint u, QQmlContext* x1, QObject* x2, const QString& x3, QObject* x4 = 0) { return new LQmlExpression(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QQmlScriptString& x1, QQmlContext* x2 = 0, QObject* x3 = 0, QObject* x4 = 0) { return new LQmlExpression(u, x1, x2, x3, x4); }
    Q_INVOKABLE void MclearError(QQmlExpression* o) { o->clearError(); }
    Q_INVOKABLE int McolumnNumber(QQmlExpression* o) const { return o->columnNumber(); }
    Q_INVOKABLE QQmlContext* Mcontext(QQmlExpression* o) const { return o->context(); }
    Q_INVOKABLE QQmlEngine* Mengine(QQmlExpression* o) const { return o->engine(); }
    Q_INVOKABLE QQmlError Merror(QQmlExpression* o) const { return o->error(); }
    Q_INVOKABLE QVariant Mevaluate(QQmlExpression* o, bool* x1 = 0) { return o->evaluate(x1); }
    Q_INVOKABLE QString Mexpression(QQmlExpression* o) const { return o->expression(); }
    Q_INVOKABLE bool MhasError(QQmlExpression* o) const { return o->hasError(); }
    Q_INVOKABLE int MlineNumber(QQmlExpression* o) const { return o->lineNumber(); }
    Q_INVOKABLE bool MnotifyOnValueChanged(QQmlExpression* o) const { return o->notifyOnValueChanged(); }
    Q_INVOKABLE QObject* MscopeObject(QQmlExpression* o) const { return o->scopeObject(); }
    Q_INVOKABLE void MsetExpression(QQmlExpression* o, const QString& x1) { o->setExpression(x1); }
    Q_INVOKABLE void MsetNotifyOnValueChanged(QQmlExpression* o, bool x1) { o->setNotifyOnValueChanged(x1); }
    Q_INVOKABLE void MsetSourceLocation(QQmlExpression* o, const QString& x1, int x2, int x3 = 0) { o->setSourceLocation(x1, x2, x3); }
    Q_INVOKABLE QString MsourceFile(QQmlExpression* o) const { return o->sourceFile(); }
};

class Q173 : public Q142 { // QQmlExtensionPlugin
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LQmlExtensionPlugin(u, x1); }
    Q_INVOKABLE QUrl MbaseUrl(QQmlExtensionPlugin* o) const { return o->baseUrl(); }
    Q_INVOKABLE void MinitializeEngine(QQmlExtensionPlugin* o, QQmlEngine* x1, const char* x2) { o->initializeEngine(x1, x2); }
    Q_INVOKABLE void MregisterTypes(QQmlExtensionPlugin* o, const char* x1) { o->registerTypes(x1); }
};

class Q174 : public Q142 { // QQmlFileSelector
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, QObject* x2 = 0) { return new LQmlFileSelector(u, x1, x2); }
    Q_INVOKABLE void MsetExtraSelectors(QQmlFileSelector* o, QStringList& x1) { o->setExtraSelectors(x1); }
    Q_INVOKABLE void MsetExtraSelectors(QQmlFileSelector* o, const QStringList& x1) { o->setExtraSelectors(x1); }
    Q_INVOKABLE void MsetSelector(QQmlFileSelector* o, QFileSelector* x1) { o->setSelector(x1); }
    Q_INVOKABLE QQmlFileSelector* Sget(QQmlEngine* x1) { return QQmlFileSelector::get(x1); }
};

class Q175 : public Q142 { // QQmlPropertyMap
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LQmlPropertyMap(u, x1); }
    Q_INVOKABLE void Mclear(QQmlPropertyMap* o, const QString& x1) { o->clear(x1); }
    Q_INVOKABLE bool Mcontains(QQmlPropertyMap* o, const QString& x1) const { return o->contains(x1); }
    Q_INVOKABLE int Mcount(QQmlPropertyMap* o) const { return o->count(); }
    Q_INVOKABLE void Minsert(QQmlPropertyMap* o, const QString& x1, const QVariant& x2) { o->insert(x1, x2); }
    Q_INVOKABLE bool MisEmpty(QQmlPropertyMap* o) const { return o->isEmpty(); }
    Q_INVOKABLE QStringList Mkeys(QQmlPropertyMap* o) const { return o->keys(); }
    Q_INVOKABLE int Msize(QQmlPropertyMap* o) const { return o->size(); }
    Q_INVOKABLE QVariant Mvalue(QQmlPropertyMap* o, const QString& x1) const { return o->value(x1); }
};

class Q177 : public Q142 { // QQuickItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQuickItem* x1 = 0) { return new LQuickItem(u, x1); }
    Q_INVOKABLE bool MacceptHoverEvents(QQuickItem* o) const { return o->acceptHoverEvents(); }
    Q_INVOKABLE int MacceptedMouseButtons(QQuickItem* o) const { return o->acceptedMouseButtons(); }
    Q_INVOKABLE bool MactiveFocusOnTab(QQuickItem* o) const { return o->activeFocusOnTab(); }
    Q_INVOKABLE bool Mantialiasing(QQuickItem* o) const { return o->antialiasing(); }
    Q_INVOKABLE qreal MbaselineOffset(QQuickItem* o) const { return o->baselineOffset(); }
    Q_INVOKABLE QQuickItem* MchildAt(QQuickItem* o, qreal x1, qreal x2) const { return o->childAt(x1, x2); }
    Q_INVOKABLE QList<QQuickItem*> MchildItems(QQuickItem* o) const { return o->childItems(); }
    Q_INVOKABLE QRectF MchildrenRect(QQuickItem* o) { return o->childrenRect(); }
    Q_INVOKABLE bool Mclip(QQuickItem* o) const { return o->clip(); }
    Q_INVOKABLE bool Mcontains(QQuickItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE QCursor Mcursor(QQuickItem* o) const { return o->cursor(); }
    Q_INVOKABLE bool MfiltersChildMouseEvents(QQuickItem* o) const { return o->filtersChildMouseEvents(); }
    Q_INVOKABLE int Mflags(QQuickItem* o) const { return o->flags(); }
    Q_INVOKABLE void MforceActiveFocus(QQuickItem* o) { o->forceActiveFocus(); }
    Q_INVOKABLE void MforceActiveFocus(QQuickItem* o, Qt::FocusReason x1) { o->forceActiveFocus(x1); }
    Q_INVOKABLE void MgrabMouse(QQuickItem* o) { o->grabMouse(); }
    Q_INVOKABLE QSharedPointer<QQuickItemGrabResult> MgrabToImage(QQuickItem* o, const QSize& x1 = QSize()) { return o->grabToImage(x1); }
    Q_INVOKABLE void MgrabTouchPoints(QQuickItem* o, const QVector<int>& x1) { o->grabTouchPoints(x1); }
    Q_INVOKABLE bool MhasActiveFocus(QQuickItem* o) const { return o->hasActiveFocus(); }
    Q_INVOKABLE bool MhasFocus(QQuickItem* o) const { return o->hasFocus(); }
    Q_INVOKABLE qreal Mheight(QQuickItem* o) const { return o->height(); }
    Q_INVOKABLE qreal MimplicitHeight(QQuickItem* o) const { return o->implicitHeight(); }
    Q_INVOKABLE qreal MimplicitWidth(QQuickItem* o) const { return o->implicitWidth(); }
    Q_INVOKABLE QVariant MinputMethodQuery(QQuickItem* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE bool MisEnabled(QQuickItem* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisFocusScope(QQuickItem* o) const { return o->isFocusScope(); }
    Q_INVOKABLE bool MisTextureProvider(QQuickItem* o) const { return o->isTextureProvider(); }
    Q_INVOKABLE bool MisVisible(QQuickItem* o) const { return o->isVisible(); }
    Q_INVOKABLE bool MkeepMouseGrab(QQuickItem* o) const { return o->keepMouseGrab(); }
    Q_INVOKABLE bool MkeepTouchGrab(QQuickItem* o) const { return o->keepTouchGrab(); }
    Q_INVOKABLE QPointF MmapFromItem(QQuickItem* o, const QQuickItem* x1, const QPointF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPointF MmapFromScene(QQuickItem* o, const QPointF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QRectF MmapRectFromItem(QQuickItem* o, const QQuickItem* x1, const QRectF& x2) const { return o->mapRectFromItem(x1, x2); }
    Q_INVOKABLE QRectF MmapRectFromScene(QQuickItem* o, const QRectF& x1) const { return o->mapRectFromScene(x1); }
    Q_INVOKABLE QRectF MmapRectToItem(QQuickItem* o, const QQuickItem* x1, const QRectF& x2) const { return o->mapRectToItem(x1, x2); }
    Q_INVOKABLE QRectF MmapRectToScene(QQuickItem* o, const QRectF& x1) const { return o->mapRectToScene(x1); }
    Q_INVOKABLE QPointF MmapToItem(QQuickItem* o, const QQuickItem* x1, const QPointF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPointF MmapToScene(QQuickItem* o, const QPointF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QQuickItem* MnextItemInFocusChain(QQuickItem* o, bool x1 = true) { return o->nextItemInFocusChain(x1); }
    Q_INVOKABLE qreal Mopacity(QQuickItem* o) const { return o->opacity(); }
    Q_INVOKABLE QQuickItem* MparentItem(QQuickItem* o) const { return o->parentItem(); }
    Q_INVOKABLE void Mpolish(QQuickItem* o) { o->polish(); }
    Q_INVOKABLE void MresetAntialiasing(QQuickItem* o) { o->resetAntialiasing(); }
    Q_INVOKABLE void MresetHeight(QQuickItem* o) { o->resetHeight(); }
    Q_INVOKABLE void MresetWidth(QQuickItem* o) { o->resetWidth(); }
    Q_INVOKABLE qreal Mrotation(QQuickItem* o) const { return o->rotation(); }
    Q_INVOKABLE qreal Mscale(QQuickItem* o) const { return o->scale(); }
    Q_INVOKABLE QQuickItem* MscopedFocusItem(QQuickItem* o) const { return o->scopedFocusItem(); }
    Q_INVOKABLE void MsetAcceptHoverEvents(QQuickItem* o, bool x1) { o->setAcceptHoverEvents(x1); }
    Q_INVOKABLE void MsetAcceptedMouseButtons(QQuickItem* o, Qt::MouseButtons x1) { o->setAcceptedMouseButtons(x1); }
    Q_INVOKABLE void MsetActiveFocusOnTab(QQuickItem* o, bool x1) { o->setActiveFocusOnTab(x1); }
    Q_INVOKABLE void MsetAntialiasing(QQuickItem* o, bool x1) { o->setAntialiasing(x1); }
    Q_INVOKABLE void MsetBaselineOffset(QQuickItem* o, qreal x1) { o->setBaselineOffset(x1); }
    Q_INVOKABLE void MsetClip(QQuickItem* o, bool x1) { o->setClip(x1); }
    Q_INVOKABLE void MsetCursor(QQuickItem* o, const QCursor& x1) { o->setCursor(x1); }
    Q_INVOKABLE void MsetEnabled(QQuickItem* o, bool x1) { o->setEnabled(x1); }
    Q_INVOKABLE void MsetFiltersChildMouseEvents(QQuickItem* o, bool x1) { o->setFiltersChildMouseEvents(x1); }
    Q_INVOKABLE void MsetFlag(QQuickItem* o, QQuickItem::Flag x1, bool x2 = true) { o->setFlag(x1, x2); }
    Q_INVOKABLE void MsetFlags(QQuickItem* o, QQuickItem::Flags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFocus(QQuickItem* o, bool x1) { o->setFocus(x1); }
    Q_INVOKABLE void MsetFocus(QQuickItem* o, bool x1, Qt::FocusReason x2) { o->setFocus(x1, x2); }
    Q_INVOKABLE void MsetHeight(QQuickItem* o, qreal x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetImplicitHeight(QQuickItem* o, qreal x1) { o->setImplicitHeight(x1); }
    Q_INVOKABLE void MsetImplicitWidth(QQuickItem* o, qreal x1) { o->setImplicitWidth(x1); }
    Q_INVOKABLE void MsetKeepMouseGrab(QQuickItem* o, bool x1) { o->setKeepMouseGrab(x1); }
    Q_INVOKABLE void MsetKeepTouchGrab(QQuickItem* o, bool x1) { o->setKeepTouchGrab(x1); }
    Q_INVOKABLE void MsetOpacity(QQuickItem* o, qreal x1) { o->setOpacity(x1); }
    Q_INVOKABLE void MsetParentItem(QQuickItem* o, QQuickItem* x1) { o->setParentItem(x1); }
    Q_INVOKABLE void MsetRotation(QQuickItem* o, qreal x1) { o->setRotation(x1); }
    Q_INVOKABLE void MsetScale(QQuickItem* o, qreal x1) { o->setScale(x1); }
    Q_INVOKABLE void MsetSmooth(QQuickItem* o, bool x1) { o->setSmooth(x1); }
    Q_INVOKABLE void MsetState(QQuickItem* o, const QString& x1) { o->setState(x1); }
    Q_INVOKABLE void MsetTransformOrigin(QQuickItem* o, QQuickItem::TransformOrigin x1) { o->setTransformOrigin(x1); }
    Q_INVOKABLE void MsetVisible(QQuickItem* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE void MsetWidth(QQuickItem* o, qreal x1) { o->setWidth(x1); }
    Q_INVOKABLE void MsetX(QQuickItem* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QQuickItem* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QQuickItem* o, qreal x1) { o->setZ(x1); }
    Q_INVOKABLE bool Msmooth(QQuickItem* o) const { return o->smooth(); }
    Q_INVOKABLE void MstackAfter(QQuickItem* o, const QQuickItem* x1) { o->stackAfter(x1); }
    Q_INVOKABLE void MstackBefore(QQuickItem* o, const QQuickItem* x1) { o->stackBefore(x1); }
    Q_INVOKABLE QString Mstate(QQuickItem* o) const { return o->state(); }
    Q_INVOKABLE QSGTextureProvider* MtextureProvider(QQuickItem* o) const { return o->textureProvider(); }
    Q_INVOKABLE int MtransformOrigin(QQuickItem* o) const { return o->transformOrigin(); }
    Q_INVOKABLE void MungrabMouse(QQuickItem* o) { o->ungrabMouse(); }
    Q_INVOKABLE void MungrabTouchPoints(QQuickItem* o) { o->ungrabTouchPoints(); }
    Q_INVOKABLE void MunsetCursor(QQuickItem* o) { o->unsetCursor(); }
    Q_INVOKABLE qreal Mwidth(QQuickItem* o) const { return o->width(); }
    Q_INVOKABLE QQuickWindow* Mwindow(QQuickItem* o) const { return o->window(); }
    Q_INVOKABLE qreal Mx(QQuickItem* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QQuickItem* o) const { return o->y(); }
    Q_INVOKABLE qreal Mz(QQuickItem* o) const { return o->z(); }
    Q_INVOKABLE void MclassBegin(QQuickItem* o) { ((LQuickItem*)o)->classBegin(); }
    Q_INVOKABLE void McomponentComplete(QQuickItem* o) { ((LQuickItem*)o)->componentComplete(); }
    Q_INVOKABLE bool Mevent(QQuickItem* o, QEvent* x1) { return ((LQuickItem*)o)->event(x1); }
    Q_INVOKABLE bool MheightValid(QQuickItem* o) const { return ((LQuickItem*)o)->heightValid(); }
    Q_INVOKABLE bool MisComponentComplete(QQuickItem* o) const { return ((LQuickItem*)o)->isComponentComplete(); }
    Q_INVOKABLE void MupdateInputMethod(QQuickItem* o, Qt::InputMethodQueries x1 = Qt::ImQueryInput) { ((LQuickItem*)o)->updateInputMethod(x1); }
    Q_INVOKABLE bool MwidthValid(QQuickItem* o) const { return ((LQuickItem*)o)->widthValid(); }
};

class Q178 : public Q142 { // QQuickItemGrabResult
    Q_OBJECT
public:
    Q_INVOKABLE QImage Mimage(QQuickItemGrabResult* o) const { return o->image(); }
    Q_INVOKABLE bool MsaveToFile(QQuickItemGrabResult* o, const QString& x1) { return o->saveToFile(x1); }
    Q_INVOKABLE QUrl Murl(QQuickItemGrabResult* o) const { return o->url(); }
};

class Q179 : public Q177 { // QQuickPaintedItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQuickItem* x1 = 0) { return new LQuickPaintedItem(u, x1); }
    Q_INVOKABLE bool Mantialiasing(QQuickPaintedItem* o) const { return o->antialiasing(); }
    Q_INVOKABLE QRectF McontentsBoundingRect(QQuickPaintedItem* o) const { return o->contentsBoundingRect(); }
    Q_INVOKABLE qreal McontentsScale(QQuickPaintedItem* o) const { return o->contentsScale(); }
    Q_INVOKABLE QSize McontentsSize(QQuickPaintedItem* o) const { return o->contentsSize(); }
    Q_INVOKABLE QColor MfillColor(QQuickPaintedItem* o) const { return o->fillColor(); }
    Q_INVOKABLE bool Mmipmap(QQuickPaintedItem* o) const { return o->mipmap(); }
    Q_INVOKABLE bool MopaquePainting(QQuickPaintedItem* o) const { return o->opaquePainting(); }
    Q_INVOKABLE void Mpaint(QQuickPaintedItem* o, QPainter* x1) { o->paint(x1); }
    Q_INVOKABLE int MperformanceHints(QQuickPaintedItem* o) const { return o->performanceHints(); }
    Q_INVOKABLE int MrenderTarget(QQuickPaintedItem* o) const { return o->renderTarget(); }
    Q_INVOKABLE void MresetContentsSize(QQuickPaintedItem* o) { o->resetContentsSize(); }
    Q_INVOKABLE void MsetAntialiasing(QQuickPaintedItem* o, bool x1) { o->setAntialiasing(x1); }
    Q_INVOKABLE void MsetContentsScale(QQuickPaintedItem* o, qreal x1) { o->setContentsScale(x1); }
    Q_INVOKABLE void MsetContentsSize(QQuickPaintedItem* o, const QSize& x1) { o->setContentsSize(x1); }
    Q_INVOKABLE void MsetFillColor(QQuickPaintedItem* o, const QColor& x1) { o->setFillColor(x1); }
    Q_INVOKABLE void MsetMipmap(QQuickPaintedItem* o, bool x1) { o->setMipmap(x1); }
    Q_INVOKABLE void MsetOpaquePainting(QQuickPaintedItem* o, bool x1) { o->setOpaquePainting(x1); }
    Q_INVOKABLE void MsetPerformanceHint(QQuickPaintedItem* o, QQuickPaintedItem::PerformanceHint x1, bool x2 = true) { o->setPerformanceHint(x1, x2); }
    Q_INVOKABLE void MsetPerformanceHints(QQuickPaintedItem* o, QQuickPaintedItem::PerformanceHints x1) { o->setPerformanceHints(x1); }
    Q_INVOKABLE void MsetRenderTarget(QQuickPaintedItem* o, QQuickPaintedItem::RenderTarget x1) { o->setRenderTarget(x1); }
    Q_INVOKABLE void Mupdate(QQuickPaintedItem* o, const QRect& x1 = QRect()) { o->update(x1); }
    Q_INVOKABLE bool MisTextureProvider(QQuickPaintedItem* o) const { return o->isTextureProvider(); }
    Q_INVOKABLE QSGTextureProvider* MtextureProvider(QQuickPaintedItem* o) const { return o->textureProvider(); }
};

class Q180 : public Q142 { // QQuickRenderControl
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LQuickRenderControl(u, x1); }
    Q_INVOKABLE QImage Mgrab(QQuickRenderControl* o) { return o->grab(); }
    Q_INVOKABLE void Minitialize(QQuickRenderControl* o, QOpenGLContext* x1) { o->initialize(x1); }
    Q_INVOKABLE void Minvalidate(QQuickRenderControl* o) { o->invalidate(); }
    Q_INVOKABLE void MpolishItems(QQuickRenderControl* o) { o->polishItems(); }
    Q_INVOKABLE void MprepareThread(QQuickRenderControl* o, QThread* x1) { o->prepareThread(x1); }
    Q_INVOKABLE void Mrender(QQuickRenderControl* o) { o->render(); }
    Q_INVOKABLE bool Msync(QQuickRenderControl* o) { return o->sync(); }
};

class Q181 : public Q142 { // QQuickTextDocument
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QQuickItem* x1) { return new LQuickTextDocument(u, x1); }
    Q_INVOKABLE QTextDocument* MtextDocument(QQuickTextDocument* o) const { return o->textDocument(); }
};

class Q182 : public Q142 { // QQuickTextureFactory
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQuickTextureFactory(u); }
    Q_INVOKABLE QSGTexture* McreateTexture(QQuickTextureFactory* o, QQuickWindow* x1) const { return o->createTexture(x1); }
    Q_INVOKABLE QImage Mimage(QQuickTextureFactory* o) const { return o->image(); }
    Q_INVOKABLE int MtextureByteCount(QQuickTextureFactory* o) const { return o->textureByteCount(); }
    Q_INVOKABLE QSize MtextureSize(QQuickTextureFactory* o) const { return o->textureSize(); }
};

class Q190 : public Q142 { // QSGAbstractRenderer
    Q_OBJECT
public:
    Q_INVOKABLE QColor MclearColor(QSGAbstractRenderer* o) const { return o->clearColor(); }
    Q_INVOKABLE int MclearMode(QSGAbstractRenderer* o) const { return o->clearMode(); }
    Q_INVOKABLE QRect MdeviceRect(QSGAbstractRenderer* o) const { return o->deviceRect(); }
    Q_INVOKABLE QMatrix4x4 MprojectionMatrix(QSGAbstractRenderer* o) const { return o->projectionMatrix(); }
    Q_INVOKABLE void MrenderScene(QSGAbstractRenderer* o, GLuint x1 = 0) { o->renderScene(x1); }
    Q_INVOKABLE QSGRootNode* MrootNode(QSGAbstractRenderer* o) const { return o->rootNode(); }
    Q_INVOKABLE void MsetClearColor(QSGAbstractRenderer* o, const QColor& x1) { o->setClearColor(x1); }
    Q_INVOKABLE void MsetClearMode(QSGAbstractRenderer* o, QSGAbstractRenderer::ClearMode x1) { o->setClearMode(x1); }
    Q_INVOKABLE void MsetDeviceRect(QSGAbstractRenderer* o, const QRect& x1) { o->setDeviceRect(x1); }
    Q_INVOKABLE void MsetDeviceRect(QSGAbstractRenderer* o, const QSize& x1) { o->setDeviceRect(x1); }
    Q_INVOKABLE void MsetProjectionMatrix(QSGAbstractRenderer* o, const QMatrix4x4& x1) { o->setProjectionMatrix(x1); }
    Q_INVOKABLE void MsetProjectionMatrixToRect(QSGAbstractRenderer* o, const QRectF& x1) { o->setProjectionMatrixToRect(x1); }
    Q_INVOKABLE void MsetRootNode(QSGAbstractRenderer* o, QSGRootNode* x1) { o->setRootNode(x1); }
    Q_INVOKABLE void MsetViewportRect(QSGAbstractRenderer* o, const QRect& x1) { o->setViewportRect(x1); }
    Q_INVOKABLE void MsetViewportRect(QSGAbstractRenderer* o, const QSize& x1) { o->setViewportRect(x1); }
    Q_INVOKABLE QRect MviewportRect(QSGAbstractRenderer* o) const { return o->viewportRect(); }
};

class Q192 : public Q142 { // QSGEngine
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LSGEngine(u, x1); }
    Q_INVOKABLE QSGTexture* McreateTextureFromId(QSGEngine* o, uint x1, const QSize& x2, QSGEngine::CreateTextureOptions x3 = 0) const { return o->createTextureFromId(x1, x2, x3); }
    Q_INVOKABLE QSGTexture* McreateTextureFromImage(QSGEngine* o, const QImage& x1, QSGEngine::CreateTextureOptions x2 = 0) const { return o->createTextureFromImage(x1, x2); }
    Q_INVOKABLE void Minitialize(QSGEngine* o, QOpenGLContext* x1) { o->initialize(x1); }
    Q_INVOKABLE void Minvalidate(QSGEngine* o) { o->invalidate(); }
};

class Q193 : public Q142 { // QSGTexture
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSGTexture(u); }
    Q_INVOKABLE void Mbind(QSGTexture* o) { o->bind(); }
    Q_INVOKABLE QRectF MconvertToNormalizedSourceRect(QSGTexture* o, const QRectF& x1) const { return o->convertToNormalizedSourceRect(x1); }
    Q_INVOKABLE int Mfiltering(QSGTexture* o) const { return o->filtering(); }
    Q_INVOKABLE bool MhasAlphaChannel(QSGTexture* o) const { return o->hasAlphaChannel(); }
    Q_INVOKABLE bool MhasMipmaps(QSGTexture* o) const { return o->hasMipmaps(); }
    Q_INVOKABLE int MhorizontalWrapMode(QSGTexture* o) const { return o->horizontalWrapMode(); }
    Q_INVOKABLE bool MisAtlasTexture(QSGTexture* o) const { return o->isAtlasTexture(); }
    Q_INVOKABLE int MmipmapFiltering(QSGTexture* o) const { return o->mipmapFiltering(); }
    Q_INVOKABLE QRectF MnormalizedTextureSubRect(QSGTexture* o) const { return o->normalizedTextureSubRect(); }
    Q_INVOKABLE QSGTexture* MremovedFromAtlas(QSGTexture* o) const { return o->removedFromAtlas(); }
    Q_INVOKABLE void MsetFiltering(QSGTexture* o, QSGTexture::Filtering x1) { o->setFiltering(x1); }
    Q_INVOKABLE void MsetHorizontalWrapMode(QSGTexture* o, QSGTexture::WrapMode x1) { o->setHorizontalWrapMode(x1); }
    Q_INVOKABLE void MsetMipmapFiltering(QSGTexture* o, QSGTexture::Filtering x1) { o->setMipmapFiltering(x1); }
    Q_INVOKABLE void MsetVerticalWrapMode(QSGTexture* o, QSGTexture::WrapMode x1) { o->setVerticalWrapMode(x1); }
    Q_INVOKABLE int MtextureId(QSGTexture* o) const { return o->textureId(); }
    Q_INVOKABLE QSize MtextureSize(QSGTexture* o) const { return o->textureSize(); }
    Q_INVOKABLE void MupdateBindOptions(QSGTexture* o, bool x1 = false) { o->updateBindOptions(x1); }
    Q_INVOKABLE int MverticalWrapMode(QSGTexture* o) const { return o->verticalWrapMode(); }
};

class Q194 : public Q142 { // QSGTextureProvider
    Q_OBJECT
public:
    Q_INVOKABLE QSGTexture* Mtexture(QSGTextureProvider* o) const { return o->texture(); }
};

class Q168 : public Q171 { // QQmlApplicationEngine
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LQmlApplicationEngine(u, x1); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1, QObject* x2 = 0) { return new LQmlApplicationEngine(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QObject* x2 = 0) { return new LQmlApplicationEngine(u, x1, x2); }
    Q_INVOKABLE QList<QObject*> MrootObjects(QQmlApplicationEngine* o) { return o->rootObjects(); }
};

class Q176 : public Q177 { // QQuickFramebufferObject
    Q_OBJECT
public:
    Q_INVOKABLE void MsetTextureFollowsItemSize(QQuickFramebufferObject* o, bool x1) { o->setTextureFollowsItemSize(x1); }
    Q_INVOKABLE bool MtextureFollowsItemSize(QQuickFramebufferObject* o) const { return o->textureFollowsItemSize(); }
    Q_INVOKABLE bool MisTextureProvider(QQuickFramebufferObject* o) const { return o->isTextureProvider(); }
    Q_INVOKABLE void MreleaseResources(QQuickFramebufferObject* o) { o->releaseResources(); }
    Q_INVOKABLE QSGTextureProvider* MtextureProvider(QQuickFramebufferObject* o) const { return o->textureProvider(); }
};

class Q184 : public Q271 { // QQuickWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LQuickWidget(u, x1); }
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, QWidget* x2) { return new LQuickWidget(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1, QWidget* x2 = 0) { return new LQuickWidget(u, x1, x2); }
    Q_INVOKABLE QQmlEngine* Mengine(QQuickWidget* o) const { return o->engine(); }
    Q_INVOKABLE QList<QQmlError> Merrors(QQuickWidget* o) const { return o->errors(); }
    Q_INVOKABLE QSurfaceFormat Mformat(QQuickWidget* o) const { return o->format(); }
    Q_INVOKABLE QImage MgrabFramebuffer(QQuickWidget* o) const { return o->grabFramebuffer(); }
    Q_INVOKABLE QSize MinitialSize(QQuickWidget* o) const { return o->initialSize(); }
    Q_INVOKABLE QQuickWindow* MquickWindow(QQuickWidget* o) const { return o->quickWindow(); }
    Q_INVOKABLE int MresizeMode(QQuickWidget* o) const { return o->resizeMode(); }
    Q_INVOKABLE QQmlContext* MrootContext(QQuickWidget* o) const { return o->rootContext(); }
    Q_INVOKABLE QQuickItem* MrootObject(QQuickWidget* o) const { return o->rootObject(); }
    Q_INVOKABLE void MsetClearColor(QQuickWidget* o, const QColor& x1) { o->setClearColor(x1); }
    Q_INVOKABLE void MsetFormat(QQuickWidget* o, const QSurfaceFormat& x1) { o->setFormat(x1); }
    Q_INVOKABLE void MsetResizeMode(QQuickWidget* o, QQuickWidget::ResizeMode x1) { o->setResizeMode(x1); }
    Q_INVOKABLE QUrl Msource(QQuickWidget* o) const { return o->source(); }
    Q_INVOKABLE int Mstatus(QQuickWidget* o) const { return o->status(); }
    Q_INVOKABLE bool Mevent(QQuickWidget* o, QEvent* x1) { return ((LQuickWidget*)o)->event(x1); }
};

class Q185 : public Q273 { // QQuickWindow
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWindow* x1 = 0) { return new LQuickWindow(u, x1); }
    Q_INVOKABLE QAccessibleInterface* MaccessibleRoot(QQuickWindow* o) const { return o->accessibleRoot(); }
    Q_INVOKABLE QQuickItem* MactiveFocusItem(QQuickWindow* o) const { return o->activeFocusItem(); }
    Q_INVOKABLE bool MclearBeforeRendering(QQuickWindow* o) const { return o->clearBeforeRendering(); }
    Q_INVOKABLE QColor Mcolor(QQuickWindow* o) const { return o->color(); }
    Q_INVOKABLE QQuickItem* McontentItem(QQuickWindow* o) const { return o->contentItem(); }
    Q_INVOKABLE QSGTexture* McreateTextureFromId(QQuickWindow* o, uint x1, const QSize& x2, QQuickWindow::CreateTextureOptions x3 = 0) const { return o->createTextureFromId(x1, x2, x3); }
    Q_INVOKABLE QSGTexture* McreateTextureFromImage(QQuickWindow* o, const QImage& x1, QQuickWindow::CreateTextureOptions x2) const { return o->createTextureFromImage(x1, x2); }
    Q_INVOKABLE QSGTexture* McreateTextureFromImage(QQuickWindow* o, const QImage& x1) const { return o->createTextureFromImage(x1); }
    Q_INVOKABLE qreal MeffectiveDevicePixelRatio(QQuickWindow* o) const { return o->effectiveDevicePixelRatio(); }
    Q_INVOKABLE QImage MgrabWindow(QQuickWindow* o) { return o->grabWindow(); }
    Q_INVOKABLE QQmlIncubationController* MincubationController(QQuickWindow* o) const { return o->incubationController(); }
    Q_INVOKABLE bool MisPersistentOpenGLContext(QQuickWindow* o) const { return o->isPersistentOpenGLContext(); }
    Q_INVOKABLE bool MisPersistentSceneGraph(QQuickWindow* o) const { return o->isPersistentSceneGraph(); }
    Q_INVOKABLE bool MisSceneGraphInitialized(QQuickWindow* o) const { return o->isSceneGraphInitialized(); }
    Q_INVOKABLE QQuickItem* MmouseGrabberItem(QQuickWindow* o) const { return o->mouseGrabberItem(); }
    Q_INVOKABLE QOpenGLContext* MopenglContext(QQuickWindow* o) const { return o->openglContext(); }
    Q_INVOKABLE QOpenGLFramebufferObject* MrenderTarget(QQuickWindow* o) const { return o->renderTarget(); }
    Q_INVOKABLE uint MrenderTargetId(QQuickWindow* o) const { return o->renderTargetId(); }
    Q_INVOKABLE QSize MrenderTargetSize(QQuickWindow* o) const { return o->renderTargetSize(); }
    Q_INVOKABLE void MresetOpenGLState(QQuickWindow* o) { o->resetOpenGLState(); }
    Q_INVOKABLE void MscheduleRenderJob(QQuickWindow* o, QRunnable* x1, QQuickWindow::RenderStage x2) { o->scheduleRenderJob(x1, x2); }
    Q_INVOKABLE bool MsendEvent(QQuickWindow* o, QQuickItem* x1, QEvent* x2) { return o->sendEvent(x1, x2); }
    Q_INVOKABLE void MsetClearBeforeRendering(QQuickWindow* o, bool x1) { o->setClearBeforeRendering(x1); }
    Q_INVOKABLE void MsetColor(QQuickWindow* o, const QColor& x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetPersistentOpenGLContext(QQuickWindow* o, bool x1) { o->setPersistentOpenGLContext(x1); }
    Q_INVOKABLE void MsetPersistentSceneGraph(QQuickWindow* o, bool x1) { o->setPersistentSceneGraph(x1); }
    Q_INVOKABLE void MsetRenderTarget(QQuickWindow* o, QOpenGLFramebufferObject* x1) { o->setRenderTarget(x1); }
    Q_INVOKABLE void MsetRenderTarget(QQuickWindow* o, uint x1, const QSize& x2) { o->setRenderTarget(x1, x2); }
    Q_INVOKABLE bool Mevent(QQuickWindow* o, QEvent* x1) { return ((LQuickWindow*)o)->event(x1); }
    Q_INVOKABLE void MexposeEvent(QQuickWindow* o, QExposeEvent* x1) { ((LQuickWindow*)o)->exposeEvent(x1); }
    Q_INVOKABLE void MfocusInEvent(QQuickWindow* o, QFocusEvent* x1) { ((LQuickWindow*)o)->focusInEvent(x1); }
    Q_INVOKABLE void MfocusOutEvent(QQuickWindow* o, QFocusEvent* x1) { ((LQuickWindow*)o)->focusOutEvent(x1); }
    Q_INVOKABLE void MhideEvent(QQuickWindow* o, QHideEvent* x1) { ((LQuickWindow*)o)->hideEvent(x1); }
    Q_INVOKABLE void MkeyPressEvent(QQuickWindow* o, QKeyEvent* x1) { ((LQuickWindow*)o)->keyPressEvent(x1); }
    Q_INVOKABLE void MkeyReleaseEvent(QQuickWindow* o, QKeyEvent* x1) { ((LQuickWindow*)o)->keyReleaseEvent(x1); }
    Q_INVOKABLE void MmouseDoubleClickEvent(QQuickWindow* o, QMouseEvent* x1) { ((LQuickWindow*)o)->mouseDoubleClickEvent(x1); }
    Q_INVOKABLE void MmouseMoveEvent(QQuickWindow* o, QMouseEvent* x1) { ((LQuickWindow*)o)->mouseMoveEvent(x1); }
    Q_INVOKABLE void MmousePressEvent(QQuickWindow* o, QMouseEvent* x1) { ((LQuickWindow*)o)->mousePressEvent(x1); }
    Q_INVOKABLE void MmouseReleaseEvent(QQuickWindow* o, QMouseEvent* x1) { ((LQuickWindow*)o)->mouseReleaseEvent(x1); }
    Q_INVOKABLE void MresizeEvent(QQuickWindow* o, QResizeEvent* x1) { ((LQuickWindow*)o)->resizeEvent(x1); }
    Q_INVOKABLE void MshowEvent(QQuickWindow* o, QShowEvent* x1) { ((LQuickWindow*)o)->showEvent(x1); }
    Q_INVOKABLE void MwheelEvent(QQuickWindow* o, QWheelEvent* x1) { ((LQuickWindow*)o)->wheelEvent(x1); }
    Q_INVOKABLE bool ShasDefaultAlphaBuffer() { return QQuickWindow::hasDefaultAlphaBuffer(); }
    Q_INVOKABLE void SsetDefaultAlphaBuffer(bool x1) { QQuickWindow::setDefaultAlphaBuffer(x1); }
};

class Q191 : public Q193 { // QSGDynamicTexture
    Q_OBJECT
public:
    Q_INVOKABLE bool MupdateTexture(QSGDynamicTexture* o) { return o->updateTexture(); }
};

class Q183 : public Q185 { // QQuickView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWindow* x1 = 0) { return new LQuickView(u, x1); }
    Q_INVOKABLE void* C(uint u, QQmlEngine* x1, QWindow* x2) { return new LQuickView(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1, QWindow* x2 = 0) { return new LQuickView(u, x1, x2); }
    Q_INVOKABLE QQmlEngine* Mengine(QQuickView* o) const { return o->engine(); }
    Q_INVOKABLE QList<QQmlError> Merrors(QQuickView* o) const { return o->errors(); }
    Q_INVOKABLE QSize MinitialSize(QQuickView* o) const { return o->initialSize(); }
    Q_INVOKABLE int MresizeMode(QQuickView* o) const { return o->resizeMode(); }
    Q_INVOKABLE QQmlContext* MrootContext(QQuickView* o) const { return o->rootContext(); }
    Q_INVOKABLE QQuickItem* MrootObject(QQuickView* o) const { return o->rootObject(); }
    Q_INVOKABLE void MsetResizeMode(QQuickView* o, QQuickView::ResizeMode x1) { o->setResizeMode(x1); }
    Q_INVOKABLE QUrl Msource(QQuickView* o) const { return o->source(); }
    Q_INVOKABLE int Mstatus(QQuickView* o) const { return o->status(); }
    Q_INVOKABLE void MkeyPressEvent(QQuickView* o, QKeyEvent* x1) { ((LQuickView*)o)->keyPressEvent(x1); }
    Q_INVOKABLE void MkeyReleaseEvent(QQuickView* o, QKeyEvent* x1) { ((LQuickView*)o)->keyReleaseEvent(x1); }
    Q_INVOKABLE void MmouseMoveEvent(QQuickView* o, QMouseEvent* x1) { ((LQuickView*)o)->mouseMoveEvent(x1); }
    Q_INVOKABLE void MmousePressEvent(QQuickView* o, QMouseEvent* x1) { ((LQuickView*)o)->mousePressEvent(x1); }
    Q_INVOKABLE void MmouseReleaseEvent(QQuickView* o, QMouseEvent* x1) { ((LQuickView*)o)->mouseReleaseEvent(x1); }
};

QT_END_NAMESPACE

#endif
