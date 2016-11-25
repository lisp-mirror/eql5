// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtWebKitWidgets>

QT_BEGIN_NAMESPACE

class Q209 : public Q124 { // QWebFrame
    Q_OBJECT
public:
    Q_INVOKABLE void MaddToJavaScriptWindowObject(QWebFrame* o, const QString& x1, QObject* x2, QWebFrame::ValueOwnership x3 = QWebFrame::QtOwnership) { o->addToJavaScriptWindowObject(x1, x2, x3); }
    Q_INVOKABLE QUrl MbaseUrl(QWebFrame* o) const { return o->baseUrl(); }
    Q_INVOKABLE QList<QWebFrame*> MchildFrames(QWebFrame* o) const { return o->childFrames(); }
    Q_INVOKABLE QSize McontentsSize(QWebFrame* o) const { return o->contentsSize(); }
    Q_INVOKABLE QWebElement MdocumentElement(QWebFrame* o) const { return o->documentElement(); }
    Q_INVOKABLE QWebElementCollection MfindAllElements(QWebFrame* o, const QString& x1) const { return o->findAllElements(x1); }
    Q_INVOKABLE QWebElement MfindFirstElement(QWebFrame* o, const QString& x1) const { return o->findFirstElement(x1); }
    Q_INVOKABLE QString MframeName(QWebFrame* o) const { return o->frameName(); }
    Q_INVOKABLE QRect Mgeometry(QWebFrame* o) const { return o->geometry(); }
    Q_INVOKABLE bool MhasFocus(QWebFrame* o) const { return o->hasFocus(); }
    Q_INVOKABLE QWebHitTestResult MhitTestContent(QWebFrame* o, const QPoint& x1) const { return o->hitTestContent(x1); }
    Q_INVOKABLE QIcon Micon(QWebFrame* o) const { return o->icon(); }
    Q_INVOKABLE void Mload(QWebFrame* o, const QUrl& x1) { o->load(x1); }
    Q_INVOKABLE void Mload(QWebFrame* o, const QNetworkRequest& x1, QNetworkAccessManager::Operation x2 = QNetworkAccessManager::GetOperation, const QByteArray& x3 = QByteArray()) { o->load(x1, x2, x3); }
    Q_INVOKABLE QMultiMap<QString,QString> MmetaData(QWebFrame* o) const { return o->metaData(); }
    Q_INVOKABLE QWebPage* Mpage(QWebFrame* o) const { return o->page(); }
    Q_INVOKABLE QWebFrame* MparentFrame(QWebFrame* o) const { return o->parentFrame(); }
    Q_INVOKABLE QPoint Mpos(QWebFrame* o) const { return o->pos(); }
    Q_INVOKABLE void Mrender(QWebFrame* o, QPainter* x1, const QRegion& x2 = QRegion()) { o->render(x1, x2); }
    Q_INVOKABLE void Mrender(QWebFrame* o, QPainter* x1, QWebFrame::RenderLayers x2, const QRegion& x3 = QRegion()) { o->render(x1, x2, x3); }
    Q_INVOKABLE QUrl MrequestedUrl(QWebFrame* o) const { return o->requestedUrl(); }
    Q_INVOKABLE void Mscroll(QWebFrame* o, int x1, int x2) { o->scroll(x1, x2); }
    Q_INVOKABLE QRect MscrollBarGeometry(QWebFrame* o, Qt::Orientation x1) const { return o->scrollBarGeometry(x1); }
    Q_INVOKABLE int MscrollBarMaximum(QWebFrame* o, Qt::Orientation x1) const { return o->scrollBarMaximum(x1); }
    Q_INVOKABLE int MscrollBarMinimum(QWebFrame* o, Qt::Orientation x1) const { return o->scrollBarMinimum(x1); }
    Q_INVOKABLE int MscrollBarPolicy(QWebFrame* o, Qt::Orientation x1) const { return o->scrollBarPolicy(x1); }
    Q_INVOKABLE int MscrollBarValue(QWebFrame* o, Qt::Orientation x1) const { return o->scrollBarValue(x1); }
    Q_INVOKABLE QPoint MscrollPosition(QWebFrame* o) const { return o->scrollPosition(); }
    Q_INVOKABLE void MscrollToAnchor(QWebFrame* o, const QString& x1) { o->scrollToAnchor(x1); }
    Q_INVOKABLE QWebSecurityOrigin MsecurityOrigin(QWebFrame* o) const { return o->securityOrigin(); }
    Q_INVOKABLE void MsetContent(QWebFrame* o, const QByteArray& x1, const QString& x2 = QString(), const QUrl& x3 = QUrl()) { o->setContent(x1, x2, x3); }
    Q_INVOKABLE void MsetFocus(QWebFrame* o) { o->setFocus(); }
    Q_INVOKABLE void MsetHtml(QWebFrame* o, const QString& x1, const QUrl& x2 = QUrl()) { o->setHtml(x1, x2); }
    Q_INVOKABLE void MsetScrollBarPolicy(QWebFrame* o, Qt::Orientation x1, Qt::ScrollBarPolicy x2) { o->setScrollBarPolicy(x1, x2); }
    Q_INVOKABLE void MsetScrollBarValue(QWebFrame* o, Qt::Orientation x1, int x2) { o->setScrollBarValue(x1, x2); }
    Q_INVOKABLE void MsetScrollPosition(QWebFrame* o, const QPoint& x1) { o->setScrollPosition(x1); }
    Q_INVOKABLE void MsetTextSizeMultiplier(QWebFrame* o, qreal x1) { o->setTextSizeMultiplier(x1); }
    Q_INVOKABLE void MsetUrl(QWebFrame* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE void MsetZoomFactor(QWebFrame* o, qreal x1) { o->setZoomFactor(x1); }
    Q_INVOKABLE qreal MtextSizeMultiplier(QWebFrame* o) const { return o->textSizeMultiplier(); }
    Q_INVOKABLE QString Mtitle(QWebFrame* o) const { return o->title(); }
    Q_INVOKABLE QString MtoHtml(QWebFrame* o) const { return o->toHtml(); }
    Q_INVOKABLE QString MtoPlainText(QWebFrame* o) const { return o->toPlainText(); }
    Q_INVOKABLE QUrl Murl(QWebFrame* o) const { return o->url(); }
    Q_INVOKABLE qreal MzoomFactor(QWebFrame* o) const { return o->zoomFactor(); }
    Q_INVOKABLE bool Mevent(QWebFrame* o, QEvent* x1) { return o->event(x1); }
};

class Q210 : public Q124 { // QWebHistoryInterface
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LWebHistoryInterface(u, x1); }
    Q_INVOKABLE void MaddHistoryEntry(QWebHistoryInterface* o, const QString& x1) { o->addHistoryEntry(x1); }
    Q_INVOKABLE bool MhistoryContains(QWebHistoryInterface* o, const QString& x1) const { return o->historyContains(x1); }
    Q_INVOKABLE QWebHistoryInterface* SdefaultInterface() { return QWebHistoryInterface::defaultInterface(); }
    Q_INVOKABLE void SsetDefaultInterface(QWebHistoryInterface* x1) { QWebHistoryInterface::setDefaultInterface(x1); }
};

