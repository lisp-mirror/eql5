// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LHelpContentItem : public QHelpContentItem {
    friend class N65;
public:

    static NumList overrideIds;
    uint unique;
};

class LHelpSearchQuery : public QHelpSearchQuery {
    friend class N67;
public:
    LHelpSearchQuery(uint u) : unique(u) {}
    LHelpSearchQuery(uint u, FieldName x1, const QStringList& x2) : QHelpSearchQuery(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

QT_END_NAMESPACE

#endif
