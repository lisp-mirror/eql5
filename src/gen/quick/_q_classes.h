// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LJSEngine : public QJSEngine {
    Q_OBJECT
    friend class Q112;
public:
    LJSEngine(uint u) : unique(u) {}
    LJSEngine(uint u, QObject* x1) : QJSEngine(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QJSEngine::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QJSEngine::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QJSEngine::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QJSEngine::timerEvent(x1); }}
};

class LQmlApplicationEngine : public QQmlApplicationEngine {
    Q_OBJECT
    friend class Q168;
public:
    LQmlApplicationEngine(uint u, QObject* x1 = 0) : QQmlApplicationEngine(x1), unique(u) {}
    LQmlApplicationEngine(uint u, const QUrl& x1, QObject* x2 = 0) : QQmlApplicationEngine(x1, x2), unique(u) {}
    LQmlApplicationEngine(uint u, const QString& x1, QObject* x2 = 0) : QQmlApplicationEngine(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlApplicationEngine::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlApplicationEngine::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlApplicationEngine::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlApplicationEngine::timerEvent(x1); }}
};

class LQmlComponent : public QQmlComponent {
    Q_OBJECT
    friend class Q169;
public:
    LQmlComponent(uint u, QQmlEngine* x1, QObject* x2 = 0) : QQmlComponent(x1, x2), unique(u) {}
    LQmlComponent(uint u, QQmlEngine* x1, const QString& x2, QObject* x3 = 0) : QQmlComponent(x1, x2, x3), unique(u) {}
    LQmlComponent(uint u, QQmlEngine* x1, const QString& x2, CompilationMode x3, QObject* x4 = 0) : QQmlComponent(x1, x2, x3, x4), unique(u) {}
    LQmlComponent(uint u, QQmlEngine* x1, const QUrl& x2, QObject* x3 = 0) : QQmlComponent(x1, x2, x3), unique(u) {}
    LQmlComponent(uint u, QQmlEngine* x1, const QUrl& x2, CompilationMode x3, QObject* x4 = 0) : QQmlComponent(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QObject* beginCreate(QQmlContext* x1) { quint64 id = LObjects::override_id(unique, 323); void* fun = LObjects::overrideFun(id); QObject* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QObject*)callOverrideFun(fun, 323, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlComponent::beginCreate(x1); } return ret; }
    void completeCreate() { quint64 id = LObjects::override_id(unique, 324); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 324, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlComponent::completeCreate(); }}
    QObject* create(QQmlContext* x1 = 0) { quint64 id = LObjects::override_id(unique, 325); void* fun = LObjects::overrideFun(id); QObject* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QObject*)callOverrideFun(fun, 325, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlComponent::create(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlComponent::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlComponent::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlComponent::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlComponent::timerEvent(x1); }}
};

class LQmlContext : public QQmlContext {
    Q_OBJECT
    friend class Q170;
public:
    LQmlContext(uint u, QQmlEngine* x1, QObject* x2 = 0) : QQmlContext(x1, x2), unique(u) {}
    LQmlContext(uint u, QQmlContext* x1, QObject* x2 = 0) : QQmlContext(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlContext::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlContext::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlContext::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlContext::timerEvent(x1); }}
};

class LQmlEngine : public QQmlEngine {
    Q_OBJECT
    friend class Q171;
public:
    LQmlEngine(uint u, QObject* x1 = 0) : QQmlEngine(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlEngine::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlEngine::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlEngine::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlEngine::timerEvent(x1); }}
};

class LQmlExpression : public QQmlExpression {
    Q_OBJECT
    friend class Q172;
public:
    LQmlExpression(uint u) : unique(u) {}
    LQmlExpression(uint u, QQmlContext* x1, QObject* x2, const QString& x3, QObject* x4 = 0) : QQmlExpression(x1, x2, x3, x4), unique(u) {}
    LQmlExpression(uint u, const QQmlScriptString& x1, QQmlContext* x2 = 0, QObject* x3 = 0, QObject* x4 = 0) : QQmlExpression(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlExpression::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExpression::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExpression::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExpression::timerEvent(x1); }}
};

