// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include "../_main_n_methods.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtHelp>

QT_BEGIN_NAMESPACE

class N65 : public QObject { // QHelpContentItem
    Q_OBJECT
public:
    Q_INVOKABLE QHelpContentItem* Mchild(QHelpContentItem* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE int MchildCount(QHelpContentItem* o) const { return o->childCount(); }
    Q_INVOKABLE int MchildPosition(QHelpContentItem* o, QHelpContentItem* x1) const { return o->childPosition(x1); }
    Q_INVOKABLE QHelpContentItem* Mparent(QHelpContentItem* o) const { return o->parent(); }
    Q_INVOKABLE int Mrow(QHelpContentItem* o) const { return o->row(); }
    Q_INVOKABLE QString Mtitle(QHelpContentItem* o) const { return o->title(); }
    Q_INVOKABLE QUrl Murl(QHelpContentItem* o) const { return o->url(); }
};

class N67 : public QObject { // QHelpSearchQuery
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LHelpSearchQuery(u); }
    Q_INVOKABLE void* C(uint u, QHelpSearchQuery::FieldName x1, const QStringList& x2) { return new LHelpSearchQuery(u, x1, x2); }
};

QT_END_NAMESPACE

#endif
