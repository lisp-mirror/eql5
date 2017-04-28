// copyright (c) Polos Ruetz
// see Qt_EQL example

#ifndef QT_EQL_H
#define QT_EQL_H

#include <QGenericArgument>
#include <QVariant>
#include "eql5/eql_global.h"

QT_BEGIN_NAMESPACE

EQL_EXPORT void
eql_fun(const QByteArray&,
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument());

EQL_EXPORT QVariant
eql_fun(const QByteArray&,
        int,
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument(),
        QGenericArgument = QGenericArgument());

EQL_EXPORT bool eql_check_type(int, const QByteArray&);

QT_END_NAMESPACE

#endif
