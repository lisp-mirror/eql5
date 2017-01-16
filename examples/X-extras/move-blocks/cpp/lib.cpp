#include "lib.h"
#include "eql_fun.h"

QT_BEGIN_NAMESPACE

static qreal easingFunction(qreal progress) {
    // see "../move-blocks.lisp"
    return eql_fun("eql-user::custom-easing-function", QVariant::Double,
                   Q_ARG(qreal, progress)).toDouble(); }

QEasingCurve* CPP::easingCurve() {
    static QEasingCurve* curve = 0;
    if(!curve) {
        curve = new QEasingCurve(QEasingCurve::Custom);
        curve->setCustomType(easingFunction); }
    return curve; }

QObject* ini() {
    static CPP* cpp = 0;
    if(!cpp) {
        cpp = new CPP; }
    return cpp; }

QT_END_NAMESPACE
