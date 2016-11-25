#include <QApplication>
#include <QWidget>
#include "qt_application.h"

int main(int argc, char** argv)
{
    QApplication qapp(argc, argv);

    MainWindow window;
    window.setGeometry(50, 50, 500, 300);
    window.show();

    return qapp.exec();
}
