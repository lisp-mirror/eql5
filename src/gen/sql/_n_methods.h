// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtSql>

QT_BEGIN_NAMESPACE

class N138 : public QObject { // QSqlDatabase
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSqlDatabase(u); }
    Q_INVOKABLE void* C(uint u, const QSqlDatabase& x1) { return new LSqlDatabase(u, x1); }
    Q_INVOKABLE void Mclose(QSqlDatabase* o) { o->close(); }
    Q_INVOKABLE bool Mcommit(QSqlDatabase* o) { return o->commit(); }
    Q_INVOKABLE QString MconnectOptions(QSqlDatabase* o) const { return o->connectOptions(); }
    Q_INVOKABLE QString MconnectionName(QSqlDatabase* o) const { return o->connectionName(); }
    Q_INVOKABLE QString MdatabaseName(QSqlDatabase* o) const { return o->databaseName(); }
    Q_INVOKABLE QSqlDriver* Mdriver(QSqlDatabase* o) const { return o->driver(); }
    Q_INVOKABLE QString MdriverName(QSqlDatabase* o) const { return o->driverName(); }
    Q_INVOKABLE QSqlQuery Mexec(QSqlDatabase* o, const QString& x1 = QString()) const { return o->exec(x1); }
    Q_INVOKABLE QString MhostName(QSqlDatabase* o) const { return o->hostName(); }
    Q_INVOKABLE bool MisOpen(QSqlDatabase* o) const { return o->isOpen(); }
    Q_INVOKABLE bool MisOpenError(QSqlDatabase* o) const { return o->isOpenError(); }
    Q_INVOKABLE bool MisValid(QSqlDatabase* o) const { return o->isValid(); }
    Q_INVOKABLE QSqlError MlastError(QSqlDatabase* o) const { return o->lastError(); }
    Q_INVOKABLE int MnumericalPrecisionPolicy(QSqlDatabase* o) const { return o->numericalPrecisionPolicy(); }
    Q_INVOKABLE bool Mopen(QSqlDatabase* o) { return o->open(); }
    Q_INVOKABLE bool Mopen(QSqlDatabase* o, const QString& x1, const QString& x2) { return o->open(x1, x2); }
    Q_INVOKABLE QString Mpassword(QSqlDatabase* o) const { return o->password(); }
    Q_INVOKABLE int Mport(QSqlDatabase* o) const { return o->port(); }
    Q_INVOKABLE QSqlIndex MprimaryIndex(QSqlDatabase* o, const QString& x1) const { return o->primaryIndex(x1); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlDatabase* o, const QString& x1) const { return o->record(x1); }
    Q_INVOKABLE bool Mrollback(QSqlDatabase* o) { return o->rollback(); }
    Q_INVOKABLE void MsetConnectOptions(QSqlDatabase* o, const QString& x1 = QString()) { o->setConnectOptions(x1); }
    Q_INVOKABLE void MsetDatabaseName(QSqlDatabase* o, const QString& x1) { o->setDatabaseName(x1); }
    Q_INVOKABLE void MsetHostName(QSqlDatabase* o, const QString& x1) { o->setHostName(x1); }
    Q_INVOKABLE void MsetNumericalPrecisionPolicy(QSqlDatabase* o, QSql::NumericalPrecisionPolicy x1) { o->setNumericalPrecisionPolicy(x1); }
    Q_INVOKABLE void MsetPassword(QSqlDatabase* o, const QString& x1) { o->setPassword(x1); }
    Q_INVOKABLE void MsetPort(QSqlDatabase* o, int x1) { o->setPort(x1); }
    Q_INVOKABLE void MsetUserName(QSqlDatabase* o, const QString& x1) { o->setUserName(x1); }
    Q_INVOKABLE QStringList Mtables(QSqlDatabase* o, QSql::TableType x1 = QSql::Tables) const { return o->tables(x1); }
    Q_INVOKABLE bool Mtransaction(QSqlDatabase* o) { return o->transaction(); }
    Q_INVOKABLE QString MuserName(QSqlDatabase* o) const { return o->userName(); }
    Q_INVOKABLE QSqlDatabase SaddDatabase(const QString& x1, const QString& x2 = QLatin1String(defaultConnection)) { return QSqlDatabase::addDatabase(x1, x2); }
    Q_INVOKABLE QSqlDatabase SaddDatabase(QSqlDriver* x1, const QString& x2 = QLatin1String(defaultConnection)) { return QSqlDatabase::addDatabase(x1, x2); }
    Q_INVOKABLE QSqlDatabase ScloneDatabase(const QSqlDatabase& x1, const QString& x2) { return QSqlDatabase::cloneDatabase(x1, x2); }
    Q_INVOKABLE QStringList SconnectionNames() { return QSqlDatabase::connectionNames(); }
    Q_INVOKABLE bool Scontains(const QString& x1 = QLatin1String(defaultConnection)) { return QSqlDatabase::contains(x1); }
    Q_INVOKABLE QSqlDatabase Sdatabase(const QString& x1 = QLatin1String(defaultConnection), bool x2 = true) { return QSqlDatabase::database(x1, x2); }
    Q_INVOKABLE QStringList Sdrivers() { return QSqlDatabase::drivers(); }
    Q_INVOKABLE bool SisDriverAvailable(const QString& x1) { return QSqlDatabase::isDriverAvailable(x1); }
    Q_INVOKABLE void SregisterSqlDriver(const QString& x1, QSqlDriverCreatorBase* x2) { QSqlDatabase::registerSqlDriver(x1, x2); }
    Q_INVOKABLE void SremoveDatabase(const QString& x1) { QSqlDatabase::removeDatabase(x1); }
};