class Q212 : public Q124 { // QWebPage
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LWebPage(u, x1); }
    Q_INVOKABLE QAction* Maction(QWebPage* o, QWebPage::WebAction x1) const { return o->action(x1); }
    Q_INVOKABLE quint64 MbytesReceived(QWebPage* o) const { return o->bytesReceived(); }
    Q_INVOKABLE QMenu* McreateStandardContextMenu(QWebPage* o) { return o->createStandardContextMenu(); }
    Q_INVOKABLE QWebFrame* McurrentFrame(QWebPage* o) const { return o->currentFrame(); }
    Q_INVOKABLE bool Mextension(QWebPage* o, QWebPage::Extension x1, const QWebPage::ExtensionOption* x2 = 0, QWebPage::ExtensionReturn* x3 = 0) { return o->extension(x1, x2, x3); }
    Q_INVOKABLE bool MfindText(QWebPage* o, const QString& x1, QWebPage::FindFlags x2 = 0) { return o->findText(x1, x2); }
    Q_INVOKABLE bool MfocusNextPrevChild(QWebPage* o, bool x1) { return o->focusNextPrevChild(x1); }
    Q_INVOKABLE bool MforwardUnsupportedContent(QWebPage* o) const { return o->forwardUnsupportedContent(); }
    Q_INVOKABLE QWebFrame* MframeAt(QWebPage* o, const QPoint& x1) const { return o->frameAt(x1); }
    Q_INVOKABLE bool MhasSelection(QWebPage* o) const { return o->hasSelection(); }
    Q_INVOKABLE QWebHistory* Mhistory(QWebPage* o) const { return o->history(); }
    Q_INVOKABLE QVariant MinputMethodQuery(QWebPage* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE bool MisContentEditable(QWebPage* o) const { return o->isContentEditable(); }
    Q_INVOKABLE bool MisModified(QWebPage* o) const { return o->isModified(); }
    Q_INVOKABLE int MlinkDelegationPolicy(QWebPage* o) const { return o->linkDelegationPolicy(); }
    Q_INVOKABLE QWebFrame* MmainFrame(QWebPage* o) const { return o->mainFrame(); }
    Q_INVOKABLE QNetworkAccessManager* MnetworkAccessManager(QWebPage* o) const { return o->networkAccessManager(); }
    Q_INVOKABLE QPalette Mpalette(QWebPage* o) const { return o->palette(); }
    Q_INVOKABLE QWebPluginFactory* MpluginFactory(QWebPage* o) const { return o->pluginFactory(); }
    Q_INVOKABLE QSize MpreferredContentsSize(QWebPage* o) const { return o->preferredContentsSize(); }
    Q_INVOKABLE QString MselectedHtml(QWebPage* o) const { return o->selectedHtml(); }
    Q_INVOKABLE QString MselectedText(QWebPage* o) const { return o->selectedText(); }
    Q_INVOKABLE void MsetActualVisibleContentRect(QWebPage* o, const QRect& x1) const { o->setActualVisibleContentRect(x1); }
    Q_INVOKABLE void MsetContentEditable(QWebPage* o, bool x1) { o->setContentEditable(x1); }
    Q_INVOKABLE void MsetFeaturePermission(QWebPage* o, QWebFrame* x1, QWebPage::Feature x2, QWebPage::PermissionPolicy x3) { o->setFeaturePermission(x1, x2, x3); }
    Q_INVOKABLE void MsetForwardUnsupportedContent(QWebPage* o, bool x1) { o->setForwardUnsupportedContent(x1); }
    Q_INVOKABLE void MsetLinkDelegationPolicy(QWebPage* o, QWebPage::LinkDelegationPolicy x1) { o->setLinkDelegationPolicy(x1); }
    Q_INVOKABLE void MsetNetworkAccessManager(QWebPage* o, QNetworkAccessManager* x1) { o->setNetworkAccessManager(x1); }
    Q_INVOKABLE void MsetPalette(QWebPage* o, const QPalette& x1) { o->setPalette(x1); }
    Q_INVOKABLE void MsetPluginFactory(QWebPage* o, QWebPluginFactory* x1) { o->setPluginFactory(x1); }
    Q_INVOKABLE void MsetPreferredContentsSize(QWebPage* o, const QSize& x1) const { o->setPreferredContentsSize(x1); }
    Q_INVOKABLE void MsetView(QWebPage* o, QWidget* x1) { o->setView(x1); }
    Q_INVOKABLE void MsetViewportSize(QWebPage* o, const QSize& x1) const { o->setViewportSize(x1); }
    Q_INVOKABLE void MsetVisibilityState(QWebPage* o, QWebPage::VisibilityState x1) { o->setVisibilityState(x1); }
    Q_INVOKABLE QWebSettings* Msettings(QWebPage* o) const { return o->settings(); }
    Q_INVOKABLE bool MshouldInterruptJavaScript(QWebPage* o) { return o->shouldInterruptJavaScript(); }
    Q_INVOKABLE QStringList MsupportedContentTypes(QWebPage* o) const { return o->supportedContentTypes(); }
    Q_INVOKABLE bool MsupportsContentType(QWebPage* o, const QString& x1) const { return o->supportsContentType(x1); }
    Q_INVOKABLE bool MsupportsExtension(QWebPage* o, QWebPage::Extension x1) const { return o->supportsExtension(x1); }
    Q_INVOKABLE bool MswallowContextMenuEvent(QWebPage* o, QContextMenuEvent* x1) { return o->swallowContextMenuEvent(x1); }
    Q_INVOKABLE quint64 MtotalBytes(QWebPage* o) const { return o->totalBytes(); }
    Q_INVOKABLE void MtriggerAction(QWebPage* o, QWebPage::WebAction x1, bool x2 = false) { o->triggerAction(x1, x2); }
    Q_INVOKABLE QUndoStack* MundoStack(QWebPage* o) const { return o->undoStack(); }
    Q_INVOKABLE void MupdatePositionDependentActions(QWebPage* o, const QPoint& x1) { o->updatePositionDependentActions(x1); }
    Q_INVOKABLE QWidget* Mview(QWebPage* o) const { return o->view(); }
    Q_INVOKABLE QSize MviewportSize(QWebPage* o) const { return o->viewportSize(); }
    Q_INVOKABLE int MvisibilityState(QWebPage* o) const { return o->visibilityState(); }
    Q_INVOKABLE bool Mevent(QWebPage* o, QEvent* x1) { return o->event(x1); }
};

