// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"
#include "qml_lisp.h"

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QJSValue, qjsvalue)
TO_QT_TYPE_PTR (QQmlProperty, qqmlproperty)
TO_QT_TYPE_PTR (QQmlScriptString, qqmlscriptstring)

FROM_QT_TYPE_ONLY (QQmlError, qqmlerror)

TO_CL_LIST_VAL (QQmlError, qqmlerror)

TO_CL_LIST_PTR (QQuickItem, qquickitem)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

NumList LJSEngine::overrideIds = NumList();
NumList LQmlApplicationEngine::overrideIds = NumList();
NumList LQmlComponent::overrideIds = NumList() << 323 << 324 << 325;
NumList LQmlContext::overrideIds = NumList();
NumList LQmlEngine::overrideIds = NumList();
NumList LQmlExpression::overrideIds = NumList();
NumList LQmlExtensionPlugin::overrideIds = NumList() << 326 << 327;
NumList LQmlFileSelector::overrideIds = NumList();
NumList LQmlPropertyMap::overrideIds = NumList() << 328;
NumList LQuickItem::overrideIds = NumList() << 268 << 23 << 329 << 330 << 331 << 29 << 30 << 31 << 32 << 13 << 14 << 332 << 333 << 334 << 335 << 36 << 336 << 15 << 16 << 38 << 17 << 18 << 19 << 337 << 338 << 311 << 339 << 340 << 341 << 43;
NumList LQuickItemGrabResult::overrideIds = NumList();
NumList LQuickPaintedItem::overrideIds = NumList() << 342 << 329 << 330 << 338 << 340;
NumList LQuickRenderControl::overrideIds = NumList();
NumList LQuickTextDocument::overrideIds = NumList();
NumList LQuickTextureFactory::overrideIds = NumList() << 343 << 344 << 345 << 346;
NumList LQuickView::overrideIds = NumList();
NumList LQuickWidget::overrideIds = NumList() << 29 << 30 << 31 << 32 << 13 << 14 << 35 << 15 << 16 << 38 << 17 << 18 << 19 << 41 << 43;
NumList LQuickWindow::overrideIds = NumList();
NumList LSGAbstractRenderer::overrideIds = NumList() << 347;
NumList LSGDynamicTexture::overrideIds = NumList() << 348;
NumList LSGEngine::overrideIds = NumList();
NumList LSGTexture::overrideIds = NumList() << 349 << 350 << 351 << 352 << 353 << 354 << 355 << 346;
NumList LSGTextureProvider::overrideIds = NumList() << 356;
NumList LJSValue::overrideIds = NumList();
NumList LJSValueIterator::overrideIds = NumList();
NumList LQmlAbstractUrlInterceptor::overrideIds = NumList() << 532;
NumList LQmlError::overrideIds = NumList();
NumList LQmlImageProviderBase::overrideIds = NumList() << 533 << 534;
NumList LQmlIncubationController::overrideIds = NumList() << 535;
NumList LQmlIncubator::overrideIds = NumList() << 536 << 537;
NumList LQmlNetworkAccessManagerFactory::overrideIds = NumList() << 538;
NumList LQmlParserStatus::overrideIds = NumList() << 539 << 540;
NumList LQmlProperty::overrideIds = NumList();
NumList LQmlPropertyValueSource::overrideIds = NumList() << 541;
NumList LQmlScriptString::overrideIds = NumList();
NumList LQuickImageProvider::overrideIds = NumList() << 542 << 543 << 544;
NumList LSGBasicGeometryNode::overrideIds = NumList();
NumList LSGClipNode::overrideIds = NumList();
NumList LSGFlatColorMaterial::overrideIds = NumList();
NumList LSGGeometry::overrideIds = NumList();
NumList LSGGeometryNode::overrideIds = NumList();
NumList LSGMaterial::overrideIds = NumList() << 548 << 549 << 234;
NumList LSGMaterialType::overrideIds = NumList();
NumList LSGNode::overrideIds = NumList() << 546 << 547;
NumList LSGOpacityNode::overrideIds = NumList();
NumList LSGOpaqueTextureMaterial::overrideIds = NumList();
NumList LSGSimpleRectNode::overrideIds = NumList();
NumList LSGSimpleTextureNode::overrideIds = NumList();
NumList LSGTextureMaterial::overrideIds = NumList();
NumList LSGTransformNode::overrideIds = NumList();
NumList LSGVertexColorMaterial::overrideIds = NumList();

