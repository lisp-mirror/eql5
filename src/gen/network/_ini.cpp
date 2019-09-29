// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR  (QHostAddress, qhostaddress)
TO_QT_TYPE_PTR  (QHostInfo, qhostinfo)
TO_QT_TYPE_PTR  (QHttpPart, qhttppart)
TO_QT_TYPE_PTR  (QNetworkAddressEntry, qnetworkaddressentry)
TO_QT_TYPE_PTR  (QNetworkCacheMetaData, qnetworkcachemetadata)
TO_QT_TYPE_PTR2 (QNetworkConfiguration, qnetworkconfiguration)
TO_QT_TYPE_PTR2 (QNetworkCookie, qnetworkcookie)
TO_QT_TYPE_PTR  (QNetworkInterface, qnetworkinterface)
TO_QT_TYPE_PTR  (QNetworkProxy, qnetworkproxy)
TO_QT_TYPE_PTR  (QNetworkRequest, qnetworkrequest)
TO_QT_TYPE_PTR  (QSslCertificate, qsslcertificate)
TO_QT_TYPE_PTR  (QSslCipher, qsslcipher)
TO_QT_TYPE_PTR  (QSslConfiguration, qsslconfiguration)
TO_QT_TYPE_PTR  (QSslKey, qsslkey)

TO_QT_LIST_VAL (QNetworkConfiguration)
TO_QT_LIST_VAL (QNetworkCookie)

TO_CL_LIST_VAL (QNetworkAddressEntry, qnetworkaddressentry)
TO_CL_LIST_VAL (QNetworkConfiguration, qnetworkconfiguration)
TO_CL_LIST_VAL (QNetworkCookie, qnetworkcookie)
TO_CL_LIST_VAL (QNetworkInterface, qnetworkinterface)
TO_CL_LIST_VAL (QNetworkProxy, qnetworkproxy)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

NumList LAbstractSocket::overrideIds = NumList() << 118 << 119 << 120 << 121 << 122 << 123 << 124 << 125 << 126 << 127 << 128 << 129 << 130 << 131 << 132 << 133 << 134 << 135 << 136 << 137;
NumList LHttpMultiPart::overrideIds = NumList();
NumList LLocalServer::overrideIds = NumList() << 286 << 287;
NumList LLocalSocket::overrideIds = NumList() << 128 << 129 << 130 << 131 << 132 << 138 << 133 << 134 << 135 << 137;
NumList LNetworkAccessManager::overrideIds = NumList();
NumList LNetworkCookieJar::overrideIds = NumList() << 292 << 293 << 294 << 295 << 296 << 297;
NumList LNetworkDiskCache::overrideIds = NumList() << 298 << 299 << 300 << 301 << 302;
NumList LTcpServer::overrideIds = NumList() << 286 << 287;
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
NumList LNetworkProxyFactory::overrideIds = NumList() << 526;
NumList LNetworkProxyQuery::overrideIds = NumList();
NumList LNetworkRequest::overrideIds = NumList();
NumList LSslCertificate::overrideIds = NumList();
NumList LSslCipher::overrideIds = NumList();
NumList LSslConfiguration::overrideIds = NumList();
NumList LSslError::overrideIds = NumList();
NumList LSslKey::overrideIds = NumList();

void* network_ini() {
    static bool _ = false; if(_) return 0; _ = true;
    ModuleNetwork* module = new ModuleNetwork;
    module->ini2();
    LObjects::Q[6] = new Q7;
    LObjects::Q[11] = new Q12;
    LObjects::Q[103] = new Q104;
    LObjects::Q[120] = new Q121;
    LObjects::Q[121] = new Q122;
    LObjects::Q[137] = new Q138;
    LObjects::Q[138] = new Q139;
    LObjects::Q[139] = new Q140;
    LObjects::Q[140] = new Q141;
    LObjects::Q[236] = new Q237;
    LObjects::Q[237] = new Q238;
    LObjects::Q[255] = new Q256;
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
    LObjects::N[203] = new N204;
    LObjects::N[204] = new N205;
    LObjects::N[205] = new N206;
    LObjects::N[206] = new N207;
    LObjects::N[207] = new N208;
    return module; }

ModuleNetwork::ModuleNetwork() {
    network_ini(); }

