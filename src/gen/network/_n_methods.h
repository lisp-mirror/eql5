// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtNetwork>

QT_BEGIN_NAMESPACE

class N21 : public QObject { // QAuthenticator
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LAuthenticator(u); }
    Q_INVOKABLE void* C(uint u, const QAuthenticator& x1) { return new LAuthenticator(u, x1); }
    Q_INVOKABLE bool MisNull(QAuthenticator* o) const { return o->isNull(); }
    Q_INVOKABLE QVariant Moption(QAuthenticator* o, const QString& x1) const { return o->option(x1); }
    Q_INVOKABLE QVariantHash Moptions(QAuthenticator* o) const { return o->options(); }
    Q_INVOKABLE QString Mpassword(QAuthenticator* o) const { return o->password(); }
    Q_INVOKABLE QString Mrealm(QAuthenticator* o) const { return o->realm(); }
    Q_INVOKABLE void MsetOption(QAuthenticator* o, const QString& x1, const QVariant& x2) { o->setOption(x1, x2); }
    Q_INVOKABLE void MsetPassword(QAuthenticator* o, const QString& x1) { o->setPassword(x1); }
    Q_INVOKABLE void MsetUser(QAuthenticator* o, const QString& x1) { o->setUser(x1); }
    Q_INVOKABLE QString Muser(QAuthenticator* o) const { return o->user(); }
};

class N90 : public QObject { // QHostAddress
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LHostAddress(u); }
    Q_INVOKABLE void* C(uint u, quint32 x1) { return new LHostAddress(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LHostAddress(u, x1); }
    Q_INVOKABLE void* C(uint u, const QHostAddress& x1) { return new LHostAddress(u, x1); }
    Q_INVOKABLE void* C(uint u, QHostAddress::SpecialAddress x1) { return new LHostAddress(u, x1); }
    Q_INVOKABLE void Mclear(QHostAddress* o) { o->clear(); }
    Q_INVOKABLE bool MisInSubnet(QHostAddress* o, const QHostAddress& x1, int x2) const { return o->isInSubnet(x1, x2); }
    Q_INVOKABLE bool MisLoopback(QHostAddress* o) const { return o->isLoopback(); }
    Q_INVOKABLE bool MisNull(QHostAddress* o) const { return o->isNull(); }
    Q_INVOKABLE int Mprotocol(QHostAddress* o) const { return o->protocol(); }
    Q_INVOKABLE QString MscopeId(QHostAddress* o) const { return o->scopeId(); }
    Q_INVOKABLE void MsetAddress(QHostAddress* o, quint32 x1) { o->setAddress(x1); }
    Q_INVOKABLE bool MsetAddress(QHostAddress* o, const QString& x1) { return o->setAddress(x1); }
    Q_INVOKABLE void MsetScopeId(QHostAddress* o, const QString& x1) { o->setScopeId(x1); }
    Q_INVOKABLE quint32 MtoIPv4Address(QHostAddress* o) const { return o->toIPv4Address(); }
    Q_INVOKABLE quint32 MtoIPv4Address(QHostAddress* o, bool* x1) const { return o->toIPv4Address(x1); }
    Q_INVOKABLE QString MtoString(QHostAddress* o) const { return o->toString(); }
};

class N91 : public QObject { // QHostInfo
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = -1) { return new LHostInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QHostInfo& x1) { return new LHostInfo(u, x1); }
    Q_INVOKABLE QList<QHostAddress> Maddresses(QHostInfo* o) const { return o->addresses(); }
    Q_INVOKABLE int Merror(QHostInfo* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QHostInfo* o) const { return o->errorString(); }
    Q_INVOKABLE QString MhostName(QHostInfo* o) const { return o->hostName(); }
    Q_INVOKABLE int MlookupId(QHostInfo* o) const { return o->lookupId(); }
    Q_INVOKABLE void MsetAddresses(QHostInfo* o, const QList<QHostAddress>& x1) { o->setAddresses(x1); }
    Q_INVOKABLE void MsetError(QHostInfo* o, QHostInfo::HostInfoError x1) { o->setError(x1); }
    Q_INVOKABLE void MsetErrorString(QHostInfo* o, const QString& x1) { o->setErrorString(x1); }
    Q_INVOKABLE void MsetHostName(QHostInfo* o, const QString& x1) { o->setHostName(x1); }
    Q_INVOKABLE void MsetLookupId(QHostInfo* o, int x1) { o->setLookupId(x1); }
    Q_INVOKABLE void SabortHostLookup(int x1) { QHostInfo::abortHostLookup(x1); }
    Q_INVOKABLE QHostInfo SfromName(const QString& x1) { return QHostInfo::fromName(x1); }
    Q_INVOKABLE QString SlocalDomainName() { return QHostInfo::localDomainName(); }
    Q_INVOKABLE QString SlocalHostName() { return QHostInfo::localHostName(); }
    Q_INVOKABLE int SlookupHost(const QString& x1, QObject* x2, const char* x3) { return QHostInfo::lookupHost(x1, x2, x3); }
};