void* quick_ini() {
    static bool _ = false; if(_) return 0; _ = true;
    ModuleQuick* module = new ModuleQuick;
    module->ini2();
    LObjects::Q[111] = new Q112;
    LObjects::Q[167] = new Q168;
    LObjects::Q[168] = new Q169;
    LObjects::Q[169] = new Q170;
    LObjects::Q[170] = new Q171;
    LObjects::Q[171] = new Q172;
    LObjects::Q[172] = new Q173;
    LObjects::Q[173] = new Q174;
    LObjects::Q[174] = new Q175;
    LObjects::Q[175] = new Q176;
    LObjects::Q[176] = new Q177;
    LObjects::Q[177] = new Q178;
    LObjects::Q[178] = new Q179;
    LObjects::Q[179] = new Q180;
    LObjects::Q[180] = new Q181;
    LObjects::Q[181] = new Q182;
    LObjects::Q[182] = new Q183;
    LObjects::Q[183] = new Q184;
    LObjects::Q[184] = new Q185;
    LObjects::Q[189] = new Q190;
    LObjects::Q[190] = new Q191;
    LObjects::Q[191] = new Q192;
    LObjects::Q[192] = new Q193;
    LObjects::Q[193] = new Q194;
    LObjects::N[103] = new N104;
    LObjects::N[104] = new N105;
    LObjects::N[153] = new N154;
    LObjects::N[154] = new N155;
    LObjects::N[155] = new N156;
    LObjects::N[156] = new N157;
    LObjects::N[157] = new N158;
    LObjects::N[158] = new N159;
    LObjects::N[159] = new N160;
    LObjects::N[160] = new N161;
    LObjects::N[161] = new N162;
    LObjects::N[162] = new N163;
    LObjects::N[164] = new N165;
    LObjects::N[172] = new N173;
    LObjects::N[173] = new N174;
    LObjects::N[174] = new N175;
    LObjects::N[175] = new N176;
    LObjects::N[176] = new N177;
    LObjects::N[177] = new N178;
    LObjects::N[178] = new N179;
    LObjects::N[179] = new N180;
    LObjects::N[180] = new N181;
    LObjects::N[181] = new N182;
    LObjects::N[182] = new N183;
    LObjects::N[183] = new N184;
    LObjects::N[184] = new N185;
    LObjects::N[185] = new N186;
    LObjects::N[186] = new N187;
    LObjects::N[187] = new N188;
    return module; }

ModuleQuick::ModuleQuick() {
    quick_ini(); }

void ModuleQuick::ini2() {
    META_TYPE_(LObjects::T_QJSValue, QJSValue)
    META_TYPE_(LObjects::T_QQmlProperty, QQmlProperty)
    META_TYPE_(LObjects::T_QQmlScriptString, QQmlScriptString)
    META_TYPE_(LObjects::T_QList_QQmlError, QList<QQmlError>)
    META_TYPE_(LObjects::T_QList_QQuickItem, QList<QQuickItem*>)
    iniQml(); }

