// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LSqlDriver::overrideIds = NumList() << 319 << 130 << 320 << 321 << 322 << 323 << 324 << 325 << 326 << 327 << 328 << 329 << 330 << 331 << 332 << 333 << 334 << 335 << 336 << 337 << 338 << 339 << 340;
NumList LSqlQueryModel::overrideIds = NumList() << 212 << 341 << 342 << 57 << 59 << 61 << 64 << 66 << 74 << 76 << 78;
NumList LSqlRelationalDelegate::overrideIds = NumList() << 46 << 52;
NumList LSqlRelationalTableModel::overrideIds = NumList() << 343 << 344 << 212 << 59 << 74 << 345 << 77 << 346 << 347 << 348 << 349 << 350;
NumList LSqlTableModel::overrideIds = NumList() << 351 << 352 << 353 << 354 << 346 << 355 << 347 << 348 << 349 << 350 << 212 << 59 << 62 << 64 << 67 << 74 << 75 << 76 << 77 << 80 << 341;
NumList LSqlDatabase::overrideIds = NumList();
NumList LSqlError::overrideIds = NumList();
NumList LSqlField::overrideIds = NumList();
NumList LSqlIndex::overrideIds = NumList();
NumList LSqlQuery::overrideIds = NumList();
NumList LSqlRecord::overrideIds = NumList();
NumList LSqlRelation::overrideIds = NumList();
NumList LSqlResult::overrideIds = NumList() << 324 << 451 << 452 << 443 << 107 << 453 << 454 << 455 << 456 << 457 << 458 << 459 << 460 << 461 << 462 << 463 << 464 << 465 << 466 << 467 << 338 << 468 << 469 << 141;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[157] = new Q158;
    LObjects::Q[158] = new Q159;
    LObjects::Q[159] = new Q160;
    LObjects::Q[160] = new Q161;
    LObjects::Q[161] = new Q162;
    LObjects::N[134] = new N135;
    LObjects::N[135] = new N136;
    LObjects::N[136] = new N137;
    LObjects::N[137] = new N138;
    LObjects::N[138] = new N139;
    LObjects::N[139] = new N140;
    LObjects::N[140] = new N141;
    LObjects::N[141] = new N142; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 158: m = &QSqlDriver::staticMetaObject; break;
        case 159: m = &QSqlQueryModel::staticMetaObject; break;
        case 160: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 161: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 162: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 135: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 136: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 137: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 138: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 139: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 140: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 141: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 142: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 158: ids = &LSqlDriver::overrideIds; break;
            case 159: ids = &LSqlQueryModel::overrideIds; break;
            case 160: ids = &LSqlRelationalDelegate::overrideIds; break;
            case 161: ids = &LSqlRelationalTableModel::overrideIds; break;
            case 162: ids = &LSqlTableModel::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 135: ids = &LSqlDatabase::overrideIds; break;
            case 136: ids = &LSqlError::overrideIds; break;
            case 137: ids = &LSqlField::overrideIds; break;
            case 138: ids = &LSqlIndex::overrideIds; break;
            case 139: ids = &LSqlQuery::overrideIds; break;
            case 140: ids = &LSqlRecord::overrideIds; break;
            case 141: ids = &LSqlRelation::overrideIds; break;
            case 142: ids = &LSqlResult::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
