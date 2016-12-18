// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LSqlDriver::overrideIds = NumList() << 327 << 130 << 328 << 329 << 330 << 331 << 332 << 333 << 334 << 335 << 336 << 337 << 338 << 339 << 340 << 341 << 342 << 343 << 344 << 345 << 346 << 347 << 348;
NumList LSqlQueryModel::overrideIds = NumList() << 219 << 349 << 350 << 57 << 59 << 61 << 64 << 66 << 74 << 76 << 78;
NumList LSqlRelationalDelegate::overrideIds = NumList() << 46 << 52;
NumList LSqlRelationalTableModel::overrideIds = NumList() << 351 << 352 << 219 << 59 << 74 << 353 << 77 << 354 << 355 << 356 << 357 << 358;
NumList LSqlTableModel::overrideIds = NumList() << 359 << 360 << 361 << 362 << 354 << 363 << 355 << 356 << 357 << 358 << 219 << 59 << 62 << 64 << 67 << 74 << 75 << 76 << 77 << 80 << 349;
NumList LSqlDatabase::overrideIds = NumList();
NumList LSqlError::overrideIds = NumList();
NumList LSqlField::overrideIds = NumList();
NumList LSqlIndex::overrideIds = NumList();
NumList LSqlQuery::overrideIds = NumList();
NumList LSqlRecord::overrideIds = NumList();
NumList LSqlRelation::overrideIds = NumList();
NumList LSqlResult::overrideIds = NumList() << 332 << 468 << 469 << 459 << 107 << 470 << 471 << 472 << 473 << 474 << 475 << 476 << 477 << 478 << 479 << 480 << 481 << 482 << 483 << 484 << 346 << 485 << 486 << 141;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[179] = new Q180;
    LObjects::Q[180] = new Q181;
    LObjects::Q[181] = new Q182;
    LObjects::Q[182] = new Q183;
    LObjects::Q[183] = new Q184;
    LObjects::N[141] = new N142;
    LObjects::N[142] = new N143;
    LObjects::N[143] = new N144;
    LObjects::N[144] = new N145;
    LObjects::N[145] = new N146;
    LObjects::N[146] = new N147;
    LObjects::N[147] = new N148;
    LObjects::N[148] = new N149; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 180: m = &QSqlDriver::staticMetaObject; break;
        case 181: m = &QSqlQueryModel::staticMetaObject; break;
        case 182: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 183: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 184: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 142: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 143: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 144: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 145: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 146: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 147: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 148: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 149: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 180: ids = &LSqlDriver::overrideIds; break;
            case 181: ids = &LSqlQueryModel::overrideIds; break;
            case 182: ids = &LSqlRelationalDelegate::overrideIds; break;
            case 183: ids = &LSqlRelationalTableModel::overrideIds; break;
            case 184: ids = &LSqlTableModel::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 142: ids = &LSqlDatabase::overrideIds; break;
            case 143: ids = &LSqlError::overrideIds; break;
            case 144: ids = &LSqlField::overrideIds; break;
            case 145: ids = &LSqlIndex::overrideIds; break;
            case 146: ids = &LSqlQuery::overrideIds; break;
            case 147: ids = &LSqlRecord::overrideIds; break;
            case 148: ids = &LSqlRelation::overrideIds; break;
            case 149: ids = &LSqlResult::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
