#undef SLOT

#include <ecl/ecl.h>
#include <eql5/eql.h>
#include <QApplication>
#include <QTextCodec>
#include <QSettings>
#include <QTranslator>

// adapt "MY_APP" (here: from "my-app.asd")
extern "C" void init_lib_MY_APP__ALL_SYSTEMS(cl_object);

int catch_all_qexec() {
    int ret = 0;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        ret = QApplication::exec(); }
    CL_CATCH_ALL_END;
    return ret; }

int main(int argc, char** argv) {

    EQL::ini(argv); // best initialized here

    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts); // for Qt WebEngine
    QApplication qapp(argc, argv);

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(utf8);

    // Hint: use QSettings or similar to store your language settings.
    // It is put here because it must load _before_ the Lisp code is executed.
    // You'll probably find a more elegant solution by yourself.
    QString language("es"); // example: spanish
    QTranslator tr, trQt;
    if(tr.load("eql_" + language)) {
        qapp.installTranslator(&tr);
        if(trQt.load("qt_" + language)) {
            qapp.installTranslator(&trQt); }}

    EQL eql;

#ifdef Q_OS_WIN
    // print output would crash program
    eql.ignoreIOStreams();
#endif

    // adapt "MY_APP" (here: from "my-app.asd")
    eql.exec(init_lib_MY_APP__ALL_SYSTEMS);

    return catch_all_qexec(); } // closing the main/last window will quit the program
