// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsWebView::overrideIds = NumList() << 23 << 243 << 231 << 232 << 249 << 263 << 234 << 235 << 236 << 237 << 238 << 13 << 34 << 14 << 241 << 242 << 36 << 15 << 16 << 244 << 245 << 246 << 247 << 262 << 251;
NumList LWebHistoryInterface::overrideIds = NumList() << 397 << 398;
NumList LWebInspector::overrideIds = NumList() << 25 << 27 << 35 << 40 << 41;
NumList LWebPage::overrideIds = NumList() << 399 << 400 << 401 << 402 << 403 << 404 << 405 << 406 << 407 << 408 << 409 << 410 << 411;
NumList LWebPluginFactory::overrideIds = NumList() << 412 << 413 << 414;
NumList LWebView::overrideIds = NumList() << 415 << 23 << 25 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 43;
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
    LObjects::Q[238] = new Q239;
    LObjects::Q[239] = new Q240;
    LObjects::Q[240] = new Q241;
    LObjects::Q[241] = new Q242;
    LObjects::Q[242] = new Q243;
    LObjects::Q[243] = new Q244;
    LObjects::N[231] = new N232;
    LObjects::N[232] = new N233;
    LObjects::N[233] = new N234;
    LObjects::N[234] = new N235;
    LObjects::N[235] = new N236;
    LObjects::N[236] = new N237;
    LObjects::N[237] = new N238;
    LObjects::N[238] = new N239; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 88: m = &QGraphicsWebView::staticMetaObject; break;
        case 239: m = &QWebFrame::staticMetaObject; break;
        case 240: m = &QWebHistoryInterface::staticMetaObject; break;
        case 241: m = &QWebInspector::staticMetaObject; break;
        case 242: m = &QWebPage::staticMetaObject; break;
        case 243: m = &QWebPluginFactory::staticMetaObject; break;
        case 244: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 232: if(gc) delete (QWebDatabase*)p; else delete (LWebDatabase*)p; break;
        case 233: if(gc) delete (QWebElement*)p; else delete (LWebElement*)p; break;
        case 234: if(gc) delete (QWebElementCollection*)p; else delete (LWebElementCollection*)p; break;
        case 236: if(gc) delete (QWebHistoryItem*)p; else delete (LWebHistoryItem*)p; break;
        case 237: if(gc) delete (QWebHitTestResult*)p; else delete (LWebHitTestResult*)p; break;
        case 238: if(gc) delete (QWebSecurityOrigin*)p; else delete (LWebSecurityOrigin*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 88: ids = &LGraphicsWebView::overrideIds; break;
            case 240: ids = &LWebHistoryInterface::overrideIds; break;
            case 241: ids = &LWebInspector::overrideIds; break;
            case 242: ids = &LWebPage::overrideIds; break;
            case 243: ids = &LWebPluginFactory::overrideIds; break;
            case 244: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 232: ids = &LWebDatabase::overrideIds; break;
            case 233: ids = &LWebElement::overrideIds; break;
            case 234: ids = &LWebElementCollection::overrideIds; break;
            case 236: ids = &LWebHistoryItem::overrideIds; break;
            case 237: ids = &LWebHitTestResult::overrideIds; break;
            case 238: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
