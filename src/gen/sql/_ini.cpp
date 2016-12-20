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
NumList LSqlResult::overrideIds = NumList() << 332 << 488 << 489 << 479 << 107 << 490 << 491 << 492 << 493 << 494 << 495 << 496 << 497 << 498 << 499 << 500 << 501 << 502 << 503 << 504 << 346 << 505 << 506 << 141;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[184] = new Q185;
    LObjects::Q[185] = new Q186;
    LObjects::Q[186] = new Q187;
    LObjects::Q[187] = new Q188;
    LObjects::Q[188] = new Q189;
    LObjects::N[163] = new N164;
    LObjects::N[164] = new N165;
    LObjects::N[165] = new N166;
    LObjects::N[166] = new N167;
    LObjects::N[167] = new N168;
    LObjects::N[168] = new N169;
    LObjects::N[169] = new N170;
    LObjects::N[170] = new N171; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 185: m = &QSqlDriver::staticMetaObject; break;
        case 186: m = &QSqlQueryModel::staticMetaObject; break;
        case 187: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 188: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 189: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 164: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 165: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 166: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 167: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 168: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 169: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 170: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 171: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 185: ids = &LSqlDriver::overrideIds; break;
            case 186: ids = &LSqlQueryModel::overrideIds; break;
            case 187: ids = &LSqlRelationalDelegate::overrideIds; break;
            case 188: ids = &LSqlRelationalTableModel::overrideIds; break;
            case 189: ids = &LSqlTableModel::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 164: ids = &LSqlDatabase::overrideIds; break;
            case 165: ids = &LSqlError::overrideIds; break;
            case 166: ids = &LSqlField::overrideIds; break;
            case 167: ids = &LSqlIndex::overrideIds; break;
            case 168: ids = &LSqlQuery::overrideIds; break;
            case 169: ids = &LSqlRecord::overrideIds; break;
            case 170: ids = &LSqlRelation::overrideIds; break;
            case 171: ids = &LSqlResult::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
