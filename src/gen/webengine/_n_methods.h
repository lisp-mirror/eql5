// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtWebEngineWidgets>

QT_BEGIN_NAMESPACE

class N267 : public QObject { // QWebEngineCertificateError
    Q_OBJECT
public:
    Q_INVOKABLE int Merror(QWebEngineCertificateError* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorDescription(QWebEngineCertificateError* o) const { return o->errorDescription(); }
    Q_INVOKABLE bool MisOverridable(QWebEngineCertificateError* o) const { return o->isOverridable(); }
    Q_INVOKABLE QUrl Murl(QWebEngineCertificateError* o) const { return o->url(); }
};

class N268 : public QObject { // QWebEngineFullScreenRequest
    Q_OBJECT
public:
    Q_INVOKABLE void Maccept(QWebEngineFullScreenRequest* o) { o->accept(); }
    Q_INVOKABLE QUrl Morigin(QWebEngineFullScreenRequest* o) const { return o->origin(); }
    Q_INVOKABLE void Mreject(QWebEngineFullScreenRequest* o) { o->reject(); }
    Q_INVOKABLE bool MtoggleOn(QWebEngineFullScreenRequest* o) const { return o->toggleOn(); }
};

class N269 : public QObject { // QWebEngineScript
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LWebEngineScript(u); }
    Q_INVOKABLE void* C(uint u, const QWebEngineScript& x1) { return new LWebEngineScript(u, x1); }
    Q_INVOKABLE int MinjectionPoint(QWebEngineScript* o) const { return o->injectionPoint(); }
    Q_INVOKABLE bool MisNull(QWebEngineScript* o) const { return o->isNull(); }
    Q_INVOKABLE QString Mname(QWebEngineScript* o) const { return o->name(); }
    Q_INVOKABLE bool MrunsOnSubFrames(QWebEngineScript* o) const { return o->runsOnSubFrames(); }
    Q_INVOKABLE void MsetInjectionPoint(QWebEngineScript* o, QWebEngineScript::InjectionPoint x1) { o->setInjectionPoint(x1); }
    Q_INVOKABLE void MsetName(QWebEngineScript* o, const QString& x1) { o->setName(x1); }
    Q_INVOKABLE void MsetRunsOnSubFrames(QWebEngineScript* o, bool x1) { o->setRunsOnSubFrames(x1); }
    Q_INVOKABLE void MsetSourceCode(QWebEngineScript* o, const QString& x1) { o->setSourceCode(x1); }
    Q_INVOKABLE void MsetWorldId(QWebEngineScript* o, quint32 x1) { o->setWorldId(x1); }
    Q_INVOKABLE QString MsourceCode(QWebEngineScript* o) const { return o->sourceCode(); }
    Q_INVOKABLE void Mswap(QWebEngineScript* o, QWebEngineScript& x1) { o->swap(x1); }
    Q_INVOKABLE quint32 MworldId(QWebEngineScript* o) const { return o->worldId(); }
};

