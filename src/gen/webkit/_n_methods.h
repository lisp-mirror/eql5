// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtWebKitWidgets>

QT_BEGIN_NAMESPACE

class N264 : public QObject { // QWebDatabase
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QWebDatabase& x1) { return new LWebDatabase(u, x1); }
    Q_INVOKABLE QString MdisplayName(QWebDatabase* o) const { return o->displayName(); }
    Q_INVOKABLE qlonglong MexpectedSize(QWebDatabase* o) const { return o->expectedSize(); }
    Q_INVOKABLE QString MfileName(QWebDatabase* o) const { return o->fileName(); }
    Q_INVOKABLE QString Mname(QWebDatabase* o) const { return o->name(); }
    Q_INVOKABLE QWebSecurityOrigin Morigin(QWebDatabase* o) const { return o->origin(); }
    Q_INVOKABLE qlonglong Msize(QWebDatabase* o) const { return o->size(); }
    Q_INVOKABLE void SremoveAllDatabases() { QWebDatabase::removeAllDatabases(); }
    Q_INVOKABLE void SremoveDatabase(const QWebDatabase& x1) { QWebDatabase::removeDatabase(x1); }
};

class N265 : public QObject { // QWebElement
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LWebElement(u); }
    Q_INVOKABLE void* C(uint u, const QWebElement& x1) { return new LWebElement(u, x1); }
    Q_INVOKABLE void MaddClass(QWebElement* o, const QString& x1) { o->addClass(x1); }
    Q_INVOKABLE void MappendInside(QWebElement* o, const QString& x1) { o->appendInside(x1); }
    Q_INVOKABLE void MappendInside(QWebElement* o, const QWebElement& x1) { o->appendInside(x1); }
    Q_INVOKABLE void MappendOutside(QWebElement* o, const QString& x1) { o->appendOutside(x1); }
    Q_INVOKABLE void MappendOutside(QWebElement* o, const QWebElement& x1) { o->appendOutside(x1); }
    Q_INVOKABLE QString Mattribute(QWebElement* o, const QString& x1, const QString& x2 = QString()) const { return o->attribute(x1, x2); }
    Q_INVOKABLE QString MattributeNS(QWebElement* o, const QString& x1, const QString& x2, const QString& x3 = QString()) const { return o->attributeNS(x1, x2, x3); }
    Q_INVOKABLE QStringList MattributeNames(QWebElement* o, const QString& x1 = QString()) const { return o->attributeNames(x1); }
    Q_INVOKABLE QStringList Mclasses(QWebElement* o) const { return o->classes(); }
    Q_INVOKABLE QWebElement Mclone(QWebElement* o) const { return o->clone(); }
    Q_INVOKABLE QWebElement Mdocument(QWebElement* o) const { return o->document(); }
    Q_INVOKABLE void MencloseContentsWith(QWebElement* o, const QWebElement& x1) { o->encloseContentsWith(x1); }
    Q_INVOKABLE void MencloseContentsWith(QWebElement* o, const QString& x1) { o->encloseContentsWith(x1); }
    Q_INVOKABLE void MencloseWith(QWebElement* o, const QString& x1) { o->encloseWith(x1); }
    Q_INVOKABLE void MencloseWith(QWebElement* o, const QWebElement& x1) { o->encloseWith(x1); }
    Q_INVOKABLE QVariant MevaluateJavaScript(QWebElement* o, const QString& x1) { return o->evaluateJavaScript(x1); }
    Q_INVOKABLE QWebElementCollection MfindAll(QWebElement* o, const QString& x1) const { return o->findAll(x1); }
    Q_INVOKABLE QWebElement MfindFirst(QWebElement* o, const QString& x1) const { return o->findFirst(x1); }
    Q_INVOKABLE QWebElement MfirstChild(QWebElement* o) const { return o->firstChild(); }
    Q_INVOKABLE QRect Mgeometry(QWebElement* o) const { return o->geometry(); }
    Q_INVOKABLE bool MhasAttribute(QWebElement* o, const QString& x1) const { return o->hasAttribute(x1); }
    Q_INVOKABLE bool MhasAttributeNS(QWebElement* o, const QString& x1, const QString& x2) const { return o->hasAttributeNS(x1, x2); }
    Q_INVOKABLE bool MhasAttributes(QWebElement* o) const { return o->hasAttributes(); }
    Q_INVOKABLE bool MhasClass(QWebElement* o, const QString& x1) const { return o->hasClass(x1); }
    Q_INVOKABLE bool MhasFocus(QWebElement* o) const { return o->hasFocus(); }
    Q_INVOKABLE bool MisNull(QWebElement* o) const { return o->isNull(); }
    Q_INVOKABLE QWebElement MlastChild(QWebElement* o) const { return o->lastChild(); }
    Q_INVOKABLE QString MlocalName(QWebElement* o) const { return o->localName(); }
    Q_INVOKABLE QString MnamespaceUri(QWebElement* o) const { return o->namespaceUri(); }
    Q_INVOKABLE QWebElement MnextSibling(QWebElement* o) const { return o->nextSibling(); }
    Q_INVOKABLE QWebElement Mparent(QWebElement* o) const { return o->parent(); }
    Q_INVOKABLE QString Mprefix(QWebElement* o) const { return o->prefix(); }
    Q_INVOKABLE void MprependInside(QWebElement* o, const QString& x1) { o->prependInside(x1); }
    Q_INVOKABLE void MprependInside(QWebElement* o, const QWebElement& x1) { o->prependInside(x1); }
    Q_INVOKABLE void MprependOutside(QWebElement* o, const QString& x1) { o->prependOutside(x1); }
    Q_INVOKABLE void MprependOutside(QWebElement* o, const QWebElement& x1) { o->prependOutside(x1); }
    Q_INVOKABLE QWebElement MpreviousSibling(QWebElement* o) const { return o->previousSibling(); }
    Q_INVOKABLE void MremoveAllChildren(QWebElement* o) { o->removeAllChildren(); }
    Q_INVOKABLE void MremoveAttribute(QWebElement* o, const QString& x1) { o->removeAttribute(x1); }
    Q_INVOKABLE void MremoveAttributeNS(QWebElement* o, const QString& x1, const QString& x2) { o->removeAttributeNS(x1, x2); }
    Q_INVOKABLE void MremoveClass(QWebElement* o, const QString& x1) { o->removeClass(x1); }
    Q_INVOKABLE void MremoveFromDocument(QWebElement* o) { o->removeFromDocument(); }
    Q_INVOKABLE void Mrender(QWebElement* o, QPainter* x1) { o->render(x1); }
    Q_INVOKABLE void Mrender(QWebElement* o, QPainter* x1, const QRect& x2) { o->render(x1, x2); }
    Q_INVOKABLE void Mreplace(QWebElement* o, const QString& x1) { o->replace(x1); }
    Q_INVOKABLE void Mreplace(QWebElement* o, const QWebElement& x1) { o->replace(x1); }
    Q_INVOKABLE void MsetAttribute(QWebElement* o, const QString& x1, const QString& x2) { o->setAttribute(x1, x2); }
    Q_INVOKABLE void MsetAttributeNS(QWebElement* o, const QString& x1, const QString& x2, const QString& x3) { o->setAttributeNS(x1, x2, x3); }
    Q_INVOKABLE void MsetFocus(QWebElement* o) { o->setFocus(); }
    Q_INVOKABLE void MsetInnerXml(QWebElement* o, const QString& x1) { o->setInnerXml(x1); }
    Q_INVOKABLE void MsetOuterXml(QWebElement* o, const QString& x1) { o->setOuterXml(x1); }
    Q_INVOKABLE void MsetPlainText(QWebElement* o, const QString& x1) { o->setPlainText(x1); }
    Q_INVOKABLE void MsetStyleProperty(QWebElement* o, const QString& x1, const QString& x2) { o->setStyleProperty(x1, x2); }
    Q_INVOKABLE QString MstyleProperty(QWebElement* o, const QString& x1, QWebElement::StyleResolveStrategy x2) const { return o->styleProperty(x1, x2); }
    Q_INVOKABLE QString MtagName(QWebElement* o) const { return o->tagName(); }
    Q_INVOKABLE QWebElement MtakeFromDocument(QWebElement* o) { return o->takeFromDocument(); }
    Q_INVOKABLE QString MtoInnerXml(QWebElement* o) const { return o->toInnerXml(); }
    Q_INVOKABLE QString MtoOuterXml(QWebElement* o) const { return o->toOuterXml(); }
    Q_INVOKABLE QString MtoPlainText(QWebElement* o) const { return o->toPlainText(); }
    Q_INVOKABLE void MtoggleClass(QWebElement* o, const QString& x1) { o->toggleClass(x1); }
    Q_INVOKABLE QWebFrame* MwebFrame(QWebElement* o) const { return o->webFrame(); }
};

