// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtHelp>

QT_BEGIN_NAMESPACE

class Q95 : public Q4 { // QHelpContentModel
    Q_OBJECT
public:
    Q_INVOKABLE QHelpContentItem* McontentItemAt(QHelpContentModel* o, const QModelIndex& x1) const { return o->contentItemAt(x1); }
    Q_INVOKABLE void McreateContents(QHelpContentModel* o, const QString& x1) { o->createContents(x1); }
    Q_INVOKABLE bool MisCreatingContents(QHelpContentModel* o) const { return o->isCreatingContents(); }
    Q_INVOKABLE int McolumnCount(QHelpContentModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->columnCount(x1); }
    Q_INVOKABLE QVariant Mdata(QHelpContentModel* o, const QModelIndex& x1, int x2) const { return o->data(x1, x2); }
    Q_INVOKABLE QModelIndex Mindex(QHelpContentModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { return o->index(x1, x2, x3); }
    Q_INVOKABLE QModelIndex Mparent(QHelpContentModel* o, const QModelIndex& x1) const { return o->parent(x1); }
    Q_INVOKABLE int MrowCount(QHelpContentModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->rowCount(x1); }
};

class Q97 : public Q142 { // QHelpEngineCore
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1, QObject* x2 = 0) { return new LHelpEngineCore(u, x1, x2); }
    Q_INVOKABLE bool MaddCustomFilter(QHelpEngineCore* o, const QString& x1, const QStringList& x2) { return o->addCustomFilter(x1, x2); }
    Q_INVOKABLE bool MautoSaveFilter(QHelpEngineCore* o) const { return o->autoSaveFilter(); }
    Q_INVOKABLE QString McollectionFile(QHelpEngineCore* o) const { return o->collectionFile(); }
    Q_INVOKABLE bool McopyCollectionFile(QHelpEngineCore* o, const QString& x1) { return o->copyCollectionFile(x1); }
    Q_INVOKABLE QString McurrentFilter(QHelpEngineCore* o) const { return o->currentFilter(); }
    Q_INVOKABLE QStringList McustomFilters(QHelpEngineCore* o) const { return o->customFilters(); }
    Q_INVOKABLE QVariant McustomValue(QHelpEngineCore* o, const QString& x1, const QVariant& x2 = QVariant()) const { return o->customValue(x1, x2); }
    Q_INVOKABLE QString MdocumentationFileName(QHelpEngineCore* o, const QString& x1) { return o->documentationFileName(x1); }
    Q_INVOKABLE QString Merror(QHelpEngineCore* o) const { return o->error(); }
    Q_INVOKABLE QByteArray MfileData(QHelpEngineCore* o, const QUrl& x1) const { return o->fileData(x1); }
    Q_INVOKABLE QList<QUrl> Mfiles(QHelpEngineCore* o, const QString x1, const QStringList& x2, const QString& x3 = QString()) { return o->files(x1, x2, x3); }
    Q_INVOKABLE QList<QStringList> MfilterAttributeSets(QHelpEngineCore* o, const QString& x1) const { return o->filterAttributeSets(x1); }
    Q_INVOKABLE QStringList MfilterAttributes(QHelpEngineCore* o) const { return o->filterAttributes(); }
    Q_INVOKABLE QStringList MfilterAttributes(QHelpEngineCore* o, const QString& x1) const { return o->filterAttributes(x1); }
    Q_INVOKABLE QUrl MfindFile(QHelpEngineCore* o, const QUrl& x1) const { return o->findFile(x1); }
    Q_INVOKABLE bool MregisterDocumentation(QHelpEngineCore* o, const QString& x1) { return o->registerDocumentation(x1); }
    Q_INVOKABLE QStringList MregisteredDocumentations(QHelpEngineCore* o) const { return o->registeredDocumentations(); }
    Q_INVOKABLE bool MremoveCustomFilter(QHelpEngineCore* o, const QString& x1) { return o->removeCustomFilter(x1); }
    Q_INVOKABLE bool MremoveCustomValue(QHelpEngineCore* o, const QString& x1) { return o->removeCustomValue(x1); }
    Q_INVOKABLE void MsetAutoSaveFilter(QHelpEngineCore* o, bool x1) { o->setAutoSaveFilter(x1); }
    Q_INVOKABLE void MsetCollectionFile(QHelpEngineCore* o, const QString& x1) { o->setCollectionFile(x1); }
    Q_INVOKABLE void MsetCurrentFilter(QHelpEngineCore* o, const QString& x1) { o->setCurrentFilter(x1); }
    Q_INVOKABLE bool MsetCustomValue(QHelpEngineCore* o, const QString& x1, const QVariant& x2) { return o->setCustomValue(x1, x2); }
    Q_INVOKABLE bool MsetupData(QHelpEngineCore* o) { return o->setupData(); }
    Q_INVOKABLE bool MunregisterDocumentation(QHelpEngineCore* o, const QString& x1) { return o->unregisterDocumentation(x1); }
    Q_INVOKABLE QVariant SmetaData(const QString& x1, const QString& x2) { return QHelpEngineCore::metaData(x1, x2); }
    Q_INVOKABLE QString SnamespaceName(const QString& x1) { return QHelpEngineCore::namespaceName(x1); }
};

