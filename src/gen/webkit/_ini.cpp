// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsWebView::overrideIds = NumList() << 23 << 236 << 224 << 225 << 242 << 256 << 227 << 228 << 229 << 230 << 231 << 13 << 34 << 14 << 234 << 235 << 36 << 15 << 16 << 237 << 238 << 239 << 240 << 255 << 244;
NumList LWebHistoryInterface::overrideIds = NumList() << 377 << 378;
NumList LWebInspector::overrideIds = NumList() << 25 << 27 << 35 << 40 << 41;
NumList LWebPage::overrideIds = NumList() << 379 << 380 << 381 << 382 << 383 << 384 << 385 << 386 << 387 << 388 << 389 << 390 << 391;
NumList LWebPluginFactory::overrideIds = NumList() << 392 << 393 << 394;
NumList LWebView::overrideIds = NumList() << 395 << 23 << 25 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 43;
NumList LWebDatabase::overrideIds = NumList();
NumList LWebElement::overrideIds = NumList();
NumList LWebElementCollection::overrideIds = NumList();
NumList LWebHistoryItem::overrideIds = NumList();
NumList LWebHitTestResult::overrideIds = NumList();
NumList LWebSecurityOrigin::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[76] = new Q77;
    LObjects::Q[211] = new Q212;
    LObjects::Q[212] = new Q213;
    LObjects::Q[213] = new Q214;
    LObjects::Q[214] = new Q215;
    LObjects::Q[215] = new Q216;
    LObjects::Q[216] = new Q217;
    LObjects::N[191] = new N192;
    LObjects::N[192] = new N193;
    LObjects::N[193] = new N194;
    LObjects::N[194] = new N195;
    LObjects::N[195] = new N196;
    LObjects::N[196] = new N197;
    LObjects::N[197] = new N198;
    LObjects::N[198] = new N199; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 77: m = &QGraphicsWebView::staticMetaObject; break;
        case 212: m = &QWebFrame::staticMetaObject; break;
        case 213: m = &QWebHistoryInterface::staticMetaObject; break;
        case 214: m = &QWebInspector::staticMetaObject; break;
        case 215: m = &QWebPage::staticMetaObject; break;
        case 216: m = &QWebPluginFactory::staticMetaObject; break;
        case 217: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 192: if(gc) delete (QWebDatabase*)p; else delete (LWebDatabase*)p; break;
        case 193: if(gc) delete (QWebElement*)p; else delete (LWebElement*)p; break;
        case 194: if(gc) delete (QWebElementCollection*)p; else delete (LWebElementCollection*)p; break;
        case 196: if(gc) delete (QWebHistoryItem*)p; else delete (LWebHistoryItem*)p; break;
        case 197: if(gc) delete (QWebHitTestResult*)p; else delete (LWebHitTestResult*)p; break;
        case 198: if(gc) delete (QWebSecurityOrigin*)p; else delete (LWebSecurityOrigin*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 77: ids = &LGraphicsWebView::overrideIds; break;
            case 213: ids = &LWebHistoryInterface::overrideIds; break;
            case 214: ids = &LWebInspector::overrideIds; break;
            case 215: ids = &LWebPage::overrideIds; break;
            case 216: ids = &LWebPluginFactory::overrideIds; break;
            case 217: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 192: ids = &LWebDatabase::overrideIds; break;
            case 193: ids = &LWebElement::overrideIds; break;
            case 194: ids = &LWebElementCollection::overrideIds; break;
            case 196: ids = &LWebHistoryItem::overrideIds; break;
            case 197: ids = &LWebHitTestResult::overrideIds; break;
            case 198: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
