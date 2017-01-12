#include "lib.h"
#include <QtDebug>

QT_BEGIN_NAMESPACE

QObject* ini()
{
    MyQuickWidget* my = new MyQuickWidget;
    my->setObjectName("QQuickWidget");
    return (QWidget*)my;
}

MyQuickWidget::MyQuickWidget()
{
    setResizeMode(QQuickWidget::SizeRootObjectToView);
    connect(this, SIGNAL(statusChanged(QQuickWidget::Status)),
            this, SLOT(statusChanged(QQuickWidget::Status)));
    connect(this, SIGNAL(sceneGraphError(QQuickWindow::SceneGraphError,QString)),
            this, SLOT(sceneGraphError(QQuickWindow::SceneGraphError,QString)));
}

void MyQuickWidget::setQml(const QUrl& url)
{
    setSource(url);
}

void MyQuickWidget::statusChanged(QQuickWidget::Status status)
{
    if(status == QQuickWidget::Error) {
        QStringList errorList;
        foreach(const QQmlError& error, errors()) {
            errorList.append(error.toString()); }
        emit qmlErrors(errorList); }
}

void MyQuickWidget::sceneGraphError(QQuickWindow::SceneGraphError, const QString& message)
{
     emit qmlErrors(QStringList() << message);
}

QT_END_NAMESPACE
