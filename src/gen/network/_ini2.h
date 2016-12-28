#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../_lobjects.h"
#include "../../eql.h"
#include <QtGui>

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

void ini2() {
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

void* toMetaArg(int n, cl_object l_arg, bool* found) {
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

cl_object to_lisp_arg(int n, void* p, bool* found) {
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

QT_END_NAMESPACE

#endif
