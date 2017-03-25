// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LWebEngineCookieStore::overrideIds = NumList();
NumList LWebEngineDownloadItem::overrideIds = NumList();
NumList LWebEnginePage::overrideIds = NumList() << 432 << 433 << 434 << 435 << 436 << 437 << 438 << 439 << 440;
NumList LWebEngineProfile::overrideIds = NumList();
NumList LWebEngineUrlRequestInterceptor::overrideIds = NumList() << 441;
NumList LWebEngineUrlRequestJob::overrideIds = NumList();
NumList LWebEngineUrlSchemeHandler::overrideIds = NumList() << 442;
NumList LWebEngineView::overrideIds = NumList() << 443 << 25 << 28 << 29 << 30 << 31 << 32 << 35 << 41;
NumList LWebEngineCertificateError::overrideIds = NumList();
NumList LWebEngineFullScreenRequest::overrideIds = NumList();
NumList LWebEngineScript::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[264] = new Q265;
    LObjects::Q[265] = new Q266;
    LObjects::Q[266] = new Q267;
    LObjects::Q[267] = new Q268;
    LObjects::Q[268] = new Q269;
    LObjects::Q[269] = new Q270;
    LObjects::Q[270] = new Q271;
    LObjects::Q[271] = new Q272;
    LObjects::N[266] = new N267;
    LObjects::N[267] = new N268;
    LObjects::N[268] = new N269;
    LObjects::N[269] = new N270;
    LObjects::N[270] = new N271;
    LObjects::N[271] = new N272; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case -268: m = &QWebEngineFullScreenRequest::staticMetaObject; break;
        case 265: m = &QWebEngineCookieStore::staticMetaObject; break;
        case 266: m = &QWebEngineDownloadItem::staticMetaObject; break;
        case 267: m = &QWebEnginePage::staticMetaObject; break;
        case 268: m = &QWebEngineProfile::staticMetaObject; break;
        case 269: m = &QWebEngineUrlRequestInterceptor::staticMetaObject; break;
        case 270: m = &QWebEngineUrlRequestJob::staticMetaObject; break;
        case 271: m = &QWebEngineUrlSchemeHandler::staticMetaObject; break;
        case 272: m = &QWebEngineView::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 267: if(gc) delete (QWebEngineCertificateError*)p; else delete (LWebEngineCertificateError*)p; break;
        case 268: if(gc) delete (QWebEngineFullScreenRequest*)p; else delete (LWebEngineFullScreenRequest*)p; break;
        case 269: if(gc) delete (QWebEngineScript*)p; else delete (LWebEngineScript*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 265: ids = &LWebEngineCookieStore::overrideIds; break;
            case 266: ids = &LWebEngineDownloadItem::overrideIds; break;
            case 267: ids = &LWebEnginePage::overrideIds; break;
            case 268: ids = &LWebEngineProfile::overrideIds; break;
            case 269: ids = &LWebEngineUrlRequestInterceptor::overrideIds; break;
            case 270: ids = &LWebEngineUrlRequestJob::overrideIds; break;
            case 271: ids = &LWebEngineUrlSchemeHandler::overrideIds; break;
            case 272: ids = &LWebEngineView::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 267: ids = &LWebEngineCertificateError::overrideIds; break;
            case 268: ids = &LWebEngineFullScreenRequest::overrideIds; break;
            case 269: ids = &LWebEngineScript::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
