// copyright (c) Polos Ruetz
// see Qt_EQL, Qt_EQL_dynamic, QtWebKit: JavaScript / Lisp bridge

#include <QtGui>
#include <ecl/ecl.h>
#include "qt_eql.h"
#include "ecl_fun.h"
#include "eql.h"
#include "gen/_lobjects.h"

QT_BEGIN_NAMESPACE

#define PUSH_ARG(x, list) list = CONS(to_lisp_arg(qMakePair(QByteArray(x.name()), x.data())), list)

static QHash<QByteArray, void*> lisp_functions;

static cl_object eql_fun(cl_object l_fun, cl_object l_args) {
    cl_object l_ret = Cnil;
    const cl_env_ptr l_env = ecl_process_env();
    CL_CATCH_ALL_BEGIN(l_env) {
        CL_UNWIND_PROTECT_BEGIN(l_env) {
            l_ret = cl_apply(2, l_fun, l_args); }
        CL_UNWIND_PROTECT_EXIT {}
        CL_UNWIND_PROTECT_END; }
    CL_CATCH_ALL_END;
    return l_ret; }

static QVariant eql_fun2(const QByteArray& pkgFun,
                         int ret_type,
                         const QGenericArgument& a1, const QGenericArgument& a2, const QGenericArgument& a3, const QGenericArgument& a4, const QGenericArgument& a5,
                         const QGenericArgument& a6, const QGenericArgument& a7, const QGenericArgument& a8, const QGenericArgument& a9, const QGenericArgument& a10) {
    void* symbol = lisp_functions.value(pkgFun);
    if(!symbol) {
        int p = pkgFun.indexOf(':');
        QByteArray pkg = (p == -1) ? "eql-user" : pkgFun.left(p);
        QByteArray fun = pkgFun.mid(pkgFun.lastIndexOf(':') + 1);
        cl_object l_sym = cl_find_symbol(2,
                                         make_constant_base_string(fun.toUpper().constData()),
                                         cl_find_package(make_constant_base_string(pkg.toUpper().constData())));
        if(l_sym != Cnil) {
            symbol = (void*)l_sym;
            lisp_functions[pkgFun] = symbol; }}
    cl_object l_args = Cnil;
    if(a1.name()) { PUSH_ARG(a1, l_args);
        if(a2.name()) { PUSH_ARG(a2, l_args);
            if(a3.name()) { PUSH_ARG(a3, l_args);
                if(a4.name()) { PUSH_ARG(a4, l_args);
                    if(a5.name()) { PUSH_ARG(a5, l_args);
                        if(a6.name()) { PUSH_ARG(a6, l_args);
                            if(a7.name()) { PUSH_ARG(a7, l_args);
                                if(a8.name()) { PUSH_ARG(a8, l_args);
                                    if(a9.name()) { PUSH_ARG(a9, l_args);
                                        if(a10.name()) { PUSH_ARG(a10, l_args); }}}}}}}}}}
    l_args = cl_nreverse(l_args);
    QVariant ret;
    if(symbol) {
        cl_object l_ret = eql_fun((cl_object)symbol, l_args);
        if(ret_type != -1) {
            ret = toQVariant(l_ret, 0, ret_type); }
        return ret; }
    error_msg(QString("eql_fun(): %1").arg(QString(pkgFun)).toLatin1().constData(), l_args);
    return ret; }

void eql_fun(const QByteArray& fun,
             QGenericArgument a1, QGenericArgument a2, QGenericArgument a3, QGenericArgument a4, QGenericArgument a5,
             QGenericArgument a6, QGenericArgument a7, QGenericArgument a8, QGenericArgument a9, QGenericArgument a10) {
    return (void)eql_fun2(fun, -1, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }

QVariant eql_fun(const QByteArray& fun,
                 int ret_type,
                 QGenericArgument a1, QGenericArgument a2, QGenericArgument a3, QGenericArgument a4, QGenericArgument a5,
                 QGenericArgument a6, QGenericArgument a7, QGenericArgument a8, QGenericArgument a9, QGenericArgument a10) {
    return eql_fun2(fun, ret_type, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }

bool eql_check_type(int id, const QByteArray& name) { return LObjects::checkType(id, name); }

QT_END_NAMESPACE

