// copyright (c) Polos Ruetz

#ifndef DYN_OBJECT_H
#define DYN_OBJECT_H

#include <QObject>
#include <QHash>
#include <QVector>

QT_BEGIN_NAMESPACE

typedef QList<QByteArray> StrList;

class DynObject: public QObject {
    // no Q_OBJECT: custom connect, disconnect, qt_metacall
public:
    DynObject(QObject* par = 0);

    static int event_filter_handle;
    static QObject* currentSender;

    bool filters;
    QList<void*> functions;
    QList<StrList> types;
    QList<QObject*> senders;
    QVector<int> ev_ids;
    QVector<int> ev_types;
    QVector<void*> ev_funs;
    QVector<QObject*> ev_objects;

    static bool connect(QObject*, const char*, DynObject*, void*);
    static bool disconnect(QObject*, const char*, DynObject*, void*);

    int qt_metacall(QMetaObject::Call, int, void**);
    int addEventFilter(QObject*, int, void*);
    bool removeEventFilter(int);
    void clearEventFilters();
    bool eventFilter(QObject*, QEvent*);
};

QT_END_NAMESPACE

#endif