class LQmlExtensionPlugin : public QQmlExtensionPlugin {
    Q_OBJECT
    friend class Q173;
public:
    LQmlExtensionPlugin(uint u, QObject* x1 = 0) : QQmlExtensionPlugin(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void initializeEngine(QQmlEngine* x1, const char* x2) { quint64 id = LObjects::override_id(unique, 326); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 326, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExtensionPlugin::initializeEngine(x1, x2); }}
    void registerTypes(const char* x1) { quint64 id = LObjects::override_id(unique, 327); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 327, args, id); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlExtensionPlugin::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExtensionPlugin::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExtensionPlugin::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlExtensionPlugin::timerEvent(x1); }}
};

class LQmlFileSelector : public QQmlFileSelector {
    Q_OBJECT
    friend class Q174;
public:
    LQmlFileSelector(uint u, QQmlEngine* x1, QObject* x2 = 0) : QQmlFileSelector(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlFileSelector::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlFileSelector::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlFileSelector::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlFileSelector::timerEvent(x1); }}
};

class LQmlPropertyMap : public QQmlPropertyMap {
    Q_OBJECT
    friend class Q175;
public:
    LQmlPropertyMap(uint u, QObject* x1 = 0) : QQmlPropertyMap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant updateValue(const QString& x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 328); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 328, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlPropertyMap::updateValue(x1, x2); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQmlPropertyMap::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlPropertyMap::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlPropertyMap::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlPropertyMap::timerEvent(x1); }}
};

class LQuickItem : public QQuickItem {
    Q_OBJECT
    friend class Q177;
public:
    LQuickItem(uint u, QQuickItem* x1 = 0) : QQuickItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::contains(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::inputMethodQuery(x1); } return ret; }
    bool isTextureProvider() const { quint64 id = LObjects::override_id(unique, 329); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 329, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::isTextureProvider(); } return ret; }
    QSGTextureProvider* textureProvider() const { quint64 id = LObjects::override_id(unique, 330); void* fun = LObjects::overrideFun(id); QSGTextureProvider* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGTextureProvider*)callOverrideFun(fun, 330, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::textureProvider(); } return ret; }
    bool childMouseEventFilter(QQuickItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 331); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 331, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::childMouseEventFilter(x1, x2); } return ret; }
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::focusOutEvent(x1); }}
    void geometryChanged(const QRectF& x1, const QRectF& x2) { quint64 id = LObjects::override_id(unique, 332); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 332, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::geometryChanged(x1, x2); }}
    void hoverEnterEvent(QHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 333); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 333, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 334); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 334, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 335); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 335, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::inputMethodEvent(x1); }}
    void itemChange(ItemChange x1, const ItemChangeData& x2) { quint64 id = LObjects::override_id(unique, 336); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 336, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::itemChange(x1, x2); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::mouseReleaseEvent(x1); }}
    void mouseUngrabEvent() { quint64 id = LObjects::override_id(unique, 337); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 337, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::mouseUngrabEvent(); }}
    void releaseResources() { quint64 id = LObjects::override_id(unique, 338); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 338, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::releaseResources(); }}
    void touchEvent(QTouchEvent* x1) { quint64 id = LObjects::override_id(unique, 311); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 311, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::touchEvent(x1); }}
    void touchUngrabEvent() { quint64 id = LObjects::override_id(unique, 339); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 339, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::touchUngrabEvent(); }}
    QSGNode* updatePaintNode(QSGNode* x1, UpdatePaintNodeData* x2) { quint64 id = LObjects::override_id(unique, 340); void* fun = LObjects::overrideFun(id); QSGNode* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = (QSGNode*)callOverrideFun(fun, 340, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::updatePaintNode(x1, x2); } return ret; }
    void updatePolish() { quint64 id = LObjects::override_id(unique, 341); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 341, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::updatePolish(); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::wheelEvent(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItem::timerEvent(x1); }}
};

class LQuickItemGrabResult : public QQuickItemGrabResult {
    Q_OBJECT
    friend class Q178;
public:

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickItemGrabResult::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItemGrabResult::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItemGrabResult::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickItemGrabResult::timerEvent(x1); }}
};

