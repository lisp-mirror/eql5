// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR (QSqlDatabase, qsqldatabase)
TO_QT_TYPE_PTR (QSqlError, qsqlerror)
TO_QT_TYPE_PTR (QSqlField, qsqlfield)
TO_QT_TYPE_PTR (QSqlIndex, qsqlindex)
TO_QT_TYPE_PTR (QSqlQuery, qsqlquery)
TO_QT_TYPE_PTR (QSqlRecord, qsqlrecord)
TO_QT_TYPE_PTR (QSqlRelation, qsqlrelation)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

NumList LSqlDriver::overrideIds = NumList() << 362 << 131 << 363 << 364 << 365 << 366 << 367 << 368 << 369 << 370 << 371 << 372 << 373 << 374 << 375 << 376 << 377 << 378 << 379 << 380 << 381 << 382 << 383;
NumList LSqlQueryModel::overrideIds = NumList() << 220 << 384 << 385 << 57 << 59 << 61 << 64 << 66 << 74 << 77 << 79;
NumList LSqlRelationalDelegate::overrideIds = NumList() << 46 << 52;
NumList LSqlRelationalTableModel::overrideIds = NumList() << 386 << 387 << 220 << 59 << 74 << 388 << 78 << 389 << 390 << 391 << 392 << 393;
NumList LSqlTableModel::overrideIds = NumList() << 394 << 395 << 396 << 397 << 389 << 398 << 390 << 391 << 392 << 393 << 220 << 59 << 62 << 64 << 67 << 74 << 75 << 77 << 78 << 81 << 384;
NumList LSqlDatabase::overrideIds = NumList();
NumList LSqlError::overrideIds = NumList();
NumList LSqlField::overrideIds = NumList();
NumList LSqlIndex::overrideIds = NumList();
NumList LSqlQuery::overrideIds = NumList();
NumList LSqlRecord::overrideIds = NumList();
NumList LSqlRelation::overrideIds = NumList();
NumList LSqlResult::overrideIds = NumList() << 367 << 550 << 551 << 524 << 108 << 552 << 553 << 554 << 555 << 556 << 557 << 558 << 559 << 560 << 561 << 562 << 563 << 564 << 565 << 566 << 381 << 567 << 568 << 142;

void* sql_ini() {
    static bool _ = false; if(_) return 0; _ = true;
    ModuleSql* module = new ModuleSql;
    module->ini2();
    LObjects::Q[210] = new Q211;
    LObjects::Q[211] = new Q212;
    LObjects::Q[212] = new Q213;
    LObjects::Q[213] = new Q214;
    LObjects::Q[214] = new Q215;
    LObjects::N[195] = new N196;
    LObjects::N[196] = new N197;
    LObjects::N[197] = new N198;
    LObjects::N[198] = new N199;
    LObjects::N[199] = new N200;
    LObjects::N[200] = new N201;
    LObjects::N[201] = new N202;
    LObjects::N[202] = new N203;
    return module; }

ModuleSql::ModuleSql() {
    sql_ini(); }

void ModuleSql::ini2() {
    META_TYPE_(LObjects::T_QSqlDatabase, QSqlDatabase)
    META_TYPE_(LObjects::T_QSqlError,    QSqlError)
    META_TYPE_(LObjects::T_QSqlField,    QSqlField)
    META_TYPE_(LObjects::T_QSqlIndex,    QSqlIndex)
    META_TYPE_(LObjects::T_QSqlQuery,    QSqlQuery)
    META_TYPE_(LObjects::T_QSqlRecord,   QSqlRecord)
    META_TYPE_(LObjects::T_QSqlRelation, QSqlRelation) }

void* ModuleSql::toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QSqlDatabase == n)      { p = new QSqlDatabase(*toQSqlDatabasePointer(l_arg)); }
    else if(LObjects::T_QSqlError == n)    { p = new QSqlError(*toQSqlErrorPointer(l_arg)); }
    else if(LObjects::T_QSqlField == n)    { p = new QSqlField(*toQSqlFieldPointer(l_arg)); }
    else if(LObjects::T_QSqlIndex == n)    { p = new QSqlIndex(*toQSqlIndexPointer(l_arg)); }
    else if(LObjects::T_QSqlQuery == n)    { p = new QSqlQuery(*toQSqlQueryPointer(l_arg)); }
    else if(LObjects::T_QSqlRecord == n)   { p = new QSqlRecord(*toQSqlRecordPointer(l_arg)); }
    else if(LObjects::T_QSqlRelation == n) { p = new QSqlRelation(*toQSqlRelationPointer(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }

cl_object ModuleSql::to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QSqlDatabase == n)      { l_ret = from_qsqldatabase(*(QSqlDatabase*)p); }
    else if(LObjects::T_QSqlError == n)    { l_ret = from_qsqlerror(*(QSqlError*)p); }
    else if(LObjects::T_QSqlField == n)    { l_ret = from_qsqlfield(*(QSqlField*)p); }
    else if(LObjects::T_QSqlIndex == n)    { l_ret = from_qsqlindex(*(QSqlIndex*)p); }
    else if(LObjects::T_QSqlQuery == n)    { l_ret = from_qsqlquery(*(QSqlQuery*)p); }
    else if(LObjects::T_QSqlRecord == n)   { l_ret = from_qsqlrecord(*(QSqlRecord*)p); }
    else if(LObjects::T_QSqlRelation == n) { l_ret = from_qsqlrelation(*(QSqlRelation*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

const QMetaObject* ModuleSql::staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 211: m = &QSqlDriver::staticMetaObject; break;
        case 212: m = &QSqlQueryModel::staticMetaObject; break;
        case 213: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 214: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 215: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void ModuleSql::deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 196: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 197: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 198: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 199: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 200: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 201: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 202: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 203: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* ModuleSql::overrideIds(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 211: ids = &LSqlDriver::overrideIds; break;
            case 212: ids = &LSqlQueryModel::overrideIds; break;
            case 213: ids = &LSqlRelationalDelegate::overrideIds; break;
            case 214: ids = &LSqlRelationalTableModel::overrideIds; break;
            case 215: ids = &LSqlTableModel::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 196: ids = &LSqlDatabase::overrideIds; break;
            case 197: ids = &LSqlError::overrideIds; break;
            case 198: ids = &LSqlField::overrideIds; break;
            case 199: ids = &LSqlIndex::overrideIds; break;
            case 200: ids = &LSqlQuery::overrideIds; break;
            case 201: ids = &LSqlRecord::overrideIds; break;
            case 202: ids = &LSqlRelation::overrideIds; break;
            case 203: ids = &LSqlResult::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