class N270 : public QObject { // QWebEngineScriptCollection
    Q_OBJECT
public:
    Q_INVOKABLE void Mclear(QWebEngineScriptCollection* o) { o->clear(); }
    Q_INVOKABLE bool Mcontains(QWebEngineScriptCollection* o, const QWebEngineScript& x1) const { return o->contains(x1); }
    Q_INVOKABLE int Mcount(QWebEngineScriptCollection* o) const { return o->count(); }
    Q_INVOKABLE QWebEngineScript MfindScript(QWebEngineScriptCollection* o, const QString& x1) const { return o->findScript(x1); }
    Q_INVOKABLE QList<QWebEngineScript> MfindScripts(QWebEngineScriptCollection* o, const QString& x1) const { return o->findScripts(x1); }
    Q_INVOKABLE void Minsert(QWebEngineScriptCollection* o, const QWebEngineScript& x1) { o->insert(x1); }
    Q_INVOKABLE void Minsert(QWebEngineScriptCollection* o, const QList<QWebEngineScript>& x1) { o->insert(x1); }
    Q_INVOKABLE bool MisEmpty(QWebEngineScriptCollection* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool Mremove(QWebEngineScriptCollection* o, const QWebEngineScript& x1) { return o->remove(x1); }
    Q_INVOKABLE int Msize(QWebEngineScriptCollection* o) const { return o->size(); }
    Q_INVOKABLE QList<QWebEngineScript> MtoList(QWebEngineScriptCollection* o) const { return o->toList(); }
};

class N271 : public QObject { // QWebEngineSettings
    Q_OBJECT
public:
    Q_INVOKABLE QString MdefaultTextEncoding(QWebEngineSettings* o) const { return o->defaultTextEncoding(); }
    Q_INVOKABLE QString MfontFamily(QWebEngineSettings* o, QWebEngineSettings::FontFamily x1) const { return o->fontFamily(x1); }
    Q_INVOKABLE int MfontSize(QWebEngineSettings* o, QWebEngineSettings::FontSize x1) const { return o->fontSize(x1); }
    Q_INVOKABLE void MresetAttribute(QWebEngineSettings* o, QWebEngineSettings::WebAttribute x1) { o->resetAttribute(x1); }
    Q_INVOKABLE void MresetFontFamily(QWebEngineSettings* o, QWebEngineSettings::FontFamily x1) { o->resetFontFamily(x1); }
    Q_INVOKABLE void MresetFontSize(QWebEngineSettings* o, QWebEngineSettings::FontSize x1) { o->resetFontSize(x1); }
    Q_INVOKABLE void MsetAttribute(QWebEngineSettings* o, QWebEngineSettings::WebAttribute x1, bool x2) { o->setAttribute(x1, x2); }
    Q_INVOKABLE void MsetDefaultTextEncoding(QWebEngineSettings* o, const QString& x1) { o->setDefaultTextEncoding(x1); }
    Q_INVOKABLE void MsetFontFamily(QWebEngineSettings* o, QWebEngineSettings::FontFamily x1, const QString& x2) { o->setFontFamily(x1, x2); }
    Q_INVOKABLE void MsetFontSize(QWebEngineSettings* o, QWebEngineSettings::FontSize x1, int x2) { o->setFontSize(x1, x2); }
    Q_INVOKABLE bool MtestAttribute(QWebEngineSettings* o, QWebEngineSettings::WebAttribute x1) const { return o->testAttribute(x1); }
    Q_INVOKABLE QWebEngineSettings* SdefaultSettings() { return QWebEngineSettings::defaultSettings(); }
    Q_INVOKABLE QWebEngineSettings* SglobalSettings() { return QWebEngineSettings::globalSettings(); }
};

class N272 : public QObject { // QWebEngineUrlRequestInfo
    Q_OBJECT
public:
    Q_INVOKABLE void Mblock(QWebEngineUrlRequestInfo* o, bool x1) { o->block(x1); }
    Q_INVOKABLE QUrl MfirstPartyUrl(QWebEngineUrlRequestInfo* o) const { return o->firstPartyUrl(); }
    Q_INVOKABLE int MnavigationType(QWebEngineUrlRequestInfo* o) const { return o->navigationType(); }
    Q_INVOKABLE void Mredirect(QWebEngineUrlRequestInfo* o, const QUrl& x1) { o->redirect(x1); }
    Q_INVOKABLE QByteArray MrequestMethod(QWebEngineUrlRequestInfo* o) const { return o->requestMethod(); }
    Q_INVOKABLE QUrl MrequestUrl(QWebEngineUrlRequestInfo* o) const { return o->requestUrl(); }
    Q_INVOKABLE int MresourceType(QWebEngineUrlRequestInfo* o) const { return o->resourceType(); }
    Q_INVOKABLE void MsetHttpHeader(QWebEngineUrlRequestInfo* o, const QByteArray& x1, const QByteArray& x2) { o->setHttpHeader(x1, x2); }
};

QT_END_NAMESPACE

#endif
