// copyright (c) Polos Ruetz ; idea from QTimer::singleShot()

#ifndef SINGLE_SHOT_H
#define SINGLE_SHOT_H

#include <QObject>
#include <ecl/ecl.h>

QT_BEGIN_NAMESPACE

struct SingleShot : public QObject {
    int id;
    void* function;

    SingleShot(int msec, void* fun) : id(startTimer(msec)), function(fun) {}

    void timerEvent(QTimerEvent*) {
        killTimer(id);
        const cl_env_ptr l_env = ecl_process_env();
        CL_CATCH_ALL_BEGIN(l_env) {
            CL_UNWIND_PROTECT_BEGIN(l_env) {
                cl_funcall(1, (cl_object)function); }
            CL_UNWIND_PROTECT_EXIT {}
            CL_UNWIND_PROTECT_END; }
        CL_CATCH_ALL_END;
        delete this; }
};

QT_END_NAMESPACE

#endif
