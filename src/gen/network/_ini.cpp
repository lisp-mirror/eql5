// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LAbstractSocket::overrideIds = NumList() << 117 << 118 << 119 << 120 << 121 << 122 << 123 << 124 << 125 << 126 << 127 << 128 << 129 << 130 << 131 << 132 << 133 << 134 << 135 << 136;
NumList LLocalServer::overrideIds = NumList() << 288 << 289 << 290;
NumList LLocalSocket::overrideIds = NumList() << 127 << 128 << 129 << 130 << 131 << 137 << 132 << 133 << 134 << 136;
NumList LNetworkAccessManager::overrideIds = NumList();
NumList LNetworkCookieJar::overrideIds = NumList() << 295 << 296 << 297 << 298 << 299 << 300;
NumList LNetworkDiskCache::overrideIds = NumList() << 301 << 302 << 303 << 304 << 305;
NumList LTcpServer::overrideIds = NumList() << 288 << 289;
NumList LTcpSocket::overrideIds = NumList();
NumList LUdpSocket::overrideIds = NumList();
NumList LAuthenticator::overrideIds = NumList();
NumList LHostAddress::overrideIds = NumList();
NumList LHostInfo::overrideIds = NumList();
NumList LNetworkAddressEntry::overrideIds = NumList();
NumList LNetworkCacheMetaData::overrideIds = NumList();
NumList LNetworkCookie::overrideIds = NumList();
NumList LNetworkInterface::overrideIds = NumList();
NumList LNetworkProxy::overrideIds = NumList();
NumList LNetworkProxyFactory::overrideIds = NumList() << 445;
NumList LNetworkProxyQuery::overrideIds = NumList();
NumList LNetworkRequest::overrideIds = NumList();
NumList LSslCertificate::overrideIds = NumList();
NumList LSslCipher::overrideIds = NumList();
NumList LSslConfiguration::overrideIds = NumList();
NumList LSslError::overrideIds = NumList();
NumList LSslKey::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[6] = new Q7;
    LObjects::Q[11] = new Q12;
    LObjects::Q[108] = new Q109;
    LObjects::Q[109] = new Q110;
    LObjects::Q[119] = new Q120;
    LObjects::Q[120] = new Q121;
    LObjects::Q[121] = new Q122;
    LObjects::Q[122] = new Q123;
    LObjects::Q[182] = new Q183;
    LObjects::Q[183] = new Q184;
    LObjects::Q[201] = new Q202;
    LObjects::N[7] = new N8;
    LObjects::N[74] = new N75;
    LObjects::N[75] = new N76;
    LObjects::N[98] = new N99;
    LObjects::N[99] = new N100;
    LObjects::N[100] = new N101;
    LObjects::N[101] = new N102;
    LObjects::N[102] = new N103;
    LObjects::N[103] = new N104;
    LObjects::N[104] = new N105;
    LObjects::N[105] = new N106;
    LObjects::N[142] = new N143;
    LObjects::N[143] = new N144;
    LObjects::N[144] = new N145;
    LObjects::N[145] = new N146;
    LObjects::N[146] = new N147; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 7: m = &QAbstractNetworkCache::staticMetaObject; break;
        case 12: m = &QAbstractSocket::staticMetaObject; break;
        case 109: m = &QLocalServer::staticMetaObject; break;
        case 110: m = &QLocalSocket::staticMetaObject; break;
        case 120: m = &QNetworkAccessManager::staticMetaObject; break;
        case 121: m = &QNetworkCookieJar::staticMetaObject; break;
        case 122: m = &QNetworkDiskCache::staticMetaObject; break;
        case 123: m = &QNetworkReply::staticMetaObject; break;
        case 183: m = &QTcpServer::staticMetaObject; break;
        case 184: m = &QTcpSocket::staticMetaObject; break;
        case 202: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 8: if(gc) delete (QAuthenticator*)p; else delete (LAuthenticator*)p; break;
        case 75: if(gc) delete (QHostAddress*)p; else delete (LHostAddress*)p; break;
        case 76: if(gc) delete (QHostInfo*)p; else delete (LHostInfo*)p; break;
        case 99: if(gc) delete (QNetworkAddressEntry*)p; else delete (LNetworkAddressEntry*)p; break;
        case 100: if(gc) delete (QNetworkCacheMetaData*)p; else delete (LNetworkCacheMetaData*)p; break;
        case 101: if(gc) delete (QNetworkCookie*)p; else delete (LNetworkCookie*)p; break;
        case 102: if(gc) delete (QNetworkInterface*)p; else delete (LNetworkInterface*)p; break;
        case 103: if(gc) delete (QNetworkProxy*)p; else delete (LNetworkProxy*)p; break;
        case 104: if(gc) delete (QNetworkProxyFactory*)p; else delete (LNetworkProxyFactory*)p; break;
        case 105: if(gc) delete (QNetworkProxyQuery*)p; else delete (LNetworkProxyQuery*)p; break;
        case 106: if(gc) delete (QNetworkRequest*)p; else delete (LNetworkRequest*)p; break;
        case 143: if(gc) delete (QSslCertificate*)p; else delete (LSslCertificate*)p; break;
        case 144: if(gc) delete (QSslCipher*)p; else delete (LSslCipher*)p; break;
        case 145: if(gc) delete (QSslConfiguration*)p; else delete (LSslConfiguration*)p; break;
        case 146: if(gc) delete (QSslError*)p; else delete (LSslError*)p; break;
        case 147: if(gc) delete (QSslKey*)p; else delete (LSslKey*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 12: ids = &LAbstractSocket::overrideIds; break;
            case 109: ids = &LLocalServer::overrideIds; break;
            case 110: ids = &LLocalSocket::overrideIds; break;
            case 120: ids = &LNetworkAccessManager::overrideIds; break;
            case 121: ids = &LNetworkCookieJar::overrideIds; break;
            case 122: ids = &LNetworkDiskCache::overrideIds; break;
            case 183: ids = &LTcpServer::overrideIds; break;
            case 184: ids = &LTcpSocket::overrideIds; break;
            case 202: ids = &LUdpSocket::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 8: ids = &LAuthenticator::overrideIds; break;
            case 75: ids = &LHostAddress::overrideIds; break;
            case 76: ids = &LHostInfo::overrideIds; break;
            case 99: ids = &LNetworkAddressEntry::overrideIds; break;
            case 100: ids = &LNetworkCacheMetaData::overrideIds; break;
            case 101: ids = &LNetworkCookie::overrideIds; break;
            case 102: ids = &LNetworkInterface::overrideIds; break;
            case 103: ids = &LNetworkProxy::overrideIds; break;
            case 104: ids = &LNetworkProxyFactory::overrideIds; break;
            case 105: ids = &LNetworkProxyQuery::overrideIds; break;
            case 106: ids = &LNetworkRequest::overrideIds; break;
            case 143: ids = &LSslCertificate::overrideIds; break;
            case 144: ids = &LSslCipher::overrideIds; break;
            case 145: ids = &LSslConfiguration::overrideIds; break;
            case 146: ids = &LSslError::overrideIds; break;
            case 147: ids = &LSslKey::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
