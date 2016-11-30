// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LAbstractSocket::overrideIds = NumList() << 117 << 118 << 119 << 120 << 121 << 122 << 123 << 124 << 125 << 126 << 127 << 128 << 129 << 130 << 131 << 132 << 133 << 134 << 135 << 136;
NumList LLocalServer::overrideIds = NumList() << 279 << 280 << 281;
NumList LLocalSocket::overrideIds = NumList() << 127 << 128 << 129 << 130 << 131 << 137 << 132 << 133 << 134 << 136;
NumList LNetworkAccessManager::overrideIds = NumList();
NumList LNetworkCookieJar::overrideIds = NumList() << 286 << 287 << 288 << 289 << 290 << 291;
NumList LNetworkDiskCache::overrideIds = NumList() << 292 << 293 << 294 << 295 << 296;
NumList LTcpServer::overrideIds = NumList() << 279 << 280;
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
NumList LNetworkProxyFactory::overrideIds = NumList() << 441;
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
    LObjects::Q[105] = new Q106;
    LObjects::Q[106] = new Q107;
    LObjects::Q[116] = new Q117;
    LObjects::Q[117] = new Q118;
    LObjects::Q[118] = new Q119;
    LObjects::Q[119] = new Q120;
    LObjects::Q[185] = new Q186;
    LObjects::Q[186] = new Q187;
    LObjects::Q[204] = new Q205;
    LObjects::N[7] = new N8;
    LObjects::N[68] = new N69;
    LObjects::N[69] = new N70;
    LObjects::N[92] = new N93;
    LObjects::N[93] = new N94;
    LObjects::N[94] = new N95;
    LObjects::N[95] = new N96;
    LObjects::N[96] = new N97;
    LObjects::N[97] = new N98;
    LObjects::N[98] = new N99;
    LObjects::N[99] = new N100;
    LObjects::N[139] = new N140;
    LObjects::N[140] = new N141;
    LObjects::N[141] = new N142;
    LObjects::N[142] = new N143;
    LObjects::N[143] = new N144; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 7: m = &QAbstractNetworkCache::staticMetaObject; break;
        case 12: m = &QAbstractSocket::staticMetaObject; break;
        case 106: m = &QLocalServer::staticMetaObject; break;
        case 107: m = &QLocalSocket::staticMetaObject; break;
        case 117: m = &QNetworkAccessManager::staticMetaObject; break;
        case 118: m = &QNetworkCookieJar::staticMetaObject; break;
        case 119: m = &QNetworkDiskCache::staticMetaObject; break;
        case 120: m = &QNetworkReply::staticMetaObject; break;
        case 186: m = &QTcpServer::staticMetaObject; break;
        case 187: m = &QTcpSocket::staticMetaObject; break;
        case 205: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 8: if(gc) delete (QAuthenticator*)p; else delete (LAuthenticator*)p; break;
        case 69: if(gc) delete (QHostAddress*)p; else delete (LHostAddress*)p; break;
        case 70: if(gc) delete (QHostInfo*)p; else delete (LHostInfo*)p; break;
        case 93: if(gc) delete (QNetworkAddressEntry*)p; else delete (LNetworkAddressEntry*)p; break;
        case 94: if(gc) delete (QNetworkCacheMetaData*)p; else delete (LNetworkCacheMetaData*)p; break;
        case 95: if(gc) delete (QNetworkCookie*)p; else delete (LNetworkCookie*)p; break;
        case 96: if(gc) delete (QNetworkInterface*)p; else delete (LNetworkInterface*)p; break;
        case 97: if(gc) delete (QNetworkProxy*)p; else delete (LNetworkProxy*)p; break;
        case 98: if(gc) delete (QNetworkProxyFactory*)p; else delete (LNetworkProxyFactory*)p; break;
        case 99: if(gc) delete (QNetworkProxyQuery*)p; else delete (LNetworkProxyQuery*)p; break;
        case 100: if(gc) delete (QNetworkRequest*)p; else delete (LNetworkRequest*)p; break;
        case 140: if(gc) delete (QSslCertificate*)p; else delete (LSslCertificate*)p; break;
        case 141: if(gc) delete (QSslCipher*)p; else delete (LSslCipher*)p; break;
        case 142: if(gc) delete (QSslConfiguration*)p; else delete (LSslConfiguration*)p; break;
        case 143: if(gc) delete (QSslError*)p; else delete (LSslError*)p; break;
        case 144: if(gc) delete (QSslKey*)p; else delete (LSslKey*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 12: ids = &LAbstractSocket::overrideIds; break;
            case 106: ids = &LLocalServer::overrideIds; break;
            case 107: ids = &LLocalSocket::overrideIds; break;
            case 117: ids = &LNetworkAccessManager::overrideIds; break;
            case 118: ids = &LNetworkCookieJar::overrideIds; break;
            case 119: ids = &LNetworkDiskCache::overrideIds; break;
            case 186: ids = &LTcpServer::overrideIds; break;
            case 187: ids = &LTcpSocket::overrideIds; break;
            case 205: ids = &LUdpSocket::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 8: ids = &LAuthenticator::overrideIds; break;
            case 69: ids = &LHostAddress::overrideIds; break;
            case 70: ids = &LHostInfo::overrideIds; break;
            case 93: ids = &LNetworkAddressEntry::overrideIds; break;
            case 94: ids = &LNetworkCacheMetaData::overrideIds; break;
            case 95: ids = &LNetworkCookie::overrideIds; break;
            case 96: ids = &LNetworkInterface::overrideIds; break;
            case 97: ids = &LNetworkProxy::overrideIds; break;
            case 98: ids = &LNetworkProxyFactory::overrideIds; break;
            case 99: ids = &LNetworkProxyQuery::overrideIds; break;
            case 100: ids = &LNetworkRequest::overrideIds; break;
            case 140: ids = &LSslCertificate::overrideIds; break;
            case 141: ids = &LSslCipher::overrideIds; break;
            case 142: ids = &LSslConfiguration::overrideIds; break;
            case 143: ids = &LSslError::overrideIds; break;
            case 144: ids = &LSslKey::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
