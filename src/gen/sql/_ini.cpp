// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

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

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
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
    LObjects::N[202] = new N203; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 211: m = &QSqlDriver::staticMetaObject; break;
        case 212: m = &QSqlQueryModel::staticMetaObject; break;
        case 213: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 214: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 215: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 196: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 197: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 198: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 199: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 200: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 201: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 202: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 203: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
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
