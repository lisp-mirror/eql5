// copyright (c) Polos Ruetz

#include "eql5/eql.h"
#include "ecl_fun.h"
#include "gen/_lobjects.h"
#include <iostream>
#include <QApplication>
#include <QTimer>
#include <QStringList>

const char EQL::version[] = "19.2.1"; // February 2019

extern "C" void ini_EQL(cl_object);

static const char* _argv_[] = {"EQL5"};

#ifdef COMPILE_ANDROID

#include <android/log.h>

static void logMessageHandler(QtMsgType, const QMessageLogContext& context, const QString& msg) {
    // for logging on android (see 'adb logcat')
    // examples:
    //   Lisp: (qlog "x: ~A y: ~A" x y)
    //   QML:  console.log("message")
    QString report(msg);
    if(context.file && !QString(context.file).isEmpty()) {
        report += " in file ";
        report += QString(context.file);
        report += " line ";
        report += QString::number(context.line); }
    if(context.function && !QString(context.function).isEmpty()) {
        report += " function ";
        report += QString(context.function); }
    __android_log_write(ANDROID_LOG_DEBUG, "[EQL5]", report.toLocal8Bit().constData()); }

#endif

EQL::EQL() : QObject() {
#ifdef COMPILE_ANDROID
    qInstallMessageHandler(logMessageHandler); // see above
#endif
    if(!cl_booted) {
        cl_boot(1, (char**)_argv_); }
    iniCLFunctions();
    LObjects::ini(this);
    read_VV(OBJNULL, ini_EQL); } // see "src/make.lisp"

void EQL::ini(char** argv) {
    cl_booted = true;
    cl_boot(1, argv); }

void EQL::eval(const char* lisp_code) {
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        si_safe_eval(2, ecl_read_from_cstring((char*)lisp_code), Cnil); }
    CL_CATCH_ALL_END; }

void EQL::ignoreIOStreams() {
    // [Windows] print output would cause a gui exe to crash (without console)
    eval("(eql::ignore-io-streams)"); }
    
void EQL::exec(const QStringList& args) {
    cl_object s_qtpl = cl_intern(1, make_constant_base_string("*QTPL*"));
    bool exec_with_simple_restart = false;
    QStringList arguments(args);
    eval("(in-package :eql-user)");
    QStringList forms;
    // .eclrc
    if(arguments.contains("-norc")) {
        arguments.removeAll("-norc"); }
    else {
        eval("(x:when-it (probe-file \"~/.eclrc\") (load x:it))"); }
    // Slime
    int i_swank = arguments.indexOf(QRegExp("*start-swank*.lisp", Qt::CaseInsensitive, QRegExp::Wildcard));
    if(arguments.contains("-slime") || (i_swank != -1))  {
        arguments.removeAll("-slime");
        QString swankFile;
        if(i_swank != -1) {
            swankFile = arguments.at(i_swank);
            arguments.removeAt(i_swank); }
        QApplication::setQuitOnLastWindowClosed(false);
        forms << "(unless eql:*slime-mode*" // see mode :REPL-HOOK in "slime/eql-start-swank.lisp"
                 "  (setf eql:*slime-mode* t))"
                 "(setf eql:*qtpl* nil)";
        if(arguments.length() == 2) {
            QString fileName(QDir::fromNativeSeparators(arguments.at(1)));
            forms << QString("(load \"%1\")").arg(fileName);
            arguments.removeAt(1); }
        if(!swankFile.isEmpty()) {
            arguments << swankFile; }
        exec_with_simple_restart = true; }
    // -qtpl
    else if(arguments.contains("-qtpl") || (cl_symbol_value(s_qtpl) == Ct)) {
        arguments.removeAll("-qtpl");
        ecl_setq(ecl_process_env(), s_qtpl, Ct);
        QApplication::setQuitOnLastWindowClosed(false);
        forms << "(when (directory (in-home \"lib/ecl-readline.fas*\"))"
                 "  (load (x:check-recompile (in-home \"lib/ecl-readline\"))))"
              << "(qsingle-shot 500 'eql::start-read-thread)";
        exec_with_simple_restart = true; }
    // -qgui
    if(arguments.contains("-qgui")) {
        arguments.removeAll("-qgui");
        forms << "(qgui)"; }
    // -quic
    if(arguments.contains("-quic")) {
        arguments.removeAll("-quic");
        bool maximized = false;
        if(arguments.contains(":maximized")) {
            arguments.removeAll(":maximized");
            maximized = true; }
        if(arguments.length() >= 2) {
            QString uiFile(QDir::fromNativeSeparators(arguments.at(1)));
            int sep = uiFile.lastIndexOf('/') + 1;
            forms << QString("(ext:run-program \"uic\" (list \"-o\" \"ui.h\" \"%1\"))").arg(uiFile)  
                  << QString("(eql:quic \"ui.h\" \"%1ui-%2.lisp\" %3 %4)")
                             .arg(uiFile.left(sep))
                             .arg(uiFile.mid(sep, uiFile.length() - sep - 3))
                             .arg((arguments.length() == 2) ? ":ui" : arguments.at(2))
                             .arg(maximized ? ":maximized" : "")
                  << QString("(delete-file \"ui.h\")")
                  << QString("(eql:qq)"); }
        else {
            std::cout << "\nPlease pass a file.ui (Qt Designer).\n" << std::endl;
            exit(-1); }}
    else {
        if(arguments.length() == 1) {
            // simple top-level
            if(forms.isEmpty()) {
                qexec = false;
                forms << "(si:top-level)"; }}
        else {
            // load file
            QString fileName(QDir::fromNativeSeparators(arguments.at(1)));
            forms.prepend(QString("(load \"%1\")").arg(fileName)); }}
    // eval
    QString code;
    if(forms.length() == 1) {
        code = forms.first(); }
    else {
        code = "(progn " + forms.join(" ") + ")"; }
    eval(code.toLatin1().constData());
    // RESTART for Qt event loop
    if(exec_with_simple_restart) {
        qexec = false;
        eval("(eql::exec-with-simple-restart)"); }}