class N266 : public QObject { // QWebElementCollection
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LWebElementCollection(u); }
    Q_INVOKABLE void* C(uint u, const QWebElement& x1, const QString& x2) { return new LWebElementCollection(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QWebElementCollection& x1) { return new LWebElementCollection(u, x1); }
    Q_INVOKABLE void Mappend(QWebElementCollection* o, const QWebElementCollection& x1) { o->append(x1); }
    Q_INVOKABLE QWebElement Mat(QWebElementCollection* o, int x1) const { return o->at(x1); }
    Q_INVOKABLE int Mcount(QWebElementCollection* o) const { return o->count(); }
    Q_INVOKABLE QWebElement Mfirst(QWebElementCollection* o) const { return o->first(); }
    Q_INVOKABLE QWebElement Mlast(QWebElementCollection* o) const { return o->last(); }
    Q_INVOKABLE QList<QWebElement> MtoList(QWebElementCollection* o) const { return o->toList(); }
};

class N273 : public QObject { // QWebHitTestResult
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LWebHitTestResult(u); }
    Q_INVOKABLE void* C(uint u, const QWebHitTestResult& x1) { return new LWebHitTestResult(u, x1); }
    Q_INVOKABLE QString MalternateText(QWebHitTestResult* o) const { return o->alternateText(); }
    Q_INVOKABLE QRect MboundingRect(QWebHitTestResult* o) const { return o->boundingRect(); }
    Q_INVOKABLE QWebElement Melement(QWebHitTestResult* o) const { return o->element(); }
    Q_INVOKABLE QWebElement MenclosingBlockElement(QWebHitTestResult* o) const { return o->enclosingBlockElement(); }
    Q_INVOKABLE QWebFrame* Mframe(QWebHitTestResult* o) const { return o->frame(); }
    Q_INVOKABLE QUrl MimageUrl(QWebHitTestResult* o) const { return o->imageUrl(); }
    Q_INVOKABLE bool MisContentEditable(QWebHitTestResult* o) const { return o->isContentEditable(); }
    Q_INVOKABLE bool MisContentSelected(QWebHitTestResult* o) const { return o->isContentSelected(); }
    Q_INVOKABLE bool MisNull(QWebHitTestResult* o) const { return o->isNull(); }
    Q_INVOKABLE QWebElement MlinkElement(QWebHitTestResult* o) const { return o->linkElement(); }
    Q_INVOKABLE QWebFrame* MlinkTargetFrame(QWebHitTestResult* o) const { return o->linkTargetFrame(); }
    Q_INVOKABLE QString MlinkText(QWebHitTestResult* o) const { return o->linkText(); }
    Q_INVOKABLE QString MlinkTitleString(QWebHitTestResult* o) const { return o->linkTitleString(); }
    Q_INVOKABLE QUrl MlinkUrl(QWebHitTestResult* o) const { return o->linkUrl(); }
    Q_INVOKABLE QUrl MmediaUrl(QWebHitTestResult* o) const { return o->mediaUrl(); }
    Q_INVOKABLE QPixmap Mpixmap(QWebHitTestResult* o) const { return o->pixmap(); }
    Q_INVOKABLE QPoint Mpos(QWebHitTestResult* o) const { return o->pos(); }
    Q_INVOKABLE QString Mtitle(QWebHitTestResult* o) const { return o->title(); }
};