class N139 : public QObject { // QSqlError
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString(), const QString& x2 = QString(), QSqlError::ErrorType x3 = QSqlError::NoError, const QString& x4 = QString()) { return new LSqlError(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QSqlError& x1) { return new LSqlError(u, x1); }
    Q_INVOKABLE QString MdatabaseText(QSqlError* o) const { return o->databaseText(); }
    Q_INVOKABLE QString MdriverText(QSqlError* o) const { return o->driverText(); }
    Q_INVOKABLE bool MisValid(QSqlError* o) const { return o->isValid(); }
    Q_INVOKABLE QString MnativeErrorCode(QSqlError* o) const { return o->nativeErrorCode(); }
    Q_INVOKABLE QString Mtext(QSqlError* o) const { return o->text(); }
    Q_INVOKABLE int Mtype(QSqlError* o) const { return o->type(); }
};

class N140 : public QObject { // QSqlField
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) { return new LSqlField(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSqlField& x1) { return new LSqlField(u, x1); }
    Q_INVOKABLE void Mclear(QSqlField* o) { o->clear(); }
    Q_INVOKABLE QVariant MdefaultValue(QSqlField* o) const { return o->defaultValue(); }
    Q_INVOKABLE bool MisAutoValue(QSqlField* o) const { return o->isAutoValue(); }
    Q_INVOKABLE bool MisGenerated(QSqlField* o) const { return o->isGenerated(); }
    Q_INVOKABLE bool MisNull(QSqlField* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisReadOnly(QSqlField* o) const { return o->isReadOnly(); }
    Q_INVOKABLE bool MisValid(QSqlField* o) const { return o->isValid(); }
    Q_INVOKABLE int Mlength(QSqlField* o) const { return o->length(); }
    Q_INVOKABLE QString Mname(QSqlField* o) const { return o->name(); }
    Q_INVOKABLE int Mprecision(QSqlField* o) const { return o->precision(); }
    Q_INVOKABLE int MrequiredStatus(QSqlField* o) const { return o->requiredStatus(); }
    Q_INVOKABLE void MsetAutoValue(QSqlField* o, bool x1) { o->setAutoValue(x1); }
    Q_INVOKABLE void MsetDefaultValue(QSqlField* o, const QVariant& x1) { o->setDefaultValue(x1); }
    Q_INVOKABLE void MsetGenerated(QSqlField* o, bool x1) { o->setGenerated(x1); }
    Q_INVOKABLE void MsetLength(QSqlField* o, int x1) { o->setLength(x1); }
    Q_INVOKABLE void MsetName(QSqlField* o, const QString& x1) { o->setName(x1); }
    Q_INVOKABLE void MsetPrecision(QSqlField* o, int x1) { o->setPrecision(x1); }
    Q_INVOKABLE void MsetReadOnly(QSqlField* o, bool x1) { o->setReadOnly(x1); }
    Q_INVOKABLE void MsetRequired(QSqlField* o, bool x1) { o->setRequired(x1); }
    Q_INVOKABLE void MsetRequiredStatus(QSqlField* o, QSqlField::RequiredStatus x1) { o->setRequiredStatus(x1); }
    Q_INVOKABLE void MsetType(QSqlField* o, QVariant::Type x1) { o->setType(x1); }
    Q_INVOKABLE void MsetValue(QSqlField* o, const QVariant& x1) { o->setValue(x1); }
    Q_INVOKABLE int Mtype(QSqlField* o) const { return o->type(); }
    Q_INVOKABLE QVariant Mvalue(QSqlField* o) const { return o->value(); }
};

class N142 : public QObject { // QSqlQuery
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QSqlResult* x1) { return new LSqlQuery(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) { return new LSqlQuery(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QSqlDatabase x1) { return new LSqlQuery(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSqlQuery& x1) { return new LSqlQuery(u, x1); }
    Q_INVOKABLE void MaddBindValue(QSqlQuery* o, const QVariant& x1, QSql::ParamType x2 = QSql::In) { o->addBindValue(x1, x2); }
    Q_INVOKABLE int Mat(QSqlQuery* o) const { return o->at(); }
    Q_INVOKABLE void MbindValue(QSqlQuery* o, const QString& x1, const QVariant& x2, QSql::ParamType x3 = QSql::In) { o->bindValue(x1, x2, x3); }
    Q_INVOKABLE void MbindValue(QSqlQuery* o, int x1, const QVariant& x2, QSql::ParamType x3 = QSql::In) { o->bindValue(x1, x2, x3); }
    Q_INVOKABLE QVariant MboundValue(QSqlQuery* o, const QString& x1) const { return o->boundValue(x1); }
    Q_INVOKABLE QVariant MboundValue(QSqlQuery* o, int x1) const { return o->boundValue(x1); }
    Q_INVOKABLE void Mclear(QSqlQuery* o) { o->clear(); }
    Q_INVOKABLE const QSqlDriver* Mdriver(QSqlQuery* o) const { return o->driver(); }
    Q_INVOKABLE bool Mexec(QSqlQuery* o, const QString& x1) { return o->exec(x1); }
    Q_INVOKABLE bool Mexec(QSqlQuery* o) { return o->exec(); }
    Q_INVOKABLE bool MexecBatch(QSqlQuery* o, QSqlQuery::BatchExecutionMode x1 = QSqlQuery::ValuesAsRows) { return o->execBatch(x1); }
    Q_INVOKABLE QString MexecutedQuery(QSqlQuery* o) const { return o->executedQuery(); }
    Q_INVOKABLE void Mfinish(QSqlQuery* o) { o->finish(); }
    Q_INVOKABLE bool Mfirst(QSqlQuery* o) { return o->first(); }
    Q_INVOKABLE bool MisActive(QSqlQuery* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisForwardOnly(QSqlQuery* o) const { return o->isForwardOnly(); }
    Q_INVOKABLE bool MisNull(QSqlQuery* o, int x1) const { return o->isNull(x1); }
    Q_INVOKABLE bool MisNull(QSqlQuery* o, const QString& x1) const { return o->isNull(x1); }
    Q_INVOKABLE bool MisSelect(QSqlQuery* o) const { return o->isSelect(); }
    Q_INVOKABLE bool MisValid(QSqlQuery* o) const { return o->isValid(); }
    Q_INVOKABLE bool Mlast(QSqlQuery* o) { return o->last(); }
    Q_INVOKABLE QSqlError MlastError(QSqlQuery* o) const { return o->lastError(); }
    Q_INVOKABLE QVariant MlastInsertId(QSqlQuery* o) const { return o->lastInsertId(); }
    Q_INVOKABLE QString MlastQuery(QSqlQuery* o) const { return o->lastQuery(); }
    Q_INVOKABLE bool Mnext(QSqlQuery* o) { return o->next(); }
    Q_INVOKABLE bool MnextResult(QSqlQuery* o) { return o->nextResult(); }
    Q_INVOKABLE int MnumRowsAffected(QSqlQuery* o) const { return o->numRowsAffected(); }
    Q_INVOKABLE int MnumericalPrecisionPolicy(QSqlQuery* o) const { return o->numericalPrecisionPolicy(); }
    Q_INVOKABLE bool Mprepare(QSqlQuery* o, const QString& x1) { return o->prepare(x1); }
    Q_INVOKABLE bool Mprevious(QSqlQuery* o) { return o->previous(); }
    Q_INVOKABLE QSqlRecord Mrecord(QSqlQuery* o) const { return o->record(); }
    Q_INVOKABLE const QSqlResult* Mresult(QSqlQuery* o) const { return o->result(); }
    Q_INVOKABLE bool Mseek(QSqlQuery* o, int x1, bool x2 = false) { return o->seek(x1, x2); }
    Q_INVOKABLE void MsetForwardOnly(QSqlQuery* o, bool x1) { o->setForwardOnly(x1); }
    Q_INVOKABLE void MsetNumericalPrecisionPolicy(QSqlQuery* o, QSql::NumericalPrecisionPolicy x1) { o->setNumericalPrecisionPolicy(x1); }
    Q_INVOKABLE int Msize(QSqlQuery* o) const { return o->size(); }
    Q_INVOKABLE QVariant Mvalue(QSqlQuery* o, int x1) const { return o->value(x1); }
    Q_INVOKABLE QVariant Mvalue(QSqlQuery* o, const QString& x1) const { return o->value(x1); }
};

class N143 : public QObject { // QSqlRecord
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSqlRecord(u); }
    Q_INVOKABLE void* C(uint u, const QSqlRecord& x1) { return new LSqlRecord(u, x1); }
    Q_INVOKABLE void Mappend(QSqlRecord* o, const QSqlField& x1) { o->append(x1); }
    Q_INVOKABLE void Mclear(QSqlRecord* o) { o->clear(); }
    Q_INVOKABLE void MclearValues(QSqlRecord* o) { o->clearValues(); }
    Q_INVOKABLE bool Mcontains(QSqlRecord* o, const QString& x1) const { return o->contains(x1); }
    Q_INVOKABLE int Mcount(QSqlRecord* o) const { return o->count(); }
    Q_INVOKABLE QSqlField Mfield(QSqlRecord* o, int x1) const { return o->field(x1); }
    Q_INVOKABLE QSqlField Mfield(QSqlRecord* o, const QString& x1) const { return o->field(x1); }
    Q_INVOKABLE QString MfieldName(QSqlRecord* o, int x1) const { return o->fieldName(x1); }
    Q_INVOKABLE int MindexOf(QSqlRecord* o, const QString& x1) const { return o->indexOf(x1); }
    Q_INVOKABLE void Minsert(QSqlRecord* o, int x1, const QSqlField& x2) { o->insert(x1, x2); }
    Q_INVOKABLE bool MisEmpty(QSqlRecord* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisGenerated(QSqlRecord* o, const QString& x1) const { return o->isGenerated(x1); }
    Q_INVOKABLE bool MisGenerated(QSqlRecord* o, int x1) const { return o->isGenerated(x1); }
    Q_INVOKABLE bool MisNull(QSqlRecord* o, const QString& x1) const { return o->isNull(x1); }
    Q_INVOKABLE bool MisNull(QSqlRecord* o, int x1) const { return o->isNull(x1); }
    Q_INVOKABLE QSqlRecord MkeyValues(QSqlRecord* o, const QSqlRecord& x1) const { return o->keyValues(x1); }
    Q_INVOKABLE void Mremove(QSqlRecord* o, int x1) { o->remove(x1); }
    Q_INVOKABLE void Mreplace(QSqlRecord* o, int x1, const QSqlField& x2) { o->replace(x1, x2); }
    Q_INVOKABLE void MsetGenerated(QSqlRecord* o, const QString& x1, bool x2) { o->setGenerated(x1, x2); }
    Q_INVOKABLE void MsetGenerated(QSqlRecord* o, int x1, bool x2) { o->setGenerated(x1, x2); }
    Q_INVOKABLE void MsetNull(QSqlRecord* o, int x1) { o->setNull(x1); }
    Q_INVOKABLE void MsetNull(QSqlRecord* o, const QString& x1) { o->setNull(x1); }
    Q_INVOKABLE void MsetValue(QSqlRecord* o, int x1, const QVariant& x2) { o->setValue(x1, x2); }
    Q_INVOKABLE void MsetValue(QSqlRecord* o, const QString& x1, const QVariant& x2) { o->setValue(x1, x2); }
    Q_INVOKABLE QVariant Mvalue(QSqlRecord* o, int x1) const { return o->value(x1); }
    Q_INVOKABLE QVariant Mvalue(QSqlRecord* o, const QString& x1) const { return o->value(x1); }
};

class N144 : public QObject { // QSqlRelation
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSqlRelation(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QString& x2, const QString& x3) { return new LSqlRelation(u, x1, x2, x3); }
    Q_INVOKABLE QString MdisplayColumn(QSqlRelation* o) const { return o->displayColumn(); }
    Q_INVOKABLE QString MindexColumn(QSqlRelation* o) const { return o->indexColumn(); }
    Q_INVOKABLE bool MisValid(QSqlRelation* o) const { return o->isValid(); }
    Q_INVOKABLE QString MtableName(QSqlRelation* o) const { return o->tableName(); }
};

class N145 : public QObject { // QSqlResult
    Q_OBJECT
public:
    Q_INVOKABLE QVariant Mhandle(QSqlResult* o) const { return o->handle(); }
    Q_INVOKABLE void MaddBindValue(QSqlResult* o, const QVariant& x1, QSql::ParamType x2) { ((LSqlResult*)o)->addBindValue(x1, x2); }
    Q_INVOKABLE int Mat(QSqlResult* o) const { return ((LSqlResult*)o)->at(); }
    Q_INVOKABLE int MbindValueType(QSqlResult* o, int x1) const { return ((LSqlResult*)o)->bindValueType(x1); }
    Q_INVOKABLE int MbindValueType(QSqlResult* o, const QString& x1) const { return ((LSqlResult*)o)->bindValueType(x1); }
    Q_INVOKABLE int MbindingSyntax(QSqlResult* o) const { return ((LSqlResult*)o)->bindingSyntax(); }
    Q_INVOKABLE QVariant MboundValue(QSqlResult* o, int x1) const { return ((LSqlResult*)o)->boundValue(x1); }
    Q_INVOKABLE QVariant MboundValue(QSqlResult* o, const QString& x1) const { return ((LSqlResult*)o)->boundValue(x1); }
    Q_INVOKABLE int MboundValueCount(QSqlResult* o) const { return ((LSqlResult*)o)->boundValueCount(); }
    Q_INVOKABLE QString MboundValueName(QSqlResult* o, int x1) const { return ((LSqlResult*)o)->boundValueName(x1); }
    Q_INVOKABLE QVector<QVariant> MboundValues(QSqlResult* o) const { return ((LSqlResult*)o)->boundValues(); }
    Q_INVOKABLE void Mclear(QSqlResult* o) { ((LSqlResult*)o)->clear(); }
    Q_INVOKABLE const QSqlDriver* Mdriver(QSqlResult* o) const { return ((LSqlResult*)o)->driver(); }
    Q_INVOKABLE QString MexecutedQuery(QSqlResult* o) const { return ((LSqlResult*)o)->executedQuery(); }
    Q_INVOKABLE bool MhasOutValues(QSqlResult* o) const { return ((LSqlResult*)o)->hasOutValues(); }
    Q_INVOKABLE bool MisActive(QSqlResult* o) const { return ((LSqlResult*)o)->isActive(); }
    Q_INVOKABLE bool MisForwardOnly(QSqlResult* o) const { return ((LSqlResult*)o)->isForwardOnly(); }
    Q_INVOKABLE bool MisSelect(QSqlResult* o) const { return ((LSqlResult*)o)->isSelect(); }
    Q_INVOKABLE bool MisValid(QSqlResult* o) const { return ((LSqlResult*)o)->isValid(); }
    Q_INVOKABLE QSqlError MlastError(QSqlResult* o) const { return ((LSqlResult*)o)->lastError(); }
    Q_INVOKABLE QString MlastQuery(QSqlResult* o) const { return ((LSqlResult*)o)->lastQuery(); }
    Q_INVOKABLE void MresetBindCount(QSqlResult* o) { ((LSqlResult*)o)->resetBindCount(); }
};

class N141 : public N143 { // QSqlIndex
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString(), const QString& x2 = QString()) { return new LSqlIndex(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSqlIndex& x1) { return new LSqlIndex(u, x1); }
    Q_INVOKABLE void Mappend(QSqlIndex* o, const QSqlField& x1) { o->append(x1); }
    Q_INVOKABLE void Mappend(QSqlIndex* o, const QSqlField& x1, bool x2) { o->append(x1, x2); }
    Q_INVOKABLE QString McursorName(QSqlIndex* o) const { return o->cursorName(); }
    Q_INVOKABLE bool MisDescending(QSqlIndex* o, int x1) const { return o->isDescending(x1); }
    Q_INVOKABLE QString Mname(QSqlIndex* o) const { return o->name(); }
    Q_INVOKABLE void MsetCursorName(QSqlIndex* o, const QString& x1) { o->setCursorName(x1); }
    Q_INVOKABLE void MsetDescending(QSqlIndex* o, int x1, bool x2) { o->setDescending(x1, x2); }
    Q_INVOKABLE void MsetName(QSqlIndex* o, const QString& x1) { o->setName(x1); }
};

QT_END_NAMESPACE

#endif
