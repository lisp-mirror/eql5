#include <ecl/ecl.h>
#include "eql.h"
#include "main.h"

extern "C" void ini_app(cl_object);

// Qt_EQL

QT_BEGIN_NAMESPACE

static qreal easingFunction(qreal progress) {
    return eql_fun("eql-user::custom-easing-function", QVariant::Double,
                   Q_ARG(qreal, progress)).toDouble(); }
   
QEasingCurve* Qt_EQL_Application::easingCurve() {
    static QEasingCurve* curve = 0;
    if(!curve) {
        curve = new QEasingCurve(QEasingCurve::Custom);
        curve->setCustomType(easingFunction); }
    return curve; }

QT_END_NAMESPACE

// main

int catch_all_qexec() {
    int ret = 0;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        ret = QApplication::exec(); }
    CL_CATCH_ALL_END;
    return ret; }

int main(int argc, char** argv) {

    EQL::ini(argv);

    Qt_EQL_Application qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(utf8);

    EQL eql;
    eql.exec(ini_app);

    return catch_all_qexec(); }

