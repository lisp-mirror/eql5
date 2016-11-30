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
    friend class N132;
public:
    LSqlDatabase(uint u) : unique(u) {}
    LSqlDatabase(uint u, const QSqlDatabase& x1) : QSqlDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlError : public QSqlError {
    friend class N133;
public:
    LSqlError(uint u, const QString& x1 = QString(), const QString& x2 = QString(), ErrorType x3 = NoError, const QString& x4 = QString()) : QSqlError(x1, x2, x3, x4), unique(u) {}
    LSqlError(uint u, const QSqlError& x1) : QSqlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlField : public QSqlField {
    friend class N134;
public:
    LSqlField(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) : QSqlField(x1, x2), unique(u) {}
    LSqlField(uint u, const QSqlField& x1) : QSqlField(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlIndex : public QSqlIndex {
    friend class N135;
public:
    LSqlIndex(uint u, const QString& x1 = QString(), const QString& x2 = QString()) : QSqlIndex(x1, x2), unique(u) {}
    LSqlIndex(uint u, const QSqlIndex& x1) : QSqlIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlQuery : public QSqlQuery {
    friend class N136;
public:
    LSqlQuery(uint u, QSqlResult* x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) : QSqlQuery(x1, x2), unique(u) {}
    LSqlQuery(uint u, QSqlDatabase x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QSqlQuery& x1) : QSqlQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRecord : public QSqlRecord {
    friend class N137;
public:
    LSqlRecord(uint u) : unique(u) {}
    LSqlRecord(uint u, const QSqlRecord& x1) : QSqlRecord(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRelation : public QSqlRelation {
    friend class N138;
public:
    LSqlRelation(uint u) : unique(u) {}
    LSqlRelation(uint u, const QString& x1, const QString& x2, const QString& x3) : QSqlRelation(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlResult : public QSqlResult {
    friend class N139;
public:

    static NumList overrideIds;
    uint unique;

    QVariant handle() const { quint64 id = LObjects::override_id(unique, 325); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 325, 0, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::handle(); } return ret; }
    void bindValue(int x1, const QVariant& x2, QSql::ParamType x3) { quint64 id = LObjects::override_id(unique, 449); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 449, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::bindValue(x1, x2, x3); }}
    QVariant data(int x1) { quint64 id = LObjects::override_id(unique, 439); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 439, args, id).value<QVariant>(); } return ret; }
    bool exec() { quint64 id = LObjects::override_id(unique, 107); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 107, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::exec(); } return ret; }
    bool fetch(int x1) { quint64 id = LObjects::override_id(unique, 451); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 451, args, id).toBool(); } return ret; }
    bool fetchFirst() { quint64 id = LObjects::override_id(unique, 452); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 452, 0, id).toBool(); } return ret; }
    bool fetchLast() { quint64 id = LObjects::override_id(unique, 453); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 453, 0, id).toBool(); } return ret; }
    bool fetchNext() { quint64 id = LObjects::override_id(unique, 454); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 454, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchNext(); } return ret; }
    bool fetchPrevious() { quint64 id = LObjects::override_id(unique, 455); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 455, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchPrevious(); } return ret; }
    bool isNull(int x1) { quint64 id = LObjects::override_id(unique, 456); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 456, args, id).toBool(); } return ret; }
    QVariant lastInsertId() const { quint64 id = LObjects::override_id(unique, 457); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 457, 0, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::lastInsertId(); } return ret; }
    int numRowsAffected() { quint64 id = LObjects::override_id(unique, 458); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 458, 0, id).toInt(); } return ret; }
    bool prepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 459); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 459, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::prepare(x1); } return ret; }
    QSqlRecord record() const { quint64 id = LObjects::override_id(unique, 460); void* fun = LObjects::overrideFun(id); QSqlRecord ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 460, 0, id).value<QSqlRecord>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::record(); } return ret; }
    bool reset(const QString& x1) { quint64 id = LObjects::override_id(unique, 461); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 461, args, id).toBool(); } return ret; }
    bool savePrepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 462); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 462, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::savePrepare(x1); } return ret; }
    void setActive(bool x1) { quint64 id = LObjects::override_id(unique, 463); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 463, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setActive(x1); }}
    void setAt(int x1) { quint64 id = LObjects::override_id(unique, 464); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 464, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setAt(x1); }}
    void setForwardOnly(bool x1) { quint64 id = LObjects::override_id(unique, 465); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 465, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setForwardOnly(x1); }}
    void setLastError(const QSqlError& x1) { quint64 id = LObjects::override_id(unique, 339); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 339, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setLastError(x1); }}
    void setQuery(const QString& x1) { quint64 id = LObjects::override_id(unique, 466); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 466, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setQuery(x1); }}
    void setSelect(bool x1) { quint64 id = LObjects::override_id(unique, 467); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 467, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setSelect(x1); }}
    int size() { quint64 id = LObjects::override_id(unique, 141); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 141, 0, id).toInt(); } return ret; }
};

QT_END_NAMESPACE

#endif
