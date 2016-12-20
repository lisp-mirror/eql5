// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LAbstractSocket::overrideIds = NumList() << 117 << 118 << 119 << 120 << 121 << 122 << 123 << 124 << 125 << 126 << 127 << 128 << 129 << 130 << 131 << 132 << 133 << 134 << 135 << 136;
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
NumList LNetworkAddressEntry::overrideIds = NumList();
NumList LNetworkCacheMetaData::overrideIds = NumList();
NumList LNetworkCookie::overrideIds = NumList();
NumList LNetworkInterface::overrideIds = NumList();
NumList LNetworkProxy::overrideIds = NumList();
NumList LNetworkProxyFactory::overrideIds = NumList() << 462;
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
    LObjects::Q[116] = new Q117;
    LObjects::Q[117] = new Q118;
    LObjects::Q[132] = new Q133;
    LObjects::Q[133] = new Q134;
    LObjects::Q[134] = new Q135;
    LObjects::Q[135] = new Q136;
    LObjects::Q[205] = new Q206;
    LObjects::Q[206] = new Q207;
    LObjects::Q[224] = new Q225;
    LObjects::N[10] = new N11;
    LObjects::N[73] = new N74;
    LObjects::N[74] = new N75;
    LObjects::N[102] = new N103;
    LObjects::N[103] = new N104;
    LObjects::N[104] = new N105;
    LObjects::N[105] = new N106;
    LObjects::N[106] = new N107;
    LObjects::N[107] = new N108;
    LObjects::N[108] = new N109;
    LObjects::N[109] = new N110;
    LObjects::N[151] = new N152;
    LObjects::N[152] = new N153;
    LObjects::N[153] = new N154;
    LObjects::N[154] = new N155;
    LObjects::N[155] = new N156; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 7: m = &QAbstractNetworkCache::staticMetaObject; break;
        case 12: m = &QAbstractSocket::staticMetaObject; break;
        case 117: m = &QLocalServer::staticMetaObject; break;
        case 118: m = &QLocalSocket::staticMetaObject; break;
        case 133: m = &QNetworkAccessManager::staticMetaObject; break;
        case 134: m = &QNetworkCookieJar::staticMetaObject; break;
        case 135: m = &QNetworkDiskCache::staticMetaObject; break;
        case 136: m = &QNetworkReply::staticMetaObject; break;
        case 206: m = &QTcpServer::staticMetaObject; break;
        case 207: m = &QTcpSocket::staticMetaObject; break;
        case 225: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 11: if(gc) delete (QAuthenticator*)p; else delete (LAuthenticator*)p; break;
        case 74: if(gc) delete (QHostAddress*)p; else delete (LHostAddress*)p; break;
        case 75: if(gc) delete (QHostInfo*)p; else delete (LHostInfo*)p; break;
        case 103: if(gc) delete (QNetworkAddressEntry*)p; else delete (LNetworkAddressEntry*)p; break;
        case 104: if(gc) delete (QNetworkCacheMetaData*)p; else delete (LNetworkCacheMetaData*)p; break;
        case 105: if(gc) delete (QNetworkCookie*)p; else delete (LNetworkCookie*)p; break;
        case 106: if(gc) delete (QNetworkInterface*)p; else delete (LNetworkInterface*)p; break;
        case 107: if(gc) delete (QNetworkProxy*)p; else delete (LNetworkProxy*)p; break;
        case 108: if(gc) delete (QNetworkProxyFactory*)p; else delete (LNetworkProxyFactory*)p; break;
        case 109: if(gc) delete (QNetworkProxyQuery*)p; else delete (LNetworkProxyQuery*)p; break;
        case 110: if(gc) delete (QNetworkRequest*)p; else delete (LNetworkRequest*)p; break;
        case 152: if(gc) delete (QSslCertificate*)p; else delete (LSslCertificate*)p; break;
        case 153: if(gc) delete (QSslCipher*)p; else delete (LSslCipher*)p; break;
        case 154: if(gc) delete (QSslConfiguration*)p; else delete (LSslConfiguration*)p; break;
        case 155: if(gc) delete (QSslError*)p; else delete (LSslError*)p; break;
        case 156: if(gc) delete (QSslKey*)p; else delete (LSslKey*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 12: ids = &LAbstractSocket::overrideIds; break;
            case 117: ids = &LLocalServer::overrideIds; break;
            case 118: ids = &LLocalSocket::overrideIds; break;
            case 133: ids = &LNetworkAccessManager::overrideIds; break;
            case 134: ids = &LNetworkCookieJar::overrideIds; break;
            case 135: ids = &LNetworkDiskCache::overrideIds; break;
            case 206: ids = &LTcpServer::overrideIds; break;
            case 207: ids = &LTcpSocket::overrideIds; break;
            case 225: ids = &LUdpSocket::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 11: ids = &LAuthenticator::overrideIds; break;
            case 74: ids = &LHostAddress::overrideIds; break;
            case 75: ids = &LHostInfo::overrideIds; break;
            case 103: ids = &LNetworkAddressEntry::overrideIds; break;
            case 104: ids = &LNetworkCacheMetaData::overrideIds; break;
            case 105: ids = &LNetworkCookie::overrideIds; break;
            case 106: ids = &LNetworkInterface::overrideIds; break;
            case 107: ids = &LNetworkProxy::overrideIds; break;
            case 108: ids = &LNetworkProxyFactory::overrideIds; break;
            case 109: ids = &LNetworkProxyQuery::overrideIds; break;
            case 110: ids = &LNetworkRequest::overrideIds; break;
            case 152: ids = &LSslCertificate::overrideIds; break;
            case 153: ids = &LSslCipher::overrideIds; break;
            case 154: ids = &LSslConfiguration::overrideIds; break;
            case 155: ids = &LSslError::overrideIds; break;
            case 156: ids = &LSslKey::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
