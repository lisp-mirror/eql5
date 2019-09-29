// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtSql>
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LSqlDatabase : public QSqlDatabase {
    friend class N196;
public:
    LSqlDatabase(uint u) : unique(u) {}
    LSqlDatabase(uint u, const QSqlDatabase& x1) : QSqlDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlError : public QSqlError {
    friend class N197;
public:
    LSqlError(uint u, const QString& x1 = QString(), const QString& x2 = QString(), ErrorType x3 = NoError, const QString& x4 = QString()) : QSqlError(x1, x2, x3, x4), unique(u) {}
    LSqlError(uint u, const QSqlError& x1) : QSqlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlField : public QSqlField {
    friend class N198;
public:
    LSqlField(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) : QSqlField(x1, x2), unique(u) {}
    LSqlField(uint u, const QSqlField& x1) : QSqlField(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlIndex : public QSqlIndex {
    friend class N199;
public:
    LSqlIndex(uint u, const QString& x1 = QString(), const QString& x2 = QString()) : QSqlIndex(x1, x2), unique(u) {}
    LSqlIndex(uint u, const QSqlIndex& x1) : QSqlIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlQuery : public QSqlQuery {
    friend class N200;
public:
    LSqlQuery(uint u, QSqlResult* x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) : QSqlQuery(x1, x2), unique(u) {}
    LSqlQuery(uint u, QSqlDatabase x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QSqlQuery& x1) : QSqlQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRecord : public QSqlRecord {
    friend class N201;
public:
    LSqlRecord(uint u) : unique(u) {}
    LSqlRecord(uint u, const QSqlRecord& x1) : QSqlRecord(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRelation : public QSqlRelation {
    friend class N202;
public:
    LSqlRelation(uint u) : unique(u) {}
    LSqlRelation(uint u, const QString& x1, const QString& x2, const QString& x3) : QSqlRelation(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlResult : public QSqlResult {
    friend class N203;
public:

    static NumList overrideIds;
    uint unique;

    QVariant handle() const { quint64 id = LObjects::override_id(unique, 367); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 367, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::handle(); } return ret; }
    void bindValue(int x1, const QVariant& x2, QSql::ParamType x3) { quint64 id = LObjects::override_id(unique, 550); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 550, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::bindValue(x1, x2, x3); }}
    QVariant data(int x1) { quint64 id = LObjects::override_id(unique, 524); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 524, args, id); } return ret; }
    bool exec() { quint64 id = LObjects::override_id(unique, 108); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 108, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::exec(); } return ret; }
    bool fetch(int x1) { quint64 id = LObjects::override_id(unique, 552); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 552, args, id).toBool(); } return ret; }
    bool fetchFirst() { quint64 id = LObjects::override_id(unique, 553); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 553, 0, id).toBool(); } return ret; }
    bool fetchLast() { quint64 id = LObjects::override_id(unique, 554); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 554, 0, id).toBool(); } return ret; }
    bool fetchNext() { quint64 id = LObjects::override_id(unique, 555); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 555, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchNext(); } return ret; }
    bool fetchPrevious() { quint64 id = LObjects::override_id(unique, 556); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 556, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchPrevious(); } return ret; }
    bool isNull(int x1) { quint64 id = LObjects::override_id(unique, 557); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 557, args, id).toBool(); } return ret; }
    QVariant lastInsertId() const { quint64 id = LObjects::override_id(unique, 558); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 558, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::lastInsertId(); } return ret; }
    int numRowsAffected() { quint64 id = LObjects::override_id(unique, 559); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 559, 0, id).toInt(); } return ret; }
    bool prepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 560); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 560, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::prepare(x1); } return ret; }
    QSqlRecord record() const { quint64 id = LObjects::override_id(unique, 561); void* fun = LObjects::overrideFun(id); QSqlRecord ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 561, 0, id).value<QSqlRecord>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::record(); } return ret; }
    bool reset(const QString& x1) { quint64 id = LObjects::override_id(unique, 562); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 562, args, id).toBool(); } return ret; }
    bool savePrepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 563); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 563, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::savePrepare(x1); } return ret; }
    void setActive(bool x1) { quint64 id = LObjects::override_id(unique, 564); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 564, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setActive(x1); }}
    void setAt(int x1) { quint64 id = LObjects::override_id(unique, 565); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 565, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setAt(x1); }}
    void setForwardOnly(bool x1) { quint64 id = LObjects::override_id(unique, 566); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 566, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setForwardOnly(x1); }}
    void setLastError(const QSqlError& x1) { quint64 id = LObjects::override_id(unique, 381); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 381, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setLastError(x1); }}
    void setQuery(const QString& x1) { quint64 id = LObjects::override_id(unique, 567); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 567, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setQuery(x1); }}
    void setSelect(bool x1) { quint64 id = LObjects::override_id(unique, 568); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 568, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setSelect(x1); }}
    int size() { quint64 id = LObjects::override_id(unique, 142); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 142, 0, id).toInt(); } return ret; }
};

QT_END_NAMESPACE

#endif
