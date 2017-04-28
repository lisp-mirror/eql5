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

    bool event_filters;

    static QObject* currentSender;
    static int slot_id;
    static int event_filter_handle;

    QVector<QObject*> signal_senders;
    QVector<int> signal_ids;
    QVector<int> slot_ids;
    QVector<void*> slot_functions;
    QVector<StrList> slot_types;

    QVector<int> event_ids;
    QVector<int> event_types;
    QVector<void*> event_funs;
    QVector<QObject*> event_objects;

    static bool connect(QObject*, const char*, DynObject*, void*);
    static bool disconnect(QObject*, const char*, DynObject*, void*);
    static void removeConnections(QObject*);

    int qt_metacall(QMetaObject::Call, int, void**);
    int addEventFilter(QObject*, int, void*);
    bool removeEventFilter(int);
    void clearEventFilters();
    bool eventFilter(QObject*, QEvent*);
};

QT_END_NAMESPACE

#endif
