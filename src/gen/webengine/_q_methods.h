// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtWebEngineWidgets>

QT_BEGIN_NAMESPACE

class Q265 : public Q142 { // QWebEngineCookieStore
    Q_OBJECT
public:
    Q_INVOKABLE void MdeleteAllCookies(QWebEngineCookieStore* o) { o->deleteAllCookies(); }
    Q_INVOKABLE void MdeleteCookie(QWebEngineCookieStore* o, const QNetworkCookie& x1, const QUrl& x2 = QUrl()) { o->deleteCookie(x1, x2); }
    Q_INVOKABLE void MdeleteSessionCookies(QWebEngineCookieStore* o) { o->deleteSessionCookies(); }
    Q_INVOKABLE void MloadAllCookies(QWebEngineCookieStore* o) { o->loadAllCookies(); }
    Q_INVOKABLE void MsetCookie(QWebEngineCookieStore* o, const QNetworkCookie& x1, const QUrl& x2 = QUrl()) { o->setCookie(x1, x2); }
};

class Q266 : public Q142 { // QWebEngineDownloadItem
    Q_OBJECT
public:
    Q_INVOKABLE quint32 Mid(QWebEngineDownloadItem* o) const { return o->id(); }
    Q_INVOKABLE bool MisFinished(QWebEngineDownloadItem* o) const { return o->isFinished(); }
    Q_INVOKABLE QString MmimeType(QWebEngineDownloadItem* o) const { return o->mimeType(); }
    Q_INVOKABLE QString Mpath(QWebEngineDownloadItem* o) const { return o->path(); }
    Q_INVOKABLE qlonglong MreceivedBytes(QWebEngineDownloadItem* o) const { return o->receivedBytes(); }
    Q_INVOKABLE int MsavePageFormat(QWebEngineDownloadItem* o) const { return o->savePageFormat(); }
    Q_INVOKABLE void MsetPath(QWebEngineDownloadItem* o, QString x1) { o->setPath(x1); }
    Q_INVOKABLE void MsetSavePageFormat(QWebEngineDownloadItem* o, QWebEngineDownloadItem::SavePageFormat x1) { o->setSavePageFormat(x1); }
    Q_INVOKABLE int Mstate(QWebEngineDownloadItem* o) const { return o->state(); }
    Q_INVOKABLE qlonglong MtotalBytes(QWebEngineDownloadItem* o) const { return o->totalBytes(); }
    Q_INVOKABLE int Mtype(QWebEngineDownloadItem* o) const { return o->type(); }
    Q_INVOKABLE QUrl Murl(QWebEngineDownloadItem* o) const { return o->url(); }
};