class LQuickPaintedItem : public QQuickPaintedItem {
    Q_OBJECT
    friend class Q179;
public:
    LQuickPaintedItem(uint u, QQuickItem* x1 = 0) : QQuickPaintedItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void paint(QPainter* x1) { quint64 id = LObjects::override_id(unique, 342); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 342, args, id); }}
    bool isTextureProvider() const { quint64 id = LObjects::override_id(unique, 329); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 329, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::isTextureProvider(); } return ret; }
    QSGTextureProvider* textureProvider() const { quint64 id = LObjects::override_id(unique, 330); void* fun = LObjects::overrideFun(id); QSGTextureProvider* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGTextureProvider*)callOverrideFun(fun, 330, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::textureProvider(); } return ret; }
    void releaseResources() { quint64 id = LObjects::override_id(unique, 338); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 338, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::releaseResources(); }}
    QSGNode* updatePaintNode(QSGNode* x1, UpdatePaintNodeData* x2) { quint64 id = LObjects::override_id(unique, 340); void* fun = LObjects::overrideFun(id); QSGNode* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = (QSGNode*)callOverrideFun(fun, 340, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::updatePaintNode(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::contains(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::inputMethodQuery(x1); } return ret; }
    bool childMouseEventFilter(QQuickItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 331); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 331, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::childMouseEventFilter(x1, x2); } return ret; }
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::focusOutEvent(x1); }}
    void geometryChanged(const QRectF& x1, const QRectF& x2) { quint64 id = LObjects::override_id(unique, 332); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 332, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::geometryChanged(x1, x2); }}
    void hoverEnterEvent(QHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 333); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 333, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 334); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 334, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 335); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 335, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::inputMethodEvent(x1); }}
    void itemChange(ItemChange x1, const ItemChangeData& x2) { quint64 id = LObjects::override_id(unique, 336); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 336, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::itemChange(x1, x2); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::mouseReleaseEvent(x1); }}
    void mouseUngrabEvent() { quint64 id = LObjects::override_id(unique, 337); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 337, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::mouseUngrabEvent(); }}
    void touchEvent(QTouchEvent* x1) { quint64 id = LObjects::override_id(unique, 311); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 311, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::touchEvent(x1); }}
    void touchUngrabEvent() { quint64 id = LObjects::override_id(unique, 339); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 339, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::touchUngrabEvent(); }}
    void updatePolish() { quint64 id = LObjects::override_id(unique, 341); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 341, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::updatePolish(); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::wheelEvent(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickPaintedItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickPaintedItem::timerEvent(x1); }}
};

class LQuickRenderControl : public QQuickRenderControl {
    Q_OBJECT
    friend class Q180;
public:
    LQuickRenderControl(uint u, QObject* x1 = 0) : QQuickRenderControl(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickRenderControl::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickRenderControl::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickRenderControl::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickRenderControl::timerEvent(x1); }}
};

class LQuickTextDocument : public QQuickTextDocument {
    Q_OBJECT
    friend class Q181;
public:
    LQuickTextDocument(uint u, QQuickItem* x1) : QQuickTextDocument(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickTextDocument::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickTextDocument::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickTextDocument::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickTextDocument::timerEvent(x1); }}
};

class LQuickTextureFactory : public QQuickTextureFactory {
    Q_OBJECT
    friend class Q182;
public:
    LQuickTextureFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSGTexture* createTexture(QQuickWindow* x1) const { quint64 id = LObjects::override_id(unique, 343); void* fun = LObjects::overrideFun(id); QSGTexture* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QSGTexture*)callOverrideFun(fun, 343, args, id).value<void*>(); } return ret; }
    QImage image() const { quint64 id = LObjects::override_id(unique, 344); void* fun = LObjects::overrideFun(id); QImage ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 344, 0, id).value<QImage>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickTextureFactory::image(); } return ret; }
    int textureByteCount() const { quint64 id = LObjects::override_id(unique, 345); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 345, 0, id).toInt(); } return ret; }
    QSize textureSize() const { quint64 id = LObjects::override_id(unique, 346); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 346, 0, id).value<QSize>(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickTextureFactory::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickTextureFactory::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickTextureFactory::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickTextureFactory::timerEvent(x1); }}
};

