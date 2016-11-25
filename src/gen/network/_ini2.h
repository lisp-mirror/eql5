#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QHostAddress, qhostaddress)
TO_QT_TYPE_PTR (QHostInfo, qhostinfo)
TO_QT_TYPE_PTR (QNetworkCacheMetaData, qnetworkcachemetadata)
TO_QT_TYPE_PTR (QNetworkInterface, qnetworkinterface)
TO_QT_TYPE_PTR (QNetworkProxy, qnetworkproxy)
TO_QT_TYPE_PTR (QNetworkRequest, qnetworkrequest)
TO_QT_TYPE_PTR (QSslCertificate, qsslcertificate)
TO_QT_TYPE_PTR (QSslCipher, qsslcipher)
TO_QT_TYPE_PTR (QSslConfiguration, qsslconfiguration)
TO_QT_TYPE_PTR (QSslKey, qsslkey)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

void ini2() {
    META_TYPE_(LObjects::T_QHostAddress,          QHostAddress)
    META_TYPE_(LObjects::T_QHostInfo,             QHostInfo)
    META_TYPE_(LObjects::T_QNetworkCacheMetaData, QNetworkCacheMetaData)
    META_TYPE_(LObjects::T_QNetworkInterface,     QNetworkInterface)
    META_TYPE_(LObjects::T_QNetworkProxy,         QNetworkProxy)
    META_TYPE_(LObjects::T_QNetworkRequest,       QNetworkRequest)
    META_TYPE_(LObjects::T_QSslCertificate,       QSslCertificate)
    META_TYPE_(LObjects::T_QSslCipher,            QSslCipher)
    META_TYPE_(LObjects::T_QSslConfiguration,     QSslConfiguration)
    META_TYPE_(LObjects::T_QSslKey,               QSslKey) }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_QHostAddress == n)               { p = new QHostAddress(*toQHostAddressPointer(l_arg)); }
    else if(LObjects::T_QHostInfo == n)             { p = new QHostInfo(*toQHostInfoPointer(l_arg)); }
    else if(LObjects::T_QNetworkCacheMetaData == n) { p = new QNetworkCacheMetaData(*toQNetworkCacheMetaDataPointer(l_arg)); }
    else if(LObjects::T_QNetworkInterface == n)     { p = new QNetworkInterface(*toQNetworkInterfacePointer(l_arg)); }
    else if(LObjects::T_QNetworkProxy == n)         { p = new QNetworkProxy(*toQNetworkProxyPointer(l_arg)); }
    else if(LObjects::T_QNetworkRequest == n)       { p = new QNetworkRequest(*toQNetworkRequestPointer(l_arg)); }
    else if(LObjects::T_QSslCertificate == n)       { p = new QSslCertificate(*toQSslCertificatePointer(l_arg)); }
    else if(LObjects::T_QSslCipher == n)            { p = new QSslCipher(*toQSslCipherPointer(l_arg)); }
    else if(LObjects::T_QSslConfiguration == n)     { p = new QSslConfiguration(*toQSslConfigurationPointer(l_arg)); }
    else if(LObjects::T_QSslKey == n)               { p = new QSslKey(*toQSslKeyPointer(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_QHostAddress == n)               { l_ret = from_qhostaddress(*(QHostAddress*)p); }
    else if(LObjects::T_QHostInfo == n)             { l_ret = from_qhostinfo(*(QHostInfo*)p); }
    else if(LObjects::T_QNetworkCacheMetaData == n) { l_ret = from_qnetworkcachemetadata(*(QNetworkCacheMetaData*)p); }
    else if(LObjects::T_QNetworkInterface == n)     { l_ret = from_qnetworkinterface(*(QNetworkInterface*)p); }
    else if(LObjects::T_QNetworkProxy == n)         { l_ret = from_qnetworkproxy(*(QNetworkProxy*)p); }
    else if(LObjects::T_QNetworkRequest == n)       { l_ret = from_qnetworkrequest(*(QNetworkRequest*)p); }
    else if(LObjects::T_QSslCertificate == n)       { l_ret = from_qsslcertificate(*(QSslCertificate*)p); }
    else if(LObjects::T_QSslCipher == n)            { l_ret = from_qsslcipher(*(QSslCipher*)p); }
    else if(LObjects::T_QSslConfiguration == n)     { l_ret = from_qsslconfiguration(*(QSslConfiguration*)p); }
    else if(LObjects::T_QSslKey == n)               { l_ret = from_qsslkey(*(QSslKey*)p); }
    return l_ret; }

QT_END_NAMESPACE

#endif
