// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LAbstractSocket::overrideIds = NumList() << 117 << 118 << 119 << 120 << 121 << 122 << 123 << 124 << 125 << 126 << 127 << 128 << 129 << 130 << 131 << 132 << 133 << 134 << 135 << 136;
NumList LHttpMultiPart::overrideIds = NumList();
NumList LLocalServer::overrideIds = NumList() << 285 << 286;
NumList LLocalSocket::overrideIds = NumList() << 127 << 128 << 129 << 130 << 131 << 137 << 132 << 133 << 134 << 136;
NumList LNetworkAccessManager::overrideIds = NumList();
NumList LNetworkCookieJar::overrideIds = NumList() << 291 << 292 << 293 << 294 << 295 << 296;
NumList LNetworkDiskCache::overrideIds = NumList() << 297 << 298 << 299 << 300 << 301;
NumList LTcpServer::overrideIds = NumList() << 285 << 286;
NumList LTcpSocket::overrideIds = NumList();
NumList LUdpSocket::overrideIds = NumList();
NumList LAuthenticator::overrideIds = NumList();
NumList LHostAddress::overrideIds = NumList();
NumList LHostInfo::overrideIds = NumList();
NumList LHttpPart::overrideIds = NumList();
NumList LNetworkAddressEntry::overrideIds = NumList();
NumList LNetworkCacheMetaData::overrideIds = NumList();
NumList LNetworkConfiguration::overrideIds = NumList();
NumList LNetworkCookie::overrideIds = NumList();
NumList LNetworkInterface::overrideIds = NumList();
NumList LNetworkProxy::overrideIds = NumList();
NumList LNetworkProxyFactory::overrideIds = NumList() << 481;
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
    LObjects::Q[103] = new Q104;
    LObjects::Q[119] = new Q120;
    LObjects::Q[120] = new Q121;
    LObjects::Q[135] = new Q136;
    LObjects::Q[136] = new Q137;
    LObjects::Q[137] = new Q138;
    LObjects::Q[138] = new Q139;
    LObjects::Q[211] = new Q212;
    LObjects::Q[212] = new Q213;
    LObjects::Q[230] = new Q231;
    LObjects::N[20] = new N21;
    LObjects::N[89] = new N90;
    LObjects::N[90] = new N91;
    LObjects::N[92] = new N93;
    LObjects::N[121] = new N122;
    LObjects::N[122] = new N123;
    LObjects::N[123] = new N124;
    LObjects::N[124] = new N125;
    LObjects::N[125] = new N126;
    LObjects::N[126] = new N127;
    LObjects::N[127] = new N128;
    LObjects::N[128] = new N129;
    LObjects::N[129] = new N130;
    LObjects::N[173] = new N174;
    LObjects::N[174] = new N175;
    LObjects::N[175] = new N176;
    LObjects::N[176] = new N177;
    LObjects::N[177] = new N178; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 7: m = &QAbstractNetworkCache::staticMetaObject; break;
        case 12: m = &QAbstractSocket::staticMetaObject; break;
        case 104: m = &QHttpMultiPart::staticMetaObject; break;
        case 120: m = &QLocalServer::staticMetaObject; break;
        case 121: m = &QLocalSocket::staticMetaObject; break;
        case 136: m = &QNetworkAccessManager::staticMetaObject; break;
        case 137: m = &QNetworkCookieJar::staticMetaObject; break;
        case 138: m = &QNetworkDiskCache::staticMetaObject; break;
        case 139: m = &QNetworkReply::staticMetaObject; break;
        case 212: m = &QTcpServer::staticMetaObject; break;
        case 213: m = &QTcpSocket::staticMetaObject; break;
        case 231: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 21: if(gc) delete (QAuthenticator*)p; else delete (LAuthenticator*)p; break;
        case 90: if(gc) delete (QHostAddress*)p; else delete (LHostAddress*)p; break;
        case 91: if(gc) delete (QHostInfo*)p; else delete (LHostInfo*)p; break;
        case 93: if(gc) delete (QHttpPart*)p; else delete (LHttpPart*)p; break;
        case 122: if(gc) delete (QNetworkAddressEntry*)p; else delete (LNetworkAddressEntry*)p; break;
        case 123: if(gc) delete (QNetworkCacheMetaData*)p; else delete (LNetworkCacheMetaData*)p; break;
        case 124: if(gc) delete (QNetworkConfiguration*)p; else delete (LNetworkConfiguration*)p; break;
        case 125: if(gc) delete (QNetworkCookie*)p; else delete (LNetworkCookie*)p; break;
        case 126: if(gc) delete (QNetworkInterface*)p; else delete (LNetworkInterface*)p; break;
        case 127: if(gc) delete (QNetworkProxy*)p; else delete (LNetworkProxy*)p; break;
        case 128: if(gc) delete (QNetworkProxyFactory*)p; else delete (LNetworkProxyFactory*)p; break;
        case 129: if(gc) delete (QNetworkProxyQuery*)p; else delete (LNetworkProxyQuery*)p; break;
        case 130: if(gc) delete (QNetworkRequest*)p; else delete (LNetworkRequest*)p; break;
        case 174: if(gc) delete (QSslCertificate*)p; else delete (LSslCertificate*)p; break;
        case 175: if(gc) delete (QSslCipher*)p; else delete (LSslCipher*)p; break;
        case 176: if(gc) delete (QSslConfiguration*)p; else delete (LSslConfiguration*)p; break;
        case 177: if(gc) delete (QSslError*)p; else delete (LSslError*)p; break;
        case 178: if(gc) delete (QSslKey*)p; else delete (LSslKey*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 12: ids = &LAbstractSocket::overrideIds; break;
            case 104: ids = &LHttpMultiPart::overrideIds; break;
            case 120: ids = &LLocalServer::overrideIds; break;
            case 121: ids = &LLocalSocket::overrideIds; break;
            case 136: ids = &LNetworkAccessManager::overrideIds; break;
            case 137: ids = &LNetworkCookieJar::overrideIds; break;
            case 138: ids = &LNetworkDiskCache::overrideIds; break;
            case 212: ids = &LTcpServer::overrideIds; break;
            case 213: ids = &LTcpSocket::overrideIds; break;
            case 231: ids = &LUdpSocket::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 21: ids = &LAuthenticator::overrideIds; break;
            case 90: ids = &LHostAddress::overrideIds; break;
            case 91: ids = &LHostInfo::overrideIds; break;
            case 93: ids = &LHttpPart::overrideIds; break;
            case 122: ids = &LNetworkAddressEntry::overrideIds; break;
            case 123: ids = &LNetworkCacheMetaData::overrideIds; break;
            case 124: ids = &LNetworkConfiguration::overrideIds; break;
            case 125: ids = &LNetworkCookie::overrideIds; break;
            case 126: ids = &LNetworkInterface::overrideIds; break;
            case 127: ids = &LNetworkProxy::overrideIds; break;
            case 128: ids = &LNetworkProxyFactory::overrideIds; break;
            case 129: ids = &LNetworkProxyQuery::overrideIds; break;
            case 130: ids = &LNetworkRequest::overrideIds; break;
            case 174: ids = &LSslCertificate::overrideIds; break;
            case 175: ids = &LSslCipher::overrideIds; break;
            case 176: ids = &LSslConfiguration::overrideIds; break;
            case 177: ids = &LSslError::overrideIds; break;
            case 178: ids = &LSslKey::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
