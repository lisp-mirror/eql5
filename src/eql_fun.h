// copyright (c) Polos Ruetz
// see examples in Qt_EQL

#ifndef EQL_FUN_H
#define EQL_FUN_H

#include <QGenericArgument>
#include <QVariant>

QT_BEGIN_NAMESPACE

#define QSLOT(x)   "1"#x
#define QSIGNAL(x) "2"#x

#define Q_PTR(type, var) (eql_check_type(var.value<eql_pointer>().id, #type) \
                         ? (type)var.value<eql_pointer>().pointer \
                         : 0)

extern void
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

extern QVariant
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

extern bool eql_check_type(int, const QByteArray&);

struct eql_pointer {
    void* pointer;
    int id;

    eql_pointer()               : pointer(0), id(0) {}
    eql_pointer(void* v, int i) : pointer(v), id(i) {}
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(eql_pointer)

#endif
