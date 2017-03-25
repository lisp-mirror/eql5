// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LAuthenticator : public QAuthenticator {
    friend class N21;
public:
    LAuthenticator(uint u) : unique(u) {}
    LAuthenticator(uint u, const QAuthenticator& x1) : QAuthenticator(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHostAddress : public QHostAddress {
    friend class N90;
public:
    LHostAddress(uint u) : unique(u) {}
    LHostAddress(uint u, quint32 x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, const QString& x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, const QHostAddress& x1) : QHostAddress(x1), unique(u) {}
    LHostAddress(uint u, SpecialAddress x1) : QHostAddress(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHostInfo : public QHostInfo {
    friend class N91;
public:
    LHostInfo(uint u, int x1 = -1) : QHostInfo(x1), unique(u) {}
    LHostInfo(uint u, const QHostInfo& x1) : QHostInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHttpPart : public QHttpPart {
    friend class N93;
public:
    LHttpPart(uint u) : unique(u) {}
    LHttpPart(uint u, const QHttpPart& x1) : QHttpPart(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkAddressEntry : public QNetworkAddressEntry {
    friend class N124;
public:
    LNetworkAddressEntry(uint u) : unique(u) {}
    LNetworkAddressEntry(uint u, const QNetworkAddressEntry& x1) : QNetworkAddressEntry(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkCacheMetaData : public QNetworkCacheMetaData {
    friend class N125;
public:
    LNetworkCacheMetaData(uint u) : unique(u) {}
    LNetworkCacheMetaData(uint u, const QNetworkCacheMetaData& x1) : QNetworkCacheMetaData(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkConfiguration : public QNetworkConfiguration {
    friend class N126;
public:
    LNetworkConfiguration(uint u) : unique(u) {}
    LNetworkConfiguration(uint u, const QNetworkConfiguration& x1) : QNetworkConfiguration(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkCookie : public QNetworkCookie {
    friend class N127;
public:
    LNetworkCookie(uint u, const QByteArray& x1 = QByteArray(), const QByteArray& x2 = QByteArray()) : QNetworkCookie(x1, x2), unique(u) {}
    LNetworkCookie(uint u, const QNetworkCookie& x1) : QNetworkCookie(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkInterface : public QNetworkInterface {
    friend class N128;
public:
    LNetworkInterface(uint u) : unique(u) {}
    LNetworkInterface(uint u, const QNetworkInterface& x1) : QNetworkInterface(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkProxy : public QNetworkProxy {
    friend class N129;
public:
    LNetworkProxy(uint u) : unique(u) {}
    LNetworkProxy(uint u, ProxyType x1, const QString& x2 = QString(), quint16 x3 = 0, const QString& x4 = QString(), const QString& x5 = QString()) : QNetworkProxy(x1, x2, x3, x4, x5), unique(u) {}
    LNetworkProxy(uint u, const QNetworkProxy& x1) : QNetworkProxy(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkProxyFactory : public QNetworkProxyFactory {
    friend class N130;
public:
    LNetworkProxyFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& x1 = QNetworkProxyQuery()) { quint64 id = LObjects::override_id(unique, 526); void* fun = LObjects::overrideFun(id); QList<QNetworkProxy> ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 526, args, id).value<QList<QNetworkProxy> >(); } return ret; }
};

class LNetworkProxyQuery : public QNetworkProxyQuery {
    friend class N131;
public:
    LNetworkProxyQuery(uint u) : unique(u) {}
    LNetworkProxyQuery(uint u, const QUrl& x1, QueryType x2 = UrlRequest) : QNetworkProxyQuery(x1, x2), unique(u) {}
    LNetworkProxyQuery(uint u, const QString& x1, int x2, const QString& x3 = QString(), QueryType x4 = TcpSocket) : QNetworkProxyQuery(x1, x2, x3, x4), unique(u) {}
    LNetworkProxyQuery(uint u, quint16 x1, const QString& x2 = QString(), QueryType x3 = TcpServer) : QNetworkProxyQuery(x1, x2, x3), unique(u) {}
    LNetworkProxyQuery(uint u, const QNetworkProxyQuery& x1) : QNetworkProxyQuery(x1), unique(u) {}
    LNetworkProxyQuery(uint u, const QNetworkConfiguration& x1, const QUrl& x2, QueryType x3 = UrlRequest) : QNetworkProxyQuery(x1, x2, x3), unique(u) {}
    LNetworkProxyQuery(uint u, const QNetworkConfiguration& x1, const QString& x2, int x3, const QString& x4 = QString(), QueryType x5 = TcpSocket) : QNetworkProxyQuery(x1, x2, x3, x4, x5), unique(u) {}
    LNetworkProxyQuery(uint u, const QNetworkConfiguration& x1, quint16 x2, const QString& x3 = QString(), QueryType x4 = TcpServer) : QNetworkProxyQuery(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LNetworkRequest : public QNetworkRequest {
    friend class N132;
public:
    LNetworkRequest(uint u, const QUrl& x1 = QUrl()) : QNetworkRequest(x1), unique(u) {}
    LNetworkRequest(uint u, const QNetworkRequest& x1) : QNetworkRequest(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslCertificate : public QSslCertificate {
    friend class N204;
public:
    LSslCertificate(uint u, const QByteArray& x1 = QByteArray(), QSsl::EncodingFormat x2 = QSsl::Pem) : QSslCertificate(x1, x2), unique(u) {}
    LSslCertificate(uint u, const QSslCertificate& x1) : QSslCertificate(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslCipher : public QSslCipher {
    friend class N205;
public:
    LSslCipher(uint u) : unique(u) {}
    LSslCipher(uint u, const QString& x1) : QSslCipher(x1), unique(u) {}
    LSslCipher(uint u, const QString& x1, QSsl::SslProtocol x2) : QSslCipher(x1, x2), unique(u) {}
    LSslCipher(uint u, const QSslCipher& x1) : QSslCipher(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslConfiguration : public QSslConfiguration {
    friend class N206;
public:
    LSslConfiguration(uint u) : unique(u) {}
    LSslConfiguration(uint u, const QSslConfiguration& x1) : QSslConfiguration(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslError : public QSslError {
    friend class N207;
public:
    LSslError(uint u) : unique(u) {}
    LSslError(uint u, SslError x1) : QSslError(x1), unique(u) {}
    LSslError(uint u, SslError x1, const QSslCertificate& x2) : QSslError(x1, x2), unique(u) {}
    LSslError(uint u, const QSslError& x1) : QSslError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSslKey : public QSslKey {
    friend class N208;
public:
    LSslKey(uint u) : unique(u) {}
    LSslKey(uint u, const QByteArray& x1, QSsl::KeyAlgorithm x2, QSsl::EncodingFormat x3 = QSsl::Pem, QSsl::KeyType x4 = QSsl::PrivateKey, const QByteArray& x5 = QByteArray()) : QSslKey(x1, x2, x3, x4, x5), unique(u) {}
    LSslKey(uint u, const QSslKey& x1) : QSslKey(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

QT_END_NAMESPACE

#endif