class N274 : public QObject { // QWebSecurityOrigin
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QUrl& x1) { return new LWebSecurityOrigin(u, x1); }
    Q_INVOKABLE void* C(uint u, const QWebSecurityOrigin& x1) { return new LWebSecurityOrigin(u, x1); }
    Q_INVOKABLE void MaddAccessWhitelistEntry(QWebSecurityOrigin* o, const QString& x1, const QString& x2, QWebSecurityOrigin::SubdomainSetting x3) { o->addAccessWhitelistEntry(x1, x2, x3); }
    Q_INVOKABLE qlonglong MdatabaseQuota(QWebSecurityOrigin* o) const { return o->databaseQuota(); }
    Q_INVOKABLE qlonglong MdatabaseUsage(QWebSecurityOrigin* o) const { return o->databaseUsage(); }
    Q_INVOKABLE QList<QWebDatabase> Mdatabases(QWebSecurityOrigin* o) const { return o->databases(); }
    Q_INVOKABLE QString Mhost(QWebSecurityOrigin* o) const { return o->host(); }
    Q_INVOKABLE int Mport(QWebSecurityOrigin* o) const { return o->port(); }
    Q_INVOKABLE void MremoveAccessWhitelistEntry(QWebSecurityOrigin* o, const QString& x1, const QString& x2, QWebSecurityOrigin::SubdomainSetting x3) { o->removeAccessWhitelistEntry(x1, x2, x3); }
    Q_INVOKABLE QString Mscheme(QWebSecurityOrigin* o) const { return o->scheme(); }
    Q_INVOKABLE void MsetApplicationCacheQuota(QWebSecurityOrigin* o, qint64 x1) { o->setApplicationCacheQuota(x1); }
    Q_INVOKABLE void MsetDatabaseQuota(QWebSecurityOrigin* o, qint64 x1) { o->setDatabaseQuota(x1); }
    Q_INVOKABLE void SaddLocalScheme(const QString& x1) { QWebSecurityOrigin::addLocalScheme(x1); }
    Q_INVOKABLE QList<QWebSecurityOrigin> SallOrigins() { return QWebSecurityOrigin::allOrigins(); }
    Q_INVOKABLE QStringList SlocalSchemes() { return QWebSecurityOrigin::localSchemes(); }
    Q_INVOKABLE void SremoveLocalScheme(const QString& x1) { QWebSecurityOrigin::removeLocalScheme(x1); }
};