class Q213 : public Q124 { // QWebPluginFactory
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LWebPluginFactory(u, x1); }
    Q_INVOKABLE QObject* Mcreate(QWebPluginFactory* o, const QString& x1, const QUrl& x2, const QStringList& x3, const QStringList& x4) const { return o->create(x1, x2, x3, x4); }
    Q_INVOKABLE QList<QWebPluginFactory::Plugin> Mplugins(QWebPluginFactory* o) const { return o->plugins(); }
    Q_INVOKABLE void MrefreshPlugins(QWebPluginFactory* o) { o->refreshPlugins(); }
};

class Q80 : public Q81 { // QGraphicsWebView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsWebView(u, x1); }
    Q_INVOKABLE bool MfindText(QGraphicsWebView* o, const QString& x1, QWebPage::FindFlags x2 = 0) { return o->findText(x1, x2); }
    Q_INVOKABLE QWebHistory* Mhistory(QGraphicsWebView* o) const { return o->history(); }
    Q_INVOKABLE QIcon Micon(QGraphicsWebView* o) const { return o->icon(); }
    Q_INVOKABLE bool MisModified(QGraphicsWebView* o) const { return o->isModified(); }
    Q_INVOKABLE bool MisTiledBackingStoreFrozen(QGraphicsWebView* o) const { return o->isTiledBackingStoreFrozen(); }
    Q_INVOKABLE void Mload(QGraphicsWebView* o, const QUrl& x1) { o->load(x1); }
    Q_INVOKABLE void Mload(QGraphicsWebView* o, const QNetworkRequest& x1, QNetworkAccessManager::Operation x2 = QNetworkAccessManager::GetOperation, const QByteArray& x3 = QByteArray()) { o->load(x1, x2, x3); }
    Q_INVOKABLE QWebPage* Mpage(QGraphicsWebView* o) const { return o->page(); }
    Q_INVOKABLE QAction* MpageAction(QGraphicsWebView* o, QWebPage::WebAction x1) const { return o->pageAction(x1); }
    Q_INVOKABLE int MrenderHints(QGraphicsWebView* o) const { return o->renderHints(); }
    Q_INVOKABLE bool MresizesToContents(QGraphicsWebView* o) const { return o->resizesToContents(); }
    Q_INVOKABLE void MsetContent(QGraphicsWebView* o, const QByteArray& x1, const QString& x2 = QString(), const QUrl& x3 = QUrl()) { o->setContent(x1, x2, x3); }
    Q_INVOKABLE void MsetHtml(QGraphicsWebView* o, const QString& x1, const QUrl& x2 = QUrl()) { o->setHtml(x1, x2); }
    Q_INVOKABLE void MsetPage(QGraphicsWebView* o, QWebPage* x1) { o->setPage(x1); }
    Q_INVOKABLE void MsetRenderHint(QGraphicsWebView* o, QPainter::RenderHint x1, bool x2 = true) { o->setRenderHint(x1, x2); }
    Q_INVOKABLE void MsetRenderHints(QGraphicsWebView* o, QPainter::RenderHints x1) { o->setRenderHints(x1); }
    Q_INVOKABLE void MsetResizesToContents(QGraphicsWebView* o, bool x1) { o->setResizesToContents(x1); }
    Q_INVOKABLE void MsetTiledBackingStoreFrozen(QGraphicsWebView* o, bool x1) { o->setTiledBackingStoreFrozen(x1); }
    Q_INVOKABLE void MsetUrl(QGraphicsWebView* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE void MsetZoomFactor(QGraphicsWebView* o, qreal x1) { o->setZoomFactor(x1); }
    Q_INVOKABLE QWebSettings* Msettings(QGraphicsWebView* o) const { return o->settings(); }
    Q_INVOKABLE QString Mtitle(QGraphicsWebView* o) const { return o->title(); }
    Q_INVOKABLE void MtriggerPageAction(QGraphicsWebView* o, QWebPage::WebAction x1, bool x2 = false) { o->triggerPageAction(x1, x2); }
    Q_INVOKABLE QUrl Murl(QGraphicsWebView* o) const { return o->url(); }
    Q_INVOKABLE qreal MzoomFactor(QGraphicsWebView* o) const { return o->zoomFactor(); }
    Q_INVOKABLE bool Mevent(QGraphicsWebView* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QVariant MinputMethodQuery(QGraphicsWebView* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE QVariant MitemChange(QGraphicsWebView* o, QGraphicsWebView::GraphicsItemChange x1, const QVariant& x2) { return o->itemChange(x1, x2); }
    Q_INVOKABLE void Mpaint(QGraphicsWebView* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE void MsetGeometry(QGraphicsWebView* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSizeF MsizeHint(QGraphicsWebView* o, Qt::SizeHint x1, const QSizeF& x2) const { return o->sizeHint(x1, x2); }
    Q_INVOKABLE void MupdateGeometry(QGraphicsWebView* o) { o->updateGeometry(); }
};

class Q211 : public Q215 { // QWebInspector
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LWebInspector(u, x1); }
    Q_INVOKABLE QWebPage* Mpage(QWebInspector* o) const { return o->page(); }
    Q_INVOKABLE void MsetPage(QWebInspector* o, QWebPage* x1) { o->setPage(x1); }
    Q_INVOKABLE bool Mevent(QWebInspector* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QSize MsizeHint(QWebInspector* o) const { return o->sizeHint(); }
};

class Q214 : public Q215 { // QWebView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LWebView(u, x1); }
    Q_INVOKABLE bool MfindText(QWebView* o, const QString& x1, QWebPage::FindFlags x2 = 0) { return o->findText(x1, x2); }
    Q_INVOKABLE bool MhasSelection(QWebView* o) const { return o->hasSelection(); }
    Q_INVOKABLE QWebHistory* Mhistory(QWebView* o) const { return o->history(); }
    Q_INVOKABLE QIcon Micon(QWebView* o) const { return o->icon(); }
    Q_INVOKABLE bool MisModified(QWebView* o) const { return o->isModified(); }
    Q_INVOKABLE void Mload(QWebView* o, const QUrl& x1) { o->load(x1); }
    Q_INVOKABLE void Mload(QWebView* o, const QNetworkRequest& x1, QNetworkAccessManager::Operation x2 = QNetworkAccessManager::GetOperation, const QByteArray& x3 = QByteArray()) { o->load(x1, x2, x3); }
    Q_INVOKABLE QWebPage* Mpage(QWebView* o) const { return o->page(); }
    Q_INVOKABLE QAction* MpageAction(QWebView* o, QWebPage::WebAction x1) const { return o->pageAction(x1); }
    Q_INVOKABLE int MrenderHints(QWebView* o) const { return o->renderHints(); }
    Q_INVOKABLE QString MselectedHtml(QWebView* o) const { return o->selectedHtml(); }
    Q_INVOKABLE QString MselectedText(QWebView* o) const { return o->selectedText(); }
    Q_INVOKABLE void MsetContent(QWebView* o, const QByteArray& x1, const QString& x2 = QString(), const QUrl& x3 = QUrl()) { o->setContent(x1, x2, x3); }
    Q_INVOKABLE void MsetHtml(QWebView* o, const QString& x1, const QUrl& x2 = QUrl()) { o->setHtml(x1, x2); }
    Q_INVOKABLE void MsetPage(QWebView* o, QWebPage* x1) { o->setPage(x1); }
    Q_INVOKABLE void MsetRenderHint(QWebView* o, QPainter::RenderHint x1, bool x2 = true) { o->setRenderHint(x1, x2); }
    Q_INVOKABLE void MsetRenderHints(QWebView* o, QPainter::RenderHints x1) { o->setRenderHints(x1); }
    Q_INVOKABLE void MsetTextSizeMultiplier(QWebView* o, qreal x1) { o->setTextSizeMultiplier(x1); }
    Q_INVOKABLE void MsetUrl(QWebView* o, const QUrl& x1) { o->setUrl(x1); }
    Q_INVOKABLE void MsetZoomFactor(QWebView* o, qreal x1) { o->setZoomFactor(x1); }
    Q_INVOKABLE QWebSettings* Msettings(QWebView* o) const { return o->settings(); }
    Q_INVOKABLE qreal MtextSizeMultiplier(QWebView* o) const { return o->textSizeMultiplier(); }
    Q_INVOKABLE QString Mtitle(QWebView* o) const { return o->title(); }
    Q_INVOKABLE void MtriggerPageAction(QWebView* o, QWebPage::WebAction x1, bool x2 = false) { o->triggerPageAction(x1, x2); }
    Q_INVOKABLE QUrl Murl(QWebView* o) const { return o->url(); }
    Q_INVOKABLE qreal MzoomFactor(QWebView* o) const { return o->zoomFactor(); }
    Q_INVOKABLE bool Mevent(QWebView* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QVariant MinputMethodQuery(QWebView* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE QSize MsizeHint(QWebView* o) const { return o->sizeHint(); }
};

QT_END_NAMESPACE

#endif
