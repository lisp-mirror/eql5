// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LSqlDriver::overrideIds = NumList() << 320 << 130 << 321 << 322 << 323 << 324 << 325 << 326 << 327 << 328 << 329 << 330 << 331 << 332 << 333 << 334 << 335 << 336 << 337 << 338 << 339 << 340 << 341;
NumList LSqlQueryModel::overrideIds = NumList() << 212 << 342 << 343 << 57 << 59 << 61 << 64 << 66 << 74 << 76 << 78;
NumList LSqlRelationalDelegate::overrideIds = NumList() << 46 << 52;
NumList LSqlRelationalTableModel::overrideIds = NumList() << 344 << 345 << 212 << 59 << 74 << 346 << 77 << 347 << 348 << 349 << 350 << 351;
NumList LSqlTableModel::overrideIds = NumList() << 352 << 353 << 354 << 355 << 347 << 356 << 348 << 349 << 350 << 351 << 212 << 59 << 62 << 64 << 67 << 74 << 75 << 76 << 77 << 80 << 342;
NumList LSqlDatabase::overrideIds = NumList();
NumList LSqlError::overrideIds = NumList();
NumList LSqlField::overrideIds = NumList();
NumList LSqlIndex::overrideIds = NumList();
NumList LSqlQuery::overrideIds = NumList();
NumList LSqlRecord::overrideIds = NumList();
NumList LSqlRelation::overrideIds = NumList();
NumList LSqlResult::overrideIds = NumList() << 325 << 449 << 450 << 439 << 107 << 451 << 452 << 453 << 454 << 455 << 456 << 457 << 458 << 459 << 460 << 461 << 462 << 463 << 464 << 465 << 339 << 466 << 467 << 141;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[160] = new Q161;
    LObjects::Q[161] = new Q162;
    LObjects::Q[162] = new Q163;
    LObjects::Q[163] = new Q164;
    LObjects::Q[164] = new Q165;
    LObjects::N[131] = new N132;
    LObjects::N[132] = new N133;
    LObjects::N[133] = new N134;
    LObjects::N[134] = new N135;
    LObjects::N[135] = new N136;
    LObjects::N[136] = new N137;
    LObjects::N[137] = new N138;
    LObjects::N[138] = new N139; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 161: m = &QSqlDriver::staticMetaObject; break;
        case 162: m = &QSqlQueryModel::staticMetaObject; break;
        case 163: m = &QSqlRelationalDelegate::staticMetaObject; break;
        case 164: m = &QSqlRelationalTableModel::staticMetaObject; break;
        case 165: m = &QSqlTableModel::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 132: if(gc) delete (QSqlDatabase*)p; else delete (LSqlDatabase*)p; break;
        case 133: if(gc) delete (QSqlError*)p; else delete (LSqlError*)p; break;
        case 134: if(gc) delete (QSqlField*)p; else delete (LSqlField*)p; break;
        case 135: if(gc) delete (QSqlIndex*)p; else delete (LSqlIndex*)p; break;
        case 136: if(gc) delete (QSqlQuery*)p; else delete (LSqlQuery*)p; break;
        case 137: if(gc) delete (QSqlRecord*)p; else delete (LSqlRecord*)p; break;
        case 138: if(gc) delete (QSqlRelation*)p; else delete (LSqlRelation*)p; break;
        case 139: if(gc) delete (QSqlResult*)p; else delete (LSqlResult*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 161: ids = &LSqlDriver::overrideIds; break;
            case 162: ids = &LSqlQueryModel::overrideIds; break;
            case 163: ids = &LSqlRelationalDelegate::overrideIds; break;
            case 164: ids = &LSqlRelationalTableModel::overrideIds; break;
            case 165: ids = &LSqlTableModel::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 132: ids = &LSqlDatabase::overrideIds; break;
            case 133: ids = &LSqlError::overrideIds; break;
            case 134: ids = &LSqlField::overrideIds; break;
            case 135: ids = &LSqlIndex::overrideIds; break;
            case 136: ids = &LSqlQuery::overrideIds; break;
            case 137: ids = &LSqlRecord::overrideIds; break;
            case 138: ids = &LSqlRelation::overrideIds; break;
            case 139: ids = &LSqlResult::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