class N275 : public QObject { // QWebSettings
    Q_OBJECT
public:
    Q_INVOKABLE QString McssMediaType(QWebSettings* o) const { return o->cssMediaType(); }
    Q_INVOKABLE QString MdefaultTextEncoding(QWebSettings* o) const { return o->defaultTextEncoding(); }
    Q_INVOKABLE QString MfontFamily(QWebSettings* o, QWebSettings::FontFamily x1) const { return o->fontFamily(x1); }
    Q_INVOKABLE int MfontSize(QWebSettings* o, QWebSettings::FontSize x1) const { return o->fontSize(x1); }
    Q_INVOKABLE QString MlocalStoragePath(QWebSettings* o) const { return o->localStoragePath(); }
    Q_INVOKABLE void MresetAttribute(QWebSettings* o, QWebSettings::WebAttribute x1) { o->resetAttribute(x1); }
    Q_INVOKABLE void MresetFontFamily(QWebSettings* o, QWebSettings::FontFamily x1) { o->resetFontFamily(x1); }
    Q_INVOKABLE void MresetFontSize(QWebSettings* o, QWebSettings::FontSize x1) { o->resetFontSize(x1); }
    Q_INVOKABLE void MsetAttribute(QWebSettings* o, QWebSettings::WebAttribute x1, bool x2) { o->setAttribute(x1, x2); }
    Q_INVOKABLE void MsetCSSMediaType(QWebSettings* o, const QString& x1) { o->setCSSMediaType(x1); }
    Q_INVOKABLE void MsetDefaultTextEncoding(QWebSettings* o, const QString& x1) { o->setDefaultTextEncoding(x1); }
    Q_INVOKABLE void MsetFontFamily(QWebSettings* o, QWebSettings::FontFamily x1, const QString& x2) { o->setFontFamily(x1, x2); }
    Q_INVOKABLE void MsetFontSize(QWebSettings* o, QWebSettings::FontSize x1, int x2) { o->setFontSize(x1, x2); }
    Q_INVOKABLE void MsetLocalStoragePath(QWebSettings* o, const QString& x1) { o->setLocalStoragePath(x1); }
    Q_INVOKABLE void MsetThirdPartyCookiePolicy(QWebSettings* o, QWebSettings::ThirdPartyCookiePolicy x1) { o->setThirdPartyCookiePolicy(x1); }
    Q_INVOKABLE void MsetUserStyleSheetUrl(QWebSettings* o, const QUrl& x1) { o->setUserStyleSheetUrl(x1); }
    Q_INVOKABLE bool MtestAttribute(QWebSettings* o, QWebSettings::WebAttribute x1) const { return o->testAttribute(x1); }
    Q_INVOKABLE int MthirdPartyCookiePolicy(QWebSettings* o) const { return o->thirdPartyCookiePolicy(); }
    Q_INVOKABLE QUrl MuserStyleSheetUrl(QWebSettings* o) const { return o->userStyleSheetUrl(); }
    Q_INVOKABLE void SclearIconDatabase() { QWebSettings::clearIconDatabase(); }
    Q_INVOKABLE void SclearMemoryCaches() { QWebSettings::clearMemoryCaches(); }
    Q_INVOKABLE void SenablePersistentStorage(const QString& x1 = QString()) { QWebSettings::enablePersistentStorage(x1); }
    Q_INVOKABLE QWebSettings* SglobalSettings() { return QWebSettings::globalSettings(); }
    Q_INVOKABLE QString SiconDatabasePath() { return QWebSettings::iconDatabasePath(); }
    Q_INVOKABLE QIcon SiconForUrl(const QUrl& x1) { return QWebSettings::iconForUrl(x1); }
    Q_INVOKABLE int SmaximumPagesInCache() { return QWebSettings::maximumPagesInCache(); }
    Q_INVOKABLE qlonglong SofflineStorageDefaultQuota() { return QWebSettings::offlineStorageDefaultQuota(); }
    Q_INVOKABLE QString SofflineStoragePath() { return QWebSettings::offlineStoragePath(); }
    Q_INVOKABLE QString SofflineWebApplicationCachePath() { return QWebSettings::offlineWebApplicationCachePath(); }
    Q_INVOKABLE qlonglong SofflineWebApplicationCacheQuota() { return QWebSettings::offlineWebApplicationCacheQuota(); }
    Q_INVOKABLE void SsetIconDatabasePath(const QString& x1) { QWebSettings::setIconDatabasePath(x1); }
    Q_INVOKABLE void SsetMaximumPagesInCache(int x1) { QWebSettings::setMaximumPagesInCache(x1); }
    Q_INVOKABLE void SsetObjectCacheCapacities(int x1, int x2, int x3) { QWebSettings::setObjectCacheCapacities(x1, x2, x3); }
    Q_INVOKABLE void SsetOfflineStorageDefaultQuota(qint64 x1) { QWebSettings::setOfflineStorageDefaultQuota(x1); }
    Q_INVOKABLE void SsetOfflineStoragePath(const QString& x1) { QWebSettings::setOfflineStoragePath(x1); }
    Q_INVOKABLE void SsetOfflineWebApplicationCachePath(const QString& x1) { QWebSettings::setOfflineWebApplicationCachePath(x1); }
    Q_INVOKABLE void SsetOfflineWebApplicationCacheQuota(qint64 x1) { QWebSettings::setOfflineWebApplicationCacheQuota(x1); }
    Q_INVOKABLE void SsetWebGraphic(QWebSettings::WebGraphic x1, const QPixmap& x2) { QWebSettings::setWebGraphic(x1, x2); }
    Q_INVOKABLE QPixmap SwebGraphic(QWebSettings::WebGraphic x1) { return QWebSettings::webGraphic(x1); }
};

QT_END_NAMESPACE

#endif
