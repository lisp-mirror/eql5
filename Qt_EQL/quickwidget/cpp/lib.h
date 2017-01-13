#ifndef Q_QUICK_WIDGET_H
#define Q_QUICK_WIDGET_H

#include <QtWidgets>
#include <QtQuickWidgets>

#ifdef Q_OS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

extern "C" { LIB_EXPORT QObject* ini(); }

class MyQuickWidget : public QQuickWidget
{
    Q_OBJECT
public:
    MyQuickWidget();

    Q_INVOKABLE void setQml(const QUrl& url) { setSource(url); }

signals:
    void qmlErrors(const QStringList&);

public slots:
    void statusChanged(QQuickWidget::Status);
    void sceneGraphError(QQuickWindow::SceneGraphError, const QString&);
};

QT_END_NAMESPACE

#endif