class Q267 : public Q142 { // QWebEnginePage
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LWebEnginePage(u, x1); }
    Q_INVOKABLE void* C(uint u, QWebEngineProfile* x1, QObject* x2 = 0) { return new LWebEnginePage(u, x1, x2); }
    Q_INVOKABLE QAction* Maction(QWebEnginePage* o, QWebEnginePage::WebAction x1) const { return o->action(x1); }
    Q_INVOKABLE QColor MbackgroundColor(QWebEnginePage* o) const { return o->backgroundColor(); }
    Q_INVOKABLE QSizeF McontentsSize(QWebEnginePage* o) const { return o->contentsSize(); }
    Q_INVOKABLE QMenu* McreateStandardContextMenu(QWebEnginePage* o) { return o->createStandardContextMenu(); }
    Q_INVOKABLE void MfindText(QWebEnginePage* o, const QString& x1, QWebEnginePage::FindFlags x2 = QWebEnginePage::FindFlags()) { o->findText(x1, x2); }
    Q_INVOKABLE void MfindText(QWebEnginePage* o, const QString& x1, QWebEnginePage::FindFlags x2, FunctorOrLambda x3) { o->findText(x1, x2, x3); }
    Q_INVOKABLE bool MhasSelection(QWebEnginePage* o) const { return o->hasSelection(); }
    Q_INVOKABLE QIcon Micon(QWebEnginePage* o) const { return o->icon(); }
    Q_INVOKABLE QUrl MiconUrl(QWebEnginePage* o) const { return o->iconUrl(); }
    Q_INVOKABLE bool MisAudioMuted(QWebEnginePage* o) const { return o->isAudioMuted(); }
    Q_INVOKABLE void Mload(QWebEnginePage* o, const QUrl& x1) { o->load(x1); }
    Q_INVOKABLE void Mprint(QWebEnginePage* o, QPrinter* x1, FunctorOrLambda x2) { o->print(x1, x2); }
    Q_INVOKABLE void MprintToPdf(QWebEnginePage* o, const QString& x1, const QPageLayout& x2 = QPageLayout_DEFAULT) { o->printToPdf(x1, x2); }
    Q_INVOKABLE void MprintToPdf(QWebEnginePage* o, FunctorOrLambda x1, const QPageLayout& x2 = QPageLayout_DEFAULT) { o->printToPdf(x1, x2); }
    Q_INVOKABLE QWebEngineProfile* Mprofile(QWebEnginePage* o) const { return o->profile(); }
    Q_INVOKABLE bool MrecentlyAudible(QWebEnginePage* o) const { return o->recentlyAudible(); }
    Q_INVOKABLE void MreplaceMisspelledWord(QWebEnginePage* o, const QString& x1) { o->replaceMisspelledWord(x1); }
    Q_INVOKABLE QUrl MrequestedUrl(QWebEnginePage* o) const { return o->requestedUrl(); }
    Q_INVOKABLE void MrunJavaScript(QWebEnginePage* o, const QString& x1, quint32 x2, FunctorOrLambda x3) { o->runJavaScript(x1, x2, x3); }
    Q_INVOKABLE void MrunJavaScript(QWebEnginePage* o, const QString& x1, quint32 x2) { o->runJavaScript(x1, x2); }
    Q_INVOKABLE void MrunJavaScript(QWebEnginePage* o, const QString& x1, FunctorOrLambda x2) { o->runJavaScript(x1, x2); }
    Q_INVOKABLE void MrunJavaScript(QWebEnginePage* o, const QString& x1) { o->runJavaScript(x1); }
    Q_INVOKABLE void Msave(QWebEnginePage* o, const QString& x1, QWebEngineDownloadItem::SavePageFormat x2 = QWebEngineDownloadItem::MimeHtmlSaveFormat) const { o->save(x1, x2); }
    Q_INVOKABLE QPointF MscrollPosition(QWebEnginePage* o) const { return o->scrollPosition(); }
    Q_INVOKABLE QString MselectedText(QWebEnginePage* o) const { return o->selectedText(); }
    Q_INVOKABLE void MsetAudioMuted(QWebEnginePage* o, bool x1) { o->setAudioMuted(x1); }
    Q_INVOKABLE void MsetBackgroundColor(QWebEnginePage* o, const QColor& x1) { o->setBackgroundColor(x1); }
    Q_INVOKABLE void MsetContent(QWebEnginePage* o, const QByteArray& x1, const QString& x2 = QString(), const QUrl& x3 = QUrl()) { o->setContent(x1, x2, x3); }
    Q_INVOKABLE void MsetFeaturePermission(QWebEnginePage* o, const QUrl& x1, QWebEnginePage::Feature x2, QWebEnginePage::PermissionPolicy x3) { o->setFeaturePermission(x1, x2, x3); }
    Q_INVOKABLE void MsetHtml(QWebEnginePage* o, const QString& x1, const QUrl& x2 = QUrl()) { o->setHtml(x1, x2); }
    Q_INVOKABLE void MsetUrl(QWebEnginePage* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE void MsetView(QWebEnginePage* o, QWidget* x1) { o->setView(x1); }
    Q_INVOKABLE void MsetZoomFactor(QWebEnginePage* o, qreal x1) { o->setZoomFactor(x1); }
    Q_INVOKABLE QWebEngineSettings* Msettings(QWebEnginePage* o) const { return o->settings(); }
    Q_INVOKABLE QString Mtitle(QWebEnginePage* o) const { return o->title(); }
    Q_INVOKABLE void MtoHtml(QWebEnginePage* o, FunctorOrLambda x1) const { o->toHtml(x1); }
    Q_INVOKABLE void MtoPlainText(QWebEnginePage* o, FunctorOrLambda x1) const { o->toPlainText(x1); }
    Q_INVOKABLE void MtriggerAction(QWebEnginePage* o, QWebEnginePage::WebAction x1, bool x2 = false) { o->triggerAction(x1, x2); }
    Q_INVOKABLE QUrl Murl(QWebEnginePage* o) const { return o->url(); }
    Q_INVOKABLE QWidget* Mview(QWebEnginePage* o) const { return o->view(); }
    Q_INVOKABLE qreal MzoomFactor(QWebEnginePage* o) const { return o->zoomFactor(); }
    Q_INVOKABLE bool Mevent(QWebEnginePage* o, QEvent* x1) { return o->event(x1); }
};