class LQuickView : public QQuickView {
    Q_OBJECT
    friend class Q183;
public:
    LQuickView(uint u, QWindow* x1 = 0) : QQuickView(x1), unique(u) {}
    LQuickView(uint u, QQmlEngine* x1, QWindow* x2) : QQuickView(x1, x2), unique(u) {}
    LQuickView(uint u, const QUrl& x1, QWindow* x2 = 0) : QQuickView(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QObject* focusObject() const { quint64 id = LObjects::override_id(unique, 309); void* fun = LObjects::overrideFun(id); QObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QObject*)callOverrideFun(fun, 309, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickView::focusObject(); } return ret; }
    void exposeEvent(QExposeEvent* x1) { quint64 id = LObjects::override_id(unique, 310); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 310, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::exposeEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::hideEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::moveEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::tabletEvent(x1); }}
    void touchEvent(QTouchEvent* x1) { quint64 id = LObjects::override_id(unique, 311); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 311, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::touchEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::wheelEvent(x1); }}
    QSurfaceFormat format() const { quint64 id = LObjects::override_id(unique, 312); void* fun = LObjects::overrideFun(id); QSurfaceFormat ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 312, 0, id).value<QSurfaceFormat>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickView::format(); } return ret; }
    QSize size() const { quint64 id = LObjects::override_id(unique, 142); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 142, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickView::size(); } return ret; }
    SurfaceType surfaceType() const { quint64 id = LObjects::override_id(unique, 313); void* fun = LObjects::overrideFun(id); SurfaceType ret = (SurfaceType)0; if(fun && (LObjects::calling != id)) { ret = (SurfaceType)callOverrideFun(fun, 313, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickView::surfaceType(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickView::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickView::timerEvent(x1); }}
};

class LQuickWidget : public QQuickWidget {
    Q_OBJECT
    friend class Q184;
public:
    LQuickWidget(uint u, QWidget* x1 = 0) : QQuickWidget(x1), unique(u) {}
    LQuickWidget(uint u, QQmlEngine* x1, QWidget* x2) : QQuickWidget(x1, x2), unique(u) {}
    LQuickWidget(uint u, const QUrl& x1, QWidget* x2 = 0) : QQuickWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::hideEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::mouseReleaseEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::showEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::wheelEvent(x1); }}
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { quint64 id = LObjects::override_id(unique, 24); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 24, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::sizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { quint64 id = LObjects::override_id(unique, 26); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 12); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 12, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { quint64 id = LObjects::override_id(unique, 27); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 28); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::contextMenuEvent(x1); }}
    void enterEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 33); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::enterEvent(x1); }}
    bool focusNextPrevChild(bool x1) { quint64 id = LObjects::override_id(unique, 34); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::focusNextPrevChild(x1); } return ret; }
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::inputMethodEvent(x1); }}
    void leaveEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 37); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::leaveEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { quint64 id = LObjects::override_id(unique, 20); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::resizeEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::tabletEvent(x1); }}
    void initPainter(QPainter* x1) const { quint64 id = LObjects::override_id(unique, 44); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::initPainter(x1); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWidget::timerEvent(x1); }}
};

class LQuickWindow : public QQuickWindow {
    Q_OBJECT
    friend class Q185;
public:
    LQuickWindow(uint u, QWindow* x1 = 0) : QQuickWindow(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QObject* focusObject() const { quint64 id = LObjects::override_id(unique, 309); void* fun = LObjects::overrideFun(id); QObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QObject*)callOverrideFun(fun, 309, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWindow::focusObject(); } return ret; }
    void exposeEvent(QExposeEvent* x1) { quint64 id = LObjects::override_id(unique, 310); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 310, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::exposeEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::hideEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::moveEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::tabletEvent(x1); }}
    void touchEvent(QTouchEvent* x1) { quint64 id = LObjects::override_id(unique, 311); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 311, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::touchEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::wheelEvent(x1); }}
    QSurfaceFormat format() const { quint64 id = LObjects::override_id(unique, 312); void* fun = LObjects::overrideFun(id); QSurfaceFormat ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 312, 0, id).value<QSurfaceFormat>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWindow::format(); } return ret; }
    QSize size() const { quint64 id = LObjects::override_id(unique, 142); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 142, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWindow::size(); } return ret; }
    SurfaceType surfaceType() const { quint64 id = LObjects::override_id(unique, 313); void* fun = LObjects::overrideFun(id); SurfaceType ret = (SurfaceType)0; if(fun && (LObjects::calling != id)) { ret = (SurfaceType)callOverrideFun(fun, 313, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWindow::surfaceType(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickWindow::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQuickWindow::timerEvent(x1); }}
};

class LSGAbstractRenderer : public QSGAbstractRenderer {
    Q_OBJECT
    friend class Q190;
public:

    static NumList overrideIds;
    uint unique;

    void renderScene(GLuint x1 = 0) { quint64 id = LObjects::override_id(unique, 347); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 347, args, id); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGAbstractRenderer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGAbstractRenderer::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGAbstractRenderer::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGAbstractRenderer::timerEvent(x1); }}
};

