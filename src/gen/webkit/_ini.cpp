// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QWebElement, qwebelement)
TO_QT_TYPE_PTR (QWebElementCollection, qwebelementcollection)
TO_QT_TYPE_PTR (QWebHitTestResult, qwebhittestresult)

TO_CL_LIST_VAL (QWebElement, qwebelement)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

NumList LGraphicsWebView::overrideIds = NumList() << 23 << 244 << 232 << 233 << 250 << 264 << 235 << 236 << 237 << 238 << 239 << 13 << 34 << 14 << 242 << 243 << 36 << 15 << 16 << 245 << 246 << 247 << 248 << 263 << 252;
NumList LWebHistoryInterface::overrideIds = NumList() << 444 << 445;
NumList LWebInspector::overrideIds = NumList() << 25 << 27 << 35 << 40 << 41;
NumList LWebPage::overrideIds = NumList() << 446 << 447 << 448 << 432 << 449 << 450 << 451 << 436 << 452 << 453 << 454 << 455 << 456;
NumList LWebPluginFactory::overrideIds = NumList() << 457 << 458 << 459;
NumList LWebView::overrideIds = NumList() << 460 << 23 << 25 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 43;
NumList LWebDatabase::overrideIds = NumList();
NumList LWebElement::overrideIds = NumList();
NumList LWebElementCollection::overrideIds = NumList();
NumList LWebHitTestResult::overrideIds = NumList();
NumList LWebSecurityOrigin::overrideIds = NumList();

void webkit_ini() {
    static bool _ = false; if(_) return 0; _ = true;
    ModuleWebkit* module = new ModuleWebkit;
    module->ini2();
    LObjects::Q[87] = new Q88;
    LObjects::Q[272] = new Q273;
    LObjects::Q[273] = new Q274;
    LObjects::Q[274] = new Q275;
    LObjects::Q[275] = new Q276;
    LObjects::Q[276] = new Q277;
    LObjects::Q[277] = new Q278;
    LObjects::N[263] = new N264;
    LObjects::N[264] = new N265;
    LObjects::N[265] = new N266;
    LObjects::N[272] = new N273;
    LObjects::N[273] = new N274;
    LObjects::N[274] = new N275;
    return module; }

ModuleWebkit::ModuleWebkit() {
    webkit_ini(); }

void ModuleWebkit::ini2() {
    // note: QWebHistoryItem can't be registered as QMetaType, lacking a public default constructor
    META_TYPE_(LObjects::T_QWebElement,           QWebElement)
    META_TYPE_(LObjects::T_QList_QWebElement,     QList<QWebElement>)
    META_TYPE_(LObjects::T_QWebElementCollection, QWebElementCollection)
    META_TYPE_(LObjects::T_QWebHitTestResult,     QWebHitTestResult) }

void* ModuleWebkit::toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QWebElement == n)                { p = new QWebElement(*toQWebElementPointer(l_arg)); }
    else if(LObjects::T_QWebElementCollection == n) { p = new QWebElementCollection(*toQWebElementCollectionPointer(l_arg)); }
    else if(LObjects::T_QWebHitTestResult == n)     { p = new QWebHitTestResult(*toQWebHitTestResultPointer(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object ModuleWebkit::to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QWebElement == n)                { l_ret = from_qwebelement(*(QWebElement*)p); }
    else if(LObjects::T_QList_QWebElement == n)     { l_ret = from_qwebelementlist(*(QList<QWebElement>*)p); }
    else if(LObjects::T_QWebElementCollection == n) { l_ret = from_qwebelementcollection(*(QWebElementCollection*)p); }
    else if(LObjects::T_QWebHitTestResult == n)     { l_ret = from_qwebhittestresult(*(QWebHitTestResult*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

const QMetaObject* ModuleWebkit::staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 88: m = &QGraphicsWebView::staticMetaObject; break;
        case 273: m = &QWebFrame::staticMetaObject; break;
        case 274: m = &QWebHistoryInterface::staticMetaObject; break;
        case 275: m = &QWebInspector::staticMetaObject; break;
        case 276: m = &QWebPage::staticMetaObject; break;
        case 277: m = &QWebPluginFactory::staticMetaObject; break;
        case 278: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 264: if(gc) delete (QWebDatabase*)p; else delete (LWebDatabase*)p; break;
        case 265: if(gc) delete (QWebElement*)p; else delete (LWebElement*)p; break;
        case 266: if(gc) delete (QWebElementCollection*)p; else delete (LWebElementCollection*)p; break;
        case 273: if(gc) delete (QWebHitTestResult*)p; else delete (LWebHitTestResult*)p; break;
        case 274: if(gc) delete (QWebSecurityOrigin*)p; else delete (LWebSecurityOrigin*)p; break; }}

NumList* ModuleWebkit::overrideIds(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 88: ids = &LGraphicsWebView::overrideIds; break;
            case 274: ids = &LWebHistoryInterface::overrideIds; break;
            case 275: ids = &LWebInspector::overrideIds; break;
            case 276: ids = &LWebPage::overrideIds; break;
            case 277: ids = &LWebPluginFactory::overrideIds; break;
            case 278: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 264: ids = &LWebDatabase::overrideIds; break;
            case 265: ids = &LWebElement::overrideIds; break;
            case 266: ids = &LWebElementCollection::overrideIds; break;
            case 273: ids = &LWebHitTestResult::overrideIds; break;
            case 274: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