class N93 : public QObject { // QHttpPart
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LHttpPart(u); }
    Q_INVOKABLE void* C(uint u, const QHttpPart& x1) { return new LHttpPart(u, x1); }
    Q_INVOKABLE void MsetBody(QHttpPart* o, const QByteArray& x1) { o->setBody(x1); }
    Q_INVOKABLE void MsetHeader(QHttpPart* o, QNetworkRequest::KnownHeaders x1, const QVariant& x2) { o->setHeader(x1, x2); }
    Q_INVOKABLE void MsetRawHeader(QHttpPart* o, const QByteArray& x1, const QByteArray& x2) { o->setRawHeader(x1, x2); }
};

class N124 : public QObject { // QNetworkAddressEntry
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkAddressEntry(u); }
    Q_INVOKABLE void* C(uint u, const QNetworkAddressEntry& x1) { return new LNetworkAddressEntry(u, x1); }
    Q_INVOKABLE QHostAddress Mbroadcast(QNetworkAddressEntry* o) const { return o->broadcast(); }
    Q_INVOKABLE QHostAddress Mip(QNetworkAddressEntry* o) const { return o->ip(); }
    Q_INVOKABLE QHostAddress Mnetmask(QNetworkAddressEntry* o) const { return o->netmask(); }
    Q_INVOKABLE int MprefixLength(QNetworkAddressEntry* o) const { return o->prefixLength(); }
    Q_INVOKABLE void MsetBroadcast(QNetworkAddressEntry* o, const QHostAddress& x1) { o->setBroadcast(x1); }
    Q_INVOKABLE void MsetIp(QNetworkAddressEntry* o, const QHostAddress& x1) { o->setIp(x1); }
    Q_INVOKABLE void MsetNetmask(QNetworkAddressEntry* o, const QHostAddress& x1) { o->setNetmask(x1); }
    Q_INVOKABLE void MsetPrefixLength(QNetworkAddressEntry* o, int x1) { o->setPrefixLength(x1); }
};

class N125 : public QObject { // QNetworkCacheMetaData
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkCacheMetaData(u); }
    Q_INVOKABLE void* C(uint u, const QNetworkCacheMetaData& x1) { return new LNetworkCacheMetaData(u, x1); }
    Q_INVOKABLE QDateTime MexpirationDate(QNetworkCacheMetaData* o) const { return o->expirationDate(); }
    Q_INVOKABLE bool MisValid(QNetworkCacheMetaData* o) const { return o->isValid(); }
    Q_INVOKABLE QDateTime MlastModified(QNetworkCacheMetaData* o) const { return o->lastModified(); }
    Q_INVOKABLE bool MsaveToDisk(QNetworkCacheMetaData* o) const { return o->saveToDisk(); }
    Q_INVOKABLE void MsetExpirationDate(QNetworkCacheMetaData* o, const QDateTime& x1) { o->setExpirationDate(x1); }
    Q_INVOKABLE void MsetLastModified(QNetworkCacheMetaData* o, const QDateTime& x1) { o->setLastModified(x1); }
    Q_INVOKABLE void MsetSaveToDisk(QNetworkCacheMetaData* o, bool x1) { o->setSaveToDisk(x1); }
    Q_INVOKABLE void MsetUrl(QNetworkCacheMetaData* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE QUrl Murl(QNetworkCacheMetaData* o) const { return o->url(); }
};

class N126 : public QObject { // QNetworkConfiguration
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkConfiguration(u); }
    Q_INVOKABLE void* C(uint u, const QNetworkConfiguration& x1) { return new LNetworkConfiguration(u, x1); }
    Q_INVOKABLE int MbearerType(QNetworkConfiguration* o) const { return o->bearerType(); }
    Q_INVOKABLE int MbearerTypeFamily(QNetworkConfiguration* o) const { return o->bearerTypeFamily(); }
    Q_INVOKABLE QString MbearerTypeName(QNetworkConfiguration* o) const { return o->bearerTypeName(); }
    Q_INVOKABLE QList<QNetworkConfiguration> Mchildren(QNetworkConfiguration* o) const { return o->children(); }
    Q_INVOKABLE QString Midentifier(QNetworkConfiguration* o) const { return o->identifier(); }
    Q_INVOKABLE bool MisRoamingAvailable(QNetworkConfiguration* o) const { return o->isRoamingAvailable(); }
    Q_INVOKABLE bool MisValid(QNetworkConfiguration* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mname(QNetworkConfiguration* o) const { return o->name(); }
    Q_INVOKABLE int Mpurpose(QNetworkConfiguration* o) const { return o->purpose(); }
    Q_INVOKABLE int Mstate(QNetworkConfiguration* o) const { return o->state(); }
    Q_INVOKABLE int Mtype(QNetworkConfiguration* o) const { return o->type(); }
};