class LSGDynamicTexture : public QSGDynamicTexture {
    Q_OBJECT
    friend class Q191;
public:

    static NumList overrideIds;
    uint unique;

    bool updateTexture() { quint64 id = LObjects::override_id(unique, 348); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 348, 0, id).toBool(); } return ret; }
    void bind() { quint64 id = LObjects::override_id(unique, 349); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 349, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGDynamicTexture::bind(); }}
    bool hasAlphaChannel() const { quint64 id = LObjects::override_id(unique, 350); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 350, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::hasAlphaChannel(); } return ret; }
    bool hasMipmaps() const { quint64 id = LObjects::override_id(unique, 351); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 351, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::hasMipmaps(); } return ret; }
    bool isAtlasTexture() const { quint64 id = LObjects::override_id(unique, 352); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 352, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::isAtlasTexture(); } return ret; }
    QRectF normalizedTextureSubRect() const { quint64 id = LObjects::override_id(unique, 353); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 353, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::normalizedTextureSubRect(); } return ret; }
    QSGTexture* removedFromAtlas() const { quint64 id = LObjects::override_id(unique, 354); void* fun = LObjects::overrideFun(id); QSGTexture* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGTexture*)callOverrideFun(fun, 354, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::removedFromAtlas(); } return ret; }
    int textureId() const { quint64 id = LObjects::override_id(unique, 355); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 355, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::textureId(); } return ret; }
    QSize textureSize() const { quint64 id = LObjects::override_id(unique, 346); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 346, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::textureSize(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGDynamicTexture::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGDynamicTexture::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGDynamicTexture::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGDynamicTexture::timerEvent(x1); }}
};

class LSGEngine : public QSGEngine {
    Q_OBJECT
    friend class Q192;
public:
    LSGEngine(uint u, QObject* x1 = 0) : QSGEngine(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGEngine::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGEngine::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGEngine::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGEngine::timerEvent(x1); }}
};

class LSGTexture : public QSGTexture {
    Q_OBJECT
    friend class Q193;
public:
    LSGTexture(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    void bind() { quint64 id = LObjects::override_id(unique, 349); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 349, 0, id); }}
    bool hasAlphaChannel() const { quint64 id = LObjects::override_id(unique, 350); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 350, 0, id).toBool(); } return ret; }
    bool hasMipmaps() const { quint64 id = LObjects::override_id(unique, 351); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 351, 0, id).toBool(); } return ret; }
    bool isAtlasTexture() const { quint64 id = LObjects::override_id(unique, 352); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 352, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGTexture::isAtlasTexture(); } return ret; }
    QRectF normalizedTextureSubRect() const { quint64 id = LObjects::override_id(unique, 353); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 353, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGTexture::normalizedTextureSubRect(); } return ret; }
    QSGTexture* removedFromAtlas() const { quint64 id = LObjects::override_id(unique, 354); void* fun = LObjects::overrideFun(id); QSGTexture* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGTexture*)callOverrideFun(fun, 354, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGTexture::removedFromAtlas(); } return ret; }
    int textureId() const { quint64 id = LObjects::override_id(unique, 355); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 355, 0, id).toInt(); } return ret; }
    QSize textureSize() const { quint64 id = LObjects::override_id(unique, 346); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 346, 0, id).value<QSize>(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGTexture::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTexture::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTexture::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTexture::timerEvent(x1); }}
};

class LSGTextureProvider : public QSGTextureProvider {
    Q_OBJECT
    friend class Q194;
public:

    static NumList overrideIds;
    uint unique;

    QSGTexture* texture() const { quint64 id = LObjects::override_id(unique, 356); void* fun = LObjects::overrideFun(id); QSGTexture* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGTexture*)callOverrideFun(fun, 356, 0, id).value<void*>(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGTextureProvider::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTextureProvider::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTextureProvider::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTextureProvider::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