void EQL::exec(lisp_ini ini, const QByteArray& expression, const QByteArray& package) {
    // see my_app example
    read_VV(OBJNULL, ini);
    eval(QString("(in-package :%1)").arg(QString(package)).toLatin1().constData());
    eval(expression.constData()); }

enum { NotFound = -1 };

void EQL::exec(QWidget* widget, const QString& lispFile, const QString& slimeHookFile) {
    // see Qt_EQL example
    bool exec_with_simple_restart = false;
    QStringList forms;
    eval("(in-package :eql)");
    forms << QString("(defvar *qt-main* (qt-object %1 0 (qid \"%2\")))")
                     .arg((quintptr)widget)
                     .arg(QString(LObjects::vanillaQtSuperClassName(widget->metaObject())))
          << QString("(export '*qt-main*)")
          << QString("(in-package :eql-user)")
          << QString("(load \"%1\")").arg(lispFile);
    if(!slimeHookFile.isEmpty()) {
        QString startSwankFile(QCoreApplication::arguments().last());
        if(NotFound == startSwankFile.indexOf(QRegExp("*start-swank*.lisp", Qt::CaseInsensitive, QRegExp::Wildcard))) {
            std::cout << "\nPlease pass the pathname for \"eql-start-swank.lisp\".\n" << std::endl;
            exit(-1); }
        QApplication::setQuitOnLastWindowClosed(false);
        forms << QString("(load \"%1\")").arg(startSwankFile)
              << QString("(setf eql::*slime-hook-file* \"%1\")").arg(slimeHookFile)
              << QString("(setf eql:*slime-mode* t"
                         "      eql:*qtpl*       nil)");
        exec_with_simple_restart = true; }
    eval(QString("(progn " + forms.join(" ") + ")").toLatin1().constData());
    if(exec_with_simple_restart) {
        eval("(eql::exec-with-simple-restart)"); }}

void EQL::runOnUiThread(void* function_or_closure) {
    const cl_env_ptr l_env = ecl_process_env();
    CL_CATCH_ALL_BEGIN(l_env) {
        CL_UNWIND_PROTECT_BEGIN(l_env) {
            cl_object l_fun = (cl_object)function_or_closure;
            cl_funcall(1, l_fun); }
        CL_UNWIND_PROTECT_EXIT {}
        CL_UNWIND_PROTECT_END; }
    CL_CATCH_ALL_END; }

bool EQL::cl_booted = false;
bool EQL::return_value_p = false;
bool EQL::qexec = true;
QEventLoop* EQL::eventLoop = 0;