class N127 : public QObject { // QNetworkCookie
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QByteArray& x1 = QByteArray(), const QByteArray& x2 = QByteArray()) { return new LNetworkCookie(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QNetworkCookie& x1) { return new LNetworkCookie(u, x1); }
    Q_INVOKABLE QString Mdomain(QNetworkCookie* o) const { return o->domain(); }
    Q_INVOKABLE QDateTime MexpirationDate(QNetworkCookie* o) const { return o->expirationDate(); }
    Q_INVOKABLE bool MhasSameIdentifier(QNetworkCookie* o, const QNetworkCookie& x1) const { return o->hasSameIdentifier(x1); }
    Q_INVOKABLE bool MisHttpOnly(QNetworkCookie* o) const { return o->isHttpOnly(); }
    Q_INVOKABLE bool MisSecure(QNetworkCookie* o) const { return o->isSecure(); }
    Q_INVOKABLE bool MisSessionCookie(QNetworkCookie* o) const { return o->isSessionCookie(); }
    Q_INVOKABLE QByteArray Mname(QNetworkCookie* o) const { return o->name(); }
    Q_INVOKABLE void Mnormalize(QNetworkCookie* o, const QUrl& x1) { o->normalize(x1); }
    Q_INVOKABLE QString Mpath(QNetworkCookie* o) const { return o->path(); }
    Q_INVOKABLE void MsetDomain(QNetworkCookie* o, const QString& x1) { o->setDomain(x1); }
    Q_INVOKABLE void MsetExpirationDate(QNetworkCookie* o, const QDateTime& x1) { o->setExpirationDate(x1); }
    Q_INVOKABLE void MsetHttpOnly(QNetworkCookie* o, bool x1) { o->setHttpOnly(x1); }
    Q_INVOKABLE void MsetName(QNetworkCookie* o, const QByteArray& x1) { o->setName(x1); }
    Q_INVOKABLE void MsetPath(QNetworkCookie* o, const QString& x1) { o->setPath(x1); }
    Q_INVOKABLE void MsetSecure(QNetworkCookie* o, bool x1) { o->setSecure(x1); }
    Q_INVOKABLE void MsetValue(QNetworkCookie* o, const QByteArray& x1) { o->setValue(x1); }
    Q_INVOKABLE QByteArray MtoRawForm(QNetworkCookie* o, QNetworkCookie::RawForm x1 = QNetworkCookie::Full) const { return o->toRawForm(x1); }
    Q_INVOKABLE QByteArray Mvalue(QNetworkCookie* o) const { return o->value(); }
    Q_INVOKABLE QList<QNetworkCookie> SparseCookies(const QByteArray& x1) { return QNetworkCookie::parseCookies(x1); }
};

class N128 : public QObject { // QNetworkInterface
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkInterface(u); }
    Q_INVOKABLE void* C(uint u, const QNetworkInterface& x1) { return new LNetworkInterface(u, x1); }
    Q_INVOKABLE QList<QNetworkAddressEntry> MaddressEntries(QNetworkInterface* o) const { return o->addressEntries(); }
    Q_INVOKABLE int Mflags(QNetworkInterface* o) const { return o->flags(); }
    Q_INVOKABLE QString MhardwareAddress(QNetworkInterface* o) const { return o->hardwareAddress(); }
    Q_INVOKABLE QString MhumanReadableName(QNetworkInterface* o) const { return o->humanReadableName(); }
    Q_INVOKABLE int Mindex(QNetworkInterface* o) const { return o->index(); }
    Q_INVOKABLE bool MisValid(QNetworkInterface* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mname(QNetworkInterface* o) const { return o->name(); }
    Q_INVOKABLE QList<QHostAddress> SallAddresses() { return QNetworkInterface::allAddresses(); }
    Q_INVOKABLE QList<QNetworkInterface> SallInterfaces() { return QNetworkInterface::allInterfaces(); }
    Q_INVOKABLE QNetworkInterface SinterfaceFromIndex(int x1) { return QNetworkInterface::interfaceFromIndex(x1); }
    Q_INVOKABLE QNetworkInterface SinterfaceFromName(const QString& x1) { return QNetworkInterface::interfaceFromName(x1); }
};

