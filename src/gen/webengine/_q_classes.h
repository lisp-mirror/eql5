// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LWebEngineCookieStore : public QWebEngineCookieStore {
    Q_OBJECT
    friend class Q265;
public:

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineCookieStore::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineCookieStore::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineCookieStore::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineCookieStore::timerEvent(x1); }}
};

class LWebEngineDownloadItem : public QWebEngineDownloadItem {
    Q_OBJECT
    friend class Q266;
public:

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineDownloadItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineDownloadItem::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineDownloadItem::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineDownloadItem::timerEvent(x1); }}
};

class LWebEnginePage : public QWebEnginePage {
    Q_OBJECT
    friend class Q267;
public:
    LWebEnginePage(uint u, QObject* x1 = 0) : QWebEnginePage(x1), unique(u) {}
    LWebEnginePage(uint u, QWebEngineProfile* x1, QObject* x2 = 0) : QWebEnginePage(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void triggerAction(WebAction x1, bool x2 = false) { quint64 id = LObjects::override_id(unique, 432); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 432, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEnginePage::triggerAction(x1, x2); }}
    bool acceptNavigationRequest(const QUrl& x1, NavigationType x2, bool x3) { quint64 id = LObjects::override_id(unique, 433); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 433, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::acceptNavigationRequest(x1, x2, x3); } return ret; }
    bool certificateError(const QWebEngineCertificateError& x1) { quint64 id = LObjects::override_id(unique, 434); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 434, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::certificateError(x1); } return ret; }
    QStringList chooseFiles(FileSelectionMode x1, const QStringList& x2, const QStringList& x3) { quint64 id = LObjects::override_id(unique, 435); void* fun = LObjects::overrideFun(id); QStringList ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 435, args, id).value<QStringList>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::chooseFiles(x1, x2, x3); } return ret; }
    QWebEnginePage* createWindow(WebWindowType x1) { quint64 id = LObjects::override_id(unique, 436); void* fun = LObjects::overrideFun(id); QWebEnginePage* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QWebEnginePage*)callOverrideFun(fun, 436, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::createWindow(x1); } return ret; }
    void javaScriptAlert(const QUrl& x1, const QString& x2) { quint64 id = LObjects::override_id(unique, 437); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 437, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEnginePage::javaScriptAlert(x1, x2); }}
    bool javaScriptConfirm(const QUrl& x1, const QString& x2) { quint64 id = LObjects::override_id(unique, 438); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 438, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::javaScriptConfirm(x1, x2); } return ret; }
    void javaScriptConsoleMessage(JavaScriptConsoleMessageLevel x1, const QString& x2, int x3, const QString& x4) { quint64 id = LObjects::override_id(unique, 439); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3, &x4 }; callOverrideFun(fun, 439, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEnginePage::javaScriptConsoleMessage(x1, x2, x3, x4); }}
    bool javaScriptPrompt(const QUrl& x1, const QString& x2, const QString& x3, QString* x4) { quint64 id = LObjects::override_id(unique, 440); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3, &x4 }; ret = callOverrideFun(fun, 440, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::javaScriptPrompt(x1, x2, x3, x4); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEnginePage::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEnginePage::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEnginePage::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEnginePage::timerEvent(x1); }}
};

class LWebEngineProfile : public QWebEngineProfile {
    Q_OBJECT
    friend class Q268;
public:
    LWebEngineProfile(uint u, QObject* x1 = 0) : QWebEngineProfile(x1), unique(u) {}
    LWebEngineProfile(uint u, const QString& x1, QObject* x2 = 0) : QWebEngineProfile(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineProfile::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineProfile::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineProfile::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineProfile::timerEvent(x1); }}
};

class LWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor {
    Q_OBJECT
    friend class Q269;
public:
    LWebEngineUrlRequestInterceptor(uint u, QObject* x1 = 0) : QWebEngineUrlRequestInterceptor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void interceptRequest(QWebEngineUrlRequestInfo& x1) { quint64 id = LObjects::override_id(unique, 441); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 441, args, id); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineUrlRequestInterceptor::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlRequestInterceptor::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlRequestInterceptor::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlRequestInterceptor::timerEvent(x1); }}
};

class LWebEngineUrlRequestJob : public QWebEngineUrlRequestJob {
    Q_OBJECT
    friend class Q270;
public:

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineUrlRequestJob::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlRequestJob::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlRequestJob::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlRequestJob::timerEvent(x1); }}
};

class LWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler {
    Q_OBJECT
    friend class Q271;
public:

    static NumList overrideIds;
    uint unique;

    void requestStarted(QWebEngineUrlRequestJob* x1) { quint64 id = LObjects::override_id(unique, 442); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 442, args, id); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineUrlSchemeHandler::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlSchemeHandler::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlSchemeHandler::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineUrlSchemeHandler::timerEvent(x1); }}
};

class LWebEngineView : public QWebEngineView {
    Q_OBJECT
    friend class Q272;
public:
    LWebEngineView(uint u, QWidget* x1 = 0) : QWebEngineView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWebEngineView* createWindow(QWebEnginePage::WebWindowType x1) { quint64 id = LObjects::override_id(unique, 443); void* fun = LObjects::overrideFun(id); QWebEngineView* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QWebEngineView*)callOverrideFun(fun, 443, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::createWindow(x1); } return ret; }
    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::sizeHint(); } return ret; }
    void contextMenuEvent(QContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 28); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::dropEvent(x1); }}
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::hideEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::showEvent(x1); }}
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { quint64 id = LObjects::override_id(unique, 24); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 24, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { quint64 id = LObjects::override_id(unique, 26); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 12); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 12, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { quint64 id = LObjects::override_id(unique, 27); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::closeEvent(x1); }}
    void enterEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 33); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { quint64 id = LObjects::override_id(unique, 34); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 37); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { quint64 id = LObjects::override_id(unique, 20); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::resizeEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::wheelEvent(x1); }}
    void initPainter(QPainter* x1) const { quint64 id = LObjects::override_id(unique, 44); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::initPainter(x1); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWebEngineView::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWebEngineView::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
