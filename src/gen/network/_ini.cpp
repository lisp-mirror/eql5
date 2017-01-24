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
NumList LNetworkProxyFactory::overrideIds = NumList() << 517;
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
    LObjects::Q[120] = new Q121;
    LObjects::Q[121] = new Q122;
    LObjects::Q[137] = new Q138;
    LObjects::Q[138] = new Q139;
    LObjects::Q[139] = new Q140;
    LObjects::Q[140] = new Q141;
    LObjects::Q[237] = new Q238;
    LObjects::Q[238] = new Q239;
    LObjects::Q[256] = new Q257;
    LObjects::N[20] = new N21;
    LObjects::N[89] = new N90;
    LObjects::N[90] = new N91;
    LObjects::N[92] = new N93;
    LObjects::N[123] = new N124;
    LObjects::N[124] = new N125;
    LObjects::N[125] = new N126;
    LObjects::N[126] = new N127;
    LObjects::N[127] = new N128;
    LObjects::N[128] = new N129;
    LObjects::N[129] = new N130;
    LObjects::N[130] = new N131;
    LObjects::N[131] = new N132;
    LObjects::N[204] = new N205;
    LObjects::N[205] = new N206;
    LObjects::N[206] = new N207;
    LObjects::N[207] = new N208;
    LObjects::N[208] = new N209; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 7: m = &QAbstractNetworkCache::staticMetaObject; break;
        case 12: m = &QAbstractSocket::staticMetaObject; break;
        case 104: m = &QHttpMultiPart::staticMetaObject; break;
        case 121: m = &QLocalServer::staticMetaObject; break;
        case 122: m = &QLocalSocket::staticMetaObject; break;
        case 138: m = &QNetworkAccessManager::staticMetaObject; break;
        case 139: m = &QNetworkCookieJar::staticMetaObject; break;
        case 140: m = &QNetworkDiskCache::staticMetaObject; break;
        case 141: m = &QNetworkReply::staticMetaObject; break;
        case 238: m = &QTcpServer::staticMetaObject; break;
        case 239: m = &QTcpSocket::staticMetaObject; break;
        case 257: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 21: if(gc) delete (QAuthenticator*)p; else delete (LAuthenticator*)p; break;
        case 90: if(gc) delete (QHostAddress*)p; else delete (LHostAddress*)p; break;
        case 91: if(gc) delete (QHostInfo*)p; else delete (LHostInfo*)p; break;
        case 93: if(gc) delete (QHttpPart*)p; else delete (LHttpPart*)p; break;
        case 124: if(gc) delete (QNetworkAddressEntry*)p; else delete (LNetworkAddressEntry*)p; break;
        case 125: if(gc) delete (QNetworkCacheMetaData*)p; else delete (LNetworkCacheMetaData*)p; break;
        case 126: if(gc) delete (QNetworkConfiguration*)p; else delete (LNetworkConfiguration*)p; break;
        case 127: if(gc) delete (QNetworkCookie*)p; else delete (LNetworkCookie*)p; break;
        case 128: if(gc) delete (QNetworkInterface*)p; else delete (LNetworkInterface*)p; break;
        case 129: if(gc) delete (QNetworkProxy*)p; else delete (LNetworkProxy*)p; break;
        case 130: if(gc) delete (QNetworkProxyFactory*)p; else delete (LNetworkProxyFactory*)p; break;
        case 131: if(gc) delete (QNetworkProxyQuery*)p; else delete (LNetworkProxyQuery*)p; break;
        case 132: if(gc) delete (QNetworkRequest*)p; else delete (LNetworkRequest*)p; break;
        case 205: if(gc) delete (QSslCertificate*)p; else delete (LSslCertificate*)p; break;
        case 206: if(gc) delete (QSslCipher*)p; else delete (LSslCipher*)p; break;
        case 207: if(gc) delete (QSslConfiguration*)p; else delete (LSslConfiguration*)p; break;
        case 208: if(gc) delete (QSslError*)p; else delete (LSslError*)p; break;
        case 209: if(gc) delete (QSslKey*)p; else delete (LSslKey*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 12: ids = &LAbstractSocket::overrideIds; break;
            case 104: ids = &LHttpMultiPart::overrideIds; break;
            case 121: ids = &LLocalServer::overrideIds; break;
            case 122: ids = &LLocalSocket::overrideIds; break;
            case 138: ids = &LNetworkAccessManager::overrideIds; break;
            case 139: ids = &LNetworkCookieJar::overrideIds; break;
            case 140: ids = &LNetworkDiskCache::overrideIds; break;
            case 238: ids = &LTcpServer::overrideIds; break;
            case 239: ids = &LTcpSocket::overrideIds; break;
            case 257: ids = &LUdpSocket::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 21: ids = &LAuthenticator::overrideIds; break;
            case 90: ids = &LHostAddress::overrideIds; break;
            case 91: ids = &LHostInfo::overrideIds; break;
            case 93: ids = &LHttpPart::overrideIds; break;
            case 124: ids = &LNetworkAddressEntry::overrideIds; break;
            case 125: ids = &LNetworkCacheMetaData::overrideIds; break;
            case 126: ids = &LNetworkConfiguration::overrideIds; break;
            case 127: ids = &LNetworkCookie::overrideIds; break;
            case 128: ids = &LNetworkInterface::overrideIds; break;
            case 129: ids = &LNetworkProxy::overrideIds; break;
            case 130: ids = &LNetworkProxyFactory::overrideIds; break;
            case 131: ids = &LNetworkProxyQuery::overrideIds; break;
            case 132: ids = &LNetworkRequest::overrideIds; break;
            case 205: ids = &LSslCertificate::overrideIds; break;
            case 206: ids = &LSslCipher::overrideIds; break;
            case 207: ids = &LSslConfiguration::overrideIds; break;
            case 208: ids = &LSslError::overrideIds; break;
            case 209: ids = &LSslKey::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