void* ModuleQuick::toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QJSValue == n)              { p = new QJSValue(*toQJSValuePointer(l_arg)); }
    else if(LObjects::T_QQmlProperty == n)     { p = new QQmlProperty(*toQQmlPropertyPointer(l_arg)); }
    else if(LObjects::T_QQmlScriptString == n) { p = new QQmlScriptString(*toQQmlScriptStringPointer(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object ModuleQuick::to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QJSValue == n)              { l_ret = from_qjsvalue(*(QJSValue*)p); }
    else if(LObjects::T_QQmlProperty == n)     { l_ret = from_qqmlproperty(*(QQmlProperty*)p); }
    else if(LObjects::T_QQmlScriptString == n) { l_ret = from_qqmlscriptstring(*(QQmlScriptString*)p); }
    else if(LObjects::T_QList_QQmlError == n)  { l_ret = from_qqmlerrorlist(*(QList<QQmlError>*)p); }
    else if(LObjects::T_QList_QQuickItem == n) { l_ret = from_qquickitemlist(*(QList<QQuickItem*>*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

const QMetaObject* ModuleQuick::staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 112: m = &QJSEngine::staticMetaObject; break;
        case 168: m = &QQmlApplicationEngine::staticMetaObject; break;
        case 169: m = &QQmlComponent::staticMetaObject; break;
        case 170: m = &QQmlContext::staticMetaObject; break;
        case 171: m = &QQmlEngine::staticMetaObject; break;
        case 172: m = &QQmlExpression::staticMetaObject; break;
        case 173: m = &QQmlExtensionPlugin::staticMetaObject; break;
        case 174: m = &QQmlFileSelector::staticMetaObject; break;
        case 175: m = &QQmlPropertyMap::staticMetaObject; break;
        case 176: m = &QQuickFramebufferObject::staticMetaObject; break;
        case 177: m = &QQuickItem::staticMetaObject; break;
        case 178: m = &QQuickItemGrabResult::staticMetaObject; break;
        case 179: m = &QQuickPaintedItem::staticMetaObject; break;
        case 180: m = &QQuickRenderControl::staticMetaObject; break;
        case 181: m = &QQuickTextDocument::staticMetaObject; break;
        case 182: m = &QQuickTextureFactory::staticMetaObject; break;
        case 183: m = &QQuickView::staticMetaObject; break;
        case 184: m = &QQuickWidget::staticMetaObject; break;
        case 185: m = &QQuickWindow::staticMetaObject; break;
        case 190: m = &QSGAbstractRenderer::staticMetaObject; break;
        case 191: m = &QSGDynamicTexture::staticMetaObject; break;
        case 192: m = &QSGEngine::staticMetaObject; break;
        case 193: m = &QSGTexture::staticMetaObject; break;
        case 194: m = &QSGTextureProvider::staticMetaObject; break; }
    return m; }

void ModuleQuick::deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 104: if(gc) delete (QJSValue*)p; else delete (LJSValue*)p; break;
        case 105: if(gc) delete (QJSValueIterator*)p; else delete (LJSValueIterator*)p; break;
        case 154: if(gc) delete (QQmlAbstractUrlInterceptor*)p; else delete (LQmlAbstractUrlInterceptor*)p; break;
        case 155: if(gc) delete (QQmlError*)p; else delete (LQmlError*)p; break;
        case 156: if(gc) delete (QQmlImageProviderBase*)p; else delete (LQmlImageProviderBase*)p; break;
        case 157: if(gc) delete (QQmlIncubationController*)p; else delete (LQmlIncubationController*)p; break;
        case 158: if(gc) delete (QQmlIncubator*)p; else delete (LQmlIncubator*)p; break;
        case 159: if(gc) delete (QQmlNetworkAccessManagerFactory*)p; else delete (LQmlNetworkAccessManagerFactory*)p; break;
        case 160: if(gc) delete (QQmlParserStatus*)p; else delete (LQmlParserStatus*)p; break;
        case 161: if(gc) delete (QQmlProperty*)p; else delete (LQmlProperty*)p; break;
        case 162: if(gc) delete (QQmlPropertyValueSource*)p; else delete (LQmlPropertyValueSource*)p; break;
        case 163: if(gc) delete (QQmlScriptString*)p; else delete (LQmlScriptString*)p; break;
        case 165: if(gc) delete (QQuickImageProvider*)p; else delete (LQuickImageProvider*)p; break;
        case 173: if(gc) delete (QSGBasicGeometryNode*)p; else delete (LSGBasicGeometryNode*)p; break;
        case 174: if(gc) delete (QSGClipNode*)p; else delete (LSGClipNode*)p; break;
        case 175: if(gc) delete (QSGFlatColorMaterial*)p; else delete (LSGFlatColorMaterial*)p; break;
        case 176: if(gc) delete (QSGGeometry*)p; else delete (LSGGeometry*)p; break;
        case 177: if(gc) delete (QSGGeometryNode*)p; else delete (LSGGeometryNode*)p; break;
        case 178: if(gc) delete (QSGMaterial*)p; else delete (LSGMaterial*)p; break;
        case 180: if(gc) delete (QSGMaterialType*)p; else delete (LSGMaterialType*)p; break;
        case 181: if(gc) delete (QSGNode*)p; else delete (LSGNode*)p; break;
        case 182: if(gc) delete (QSGOpacityNode*)p; else delete (LSGOpacityNode*)p; break;
        case 183: if(gc) delete (QSGOpaqueTextureMaterial*)p; else delete (LSGOpaqueTextureMaterial*)p; break;
        case 184: if(gc) delete (QSGSimpleRectNode*)p; else delete (LSGSimpleRectNode*)p; break;
        case 185: if(gc) delete (QSGSimpleTextureNode*)p; else delete (LSGSimpleTextureNode*)p; break;
        case 186: if(gc) delete (QSGTextureMaterial*)p; else delete (LSGTextureMaterial*)p; break;
        case 187: if(gc) delete (QSGTransformNode*)p; else delete (LSGTransformNode*)p; break;
        case 188: if(gc) delete (QSGVertexColorMaterial*)p; else delete (LSGVertexColorMaterial*)p; break; }}

NumList* ModuleQuick::overrideIds(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 112: ids = &LJSEngine::overrideIds; break;
            case 168: ids = &LQmlApplicationEngine::overrideIds; break;
            case 169: ids = &LQmlComponent::overrideIds; break;
            case 170: ids = &LQmlContext::overrideIds; break;
            case 171: ids = &LQmlEngine::overrideIds; break;
            case 172: ids = &LQmlExpression::overrideIds; break;
            case 173: ids = &LQmlExtensionPlugin::overrideIds; break;
            case 174: ids = &LQmlFileSelector::overrideIds; break;
            case 175: ids = &LQmlPropertyMap::overrideIds; break;
            case 177: ids = &LQuickItem::overrideIds; break;
            case 178: ids = &LQuickItemGrabResult::overrideIds; break;
            case 179: ids = &LQuickPaintedItem::overrideIds; break;
            case 180: ids = &LQuickRenderControl::overrideIds; break;
            case 181: ids = &LQuickTextDocument::overrideIds; break;
            case 182: ids = &LQuickTextureFactory::overrideIds; break;
            case 183: ids = &LQuickView::overrideIds; break;
            case 184: ids = &LQuickWidget::overrideIds; break;
            case 185: ids = &LQuickWindow::overrideIds; break;
            case 190: ids = &LSGAbstractRenderer::overrideIds; break;
            case 191: ids = &LSGDynamicTexture::overrideIds; break;
            case 192: ids = &LSGEngine::overrideIds; break;
            case 193: ids = &LSGTexture::overrideIds; break;
            case 194: ids = &LSGTextureProvider::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 104: ids = &LJSValue::overrideIds; break;
            case 105: ids = &LJSValueIterator::overrideIds; break;
            case 154: ids = &LQmlAbstractUrlInterceptor::overrideIds; break;
            case 155: ids = &LQmlError::overrideIds; break;
            case 156: ids = &LQmlImageProviderBase::overrideIds; break;
            case 157: ids = &LQmlIncubationController::overrideIds; break;
            case 158: ids = &LQmlIncubator::overrideIds; break;
            case 159: ids = &LQmlNetworkAccessManagerFactory::overrideIds; break;
            case 160: ids = &LQmlParserStatus::overrideIds; break;
            case 161: ids = &LQmlProperty::overrideIds; break;
            case 162: ids = &LQmlPropertyValueSource::overrideIds; break;
            case 163: ids = &LQmlScriptString::overrideIds; break;
            case 165: ids = &LQuickImageProvider::overrideIds; break;
            case 173: ids = &LSGBasicGeometryNode::overrideIds; break;
            case 174: ids = &LSGClipNode::overrideIds; break;
            case 175: ids = &LSGFlatColorMaterial::overrideIds; break;
            case 176: ids = &LSGGeometry::overrideIds; break;
            case 177: ids = &LSGGeometryNode::overrideIds; break;
            case 178: ids = &LSGMaterial::overrideIds; break;
            case 180: ids = &LSGMaterialType::overrideIds; break;
            case 181: ids = &LSGNode::overrideIds; break;
            case 182: ids = &LSGOpacityNode::overrideIds; break;
            case 183: ids = &LSGOpaqueTextureMaterial::overrideIds; break;
            case 184: ids = &LSGSimpleRectNode::overrideIds; break;
            case 185: ids = &LSGSimpleTextureNode::overrideIds; break;
            case 186: ids = &LSGTextureMaterial::overrideIds; break;
            case 187: ids = &LSGTransformNode::overrideIds; break;
            case 188: ids = &LSGVertexColorMaterial::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
