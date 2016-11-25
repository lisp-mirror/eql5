// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include "../_main_q_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtSql>

QT_BEGIN_NAMESPACE

class Q158 : public Q124 { // QSqlDriver
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LSqlDriver(u, x1); }
    Q_INVOKABLE bool MbeginTransaction(QSqlDriver* o) { return o->beginTransaction(); }
    Q_INVOKABLE void Mclose(QSqlDriver* o) { o->close(); }
    Q_INVOKABLE bool McommitTransaction(QSqlDriver* o) { return o->commitTransaction(); }
    Q_INVOKABLE QSqlResult* McreateResult(QSqlDriver* o) const { return o->createResult(); }
    Q_INVOKABLE int MdbmsType(QSqlDriver* o) const { return o->dbmsType(); }
    Q_INVOKABLE QString MescapeIdentifier(QSqlDriver* o, const QString& x1, QSqlDriver::IdentifierType x2) const { return o->escapeIdentifier(x1, x2); }
    Q_INVOKABLE QString MformatValue(QSqlDriver* o, const QSqlField& x1, bool x2 = false) const { return o->formatValue(x1, x2); }
    Q_INVOKABLE QVariant Mhandle(QSqlDriver* o) const { return o->handle(); }
    Q_INVOKABLE bool MhasFeature(QSqlDriver* o, QSqlDriver::DriverFeature x1) const { return o->hasFeature(x1); }
    Q_INVOKABLE bool MisIdentifierEscaped(QSqlDriver* o, const QString& x1, QSqlDriver::IdentifierType x2) const { return o->isIdentifierEscaped(x1, x2); }
    Q_INVOKABLE bool MisOpen(QSqlDriver* o) const { return o->isOpen(); }
    Q_INVOKABLE bool MisOpenError(QSqlDriver* o) const { return o->isOpenError(); }
    Q_INVOKABLE QSqlError MlastError(QSqlDriver* o) const { return o->lastError(); }
    Q_INVOKABLE int MnumericalPrecisionPolicy(QSqlDriver* o) const { return o->numericalPrecisionPolicy(); }
    Q_INVOKABLE bool Mopen(QSqlDriver* o, const QString& x1, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString(), int x5 = -1, const QString& x6 = QString()) { return o->open(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QSqlIndex MprimaryIndex(QSqlDriver* o, const QString& x1) const { return o->primaryIndex(x1); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlDriver* o, const QString& x1) const { return o->record(x1); }
    Q_INVOKABLE bool MrollbackTransaction(QSqlDriver* o) { return o->rollbackTransaction(); }
    Q_INVOKABLE void MsetNumericalPrecisionPolicy(QSqlDriver* o, QSql::NumericalPrecisionPolicy x1) { o->setNumericalPrecisionPolicy(x1); }
    Q_INVOKABLE QString MsqlStatement(QSqlDriver* o, QSqlDriver::StatementType x1, const QString& x2, const QSqlRecord& x3, bool x4) const { return o->sqlStatement(x1, x2, x3, x4); }
    Q_INVOKABLE QString MstripDelimiters(QSqlDriver* o, const QString& x1, QSqlDriver::IdentifierType x2) const { return o->stripDelimiters(x1, x2); }
    Q_INVOKABLE bool MsubscribeToNotification(QSqlDriver* o, const QString& x1) { return o->subscribeToNotification(x1); }
    Q_INVOKABLE QStringList MsubscribedToNotifications(QSqlDriver* o) const { return o->subscribedToNotifications(); }
    Q_INVOKABLE QStringList Mtables(QSqlDriver* o, QSql::TableType x1) const { return o->tables(x1); }
    Q_INVOKABLE bool MunsubscribeFromNotification(QSqlDriver* o, const QString& x1) { return o->unsubscribeFromNotification(x1); }
};

class Q159 : public Q15 { // QSqlQueryModel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LSqlQueryModel(u, x1); }
    Q_INVOKABLE void Mclear(QSqlQueryModel* o) { o->clear(); }
    Q_INVOKABLE QSqlError MlastError(QSqlQueryModel* o) const { return o->lastError(); }
    Q_INVOKABLE QSqlQuery Mquery(QSqlQueryModel* o) const { return o->query(); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlQueryModel* o, int x1) const { return o->record(x1); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlQueryModel* o) const { return o->record(); }
    Q_INVOKABLE void MsetQuery(QSqlQueryModel* o, const QSqlQuery& x1) { o->setQuery(x1); }
    Q_INVOKABLE void MsetQuery(QSqlQueryModel* o, const QString& x1, const QSqlDatabase& x2 = QSqlDatabase()) { o->setQuery(x1, x2); }
    Q_INVOKABLE void MsetLastError(QSqlQueryModel* o, const QSqlError& x1) { ((LSqlQueryModel*)o)->setLastError(x1); }
    Q_INVOKABLE bool McanFetchMore(QSqlQueryModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->canFetchMore(x1); }
    Q_INVOKABLE int McolumnCount(QSqlQueryModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->columnCount(x1); }
    Q_INVOKABLE QVariant Mdata(QSqlQueryModel* o, const QModelIndex& x1, int x2 = Qt::DisplayRole) const { return o->data(x1, x2); }
    Q_INVOKABLE void MfetchMore(QSqlQueryModel* o, const QModelIndex& x1 = QModelIndex()) { o->fetchMore(x1); }
    Q_INVOKABLE QVariant MheaderData(QSqlQueryModel* o, int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { return o->headerData(x1, x2, x3); }
    Q_INVOKABLE bool MinsertColumns(QSqlQueryModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertColumns(x1, x2, x3); }
    Q_INVOKABLE bool MremoveColumns(QSqlQueryModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeColumns(x1, x2, x3); }
    Q_INVOKABLE int MrowCount(QSqlQueryModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->rowCount(x1); }
    Q_INVOKABLE bool MsetHeaderData(QSqlQueryModel* o, int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { return o->setHeaderData(x1, x2, x3, x4); }
};

class Q160 : public Q99 { // QSqlRelationalDelegate
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LSqlRelationalDelegate(u, x1); }
    Q_INVOKABLE QWidget* McreateEditor(QSqlRelationalDelegate* o, QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { return o->createEditor(x1, x2, x3); }
    Q_INVOKABLE void MsetModelData(QSqlRelationalDelegate* o, QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const { o->setModelData(x1, x2, x3); }
};

class Q162 : public Q159 { // QSqlTableModel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0, QSqlDatabase x2 = QSqlDatabase()) { return new LSqlTableModel(u, x1, x2); }
    Q_INVOKABLE QSqlDatabase Mdatabase(QSqlTableModel* o) const { return o->database(); }
    Q_INVOKABLE int MeditStrategy(QSqlTableModel* o) const { return o->editStrategy(); }
    Q_INVOKABLE int MfieldIndex(QSqlTableModel* o, const QString& x1) const { return o->fieldIndex(x1); }
    Q_INVOKABLE QString Mfilter(QSqlTableModel* o) const { return o->filter(); }
    Q_INVOKABLE bool MinsertRecord(QSqlTableModel* o, int x1, const QSqlRecord& x2) { return o->insertRecord(x1, x2); }
    Q_INVOKABLE bool MisDirty(QSqlTableModel* o, const QModelIndex& x1) const { return o->isDirty(x1); }
    Q_INVOKABLE bool MisDirty(QSqlTableModel* o) const { return o->isDirty(); }
    Q_INVOKABLE QSqlIndex MprimaryKey(QSqlTableModel* o) const { return o->primaryKey(); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlTableModel* o) const { return o->record(); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlTableModel* o, int x1) const { return o->record(x1); }
    Q_INVOKABLE void MrevertRow(QSqlTableModel* o, int x1) { o->revertRow(x1); }
    Q_INVOKABLE void MsetEditStrategy(QSqlTableModel* o, QSqlTableModel::EditStrategy x1) { o->setEditStrategy(x1); }
    Q_INVOKABLE void MsetFilter(QSqlTableModel* o, const QString& x1) { o->setFilter(x1); }
    Q_INVOKABLE bool MsetRecord(QSqlTableModel* o, int x1, const QSqlRecord& x2) { return o->setRecord(x1, x2); }
    Q_INVOKABLE void MsetSort(QSqlTableModel* o, int x1, Qt::SortOrder x2) { o->setSort(x1, x2); }
    Q_INVOKABLE void MsetTable(QSqlTableModel* o, const QString& x1) { o->setTable(x1); }
    Q_INVOKABLE QString MtableName(QSqlTableModel* o) const { return o->tableName(); }
    Q_INVOKABLE QSqlRecord MprimaryValues(QSqlTableModel* o, int x1) const { return ((LSqlTableModel*)o)->primaryValues(x1); }
    Q_INVOKABLE void MsetPrimaryKey(QSqlTableModel* o, const QSqlIndex& x1) { ((LSqlTableModel*)o)->setPrimaryKey(x1); }
    Q_INVOKABLE void MsetQuery(QSqlTableModel* o, const QSqlQuery& x1) { ((LSqlTableModel*)o)->setQuery(x1); }
    Q_INVOKABLE void Mclear(QSqlTableModel* o) { o->clear(); }
    Q_INVOKABLE QVariant Mdata(QSqlTableModel* o, const QModelIndex& x1, int x2 = Qt::DisplayRole) const { return o->data(x1, x2); }
    Q_INVOKABLE int Mflags(QSqlTableModel* o, const QModelIndex& x1) const { return o->flags(x1); }
    Q_INVOKABLE QVariant MheaderData(QSqlTableModel* o, int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { return o->headerData(x1, x2, x3); }
    Q_INVOKABLE bool MinsertRows(QSqlTableModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertRows(x1, x2, x3); }
    Q_INVOKABLE bool MremoveColumns(QSqlTableModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeColumns(x1, x2, x3); }
    Q_INVOKABLE bool MremoveRows(QSqlTableModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeRows(x1, x2, x3); }
    Q_INVOKABLE int MrowCount(QSqlTableModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->rowCount(x1); }
    Q_INVOKABLE bool MsetData(QSqlTableModel* o, const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { return o->setData(x1, x2, x3); }
    Q_INVOKABLE void Msort(QSqlTableModel* o, int x1, Qt::SortOrder x2) { o->sort(x1, x2); }
};

class Q161 : public Q162 { // QSqlRelationalTableModel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0, QSqlDatabase x2 = QSqlDatabase()) { return new LSqlRelationalTableModel(u, x1, x2); }
    Q_INVOKABLE QSqlRelation Mrelation(QSqlRelationalTableModel* o, int x1) const { return o->relation(x1); }
    Q_INVOKABLE QSqlTableModel* MrelationModel(QSqlRelationalTableModel* o, int x1) const { return o->relationModel(x1); }
    Q_INVOKABLE void MsetJoinMode(QSqlRelationalTableModel* o, QSqlRelationalTableModel::JoinMode x1) { o->setJoinMode(x1); }
    Q_INVOKABLE void MsetRelation(QSqlRelationalTableModel* o, int x1, const QSqlRelation& x2) { o->setRelation(x1, x2); }
    Q_INVOKABLE void Mclear(QSqlRelationalTableModel* o) { o->clear(); }
    Q_INVOKABLE QVariant Mdata(QSqlRelationalTableModel* o, const QModelIndex& x1, int x2 = Qt::DisplayRole) const { return o->data(x1, x2); }
    Q_INVOKABLE bool MremoveColumns(QSqlRelationalTableModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeColumns(x1, x2, x3); }
    Q_INVOKABLE bool Mselect(QSqlRelationalTableModel* o) { return o->select(); }
    Q_INVOKABLE bool MsetData(QSqlRelationalTableModel* o, const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { return o->setData(x1, x2, x3); }
    Q_INVOKABLE void MsetTable(QSqlRelationalTableModel* o, const QString& x1) { o->setTable(x1); }
};

QT_END_NAMESPACE

#endif