class N129 : public QObject { // QNetworkProxy
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkProxy(u); }
    Q_INVOKABLE void* C(uint u, QNetworkProxy::ProxyType x1, const QString& x2 = QString(), quint16 x3 = 0, const QString& x4 = QString(), const QString& x5 = QString()) { return new LNetworkProxy(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QNetworkProxy& x1) { return new LNetworkProxy(u, x1); }
    Q_INVOKABLE int Mcapabilities(QNetworkProxy* o) const { return o->capabilities(); }
    Q_INVOKABLE bool MhasRawHeader(QNetworkProxy* o, const QByteArray& x1) const { return o->hasRawHeader(x1); }
    Q_INVOKABLE QVariant Mheader(QNetworkProxy* o, QNetworkRequest::KnownHeaders x1) const { return o->header(x1); }
    Q_INVOKABLE QString MhostName(QNetworkProxy* o) const { return o->hostName(); }
    Q_INVOKABLE bool MisCachingProxy(QNetworkProxy* o) const { return o->isCachingProxy(); }
    Q_INVOKABLE bool MisTransparentProxy(QNetworkProxy* o) const { return o->isTransparentProxy(); }
    Q_INVOKABLE QString Mpassword(QNetworkProxy* o) const { return o->password(); }
    Q_INVOKABLE quint16 Mport(QNetworkProxy* o) const { return o->port(); }
    Q_INVOKABLE QByteArray MrawHeader(QNetworkProxy* o, const QByteArray& x1) const { return o->rawHeader(x1); }
    Q_INVOKABLE QList<QByteArray> MrawHeaderList(QNetworkProxy* o) const { return o->rawHeaderList(); }
    Q_INVOKABLE void MsetCapabilities(QNetworkProxy* o, QNetworkProxy::Capabilities x1) { o->setCapabilities(x1); }
    Q_INVOKABLE void MsetHeader(QNetworkProxy* o, QNetworkRequest::KnownHeaders x1, const QVariant& x2) { o->setHeader(x1, x2); }
    Q_INVOKABLE void MsetHostName(QNetworkProxy* o, const QString& x1) { o->setHostName(x1); }
    Q_INVOKABLE void MsetPassword(QNetworkProxy* o, const QString& x1) { o->setPassword(x1); }
    Q_INVOKABLE void MsetPort(QNetworkProxy* o, quint16 x1) { o->setPort(x1); }
    Q_INVOKABLE void MsetRawHeader(QNetworkProxy* o, const QByteArray& x1, const QByteArray& x2) { o->setRawHeader(x1, x2); }
    Q_INVOKABLE void MsetType(QNetworkProxy* o, QNetworkProxy::ProxyType x1) { o->setType(x1); }
    Q_INVOKABLE void MsetUser(QNetworkProxy* o, const QString& x1) { o->setUser(x1); }
    Q_INVOKABLE int Mtype(QNetworkProxy* o) const { return o->type(); }
    Q_INVOKABLE QString Muser(QNetworkProxy* o) const { return o->user(); }
    Q_INVOKABLE QNetworkProxy SapplicationProxy() { return QNetworkProxy::applicationProxy(); }
    Q_INVOKABLE void SsetApplicationProxy(const QNetworkProxy& x1) { QNetworkProxy::setApplicationProxy(x1); }
};

class N130 : public QObject { // QNetworkProxyFactory
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkProxyFactory(u); }
    Q_INVOKABLE QList<QNetworkProxy> MqueryProxy(QNetworkProxyFactory* o, const QNetworkProxyQuery& x1 = QNetworkProxyQuery()) { return o->queryProxy(x1); }
    Q_INVOKABLE QList<QNetworkProxy> SproxyForQuery(const QNetworkProxyQuery& x1) { return QNetworkProxyFactory::proxyForQuery(x1); }
    Q_INVOKABLE void SsetApplicationProxyFactory(QNetworkProxyFactory* x1) { QNetworkProxyFactory::setApplicationProxyFactory(x1); }
    Q_INVOKABLE void SsetUseSystemConfiguration(bool x1) { QNetworkProxyFactory::setUseSystemConfiguration(x1); }
    Q_INVOKABLE QList<QNetworkProxy> SsystemProxyForQuery(const QNetworkProxyQuery& x1 = QNetworkProxyQuery()) { return QNetworkProxyFactory::systemProxyForQuery(x1); }
};

