#include <QtCore>
#include <QtNetwork>
#include <QtDebug>
#include <iostream>

int main(int argc, char** argv) {
    QCoreApplication qapp(argc, argv);
    QLocalSocket socket;
    socket.connectToServer("EQL:local-server");
    socket.waitForConnected();
    qapp.processEvents();
    QString exp(QCoreApplication::arguments().at(1));
    if(socket.isWritable()) {
        QString data(QString::number(exp.size()) + " " + exp);
        socket.write(data.toLatin1());
        qapp.processEvents();
        socket.waitForBytesWritten();
        while(true) {
            socket.waitForReadyRead();
            qapp.processEvents();
            QString data(socket.readAll());
            QString type(data.section(' ', 1, 1));
            if(!(":EXPRESSION" == type)) {
                QString print(data.section(' ', 2).trimmed());
                if(!print.isEmpty()) {
                    std::cout << qPrintable(print) << std::endl; }
                if(":VALUES" == type) {
                    exit(0); }}}}
    qCritical() << "[send] error:" << exp;
    return -1; }

