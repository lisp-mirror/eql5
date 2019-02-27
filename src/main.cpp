// copyright (c) Polos Ruetz

#include <QApplication>
#include <QtCore>
#include <iostream>
#include <eql5/eql.h>

void ini() {
    QString home(QDir::homePath() + "/.eql5/");
    if(!QFile::exists(home + "lib/gui.lisp")) {
        QDir dir(QDir::homePath());
        dir.mkdir(".eql5");
        dir.setPath(home);
        dir.mkdir("doc");
        dir.mkdir("lib");
        dir.mkdir("slime");
        QStringList files = QStringList()
            << "doc/auto-doc.htm"
            << "doc/debug-dialog.png"
            << "doc/Debugging.htm"
            << "doc/Deploy.htm"
            << "doc/EQL.png"
            << "doc/EQL-Slime-Integration.htm"
            << "doc/index.html"
            << "doc/Notes.htm"
            << "doc/QtDesigner.htm"
            << "doc/QtLinguist.htm"
            << "doc/Slime.htm"
            << "doc/Slime-REPL-hook.htm"
            << "doc/style.css"
            << "lib/ecl-readline.lisp"
            << "lib/gui.lisp"
            << "lib/gui.ui"
            << "lib/invokables.lisp"
            << "lib/properties.lisp"
            << "lib/properties.ui"
            << "lib/qselect.lisp"
            << "lib/quic.lisp"
            << "lib/restart-dialog.lisp"
            << "lib/thread-safe.lisp"
            << "slime/.swank.lisp"
            << "slime/eql-start-swank.lisp"
            << "slime/README.txt"
            << "slime/repl-hook.lisp";
        Q_FOREACH(QString file, files) {
            QFile::copy(":/" + file, home + file); }}}

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
    QStringList args(QCoreApplication::arguments());
    if(args.contains("-h") || (args.contains("--help"))) {
        std::cout << "Usage: eql5 [file] [-qtpl] [-qgui] [-quic file.ui [:ui-package] [:maximized]] [-slime] [-norc]" << std::endl;
        exit(0); }
    ini();

    QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(utf8);

    EQL eql;
    eql.printVersion();
    if(args.contains("-v") || args.contains("--version")) {
        std::cout << std::endl;
        exit(0); }
    eql.exec(args);

    if(EQL::qexec) {
        return catch_all_qexec(); }
    return 0; }