class N131 : public QObject { // QNetworkProxyQuery
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LNetworkProxyQuery(u); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1, QNetworkProxyQuery::QueryType x2 = QNetworkProxyQuery::UrlRequest) { return new LNetworkProxyQuery(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, int x2, const QString& x3 = QString(), QNetworkProxyQuery::QueryType x4 = QNetworkProxyQuery::TcpSocket) { return new LNetworkProxyQuery(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, quint16 x1, const QString& x2 = QString(), QNetworkProxyQuery::QueryType x3 = QNetworkProxyQuery::TcpServer) { return new LNetworkProxyQuery(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QNetworkProxyQuery& x1) { return new LNetworkProxyQuery(u, x1); }
    Q_INVOKABLE void* C(uint u, const QNetworkConfiguration& x1, const QUrl& x2, QNetworkProxyQuery::QueryType x3 = QNetworkProxyQuery::UrlRequest) { return new LNetworkProxyQuery(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QNetworkConfiguration& x1, const QString& x2, int x3, const QString& x4 = QString(), QNetworkProxyQuery::QueryType x5 = QNetworkProxyQuery::TcpSocket) { return new LNetworkProxyQuery(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QNetworkConfiguration& x1, quint16 x2, const QString& x3 = QString(), QNetworkProxyQuery::QueryType x4 = QNetworkProxyQuery::TcpServer) { return new LNetworkProxyQuery(u, x1, x2, x3, x4); }
    Q_INVOKABLE int MlocalPort(QNetworkProxyQuery* o) const { return o->localPort(); }
    Q_INVOKABLE QNetworkConfiguration MnetworkConfiguration(QNetworkProxyQuery* o) const { return o->networkConfiguration(); }
    Q_INVOKABLE QString MpeerHostName(QNetworkProxyQuery* o) const { return o->peerHostName(); }
    Q_INVOKABLE int MpeerPort(QNetworkProxyQuery* o) const { return o->peerPort(); }
    Q_INVOKABLE QString MprotocolTag(QNetworkProxyQuery* o) const { return o->protocolTag(); }
    Q_INVOKABLE int MqueryType(QNetworkProxyQuery* o) const { return o->queryType(); }
    Q_INVOKABLE void MsetLocalPort(QNetworkProxyQuery* o, int x1) { o->setLocalPort(x1); }
    Q_INVOKABLE void MsetNetworkConfiguration(QNetworkProxyQuery* o, const QNetworkConfiguration& x1) { o->setNetworkConfiguration(x1); }
    Q_INVOKABLE void MsetPeerHostName(QNetworkProxyQuery* o, const QString& x1) { o->setPeerHostName(x1); }
    Q_INVOKABLE void MsetPeerPort(QNetworkProxyQuery* o, int x1) { o->setPeerPort(x1); }
    Q_INVOKABLE void MsetProtocolTag(QNetworkProxyQuery* o, const QString& x1) { o->setProtocolTag(x1); }
    Q_INVOKABLE void MsetQueryType(QNetworkProxyQuery* o, QNetworkProxyQuery::QueryType x1) { o->setQueryType(x1); }
    Q_INVOKABLE void MsetUrl(QNetworkProxyQuery* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE QUrl Murl(QNetworkProxyQuery* o) const { return o->url(); }
};

class N132 : public QObject { // QNetworkRequest
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QUrl& x1 = QUrl()) { return new LNetworkRequest(u, x1); }
    Q_INVOKABLE void* C(uint u, const QNetworkRequest& x1) { return new LNetworkRequest(u, x1); }
    Q_INVOKABLE QVariant Mattribute(QNetworkRequest* o, QNetworkRequest::Attribute x1, const QVariant& x2 = QVariant()) const { return o->attribute(x1, x2); }
    Q_INVOKABLE bool MhasRawHeader(QNetworkRequest* o, const QByteArray& x1) const { return o->hasRawHeader(x1); }
    Q_INVOKABLE QVariant Mheader(QNetworkRequest* o, QNetworkRequest::KnownHeaders x1) const { return o->header(x1); }
    Q_INVOKABLE QObject* MoriginatingObject(QNetworkRequest* o) const { return o->originatingObject(); }
    Q_INVOKABLE int Mpriority(QNetworkRequest* o) const { return o->priority(); }
    Q_INVOKABLE QByteArray MrawHeader(QNetworkRequest* o, const QByteArray& x1) const { return o->rawHeader(x1); }
    Q_INVOKABLE QList<QByteArray> MrawHeaderList(QNetworkRequest* o) const { return o->rawHeaderList(); }
    Q_INVOKABLE void MsetAttribute(QNetworkRequest* o, QNetworkRequest::Attribute x1, const QVariant& x2) { o->setAttribute(x1, x2); }
    Q_INVOKABLE void MsetHeader(QNetworkRequest* o, QNetworkRequest::KnownHeaders x1, const QVariant& x2) { o->setHeader(x1, x2); }
    Q_INVOKABLE void MsetOriginatingObject(QNetworkRequest* o, QObject* x1) { o->setOriginatingObject(x1); }
    Q_INVOKABLE void MsetPriority(QNetworkRequest* o, QNetworkRequest::Priority x1) { o->setPriority(x1); }
    Q_INVOKABLE void MsetRawHeader(QNetworkRequest* o, const QByteArray& x1, const QByteArray& x2) { o->setRawHeader(x1, x2); }
    Q_INVOKABLE void MsetSslConfiguration(QNetworkRequest* o, const QSslConfiguration& x1) { o->setSslConfiguration(x1); }
    Q_INVOKABLE void MsetUrl(QNetworkRequest* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE QSslConfiguration MsslConfiguration(QNetworkRequest* o) const { return o->sslConfiguration(); }
    Q_INVOKABLE QUrl Murl(QNetworkRequest* o) const { return o->url(); }
};

class N205 : public QObject { // QSslCertificate
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QByteArray& x1 = QByteArray(), QSsl::EncodingFormat x2 = QSsl::Pem) { return new LSslCertificate(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSslCertificate& x1) { return new LSslCertificate(u, x1); }
    Q_INVOKABLE void Mclear(QSslCertificate* o) { o->clear(); }
    Q_INVOKABLE QByteArray Mdigest(QSslCertificate* o, QCryptographicHash::Algorithm x1 = QCryptographicHash::Md5) const { return o->digest(x1); }
    Q_INVOKABLE QDateTime MeffectiveDate(QSslCertificate* o) const { return o->effectiveDate(); }
    Q_INVOKABLE QDateTime MexpiryDate(QSslCertificate* o) const { return o->expiryDate(); }
    Q_INVOKABLE QList<QSslCertificateExtension> Mextensions(QSslCertificate* o) const { return o->extensions(); }
    Q_INVOKABLE bool MisBlacklisted(QSslCertificate* o) const { return o->isBlacklisted(); }
    Q_INVOKABLE bool MisNull(QSslCertificate* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisSelfSigned(QSslCertificate* o) const { return o->isSelfSigned(); }
    Q_INVOKABLE QStringList MissuerInfo(QSslCertificate* o, QSslCertificate::SubjectInfo x1) const { return o->issuerInfo(x1); }
    Q_INVOKABLE QStringList MissuerInfo(QSslCertificate* o, const QByteArray& x1) const { return o->issuerInfo(x1); }
    Q_INVOKABLE QList<QByteArray> MissuerInfoAttributes(QSslCertificate* o) const { return o->issuerInfoAttributes(); }
    Q_INVOKABLE QSslKey MpublicKey(QSslCertificate* o) const { return o->publicKey(); }
    Q_INVOKABLE QByteArray MserialNumber(QSslCertificate* o) const { return o->serialNumber(); }
    Q_INVOKABLE QMultiMap<QSsl::AlternativeNameEntryType,QString> MsubjectAlternativeNames(QSslCertificate* o) const { return o->subjectAlternativeNames(); }
    Q_INVOKABLE QStringList MsubjectInfo(QSslCertificate* o, QSslCertificate::SubjectInfo x1) const { return o->subjectInfo(x1); }
    Q_INVOKABLE QStringList MsubjectInfo(QSslCertificate* o, const QByteArray& x1) const { return o->subjectInfo(x1); }
    Q_INVOKABLE QList<QByteArray> MsubjectInfoAttributes(QSslCertificate* o) const { return o->subjectInfoAttributes(); }
    Q_INVOKABLE void Mswap(QSslCertificate* o, QSslCertificate& x1) { o->swap(x1); }
    Q_INVOKABLE QByteArray MtoDer(QSslCertificate* o) const { return o->toDer(); }
    Q_INVOKABLE QByteArray MtoPem(QSslCertificate* o) const { return o->toPem(); }
    Q_INVOKABLE QString MtoText(QSslCertificate* o) const { return o->toText(); }
    Q_INVOKABLE QByteArray Mversion(QSslCertificate* o) const { return o->version(); }
    Q_INVOKABLE QList<QSslCertificate> SfromData(const QByteArray& x1, QSsl::EncodingFormat x2 = QSsl::Pem) { return QSslCertificate::fromData(x1, x2); }
    Q_INVOKABLE QList<QSslCertificate> SfromPath(const QString& x1, QSsl::EncodingFormat x2 = QSsl::Pem, QRegExp::PatternSyntax x3 = QRegExp::FixedString) { return QSslCertificate::fromPath(x1, x2, x3); }
    Q_INVOKABLE QList<QSslError> Sverify(const QList<QSslCertificate>& x1, const QString& x2 = QString()) { return QSslCertificate::verify(x1, x2); }
};

class N206 : public QObject { // QSslCipher
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSslCipher(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LSslCipher(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QSsl::SslProtocol x2) { return new LSslCipher(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSslCipher& x1) { return new LSslCipher(u, x1); }
    Q_INVOKABLE QString MauthenticationMethod(QSslCipher* o) const { return o->authenticationMethod(); }
    Q_INVOKABLE QString MencryptionMethod(QSslCipher* o) const { return o->encryptionMethod(); }
    Q_INVOKABLE bool MisNull(QSslCipher* o) const { return o->isNull(); }
    Q_INVOKABLE QString MkeyExchangeMethod(QSslCipher* o) const { return o->keyExchangeMethod(); }
    Q_INVOKABLE QString Mname(QSslCipher* o) const { return o->name(); }
    Q_INVOKABLE int Mprotocol(QSslCipher* o) const { return o->protocol(); }
    Q_INVOKABLE QString MprotocolString(QSslCipher* o) const { return o->protocolString(); }
    Q_INVOKABLE int MsupportedBits(QSslCipher* o) const { return o->supportedBits(); }
    Q_INVOKABLE void Mswap(QSslCipher* o, QSslCipher& x1) { o->swap(x1); }
    Q_INVOKABLE int MusedBits(QSslCipher* o) const { return o->usedBits(); }
};

class N207 : public QObject { // QSslConfiguration
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSslConfiguration(u); }
    Q_INVOKABLE void* C(uint u, const QSslConfiguration& x1) { return new LSslConfiguration(u, x1); }
    Q_INVOKABLE QList<QByteArray> MallowedNextProtocols(QSslConfiguration* o) const { return o->allowedNextProtocols(); }
    Q_INVOKABLE QList<QSslCertificate> McaCertificates(QSslConfiguration* o) const { return o->caCertificates(); }
    Q_INVOKABLE QList<QSslCipher> Mciphers(QSslConfiguration* o) const { return o->ciphers(); }
    Q_INVOKABLE QVector<QSslEllipticCurve> MellipticCurves(QSslConfiguration* o) const { return o->ellipticCurves(); }
    Q_INVOKABLE bool MisNull(QSslConfiguration* o) const { return o->isNull(); }
    Q_INVOKABLE QSslCertificate MlocalCertificate(QSslConfiguration* o) const { return o->localCertificate(); }
    Q_INVOKABLE QList<QSslCertificate> MlocalCertificateChain(QSslConfiguration* o) const { return o->localCertificateChain(); }
    Q_INVOKABLE QByteArray MnextNegotiatedProtocol(QSslConfiguration* o) const { return o->nextNegotiatedProtocol(); }
    Q_INVOKABLE int MnextProtocolNegotiationStatus(QSslConfiguration* o) const { return o->nextProtocolNegotiationStatus(); }
    Q_INVOKABLE QSslCertificate MpeerCertificate(QSslConfiguration* o) const { return o->peerCertificate(); }
    Q_INVOKABLE QList<QSslCertificate> MpeerCertificateChain(QSslConfiguration* o) const { return o->peerCertificateChain(); }
    Q_INVOKABLE int MpeerVerifyDepth(QSslConfiguration* o) const { return o->peerVerifyDepth(); }
    Q_INVOKABLE int MpeerVerifyMode(QSslConfiguration* o) const { return o->peerVerifyMode(); }
    Q_INVOKABLE QSslKey MprivateKey(QSslConfiguration* o) const { return o->privateKey(); }
    Q_INVOKABLE int Mprotocol(QSslConfiguration* o) const { return o->protocol(); }
    Q_INVOKABLE QSslCipher MsessionCipher(QSslConfiguration* o) const { return o->sessionCipher(); }
    Q_INVOKABLE int MsessionProtocol(QSslConfiguration* o) const { return o->sessionProtocol(); }
    Q_INVOKABLE QByteArray MsessionTicket(QSslConfiguration* o) const { return o->sessionTicket(); }
    Q_INVOKABLE int MsessionTicketLifeTimeHint(QSslConfiguration* o) const { return o->sessionTicketLifeTimeHint(); }
    Q_INVOKABLE void MsetAllowedNextProtocols(QSslConfiguration* o, const QList<QByteArray>& x1) { o->setAllowedNextProtocols(x1); }
    Q_INVOKABLE void MsetCaCertificates(QSslConfiguration* o, const QList<QSslCertificate>& x1) { o->setCaCertificates(x1); }
    Q_INVOKABLE void MsetCiphers(QSslConfiguration* o, const QList<QSslCipher>& x1) { o->setCiphers(x1); }
    Q_INVOKABLE void MsetEllipticCurves(QSslConfiguration* o, const QVector<QSslEllipticCurve>& x1) { o->setEllipticCurves(x1); }
    Q_INVOKABLE void MsetLocalCertificate(QSslConfiguration* o, const QSslCertificate& x1) { o->setLocalCertificate(x1); }
    Q_INVOKABLE void MsetLocalCertificateChain(QSslConfiguration* o, const QList<QSslCertificate>& x1) { o->setLocalCertificateChain(x1); }
    Q_INVOKABLE void MsetPeerVerifyDepth(QSslConfiguration* o, int x1) { o->setPeerVerifyDepth(x1); }
    Q_INVOKABLE void MsetPeerVerifyMode(QSslConfiguration* o, QSslSocket::PeerVerifyMode x1) { o->setPeerVerifyMode(x1); }
    Q_INVOKABLE void MsetPrivateKey(QSslConfiguration* o, const QSslKey& x1) { o->setPrivateKey(x1); }
    Q_INVOKABLE void MsetProtocol(QSslConfiguration* o, QSsl::SslProtocol x1) { o->setProtocol(x1); }
    Q_INVOKABLE void MsetSessionTicket(QSslConfiguration* o, const QByteArray& x1) { o->setSessionTicket(x1); }
    Q_INVOKABLE void MsetSslOption(QSslConfiguration* o, QSsl::SslOption x1, bool x2) { o->setSslOption(x1, x2); }
    Q_INVOKABLE void Mswap(QSslConfiguration* o, QSslConfiguration& x1) { o->swap(x1); }
    Q_INVOKABLE bool MtestSslOption(QSslConfiguration* o, QSsl::SslOption x1) const { return o->testSslOption(x1); }
    Q_INVOKABLE QSslConfiguration SdefaultConfiguration() { return QSslConfiguration::defaultConfiguration(); }
    Q_INVOKABLE void SsetDefaultConfiguration(const QSslConfiguration& x1) { QSslConfiguration::setDefaultConfiguration(x1); }
    Q_INVOKABLE QList<QSslCipher> SsupportedCiphers() { return QSslConfiguration::supportedCiphers(); }
    Q_INVOKABLE QVector<QSslEllipticCurve> SsupportedEllipticCurves() { return QSslConfiguration::supportedEllipticCurves(); }
    Q_INVOKABLE QList<QSslCertificate> SsystemCaCertificates() { return QSslConfiguration::systemCaCertificates(); }
};

class N208 : public QObject { // QSslError
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSslError(u); }
    Q_INVOKABLE void* C(uint u, QSslError::SslError x1) { return new LSslError(u, x1); }
    Q_INVOKABLE void* C(uint u, QSslError::SslError x1, const QSslCertificate& x2) { return new LSslError(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSslError& x1) { return new LSslError(u, x1); }
    Q_INVOKABLE QSslCertificate Mcertificate(QSslError* o) const { return o->certificate(); }
    Q_INVOKABLE int Merror(QSslError* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QSslError* o) const { return o->errorString(); }
    Q_INVOKABLE void Mswap(QSslError* o, QSslError& x1) { o->swap(x1); }
};

class N209 : public QObject { // QSslKey
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSslKey(u); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1, QSsl::KeyAlgorithm x2, QSsl::EncodingFormat x3 = QSsl::Pem, QSsl::KeyType x4 = QSsl::PrivateKey, const QByteArray& x5 = QByteArray()) { return new LSslKey(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QSslKey& x1) { return new LSslKey(u, x1); }
    Q_INVOKABLE int Malgorithm(QSslKey* o) const { return o->algorithm(); }
    Q_INVOKABLE void Mclear(QSslKey* o) { o->clear(); }
    Q_INVOKABLE bool MisNull(QSslKey* o) const { return o->isNull(); }
    Q_INVOKABLE int Mlength(QSslKey* o) const { return o->length(); }
    Q_INVOKABLE void Mswap(QSslKey* o, QSslKey& x1) { o->swap(x1); }
    Q_INVOKABLE QByteArray MtoDer(QSslKey* o, const QByteArray& x1 = QByteArray()) const { return o->toDer(x1); }
    Q_INVOKABLE QByteArray MtoPem(QSslKey* o, const QByteArray& x1 = QByteArray()) const { return o->toPem(x1); }
    Q_INVOKABLE int Mtype(QSslKey* o) const { return o->type(); }
};

QT_END_NAMESPACE

#endif
