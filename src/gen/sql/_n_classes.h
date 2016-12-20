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
    friend class N164;
public:
    LSqlDatabase(uint u) : unique(u) {}
    LSqlDatabase(uint u, const QSqlDatabase& x1) : QSqlDatabase(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlError : public QSqlError {
    friend class N165;
public:
    LSqlError(uint u, const QString& x1 = QString(), const QString& x2 = QString(), ErrorType x3 = NoError, const QString& x4 = QString()) : QSqlError(x1, x2, x3, x4), unique(u) {}
    LSqlError(uint u, const QSqlError& x1) : QSqlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlField : public QSqlField {
    friend class N166;
public:
    LSqlField(uint u, const QString& x1 = QString(), QVariant::Type x2 = QVariant::Invalid) : QSqlField(x1, x2), unique(u) {}
    LSqlField(uint u, const QSqlField& x1) : QSqlField(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlIndex : public QSqlIndex {
    friend class N167;
public:
    LSqlIndex(uint u, const QString& x1 = QString(), const QString& x2 = QString()) : QSqlIndex(x1, x2), unique(u) {}
    LSqlIndex(uint u, const QSqlIndex& x1) : QSqlIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlQuery : public QSqlQuery {
    friend class N168;
public:
    LSqlQuery(uint u, QSqlResult* x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QString& x1 = QString(), QSqlDatabase x2 = QSqlDatabase()) : QSqlQuery(x1, x2), unique(u) {}
    LSqlQuery(uint u, QSqlDatabase x1) : QSqlQuery(x1), unique(u) {}
    LSqlQuery(uint u, const QSqlQuery& x1) : QSqlQuery(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRecord : public QSqlRecord {
    friend class N169;
public:
    LSqlRecord(uint u) : unique(u) {}
    LSqlRecord(uint u, const QSqlRecord& x1) : QSqlRecord(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlRelation : public QSqlRelation {
    friend class N170;
public:
    LSqlRelation(uint u) : unique(u) {}
    LSqlRelation(uint u, const QString& x1, const QString& x2, const QString& x3) : QSqlRelation(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSqlResult : public QSqlResult {
    friend class N171;
public:

    static NumList overrideIds;
    uint unique;

    QVariant handle() const { quint64 id = LObjects::override_id(unique, 332); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 332, 0, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::handle(); } return ret; }
    void bindValue(int x1, const QVariant& x2, QSql::ParamType x3) { quint64 id = LObjects::override_id(unique, 488); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 488, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::bindValue(x1, x2, x3); }}
    QVariant data(int x1) { quint64 id = LObjects::override_id(unique, 479); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 479, args, id).value<QVariant>(); } return ret; }
    bool exec() { quint64 id = LObjects::override_id(unique, 107); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 107, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::exec(); } return ret; }
    bool fetch(int x1) { quint64 id = LObjects::override_id(unique, 490); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 490, args, id).toBool(); } return ret; }
    bool fetchFirst() { quint64 id = LObjects::override_id(unique, 491); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 491, 0, id).toBool(); } return ret; }
    bool fetchLast() { quint64 id = LObjects::override_id(unique, 492); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 492, 0, id).toBool(); } return ret; }
    bool fetchNext() { quint64 id = LObjects::override_id(unique, 493); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 493, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchNext(); } return ret; }
    bool fetchPrevious() { quint64 id = LObjects::override_id(unique, 494); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 494, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::fetchPrevious(); } return ret; }
    bool isNull(int x1) { quint64 id = LObjects::override_id(unique, 495); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 495, args, id).toBool(); } return ret; }
    QVariant lastInsertId() const { quint64 id = LObjects::override_id(unique, 496); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 496, 0, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::lastInsertId(); } return ret; }
    int numRowsAffected() { quint64 id = LObjects::override_id(unique, 497); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 497, 0, id).toInt(); } return ret; }
    bool prepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 498); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 498, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::prepare(x1); } return ret; }
    QSqlRecord record() const { quint64 id = LObjects::override_id(unique, 499); void* fun = LObjects::overrideFun(id); QSqlRecord ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 499, 0, id).value<QSqlRecord>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::record(); } return ret; }
    bool reset(const QString& x1) { quint64 id = LObjects::override_id(unique, 500); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 500, args, id).toBool(); } return ret; }
    bool savePrepare(const QString& x1) { quint64 id = LObjects::override_id(unique, 501); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 501, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSqlResult::savePrepare(x1); } return ret; }
    void setActive(bool x1) { quint64 id = LObjects::override_id(unique, 502); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 502, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setActive(x1); }}
    void setAt(int x1) { quint64 id = LObjects::override_id(unique, 503); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 503, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setAt(x1); }}
    void setForwardOnly(bool x1) { quint64 id = LObjects::override_id(unique, 504); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 504, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setForwardOnly(x1); }}
    void setLastError(const QSqlError& x1) { quint64 id = LObjects::override_id(unique, 346); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 346, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setLastError(x1); }}
    void setQuery(const QString& x1) { quint64 id = LObjects::override_id(unique, 505); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 505, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setQuery(x1); }}
    void setSelect(bool x1) { quint64 id = LObjects::override_id(unique, 506); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 506, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSqlResult::setSelect(x1); }}
    int size() { quint64 id = LObjects::override_id(unique, 141); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 141, 0, id).toInt(); } return ret; }
};

QT_END_NAMESPACE

#endif
