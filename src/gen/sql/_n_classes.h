// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LSqlDatabase : public QSqlDatabase {
    friend class N138;
public:
    LSqlDatabase(uint u) : unique(u) {}
    LSqlDatabase(uint u, const QSqlDatabase& x1) : QSqlDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlError : public QSqlError {
    friend class N139;
public:
    LSqlError(uint u, const QString& x1 = QString(), const QString& x2 = QString(), ErrorType x3 = NoError, const QString& x4 = QString()) : QSqlError(x1, x2, x3, x4), unique(u) {}
    LSqlError(uint u, const QSqlError& x1) : QSqlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlField : public QSqlField {
    friend class N140;
public:
    LSqlField(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) : QSqlField(x1, x2), unique(u) {}
    LSqlField(uint u, const QSqlField& x1) : QSqlField(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlIndex : public QSqlIndex {
    friend class N141;
public:
    LSqlIndex(uint u, const QString& x1 = QString(), const QString& x2 = QString()) : QSqlIndex(x1, x2), unique(u) {}
    LSqlIndex(uint u, const QSqlIndex& x1) : QSqlIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlQuery : public QSqlQuery {
    friend class N142;
public:
    LSqlQuery(uint u, QSqlResult* x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) : QSqlQuery(x1, x2), unique(u) {}
    LSqlQuery(uint u, QSqlDatabase x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QSqlQuery& x1) : QSqlQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRecord : public QSqlRecord {
    friend class N143;
public:
    LSqlRecord(uint u) : unique(u) {}
    LSqlRecord(uint u, const QSqlRecord& x1) : QSqlRecord(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRelation : public QSqlRelation {
    friend class N144;
public:
    LSqlRelation(uint u) : unique(u) {}
    LSqlRelation(uint u, const QString& x1, const QString& x2, const QString& x3) : QSqlRelation(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlResult : public QSqlResult {
    friend class N145;
public:

    static NumList overrideIds;
    uint unique;

    QVariant handle() const { quint64 id = LObjects::override_id(unique, 332); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 332, 0, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::handle(); } return ret; }
    void bindValue(int x1, const QVariant& x2, QSql::ParamType x3) { quint64 id = LObjects::override_id(unique, 469); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 469, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::bindValue(x1, x2, x3); }}
    QVariant data(int x1) { quint64 id = LObjects::override_id(unique, 459); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 459, args, id).value<QVariant>(); } return ret; }
    bool exec() { quint64 id = LObjects::override_id(unique, 107); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 107, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::exec(); } return ret; }
    bool fetch(int x1) { quint64 id = LObjects::override_id(unique, 471); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 471, args, id).toBool(); } return ret; }
    bool fetchFirst() { quint64 id = LObjects::override_id(unique, 472); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 472, 0, id).toBool(); } return ret; }
    bool fetchLast() { quint64 id = LObjects::override_id(unique, 473); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 473, 0, id).toBool(); } return ret; }
    bool fetchNext() { quint64 id = LObjects::override_id(unique, 474); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 474, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchNext(); } return ret; }
    bool fetchPrevious() { quint64 id = LObjects::override_id(unique, 475); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 475, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchPrevious(); } return ret; }
    bool isNull(int x1) { quint64 id = LObjects::override_id(unique, 476); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 476, args, id).toBool(); } return ret; }
    QVariant lastInsertId() const { quint64 id = LObjects::override_id(unique, 477); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 477, 0, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::lastInsertId(); } return ret; }
    int numRowsAffected() { quint64 id = LObjects::override_id(unique, 478); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 478, 0, id).toInt(); } return ret; }
    bool prepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 479); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 479, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::prepare(x1); } return ret; }
    QSqlRecord record() const { quint64 id = LObjects::override_id(unique, 480); void* fun = LObjects::overrideFun(id); QSqlRecord ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 480, 0, id).value<QSqlRecord>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::record(); } return ret; }
    bool reset(const QString& x1) { quint64 id = LObjects::override_id(unique, 481); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 481, args, id).toBool(); } return ret; }
    bool savePrepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 482); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 482, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::savePrepare(x1); } return ret; }
    void setActive(bool x1) { quint64 id = LObjects::override_id(unique, 483); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 483, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setActive(x1); }}
    void setAt(int x1) { quint64 id = LObjects::override_id(unique, 484); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 484, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setAt(x1); }}
    void setForwardOnly(bool x1) { quint64 id = LObjects::override_id(unique, 485); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 485, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setForwardOnly(x1); }}
    void setLastError(const QSqlError& x1) { quint64 id = LObjects::override_id(unique, 346); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 346, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setLastError(x1); }}
    void setQuery(const QString& x1) { quint64 id = LObjects::override_id(unique, 486); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 486, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setQuery(x1); }}
    void setSelect(bool x1) { quint64 id = LObjects::override_id(unique, 487); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 487, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setSelect(x1); }}
    int size() { quint64 id = LObjects::override_id(unique, 141); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 141, 0, id).toInt(); } return ret; }
};

QT_END_NAMESPACE

#endif
