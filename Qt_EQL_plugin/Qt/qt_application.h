#ifndef QT_APPLICATION_H
#define QT_APPLICATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

    QDockWidget* pluginWidget;

public slots:
    void showPlugin();
    void hidePlugin();
};

QT_END_NAMESPACE

#endif