class Q268 : public Q142 { // QWebEngineProfile
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LWebEngineProfile(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QObject* x2 = 0) { return new LWebEngineProfile(u, x1, x2); }
    Q_INVOKABLE QString McachePath(QWebEngineProfile* o) const { return o->cachePath(); }
    Q_INVOKABLE void MclearAllVisitedLinks(QWebEngineProfile* o) { o->clearAllVisitedLinks(); }
    Q_INVOKABLE void MclearHttpCache(QWebEngineProfile* o) { o->clearHttpCache(); }
    Q_INVOKABLE void MclearVisitedLinks(QWebEngineProfile* o, const QList<QUrl>& x1) { o->clearVisitedLinks(x1); }
    Q_INVOKABLE QWebEngineCookieStore* McookieStore(QWebEngineProfile* o) { return o->cookieStore(); }
    Q_INVOKABLE QString MhttpAcceptLanguage(QWebEngineProfile* o) const { return o->httpAcceptLanguage(); }
    Q_INVOKABLE int MhttpCacheMaximumSize(QWebEngineProfile* o) const { return o->httpCacheMaximumSize(); }
    Q_INVOKABLE int MhttpCacheType(QWebEngineProfile* o) const { return o->httpCacheType(); }
    Q_INVOKABLE QString MhttpUserAgent(QWebEngineProfile* o) const { return o->httpUserAgent(); }
    Q_INVOKABLE bool MisOffTheRecord(QWebEngineProfile* o) const { return o->isOffTheRecord(); }
    Q_INVOKABLE bool MisSpellCheckEnabled(QWebEngineProfile* o) const { return o->isSpellCheckEnabled(); }
    Q_INVOKABLE int MpersistentCookiesPolicy(QWebEngineProfile* o) const { return o->persistentCookiesPolicy(); }
    Q_INVOKABLE QString MpersistentStoragePath(QWebEngineProfile* o) const { return o->persistentStoragePath(); }
    Q_INVOKABLE void MremoveUrlScheme(QWebEngineProfile* o, const QByteArray& x1) { o->removeUrlScheme(x1); }
    Q_INVOKABLE QWebEngineScriptCollection* Mscripts(QWebEngineProfile* o) const { return o->scripts(); }
    Q_INVOKABLE void MsetCachePath(QWebEngineProfile* o, const QString& x1) { o->setCachePath(x1); }
    Q_INVOKABLE void MsetHttpAcceptLanguage(QWebEngineProfile* o, const QString& x1) { o->setHttpAcceptLanguage(x1); }
    Q_INVOKABLE void MsetHttpCacheMaximumSize(QWebEngineProfile* o, int x1) { o->setHttpCacheMaximumSize(x1); }
    Q_INVOKABLE void MsetHttpCacheType(QWebEngineProfile* o, QWebEngineProfile::HttpCacheType x1) { o->setHttpCacheType(x1); }
    Q_INVOKABLE void MsetHttpUserAgent(QWebEngineProfile* o, const QString& x1) { o->setHttpUserAgent(x1); }
    Q_INVOKABLE void MsetPersistentCookiesPolicy(QWebEngineProfile* o, QWebEngineProfile::PersistentCookiesPolicy x1) { o->setPersistentCookiesPolicy(x1); }
    Q_INVOKABLE void MsetPersistentStoragePath(QWebEngineProfile* o, const QString& x1) { o->setPersistentStoragePath(x1); }
    Q_INVOKABLE void MsetRequestInterceptor(QWebEngineProfile* o, QWebEngineUrlRequestInterceptor* x1) { o->setRequestInterceptor(x1); }
    Q_INVOKABLE void MsetSpellCheckEnabled(QWebEngineProfile* o, bool x1) { o->setSpellCheckEnabled(x1); }
    Q_INVOKABLE void MsetSpellCheckLanguages(QWebEngineProfile* o, const QStringList& x1) { o->setSpellCheckLanguages(x1); }
    Q_INVOKABLE QWebEngineSettings* Msettings(QWebEngineProfile* o) const { return o->settings(); }
    Q_INVOKABLE QStringList MspellCheckLanguages(QWebEngineProfile* o) const { return o->spellCheckLanguages(); }
    Q_INVOKABLE QString MstorageName(QWebEngineProfile* o) const { return o->storageName(); }
    Q_INVOKABLE bool MvisitedLinksContainsUrl(QWebEngineProfile* o, const QUrl& x1) const { return o->visitedLinksContainsUrl(x1); }
    Q_INVOKABLE QWebEngineProfile* SdefaultProfile() { return QWebEngineProfile::defaultProfile(); }
};