void ModuleNetwork::ini2() {
    META_TYPE_(LObjects::T_QHostAddress,                QHostAddress)
    META_TYPE_(LObjects::T_QHostInfo,                   QHostInfo)
    META_TYPE_(LObjects::T_QHttpPart,                   QHttpPart)
    META_TYPE_(LObjects::T_QNetworkAddressEntry,        QNetworkAddressEntry)
    META_TYPE_(LObjects::T_QList_QNetworkAddressEntry,  QList<QNetworkAddressEntry>)
    META_TYPE_(LObjects::T_QNetworkCacheMetaData,       QNetworkCacheMetaData)
    META_TYPE_(LObjects::T_QNetworkConfiguration,       QNetworkConfiguration)
    META_TYPE_(LObjects::T_QList_QNetworkConfiguration, QList<QNetworkConfiguration>)
    META_TYPE_(LObjects::T_QNetworkCookie,              QNetworkCookie)
    META_TYPE_(LObjects::T_QList_QNetworkCookie,        QList<QNetworkCookie>)
    META_TYPE_(LObjects::T_QNetworkInterface,           QNetworkInterface)
    META_TYPE_(LObjects::T_QList_QNetworkInterface,     QList<QNetworkInterface>)
    META_TYPE_(LObjects::T_QNetworkProxy,               QNetworkProxy)
    META_TYPE_(LObjects::T_QList_QNetworkProxy,         QList<QNetworkProxy>)
    META_TYPE_(LObjects::T_QNetworkRequest,             QNetworkRequest)
    META_TYPE_(LObjects::T_QSslCertificate,             QSslCertificate)
    META_TYPE_(LObjects::T_QSslCipher,                  QSslCipher)
    META_TYPE_(LObjects::T_QSslConfiguration,           QSslConfiguration)
    META_TYPE_(LObjects::T_QSslKey,                     QSslKey) }

