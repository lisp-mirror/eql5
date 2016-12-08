#include "lib.h"
#include "../../src/eql_fun.h" // for eql_fun()

QT_BEGIN_NAMESPACE

QObject* ini()
{
    // any QObject inherited class will do (e.g. main window of a C++ application)
    static QObject* cpp = 0;
    if(!cpp) {
        cpp = new CPP;
        cpp->setObjectName("Qt_EQL");
    }
    return cpp;
}

// insert here your function implementations

void CPP::runExamples()
{
    ulong n = 123;

    // (1) call user defined function
    {
        QVariant ret = eql_fun("eql-user:say-number", QVariant::String, // see: ecl_fun.cpp:toQVariant()
                               Q_ARG(ulong, n));                        // see: ecl_fun.cpp:to_lisp_arg()

        QMessageBox::information(0, "Example 1",
                                 "<pre><b>eql_fun(\"eql-user:say-number\"...);</b><br><br>" + ret.toString());
    }

    // (2) call FORMAT directly
    {
        QVariant ret = eql_fun("format", QVariant::String,
                               Q_ARG(bool, false),   // max. 10 Q_ARG()
                               Q_ARG(QString, "~R"),
                               Q_ARG(ulong, n));

        QMessageBox::information(0, "Example 2",
                                 "<pre><b>eql_fun(\"format\"...);</b><br><br>" + ret.toString());
    }

    // (3) returning a pointer
    {
        QVariant ret = eql_fun("qnew", QMetaType::VoidStar,
                               Q_ARG(QString, "QLabel"));

        QLabel* object = Q_PTR(QLabel*, ret); // type checked at run time; 0 if check fails
        if(object) {
            // ...
        }

        QString msg;
        QDebug out(&msg);
        out << "<p>Q_PTR returned:<b>" << object << "</b></p><p>(type checked at run time)</p>";

        QMessageBox::information(0, "Example 3",
                                 "<pre><b>eql_fun(\"qnew\"...);</b>" + msg);
    }
}

QT_END_NAMESPACE