class Q269 : public Q142 { // QWebEngineUrlRequestInterceptor
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LWebEngineUrlRequestInterceptor(u, x1); }
    Q_INVOKABLE void MinterceptRequest(QWebEngineUrlRequestInterceptor* o, QWebEngineUrlRequestInfo& x1) { o->interceptRequest(x1); }
};

class Q270 : public Q142 { // QWebEngineUrlRequestJob
    Q_OBJECT
public:
    Q_INVOKABLE void Mfail(QWebEngineUrlRequestJob* o, QWebEngineUrlRequestJob::Error x1) { o->fail(x1); }
    Q_INVOKABLE void Mredirect(QWebEngineUrlRequestJob* o, const QUrl& x1) { o->redirect(x1); }
    Q_INVOKABLE QByteArray MrequestMethod(QWebEngineUrlRequestJob* o) const { return o->requestMethod(); }
    Q_INVOKABLE QUrl MrequestUrl(QWebEngineUrlRequestJob* o) const { return o->requestUrl(); }
};

class Q271 : public Q142 { // QWebEngineUrlSchemeHandler
    Q_OBJECT
public:
    Q_INVOKABLE void MrequestStarted(QWebEngineUrlSchemeHandler* o, QWebEngineUrlRequestJob* x1) { o->requestStarted(x1); }
};

class Q272 : public Q279 { // QWebEngineView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LWebEngineView(u, x1); }
    Q_INVOKABLE void MfindText(QWebEngineView* o, const QString& x1, QWebEnginePage::FindFlags x2 = QWebEnginePage::FindFlags()) { o->findText(x1, x2); }
    Q_INVOKABLE void MfindText(QWebEngineView* o, const QString& x1, QWebEnginePage::FindFlags x2, FunctorOrLambda x3) { o->findText(x1, x2, x3); }
    Q_INVOKABLE bool MhasSelection(QWebEngineView* o) const { return o->hasSelection(); }
    Q_INVOKABLE QIcon Micon(QWebEngineView* o) const { return o->icon(); }
    Q_INVOKABLE QUrl MiconUrl(QWebEngineView* o) const { return o->iconUrl(); }
    Q_INVOKABLE void Mload(QWebEngineView* o, const QUrl& x1) { o->load(x1); }
    Q_INVOKABLE QWebEnginePage* Mpage(QWebEngineView* o) const { return o->page(); }
    Q_INVOKABLE QAction* MpageAction(QWebEngineView* o, QWebEnginePage::WebAction x1) const { return o->pageAction(x1); }
    Q_INVOKABLE QString MselectedText(QWebEngineView* o) const { return o->selectedText(); }
    Q_INVOKABLE void MsetContent(QWebEngineView* o, const QByteArray& x1, const QString& x2 = QString(), const QUrl& x3 = QUrl()) { o->setContent(x1, x2, x3); }
    Q_INVOKABLE void MsetHtml(QWebEngineView* o, const QString& x1, const QUrl& x2 = QUrl()) { o->setHtml(x1, x2); }
    Q_INVOKABLE void MsetPage(QWebEngineView* o, QWebEnginePage* x1) { o->setPage(x1); }
    Q_INVOKABLE void MsetUrl(QWebEngineView* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE void MsetZoomFactor(QWebEngineView* o, qreal x1) { o->setZoomFactor(x1); }
    Q_INVOKABLE QWebEngineSettings* Msettings(QWebEngineView* o) const { return o->settings(); }
    Q_INVOKABLE QString Mtitle(QWebEngineView* o) const { return o->title(); }
    Q_INVOKABLE void MtriggerPageAction(QWebEngineView* o, QWebEnginePage::WebAction x1, bool x2 = false) { o->triggerPageAction(x1, x2); }
    Q_INVOKABLE QUrl Murl(QWebEngineView* o) const { return o->url(); }
    Q_INVOKABLE qreal MzoomFactor(QWebEngineView* o) const { return o->zoomFactor(); }
    Q_INVOKABLE QSize MsizeHint(QWebEngineView* o) const { return o->sizeHint(); }
};

QT_END_NAMESPACE

#endif
