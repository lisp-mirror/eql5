// copyright (c) Polos Ruetz

#include <QApplication>
#include <QtCore>
#include <iostream>
#include "eql.h"

int catch_all_qexec() {
    int ret = 0;
    CL_CATCH_ALL_BEGIN(ecl_process_env()) {
        ret = QApplication::exec(); }
    CL_CATCH_ALL_END;
    return ret; }

int main(int argc, char** argv) {

    EQL::ini(argv); // best initialized here

    QApplication qapp(argc, argv);
    QStringList args(QCoreApplication::arguments());
    if(args.contains("-h") || (args.contains("--help"))) {
        std::cout << "Usage: eql5 [file] [-qtpl] [-qgui] [-quic file.ui [:ui-package] [:maximized]] [-slime] [-norc]" << std::endl;
        exit(0); }

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