void* ModuleNetwork::toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QHostAddress == n)                     { p = new QHostAddress(*toQHostAddressPointer(l_arg)); }
    else if(LObjects::T_QHostInfo == n)                   { p = new QHostInfo(*toQHostInfoPointer(l_arg)); }
    else if(LObjects::T_QHttpPart == n)                   { p = new QHttpPart(*toQHttpPartPointer(l_arg)); }
    else if(LObjects::T_QNetworkAddressEntry == n)        { p = new QNetworkAddressEntry(*toQNetworkAddressEntryPointer(l_arg)); }
    else if(LObjects::T_QNetworkCacheMetaData == n)       { p = new QNetworkCacheMetaData(*toQNetworkCacheMetaDataPointer(l_arg)); }
    else if(LObjects::T_QNetworkConfiguration == n)       { p = new QNetworkConfiguration(*toQNetworkConfigurationPointer(l_arg)); }
    else if(LObjects::T_QList_QNetworkConfiguration == n) { p = new QList<QNetworkConfiguration>(toQNetworkConfigurationList(l_arg)); }
    else if(LObjects::T_QNetworkCookie == n)              { p = new QNetworkCookie(*toQNetworkCookiePointer(l_arg)); }
    else if(LObjects::T_QList_QNetworkCookie == n)        { p = new QList<QNetworkCookie>(toQNetworkCookieList(l_arg)); }
    else if(LObjects::T_QNetworkInterface == n)           { p = new QNetworkInterface(*toQNetworkInterfacePointer(l_arg)); }
    else if(LObjects::T_QNetworkProxy == n)               { p = new QNetworkProxy(*toQNetworkProxyPointer(l_arg)); }
    else if(LObjects::T_QNetworkRequest == n)             { p = new QNetworkRequest(*toQNetworkRequestPointer(l_arg)); }
    else if(LObjects::T_QSslCertificate == n)             { p = new QSslCertificate(*toQSslCertificatePointer(l_arg)); }
    else if(LObjects::T_QSslCipher == n)                  { p = new QSslCipher(*toQSslCipherPointer(l_arg)); }
    else if(LObjects::T_QSslConfiguration == n)           { p = new QSslConfiguration(*toQSslConfigurationPointer(l_arg)); }
    else if(LObjects::T_QSslKey == n)                     { p = new QSslKey(*toQSslKeyPointer(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object ModuleNetwork::to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QHostAddress == n)                     { l_ret = from_qhostaddress(*(QHostAddress*)p); }
    else if(LObjects::T_QHostInfo == n)                   { l_ret = from_qhostinfo(*(QHostInfo*)p); }
    else if(LObjects::T_QHttpPart == n)                   { l_ret = from_qhttppart(*(QHttpPart*)p); }
    else if(LObjects::T_QNetworkAddressEntry == n)        { l_ret = from_qnetworkaddressentry(*(QNetworkAddressEntry*)p); }
    else if(LObjects::T_QList_QNetworkAddressEntry == n)  { l_ret = from_qnetworkaddressentrylist(*(QList<QNetworkAddressEntry>*)p); }
    else if(LObjects::T_QNetworkCacheMetaData == n)       { l_ret = from_qnetworkcachemetadata(*(QNetworkCacheMetaData*)p); }
    else if(LObjects::T_QNetworkConfiguration == n)       { l_ret = from_qnetworkconfiguration(*(QNetworkConfiguration*)p); }
    else if(LObjects::T_QList_QNetworkConfiguration == n) { l_ret = from_qnetworkconfigurationlist(*(QList<QNetworkConfiguration>*)p); }
    else if(LObjects::T_QNetworkCookie == n)              { l_ret = from_qnetworkcookie(*(QNetworkCookie*)p); }
    else if(LObjects::T_QList_QNetworkCookie == n)        { l_ret = from_qnetworkcookielist(*(QList<QNetworkCookie>*)p); }
    else if(LObjects::T_QNetworkInterface == n)           { l_ret = from_qnetworkinterface(*(QNetworkInterface*)p); }
    else if(LObjects::T_QList_QNetworkInterface == n)     { l_ret = from_qnetworkinterfacelist(*(QList<QNetworkInterface>*)p); }
    else if(LObjects::T_QNetworkProxy == n)               { l_ret = from_qnetworkproxy(*(QNetworkProxy*)p); }
    else if(LObjects::T_QList_QNetworkProxy == n)         { l_ret = from_qnetworkproxylist(*(QList<QNetworkProxy>*)p); }
    else if(LObjects::T_QNetworkRequest == n)             { l_ret = from_qnetworkrequest(*(QNetworkRequest*)p); }
    else if(LObjects::T_QSslCertificate == n)             { l_ret = from_qsslcertificate(*(QSslCertificate*)p); }
    else if(LObjects::T_QSslCipher == n)                  { l_ret = from_qsslcipher(*(QSslCipher*)p); }
    else if(LObjects::T_QSslConfiguration == n)           { l_ret = from_qsslconfiguration(*(QSslConfiguration*)p); }
    else if(LObjects::T_QSslKey == n)                     { l_ret = from_qsslkey(*(QSslKey*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

const QMetaObject* ModuleNetwork::staticMetaObject(int n) {
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
        case 237: m = &QTcpServer::staticMetaObject; break;
        case 238: m = &QTcpSocket::staticMetaObject; break;
        case 256: m = &QUdpSocket::staticMetaObject; break; }
    return m; }

void ModuleNetwork::deleteNObject(int n, void* p, int gc) {
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
        case 204: if(gc) delete (QSslCertificate*)p; else delete (LSslCertificate*)p; break;
        case 205: if(gc) delete (QSslCipher*)p; else delete (LSslCipher*)p; break;
        case 206: if(gc) delete (QSslConfiguration*)p; else delete (LSslConfiguration*)p; break;
        case 207: if(gc) delete (QSslError*)p; else delete (LSslError*)p; break;
        case 208: if(gc) delete (QSslKey*)p; else delete (LSslKey*)p; break; }}

NumList* ModuleNetwork::overrideIds(const QByteArray& name) {
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
            case 237: ids = &LTcpServer::overrideIds; break;
            case 238: ids = &LTcpSocket::overrideIds; break;
            case 256: ids = &LUdpSocket::overrideIds; break; }}
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
            case 204: ids = &LSslCertificate::overrideIds; break;
            case 205: ids = &LSslCipher::overrideIds; break;
            case 206: ids = &LSslConfiguration::overrideIds; break;
            case 207: ids = &LSslError::overrideIds; break;
            case 208: ids = &LSslKey::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
