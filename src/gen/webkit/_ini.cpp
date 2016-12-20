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
    LObjects::Q[86] = new Q87;
    LObjects::Q[233] = new Q234;
    LObjects::Q[234] = new Q235;
    LObjects::Q[235] = new Q236;
    LObjects::Q[236] = new Q237;
    LObjects::Q[237] = new Q238;
    LObjects::Q[238] = new Q239;
    LObjects::N[208] = new N209;
    LObjects::N[209] = new N210;
    LObjects::N[210] = new N211;
    LObjects::N[211] = new N212;
    LObjects::N[212] = new N213;
    LObjects::N[213] = new N214;
    LObjects::N[214] = new N215;
    LObjects::N[215] = new N216; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 87: m = &QGraphicsWebView::staticMetaObject; break;
        case 234: m = &QWebFrame::staticMetaObject; break;
        case 235: m = &QWebHistoryInterface::staticMetaObject; break;
        case 236: m = &QWebInspector::staticMetaObject; break;
        case 237: m = &QWebPage::staticMetaObject; break;
        case 238: m = &QWebPluginFactory::staticMetaObject; break;
        case 239: m = &QWebView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 209: if(gc) delete (QWebDatabase*)p; else delete (LWebDatabase*)p; break;
        case 210: if(gc) delete (QWebElement*)p; else delete (LWebElement*)p; break;
        case 211: if(gc) delete (QWebElementCollection*)p; else delete (LWebElementCollection*)p; break;
        case 213: if(gc) delete (QWebHistoryItem*)p; else delete (LWebHistoryItem*)p; break;
        case 214: if(gc) delete (QWebHitTestResult*)p; else delete (LWebHitTestResult*)p; break;
        case 215: if(gc) delete (QWebSecurityOrigin*)p; else delete (LWebSecurityOrigin*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 87: ids = &LGraphicsWebView::overrideIds; break;
            case 235: ids = &LWebHistoryInterface::overrideIds; break;
            case 236: ids = &LWebInspector::overrideIds; break;
            case 237: ids = &LWebPage::overrideIds; break;
            case 238: ids = &LWebPluginFactory::overrideIds; break;
            case 239: ids = &LWebView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 209: ids = &LWebDatabase::overrideIds; break;
            case 210: ids = &LWebElement::overrideIds; break;
            case 211: ids = &LWebElementCollection::overrideIds; break;
            case 213: ids = &LWebHistoryItem::overrideIds; break;
            case 214: ids = &LWebHitTestResult::overrideIds; break;
            case 215: ids = &LWebSecurityOrigin::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