class Q100 : public Q142 { // QHelpSearchEngine
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QHelpEngineCore* x1, QObject* x2 = 0) { return new LHelpSearchEngine(u, x1, x2); }
    Q_INVOKABLE int MhitCount(QHelpSearchEngine* o) const { return o->hitCount(); }
    Q_INVOKABLE QList<QHelpSearchQuery> Mquery(QHelpSearchEngine* o) const { return o->query(); }
    Q_INVOKABLE QHelpSearchQueryWidget* MqueryWidget(QHelpSearchEngine* o) { return o->queryWidget(); }
    Q_INVOKABLE QHelpSearchResultWidget* MresultWidget(QHelpSearchEngine* o) { return o->resultWidget(); }
};

class Q98 : public Q223 { // QHelpIndexModel
    Q_OBJECT
public:
    Q_INVOKABLE void McreateIndex(QHelpIndexModel* o, const QString& x1) { o->createIndex(x1); }
    Q_INVOKABLE QModelIndex Mfilter(QHelpIndexModel* o, const QString& x1, const QString& x2 = QString()) { return o->filter(x1, x2); }
    Q_INVOKABLE bool MisCreatingIndex(QHelpIndexModel* o) const { return o->isCreatingIndex(); }
};

class Q101 : public Q272 { // QHelpSearchQueryWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LHelpSearchQueryWidget(u, x1); }
    Q_INVOKABLE void McollapseExtendedSearch(QHelpSearchQueryWidget* o) { o->collapseExtendedSearch(); }
    Q_INVOKABLE void MexpandExtendedSearch(QHelpSearchQueryWidget* o) { o->expandExtendedSearch(); }
    Q_INVOKABLE bool MisCompactMode(QHelpSearchQueryWidget* o) const { return o->isCompactMode(); }
    Q_INVOKABLE QList<QHelpSearchQuery> Mquery(QHelpSearchQueryWidget* o) const { return o->query(); }
    Q_INVOKABLE void MsetQuery(QHelpSearchQueryWidget* o, const QList<QHelpSearchQuery>& x1) { o->setQuery(x1); }
};

class Q102 : public Q272 { // QHelpSearchResultWidget
    Q_OBJECT
public:
    Q_INVOKABLE QUrl MlinkAt(QHelpSearchResultWidget* o, const QPoint& x1) { return o->linkAt(x1); }
};

class Q96 : public Q255 { // QHelpContentWidget
    Q_OBJECT
public:
    Q_INVOKABLE QModelIndex MindexOf(QHelpContentWidget* o, const QUrl& x1) { return o->indexOf(x1); }
};

class Q99 : public Q119 { // QHelpIndexWidget
    Q_OBJECT
public:
};

QT_END_NAMESPACE

#endif
