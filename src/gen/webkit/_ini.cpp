// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsWebView::overrideIds = NumList() << 23 << 244 << 232 << 233 << 250 << 264 << 235 << 236 << 237 << 238 << 239 << 13 << 34 << 14 << 242 << 243 << 36 << 15 << 16 << 245 << 246 << 247 << 248 << 263 << 252;
NumList LWebHistoryInterface::overrideIds = NumList() << 432 << 433;
NumList LWebInspector::overrideIds = NumList() << 25 << 27 << 35 << 40 << 41;
NumList LWebPage::overrideIds = NumList() << 434 << 435 << 436 << 437 << 438 << 439 << 440 << 441 << 442 << 443 << 444 << 445 << 446;
NumList LWebPluginFactory::overrideIds = NumList() << 447 << 448 << 449;
NumList LWebView::overrideIds = NumList() << 450 << 23 << 25 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 43;
NumList LWebDatabase::overrideIds = NumList();
NumList LWebElement::overrideIds = NumList();
NumList LWebElementCollection::overrideIds = NumList();
NumList LWebHistoryItem::overrideIds = NumList();
NumList LWebHitTestResult::overrideIds = NumList();
NumList LWebSecurityOrigin::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[87] = new Q88;
    LObjects::Q[264] = new Q265;
    LObjects::Q[265] = new Q266;
    LObjects::Q[266] = new Q267;
    LObjects::Q[267] = new Q268;
    LObjects::Q[268] = new Q269;
    LObjects::Q[269] = new Q270;
    LObjects::N[263] = new N264;
    LObjects::N[264] = new N265;
    LObjects::N[265] = new N266;
    LObjects::N[266] = new N267;
    LObjects::N[267] = new N268;
    LObjects::N[268] = new N269;
    LObjects::N[269] = new N270;
    LObjects::N[270] = new N271; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 88: m = &QGraphicsWebView::staticMetaObject; break;
        case 265: m = &QWebFrame::staticMetaObject; break;
        case 266: m = &QWebHistoryInterface::staticMetaObject; break;
        case 267: m = &QWebInspector::staticMetaObject; break;
        case 268: m = &QWebPage::staticMetaObject; break;
        case 269: m = &QWebPluginFactory::staticMetaObject; break;
        case 270: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 264: if(gc) delete (QWebDatabase*)p; else delete (LWebDatabase*)p; break;
        case 265: if(gc) delete (QWebElement*)p; else delete (LWebElement*)p; break;
        case 266: if(gc) delete (QWebElementCollection*)p; else delete (LWebElementCollection*)p; break;
        case 268: if(gc) delete (QWebHistoryItem*)p; else delete (LWebHistoryItem*)p; break;
        case 269: if(gc) delete (QWebHitTestResult*)p; else delete (LWebHitTestResult*)p; break;
        case 270: if(gc) delete (QWebSecurityOrigin*)p; else delete (LWebSecurityOrigin*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 88: ids = &LGraphicsWebView::overrideIds; break;
            case 266: ids = &LWebHistoryInterface::overrideIds; break;
            case 267: ids = &LWebInspector::overrideIds; break;
            case 268: ids = &LWebPage::overrideIds; break;
            case 269: ids = &LWebPluginFactory::overrideIds; break;
            case 270: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 264: ids = &LWebDatabase::overrideIds; break;
            case 265: ids = &LWebElement::overrideIds; break;
            case 266: ids = &LWebElementCollection::overrideIds; break;
            case 268: ids = &LWebHistoryItem::overrideIds; break;
            case 269: ids = &LWebHitTestResult::overrideIds; break;
            case 270: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
