// THIS FILE IS GENERATED (see helper/)

#ifndef MAIN_N_CLASSES_H
#define MAIN_N_CLASSES_H

#include "../ecl_fun.h"
#include "_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {
    friend class N1;
public:
    LAbstractGraphicsShapeItem(uint u, QGraphicsItem* x1 = 0) : QAbstractGraphicsShapeItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::opaqueArea(); } return ret; }
    void advance(int x1) { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 426, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::advance(x1); }}
    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } return ret; }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 427, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 428, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::collidesWithPath(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::contains(x1); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::type(); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 234, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 235); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 235, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 236); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 236, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 237); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 237, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 238); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 238, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 240); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 240, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 241); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 241, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 242); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 242, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 243); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 243, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 244); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 244, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 245); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 245, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 246); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 246, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 247); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 247, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 262); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 262, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 429, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAbstractGraphicsShapeItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 251); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 251, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAbstractGraphicsShapeItem::wheelEvent(x1); }}
};

class LAccessible : public QAccessible {
    friend class N2;
public:

    static NumList overrideIds;
    uint unique;
};

class LAccessibleEvent : public QAccessibleEvent {
    friend class N3;
public:
    LAccessibleEvent(uint u, QObject* x1, QAccessible::Event x2) : QAccessibleEvent(x1, x2), unique(u) {}
    LAccessibleEvent(uint u, QAccessibleInterface* x1, QAccessible::Event x2) : QAccessibleEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QAccessibleInterface* accessibleInterface() const { quint64 id = LObjects::override_id(unique, 430); void* fun = LObjects::overrideFun(id); QAccessibleInterface* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QAccessibleInterface*)callOverrideFun(fun, 430, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleEvent::accessibleInterface(); } return ret; }
};

class LAccessibleWidget : public QAccessibleWidget {
    friend class N6;
public:
    LAccessibleWidget(uint u, QWidget* x1, QAccessible::Role x2 = QAccessible::Client, const QString& x3 = QString()) : QAccessibleWidget(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QStringList actionNames() const { quint64 id = LObjects::override_id(unique, 431); void* fun = LObjects::overrideFun(id); QStringList ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 431, 0, id).value<QStringList>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::actionNames(); } return ret; }
    QColor backgroundColor() const { quint64 id = LObjects::override_id(unique, 432); void* fun = LObjects::overrideFun(id); QColor ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 432, 0, id).value<QColor>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::backgroundColor(); } return ret; }
    QAccessibleInterface* child(int x1) const { quint64 id = LObjects::override_id(unique, 433); void* fun = LObjects::overrideFun(id); QAccessibleInterface* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QAccessibleInterface*)callOverrideFun(fun, 433, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::child(x1); } return ret; }
    int childCount() const { quint64 id = LObjects::override_id(unique, 434); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 434, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::childCount(); } return ret; }
    void doAction(const QString& x1) { quint64 id = LObjects::override_id(unique, 435); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 435, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAccessibleWidget::doAction(x1); }}
    QAccessibleInterface* focusChild() const { quint64 id = LObjects::override_id(unique, 436); void* fun = LObjects::overrideFun(id); QAccessibleInterface* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QAccessibleInterface*)callOverrideFun(fun, 436, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::focusChild(); } return ret; }
    QColor foregroundColor() const { quint64 id = LObjects::override_id(unique, 437); void* fun = LObjects::overrideFun(id); QColor ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 437, 0, id).value<QColor>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::foregroundColor(); } return ret; }
    int indexOfChild(const QAccessibleInterface* x1) const { quint64 id = LObjects::override_id(unique, 438); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 438, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::indexOfChild(x1); } return ret; }
    bool isValid() const { quint64 id = LObjects::override_id(unique, 439); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 439, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::isValid(); } return ret; }
    QStringList keyBindingsForAction(const QString& x1) const { quint64 id = LObjects::override_id(unique, 440); void* fun = LObjects::overrideFun(id); QStringList ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 440, args, id).value<QStringList>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::keyBindingsForAction(x1); } return ret; }
    QAccessibleInterface* parent() const { quint64 id = LObjects::override_id(unique, 441); void* fun = LObjects::overrideFun(id); QAccessibleInterface* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QAccessibleInterface*)callOverrideFun(fun, 441, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::parent(); } return ret; }
    QRect rect() const { quint64 id = LObjects::override_id(unique, 442); void* fun = LObjects::overrideFun(id); QRect ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 442, 0, id).value<QRect>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::rect(); } return ret; }
    QAccessible::Role role() const { quint64 id = LObjects::override_id(unique, 443); void* fun = LObjects::overrideFun(id); QAccessible::Role ret = (QAccessible::Role)0; if(fun && (LObjects::calling != id)) { ret = (QAccessible::Role)callOverrideFun(fun, 443, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::role(); } return ret; }
    QString text(QAccessible::Text x1) const { quint64 id = LObjects::override_id(unique, 444); void* fun = LObjects::overrideFun(id); QString ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 444, args, id).value<QString>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::text(x1); } return ret; }
    QWindow* window() const { quint64 id = LObjects::override_id(unique, 445); void* fun = LObjects::overrideFun(id); QWindow* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QWindow*)callOverrideFun(fun, 445, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::window(); } return ret; }
    QAccessibleInterface* childAt(int x1, int x2) const { quint64 id = LObjects::override_id(unique, 446); void* fun = LObjects::overrideFun(id); QAccessibleInterface* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = (QAccessibleInterface*)callOverrideFun(fun, 446, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::childAt(x1, x2); } return ret; }
    QObject* object() const { quint64 id = LObjects::override_id(unique, 447); void* fun = LObjects::overrideFun(id); QObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QObject*)callOverrideFun(fun, 447, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAccessibleWidget::object(); } return ret; }
    void setText(QAccessible::Text x1, const QString& x2) { quint64 id = LObjects::override_id(unique, 448); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 448, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAccessibleWidget::setText(x1, x2); }}
};

class LActionEvent : public QActionEvent {
    friend class N7;
public:
    LActionEvent(uint u, int x1, QAction* x2, QAction* x3 = 0) : QActionEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBasicTimer : public QBasicTimer {
    friend class N12;
public:
    LBasicTimer(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBitArray : public QBitArray {
    friend class N13;
public:
    LBitArray(uint u) : unique(u) {}
    LBitArray(uint u, int x1, bool x2 = false) : QBitArray(x1, x2), unique(u) {}
    LBitArray(uint u, const QBitArray& x1) : QBitArray(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBitmap : public QBitmap {
    friend class N14;
public:
    LBitmap(uint u) : unique(u) {}
    LBitmap(uint u, const QPixmap& x1) : QBitmap(x1), unique(u) {}
    LBitmap(uint u, int x1, int x2) : QBitmap(x1, x2), unique(u) {}
    LBitmap(uint u, const QSize& x1) : QBitmap(x1), unique(u) {}
    LBitmap(uint u, const QString& x1, const char* x2 = 0) : QBitmap(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBrush : public QBrush {
    friend class N15;
public:
    LBrush(uint u) : unique(u) {}
    LBrush(uint u, Qt::BrushStyle x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QColor& x1, Qt::BrushStyle x2 = Qt::SolidPattern) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, Qt::GlobalColor x1, Qt::BrushStyle x2 = Qt::SolidPattern) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, const QColor& x1, const QPixmap& x2) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, Qt::GlobalColor x1, const QPixmap& x2) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, const QPixmap& x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QImage& x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QBrush& x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QGradient& x1) : QBrush(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LChildEvent : public QChildEvent {
    friend class N18;
public:
    LChildEvent(uint u, Type x1, QObject* x2) : QChildEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCloseEvent : public QCloseEvent {
    friend class N19;
public:
    LCloseEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LColor : public QColor {
    friend class N20;
public:
    LColor(uint u) : unique(u) {}
    LColor(uint u, int x1, int x2, int x3, int x4 = 255) : QColor(x1, x2, x3, x4), unique(u) {}
    LColor(uint u, QRgb x1) : QColor(x1), unique(u) {}
    LColor(uint u, const QString& x1) : QColor(x1), unique(u) {}
    LColor(uint u, const char* x1) : QColor(x1), unique(u) {}
    LColor(uint u, const QColor& x1) : QColor(x1), unique(u) {}
    LColor(uint u, Qt::GlobalColor x1) : QColor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LConicalGradient : public QConicalGradient {
    friend class N21;
public:
    LConicalGradient(uint u) : unique(u) {}
    LConicalGradient(uint u, const QPointF& x1, qreal x2) : QConicalGradient(x1, x2), unique(u) {}
    LConicalGradient(uint u, qreal x1, qreal x2, qreal x3) : QConicalGradient(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LContextMenuEvent : public QContextMenuEvent {
    friend class N22;
public:
    LContextMenuEvent(uint u, Reason x1, const QPoint& x2, const QPoint& x3, Qt::KeyboardModifiers x4) : QContextMenuEvent(x1, x2, x3, x4), unique(u) {}
    LContextMenuEvent(uint u, Reason x1, const QPoint& x2, const QPoint& x3) : QContextMenuEvent(x1, x2, x3), unique(u) {}
    LContextMenuEvent(uint u, Reason x1, const QPoint& x2) : QContextMenuEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCryptographicHash : public QCryptographicHash {
    friend class N23;
public:
    LCryptographicHash(uint u, Algorithm x1) : QCryptographicHash(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCursor : public QCursor {
    friend class N24;
public:
    LCursor(uint u) : unique(u) {}
    LCursor(uint u, Qt::CursorShape x1) : QCursor(x1), unique(u) {}
    LCursor(uint u, const QBitmap& x1, const QBitmap& x2, int x3 = -1, int x4 = -1) : QCursor(x1, x2, x3, x4), unique(u) {}
    LCursor(uint u, const QPixmap& x1, int x2 = -1, int x3 = -1) : QCursor(x1, x2, x3), unique(u) {}
    LCursor(uint u, const QCursor& x1) : QCursor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDate : public QDate {
    friend class N25;
public:
    LDate(uint u) : unique(u) {}
    LDate(uint u, int x1, int x2, int x3) : QDate(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDateTime : public QDateTime {
    friend class N26;
public:
    LDateTime(uint u) : unique(u) {}
    LDateTime(uint u, const QDate& x1) : QDateTime(x1), unique(u) {}
    LDateTime(uint u, const QDate& x1, const QTime& x2, Qt::TimeSpec x3 = Qt::LocalTime) : QDateTime(x1, x2, x3), unique(u) {}
    LDateTime(uint u, const QDate& x1, const QTime& x2, Qt::TimeSpec x3, int x4) : QDateTime(x1, x2, x3, x4), unique(u) {}
    LDateTime(uint u, const QDate& x1, const QTime& x2, const QTimeZone& x3) : QDateTime(x1, x2, x3), unique(u) {}
    LDateTime(uint u, const QDateTime& x1) : QDateTime(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDir : public QDir {
    friend class N28;
public:
    LDir(uint u, const QDir& x1) : QDir(x1), unique(u) {}
    LDir(uint u, const QString& x1 = QString()) : QDir(x1), unique(u) {}
    LDir(uint u, const QString& x1, const QString& x2, SortFlags x3 = SortFlags(Name|IgnoreCase), Filters x4 = AllEntries) : QDir(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDirIterator : public QDirIterator {
    friend class N29;
public:
    LDirIterator(uint u, const QDir& x1, IteratorFlags x2 = NoIteratorFlags) : QDirIterator(x1, x2), unique(u) {}
    LDirIterator(uint u, const QString& x1, IteratorFlags x2 = NoIteratorFlags) : QDirIterator(x1, x2), unique(u) {}
    LDirIterator(uint u, const QString& x1, QDir::Filters x2, IteratorFlags x3 = NoIteratorFlags) : QDirIterator(x1, x2, x3), unique(u) {}
    LDirIterator(uint u, const QString& x1, const QStringList& x2, QDir::Filters x3 = QDir::NoFilter, IteratorFlags x4 = NoIteratorFlags) : QDirIterator(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDragEnterEvent : public QDragEnterEvent {
    friend class N30;
public:
    LDragEnterEvent(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) : QDragEnterEvent(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDragLeaveEvent : public QDragLeaveEvent {
    friend class N31;
public:
    LDragLeaveEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDragMoveEvent : public QDragMoveEvent {
    friend class N32;
public:
    LDragMoveEvent(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Type x6 = DragMove) : QDragMoveEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDropEvent : public QDropEvent {
    friend class N33;
public:
    LDropEvent(uint u, const QPointF& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Type x6 = Drop) : QDropEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent {
    friend class N34;
public:
    LDynamicPropertyChangeEvent(uint u, const QByteArray& x1) : QDynamicPropertyChangeEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LEasingCurve : public QEasingCurve {
    friend class N35;
public:
    LEasingCurve(uint u, Type x1 = Linear) : QEasingCurve(x1), unique(u) {}
    LEasingCurve(uint u, const QEasingCurve& x1) : QEasingCurve(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LEvent : public QEvent {
    friend class N36;
public:
    LEvent(uint u, Type x1) : QEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFileIconProvider : public QFileIconProvider {
    friend class N37;
public:
    LFileIconProvider(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QIcon icon(IconType x1) const { quint64 id = LObjects::override_id(unique, 449); void* fun = LObjects::overrideFun(id); QIcon ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 449, args, id).value<QIcon>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QFileIconProvider::icon(x1); } return ret; }
    QString type(const QFileInfo& x1) const { quint64 id = LObjects::override_id(unique, 451); void* fun = LObjects::overrideFun(id); QString ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 451, args, id).value<QString>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QFileIconProvider::type(x1); } return ret; }
};

class LFileInfo : public QFileInfo {
    friend class N38;
public:
    LFileInfo(uint u) : unique(u) {}
    LFileInfo(uint u, const QString& x1) : QFileInfo(x1), unique(u) {}
    LFileInfo(uint u, const QFile& x1) : QFileInfo(x1), unique(u) {}
    LFileInfo(uint u, const QDir& x1, const QString& x2) : QFileInfo(x1, x2), unique(u) {}
    LFileInfo(uint u, const QFileInfo& x1) : QFileInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFileOpenEvent : public QFileOpenEvent {
    friend class N39;
public:

    static NumList overrideIds;
    uint unique;
};

class LFocusEvent : public QFocusEvent {
    friend class N40;
public:
    LFocusEvent(uint u, Type x1, Qt::FocusReason x2 = Qt::OtherFocusReason) : QFocusEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFont : public QFont {
    friend class N41;
public:
    LFont(uint u) : unique(u) {}
    LFont(uint u, const QString& x1, int x2 = -1, int x3 = -1, bool x4 = false) : QFont(x1, x2, x3, x4), unique(u) {}
    LFont(uint u, const QFont& x1, QPaintDevice* x2) : QFont(x1, x2), unique(u) {}
    LFont(uint u, const QFont& x1) : QFont(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFontDatabase : public QFontDatabase {
    friend class N42;
public:
    LFontDatabase(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFontInfo : public QFontInfo {
    friend class N43;
public:
    LFontInfo(uint u, const QFont& x1) : QFontInfo(x1), unique(u) {}
    LFontInfo(uint u, const QFontInfo& x1) : QFontInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFontMetrics : public QFontMetrics {
    friend class N44;
public:
    LFontMetrics(uint u, const QFont& x1) : QFontMetrics(x1), unique(u) {}
    LFontMetrics(uint u, const QFont& x1, QPaintDevice* x2) : QFontMetrics(x1, x2), unique(u) {}
    LFontMetrics(uint u, const QFontMetrics& x1) : QFontMetrics(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGestureEvent : public QGestureEvent {
    friend class N45;
public:
    LGestureEvent(uint u, const QList<QGesture*>& x1) : QGestureEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGradient : public QGradient {
    friend class N46;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsAnchorLayout : public QGraphicsAnchorLayout {
    friend class N47;
public:
    LGraphicsAnchorLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsAnchorLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { quint64 id = LObjects::override_id(unique, 163); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 163, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsAnchorLayout::count(); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsAnchorLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { quint64 id = LObjects::override_id(unique, 166); void* fun = LObjects::overrideFun(id); QGraphicsLayoutItem* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)callOverrideFun(fun, 166, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsAnchorLayout::itemAt(x1); } return ret; }
    void removeAt(int x1) { quint64 id = LObjects::override_id(unique, 452); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 452, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsAnchorLayout::removeAt(x1); }}
    void setGeometry(const QRectF& x1) { quint64 id = LObjects::override_id(unique, 232); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 232, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsAnchorLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { quint64 id = LObjects::override_id(unique, 249); void* fun = LObjects::overrideFun(id); QSizeF ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 249, args, id).value<QSizeF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsAnchorLayout::sizeHint(x1, x2); } return ret; }
    void widgetEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 453); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 453, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsAnchorLayout::widgetEvent(x1); }}
    void updateGeometry() { quint64 id = LObjects::override_id(unique, 263); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 263, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsAnchorLayout::updateGeometry(); }}
};

class LGraphicsEllipseItem : public QGraphicsEllipseItem {
    friend class N48;
public:
    LGraphicsEllipseItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsEllipseItem(x1), unique(u) {}
    LGraphicsEllipseItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsEllipseItem(x1, x2), unique(u) {}
    LGraphicsEllipseItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsEllipseItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsEllipseItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsEllipseItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsEllipseItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsEllipseItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsEllipseItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsEllipseItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsEllipseItem::type(); } return ret; }
};

class LGraphicsGridLayout : public QGraphicsGridLayout {
    friend class N49;
public:
    LGraphicsGridLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsGridLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { quint64 id = LObjects::override_id(unique, 163); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 163, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsGridLayout::count(); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsGridLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { quint64 id = LObjects::override_id(unique, 166); void* fun = LObjects::overrideFun(id); QGraphicsLayoutItem* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)callOverrideFun(fun, 166, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsGridLayout::itemAt(x1); } return ret; }
    void removeAt(int x1) { quint64 id = LObjects::override_id(unique, 452); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 452, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsGridLayout::removeAt(x1); }}
    void setGeometry(const QRectF& x1) { quint64 id = LObjects::override_id(unique, 232); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 232, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsGridLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { quint64 id = LObjects::override_id(unique, 249); void* fun = LObjects::overrideFun(id); QSizeF ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 249, args, id).value<QSizeF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsGridLayout::sizeHint(x1, x2); } return ret; }
    void widgetEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 453); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 453, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsGridLayout::widgetEvent(x1); }}
    void updateGeometry() { quint64 id = LObjects::override_id(unique, 263); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 263, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsGridLayout::updateGeometry(); }}
};

class LGraphicsItem : public QGraphicsItem {
    friend class N50;
public:
    LGraphicsItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void advance(int x1) { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 426, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::advance(x1); }}
    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } return ret; }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 427, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 428, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::collidesWithPath(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::type(); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 234, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 235); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 235, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 236); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 236, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 237); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 237, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 238); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 238, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 240); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 240, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 241); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 241, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 242); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 242, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 243); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 243, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 244); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 244, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 245); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 245, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 246); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 246, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 247); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 247, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 262); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 262, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 429, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 251); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 251, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItem::wheelEvent(x1); }}
};

class LGraphicsItemGroup : public QGraphicsItemGroup {
    friend class N51;
public:
    LGraphicsItemGroup(uint u, QGraphicsItem* x1 = 0) : QGraphicsItemGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::boundingRect(); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::paint(x1, x2, x3); }}
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::type(); } return ret; }
    void advance(int x1) { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 426, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::advance(x1); }}
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 427, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 428, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::collidesWithPath(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::contains(x1); } return ret; }
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::shape(); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 234, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 235); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 235, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 236); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 236, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 237); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 237, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 238); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 238, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 240); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 240, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 241); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 241, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 242); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 242, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 243); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 243, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 244); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 244, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 245); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 245, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 246); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 246, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 247); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 247, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 262); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 262, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 429, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsItemGroup::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 251); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 251, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsItemGroup::wheelEvent(x1); }}
};

class LGraphicsLayout : public QGraphicsLayout {
    friend class N52;
public:
    LGraphicsLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { quint64 id = LObjects::override_id(unique, 163); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 163, 0, id).toInt(); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { quint64 id = LObjects::override_id(unique, 166); void* fun = LObjects::overrideFun(id); QGraphicsLayoutItem* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)callOverrideFun(fun, 166, args, id).value<void*>(); } return ret; }
    void removeAt(int x1) { quint64 id = LObjects::override_id(unique, 452); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 452, args, id); }}
    void widgetEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 453); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 453, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLayout::widgetEvent(x1); }}
    void updateGeometry() { quint64 id = LObjects::override_id(unique, 263); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 263, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLayout::updateGeometry(); }}
    void setGeometry(const QRectF& x1) { quint64 id = LObjects::override_id(unique, 232); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 232, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { quint64 id = LObjects::override_id(unique, 249); void* fun = LObjects::overrideFun(id); QSizeF ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 249, args, id).value<QSizeF>(); } return ret; }
};

class LGraphicsLayoutItem : public QGraphicsLayoutItem {
    friend class N53;
public:
    LGraphicsLayoutItem(uint u, QGraphicsLayoutItem* x1 = 0, bool x2 = false) : QGraphicsLayoutItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setGeometry(const QRectF& x1) { quint64 id = LObjects::override_id(unique, 232); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 232, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLayoutItem::setGeometry(x1); }}
    void updateGeometry() { quint64 id = LObjects::override_id(unique, 263); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 263, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLayoutItem::updateGeometry(); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { quint64 id = LObjects::override_id(unique, 249); void* fun = LObjects::overrideFun(id); QSizeF ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 249, args, id).value<QSizeF>(); } return ret; }
};

class LGraphicsLineItem : public QGraphicsLineItem {
    friend class N54;
public:
    LGraphicsLineItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsLineItem(x1), unique(u) {}
    LGraphicsLineItem(uint u, const QLineF& x1, QGraphicsItem* x2 = 0) : QGraphicsLineItem(x1, x2), unique(u) {}
    LGraphicsLineItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsLineItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::type(); } return ret; }
    void advance(int x1) { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 426, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::advance(x1); }}
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 427, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 428, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::collidesWithPath(x1, x2); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 234, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 235); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 235, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 236); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 236, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 237); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 237, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 238); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 238, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 240); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 240, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 241); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 241, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 242); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 242, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 243); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 243, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 244); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 244, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 245); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 245, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 246); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 246, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 247); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 247, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 262); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 262, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 429, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLineItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 251); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 251, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLineItem::wheelEvent(x1); }}
};

class LGraphicsLinearLayout : public QGraphicsLinearLayout {
    friend class N55;
public:
    LGraphicsLinearLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsLinearLayout(x1), unique(u) {}
    LGraphicsLinearLayout(uint u, Qt::Orientation x1, QGraphicsLayoutItem* x2 = 0) : QGraphicsLinearLayout(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { quint64 id = LObjects::override_id(unique, 163); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 163, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLinearLayout::count(); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLinearLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { quint64 id = LObjects::override_id(unique, 166); void* fun = LObjects::overrideFun(id); QGraphicsLayoutItem* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)callOverrideFun(fun, 166, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLinearLayout::itemAt(x1); } return ret; }
    void removeAt(int x1) { quint64 id = LObjects::override_id(unique, 452); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 452, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLinearLayout::removeAt(x1); }}
    void setGeometry(const QRectF& x1) { quint64 id = LObjects::override_id(unique, 232); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 232, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLinearLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { quint64 id = LObjects::override_id(unique, 249); void* fun = LObjects::overrideFun(id); QSizeF ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 249, args, id).value<QSizeF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsLinearLayout::sizeHint(x1, x2); } return ret; }
    void widgetEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 453); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 453, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLinearLayout::widgetEvent(x1); }}
    void updateGeometry() { quint64 id = LObjects::override_id(unique, 263); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 263, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsLinearLayout::updateGeometry(); }}
};

class LGraphicsPathItem : public QGraphicsPathItem {
    friend class N56;
public:
    LGraphicsPathItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPathItem(x1), unique(u) {}
    LGraphicsPathItem(uint u, const QPainterPath& x1, QGraphicsItem* x2 = 0) : QGraphicsPathItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPathItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPathItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPathItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPathItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPathItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPathItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPathItem::type(); } return ret; }
};

class LGraphicsPixmapItem : public QGraphicsPixmapItem {
    friend class N57;
public:
    LGraphicsPixmapItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPixmapItem(x1), unique(u) {}
    LGraphicsPixmapItem(uint u, const QPixmap& x1, QGraphicsItem* x2 = 0) : QGraphicsPixmapItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::type(); } return ret; }
    void advance(int x1) { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 426, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::advance(x1); }}
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 427, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 428, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::collidesWithPath(x1, x2); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 234, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 235); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 235, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 236); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 236, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 237); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 237, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { quint64 id = LObjects::override_id(unique, 238); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 238, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 240); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 240, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 241); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 241, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { quint64 id = LObjects::override_id(unique, 242); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 242, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 243); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 243, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 244); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 244, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 245); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 245, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 246); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 246, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 247); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 247, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 262); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 262, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 429, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPixmapItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 251); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 251, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPixmapItem::wheelEvent(x1); }}
};

class LGraphicsPolygonItem : public QGraphicsPolygonItem {
    friend class N58;
public:
    LGraphicsPolygonItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPolygonItem(x1), unique(u) {}
    LGraphicsPolygonItem(uint u, const QPolygonF& x1, QGraphicsItem* x2 = 0) : QGraphicsPolygonItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPolygonItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPolygonItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPolygonItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPolygonItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsPolygonItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPolygonItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsPolygonItem::type(); } return ret; }
};

class LGraphicsRectItem : public QGraphicsRectItem {
    friend class N59;
public:
    LGraphicsRectItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsRectItem(x1), unique(u) {}
    LGraphicsRectItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsRectItem(x1, x2), unique(u) {}
    LGraphicsRectItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsRectItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsRectItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsRectItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsRectItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsRectItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsRectItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsRectItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsRectItem::type(); } return ret; }
};

class LGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {
    friend class N60;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {
    friend class N61;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneEvent : public QGraphicsSceneEvent {
    friend class N62;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent {
    friend class N63;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent {
    friend class N64;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {
    friend class N65;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent {
    friend class N66;
public:
    LGraphicsSceneMoveEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent {
    friend class N67;
public:
    LGraphicsSceneResizeEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneWheelEvent : public QGraphicsSceneWheelEvent {
    friend class N68;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
    friend class N69;
public:
    LGraphicsSimpleTextItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsSimpleTextItem(x1), unique(u) {}
    LGraphicsSimpleTextItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsSimpleTextItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 260); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 260, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSimpleTextItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { quint64 id = LObjects::override_id(unique, 267); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 267, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSimpleTextItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { quint64 id = LObjects::override_id(unique, 268); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 268, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSimpleTextItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { quint64 id = LObjects::override_id(unique, 269); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 269, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSimpleTextItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { quint64 id = LObjects::override_id(unique, 231); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSimpleTextItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QPainterPath ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QPainterPath>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSimpleTextItem::shape(); } return ret; }
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSimpleTextItem::type(); } return ret; }
};

class LHelpEvent : public QHelpEvent {
    friend class N71;
public:
    LHelpEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3) : QHelpEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHideEvent : public QHideEvent {
    friend class N73;
public:
    LHideEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHoverEvent : public QHoverEvent {
    friend class N76;
public:
    LHoverEvent(uint u, Type x1, const QPointF& x2, const QPointF& x3, Qt::KeyboardModifiers x4 = Qt::NoModifier) : QHoverEvent(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LIcon : public QIcon {
    friend class N77;
public:
    LIcon(uint u) : unique(u) {}
    LIcon(uint u, const QPixmap& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QIcon& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QString& x1) : QIcon(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LIconDragEvent : public QIconDragEvent {
    friend class N78;
public:
    LIconDragEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LImage : public QImage {
    friend class N79;
public:
    LImage(uint u) : unique(u) {}
    LImage(uint u, const QSize& x1, Format x2) : QImage(x1, x2), unique(u) {}
    LImage(uint u, int x1, int x2, Format x3) : QImage(x1, x2, x3), unique(u) {}
    LImage(uint u, const QString& x1, const char* x2 = 0) : QImage(x1, x2), unique(u) {}
    LImage(uint u, const QImage& x1) : QImage(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QImage::metric(x1); } return ret; }
};

class LInputEvent : public QInputEvent {
    friend class N81;
public:

    static NumList overrideIds;
    uint unique;
};

class LInputMethodEvent : public QInputMethodEvent {
    friend class N82;
public:
    LInputMethodEvent(uint u) : unique(u) {}
    LInputMethodEvent(uint u, const QInputMethodEvent& x1) : QInputMethodEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LItemEditorFactory : public QItemEditorFactory {
    friend class N83;
public:
    LItemEditorFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWidget* createEditor(int x1, QWidget* x2) const { quint64 id = LObjects::override_id(unique, 454); void* fun = LObjects::overrideFun(id); QWidget* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = (QWidget*)callOverrideFun(fun, 454, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QItemEditorFactory::createEditor(x1, x2); } return ret; }
    QByteArray valuePropertyName(int x1) const { quint64 id = LObjects::override_id(unique, 455); void* fun = LObjects::overrideFun(id); QByteArray ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 455, args, id).value<QByteArray>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QItemEditorFactory::valuePropertyName(x1); } return ret; }
};

class LItemSelectionRange : public QItemSelectionRange {
    friend class N84;
public:
    LItemSelectionRange(uint u) : unique(u) {}
    LItemSelectionRange(uint u, const QItemSelectionRange& x1) : QItemSelectionRange(x1), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelectionRange(x1, x2), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1) : QItemSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LKeyEvent : public QKeyEvent {
    friend class N85;
public:
    LKeyEvent(uint u, Type x1, int x2, Qt::KeyboardModifiers x3, const QString& x4 = QString(), bool x5 = false, ushort x6 = 1) : QKeyEvent(x1, x2, x3, x4, x5, x6), unique(u) {}
    LKeyEvent(uint u, Type x1, int x2, Qt::KeyboardModifiers x3, quint32 x4, quint32 x5, quint32 x6, const QString& x7 = QString(), bool x8 = false, ushort x9 = 1) : QKeyEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LKeySequence : public QKeySequence {
    friend class N86;
public:
    LKeySequence(uint u) : unique(u) {}
    LKeySequence(uint u, const QString& x1, SequenceFormat x2 = NativeText) : QKeySequence(x1, x2), unique(u) {}
    LKeySequence(uint u, int x1, int x2 = 0, int x3 = 0, int x4 = 0) : QKeySequence(x1, x2, x3, x4), unique(u) {}
    LKeySequence(uint u, const QKeySequence& x1) : QKeySequence(x1), unique(u) {}
    LKeySequence(uint u, StandardKey x1) : QKeySequence(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LLayoutItem : public QLayoutItem {
    friend class N87;
public:
    LLayoutItem(uint u, Qt::Alignment x1 = 0) : QLayoutItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSizePolicy::ControlTypes controlTypes() const { quint64 id = LObjects::override_id(unique, 173); void* fun = LObjects::overrideFun(id); QSizePolicy::ControlTypes ret = (QSizePolicy::ControlTypes)0; if(fun && (LObjects::calling != id)) { ret = (QSizePolicy::ControlTypes)callOverrideFun(fun, 173, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::controlTypes(); } return ret; }
    Qt::Orientations expandingDirections() const { quint64 id = LObjects::override_id(unique, 164); void* fun = LObjects::overrideFun(id); Qt::Orientations ret = (Qt::Orientations)0; if(fun && (LObjects::calling != id)) { ret = (Qt::Orientations)callOverrideFun(fun, 164, 0, id).toInt(); } return ret; }
    QRect geometry() const { quint64 id = LObjects::override_id(unique, 174); void* fun = LObjects::overrideFun(id); QRect ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 174, 0, id).value<QRect>(); } return ret; }
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::heightForWidth(x1); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QLayoutItem::invalidate(); }}
    bool isEmpty() const { quint64 id = LObjects::override_id(unique, 175); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 175, 0, id).toBool(); } return ret; }
    QLayout* layout() { quint64 id = LObjects::override_id(unique, 176); void* fun = LObjects::overrideFun(id); QLayout* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QLayout*)callOverrideFun(fun, 176, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::layout(); } return ret; }
    QSize maximumSize() const { quint64 id = LObjects::override_id(unique, 167); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 167, 0, id).value<QSize>(); } return ret; }
    int minimumHeightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 168); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 168, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::minimumHeightForWidth(x1); } return ret; }
    QSize minimumSize() const { quint64 id = LObjects::override_id(unique, 169); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 169, 0, id).value<QSize>(); } return ret; }
    void setGeometry(const QRect& x1) { quint64 id = LObjects::override_id(unique, 170); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 170, args, id); }}
    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } return ret; }
    QSpacerItem* spacerItem() { quint64 id = LObjects::override_id(unique, 456); void* fun = LObjects::overrideFun(id); QSpacerItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSpacerItem*)callOverrideFun(fun, 456, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::spacerItem(); } return ret; }
    QWidget* widget() { quint64 id = LObjects::override_id(unique, 457); void* fun = LObjects::overrideFun(id); QWidget* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QWidget*)callOverrideFun(fun, 457, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QLayoutItem::widget(); } return ret; }
};

class LLibraryInfo : public QLibraryInfo {
    friend class N88;
public:

    static NumList overrideIds;
    uint unique;
};

class LLinearGradient : public QLinearGradient {
    friend class N89;
public:
    LLinearGradient(uint u) : unique(u) {}
    LLinearGradient(uint u, const QPointF& x1, const QPointF& x2) : QLinearGradient(x1, x2), unique(u) {}
    LLinearGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QLinearGradient(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LListWidgetItem : public QListWidgetItem {
    friend class N90;
public:
    LListWidgetItem(uint u, QListWidget* x1 = 0, int x2 = Type) : QListWidgetItem(x1, x2), unique(u) {}
    LListWidgetItem(uint u, const QString& x1, QListWidget* x2 = 0, int x3 = Type) : QListWidgetItem(x1, x2, x3), unique(u) {}
    LListWidgetItem(uint u, const QIcon& x1, const QString& x2, QListWidget* x3 = 0, int x4 = Type) : QListWidgetItem(x1, x2, x3, x4), unique(u) {}
    LListWidgetItem(uint u, const QListWidgetItem& x1) : QListWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QListWidgetItem* clone() const { quint64 id = LObjects::override_id(unique, 458); void* fun = LObjects::overrideFun(id); QListWidgetItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QListWidgetItem*)callOverrideFun(fun, 458, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QListWidgetItem::clone(); } return ret; }
    QVariant data(int x1) const { quint64 id = LObjects::override_id(unique, 459); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 459, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QListWidgetItem::data(x1); } return ret; }
    void setData(int x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 460); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 460, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QListWidgetItem::setData(x1, x2); }}
};

class LLocale : public QLocale {
    friend class N91;
public:
    LLocale(uint u) : unique(u) {}
    LLocale(uint u, const QString& x1) : QLocale(x1), unique(u) {}
    LLocale(uint u, Language x1, Country x2 = AnyCountry) : QLocale(x1, x2), unique(u) {}
    LLocale(uint u, Language x1, Script x2, Country x3) : QLocale(x1, x2, x3), unique(u) {}
    LLocale(uint u, const QLocale& x1) : QLocale(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMargins : public QMargins {
    friend class N92;
public:
    LMargins(uint u) : unique(u) {}
    LMargins(uint u, int x1, int x2, int x3, int x4) : QMargins(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix : public QMatrix {
    friend class N93;
public:
    LMatrix(uint u) : unique(u) {}
    LMatrix(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QMatrix(x1, x2, x3, x4, x5, x6), unique(u) {}
    LMatrix(uint u, const QMatrix& x1) : QMatrix(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix4x4 : public QMatrix4x4 {
    friend class N94;
public:
    LMatrix4x4(uint u) : unique(u) {}
    LMatrix4x4(uint u, float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10, float x11, float x12, float x13, float x14, float x15, float x16) : QMatrix4x4(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16), unique(u) {}
    LMatrix4x4(uint u, const QTransform& x1) : QMatrix4x4(x1), unique(u) {}
    LMatrix4x4(uint u, const QMatrix& x1) : QMatrix4x4(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMetaObject : public QMetaObject {
    friend class N95;
public:

    static NumList overrideIds;
    uint unique;
};

class LModelIndex : public QModelIndex {
    friend class N96;
public:
    LModelIndex(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMouseEvent : public QMouseEvent {
    friend class N97;
public:
    LMouseEvent(uint u, Type x1, const QPointF& x2, Qt::MouseButton x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) : QMouseEvent(x1, x2, x3, x4, x5), unique(u) {}
    LMouseEvent(uint u, Type x1, const QPointF& x2, const QPointF& x3, Qt::MouseButton x4, Qt::MouseButtons x5, Qt::KeyboardModifiers x6) : QMouseEvent(x1, x2, x3, x4, x5, x6), unique(u) {}
    LMouseEvent(uint u, Type x1, const QPointF& x2, const QPointF& x3, const QPointF& x4, Qt::MouseButton x5, Qt::MouseButtons x6, Qt::KeyboardModifiers x7) : QMouseEvent(x1, x2, x3, x4, x5, x6, x7), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMoveEvent : public QMoveEvent {
    friend class N98;
public:
    LMoveEvent(uint u, const QPoint& x1, const QPoint& x2) : QMoveEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LOpenGLPaintDevice : public QOpenGLPaintDevice {
    friend class N107;
public:
    LOpenGLPaintDevice(uint u) : unique(u) {}
    LOpenGLPaintDevice(uint u, const QSize& x1) : QOpenGLPaintDevice(x1), unique(u) {}
    LOpenGLPaintDevice(uint u, int x1, int x2) : QOpenGLPaintDevice(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void ensureActiveTarget() { quint64 id = LObjects::override_id(unique, 462); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 462, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QOpenGLPaintDevice::ensureActiveTarget(); }}
    int metric(QPaintDevice::PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 463); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 463, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QOpenGLPaintDevice::metric(x1); } return ret; }
};

class LOpenGLTexture : public QOpenGLTexture {
    friend class N108;
public:
    LOpenGLTexture(uint u, Target x1) : QOpenGLTexture(x1), unique(u) {}
    LOpenGLTexture(uint u, const QImage& x1, MipMapGeneration x2 = GenerateMipMaps) : QOpenGLTexture(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPaintEvent : public QPaintEvent {
    friend class N111;
public:
    LPaintEvent(uint u, const QRegion& x1) : QPaintEvent(x1), unique(u) {}
    LPaintEvent(uint u, const QRect& x1) : QPaintEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainter : public QPainter {
    friend class N112;
public:
    LPainter(uint u, QImage* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QPicture* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QPixmap* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QPrinter* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QWidget* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPath : public QPainterPath {
    friend class N113;
public:
    LPainterPath(uint u) : unique(u) {}
    LPainterPath(uint u, const QPointF& x1) : QPainterPath(x1), unique(u) {}
    LPainterPath(uint u, const QPainterPath& x1) : QPainterPath(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPathStroker : public QPainterPathStroker {
    friend class N114;
public:
    LPainterPathStroker(uint u) : unique(u) {}
    LPainterPathStroker(uint u, const QPen& x1) : QPainterPathStroker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPalette : public QPalette {
    friend class N115;
public:
    LPalette(uint u) : unique(u) {}
    LPalette(uint u, const QColor& x1) : QPalette(x1), unique(u) {}
    LPalette(uint u, Qt::GlobalColor x1) : QPalette(x1), unique(u) {}
    LPalette(uint u, const QColor& x1, const QColor& x2) : QPalette(x1, x2), unique(u) {}
    LPalette(uint u, const QBrush& x1, const QBrush& x2, const QBrush& x3, const QBrush& x4, const QBrush& x5, const QBrush& x6, const QBrush& x7, const QBrush& x8, const QBrush& x9) : QPalette(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LPalette(uint u, const QPalette& x1) : QPalette(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPen : public QPen {
    friend class N116;
public:
    LPen(uint u) : unique(u) {}
    LPen(uint u, Qt::PenStyle x1) : QPen(x1), unique(u) {}
    LPen(uint u, const QColor& x1) : QPen(x1), unique(u) {}
    LPen(uint u, const QBrush& x1, qreal x2, Qt::PenStyle x3 = Qt::SolidLine, Qt::PenCapStyle x4 = Qt::SquareCap, Qt::PenJoinStyle x5 = Qt::BevelJoin) : QPen(x1, x2, x3, x4, x5), unique(u) {}
    LPen(uint u, const QPen& x1) : QPen(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPersistentModelIndex : public QPersistentModelIndex {
    friend class N117;
public:
    LPersistentModelIndex(uint u, const QModelIndex& x1) : QPersistentModelIndex(x1), unique(u) {}
    LPersistentModelIndex(uint u, const QPersistentModelIndex& x1) : QPersistentModelIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPicture : public QPicture {
    friend class N118;
public:
    LPicture(uint u, int x1 = -1) : QPicture(x1), unique(u) {}
    LPicture(uint u, const QPicture& x1) : QPicture(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setData(const char* x1, uint x2) { quint64 id = LObjects::override_id(unique, 464); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 464, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QPicture::setData(x1, x2); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QPicture::metric(x1); } return ret; }
};

class LPixmap : public QPixmap {
    friend class N119;
public:
    LPixmap(uint u) : unique(u) {}
    LPixmap(uint u, int x1, int x2) : QPixmap(x1, x2), unique(u) {}
    LPixmap(uint u, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) : QPixmap(x1, x2, x3), unique(u) {}
    LPixmap(uint u, const QPixmap& x1) : QPixmap(x1), unique(u) {}
    LPixmap(uint u, const QSize& x1) : QPixmap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QPixmap::metric(x1); } return ret; }
};

class LPixmapCache : public QPixmapCache {
    friend class N120;
public:

    static NumList overrideIds;
    uint unique;
};

class LPrinter : public QPrinter {
    friend class N121;
public:
    LPrinter(uint u, PrinterMode x1 = ScreenResolution) : QPrinter(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool newPage() { quint64 id = LObjects::override_id(unique, 465); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 465, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QPrinter::newPage(); } return ret; }
    void setPageSize(PageSize x1) { quint64 id = LObjects::override_id(unique, 466); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 466, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QPrinter::setPageSize(x1); }}
    void setPageSizeMM(const QSizeF& x1) { quint64 id = LObjects::override_id(unique, 467); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 467, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QPrinter::setPageSizeMM(x1); }}
};

class LPrinterInfo : public QPrinterInfo {
    friend class N122;
public:

    static NumList overrideIds;
    uint unique;
};

class LProcessEnvironment : public QProcessEnvironment {
    friend class N123;
public:
    LProcessEnvironment(uint u) : unique(u) {}
    LProcessEnvironment(uint u, const QProcessEnvironment& x1) : QProcessEnvironment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQuaternion : public QQuaternion {
    friend class N124;
public:
    LQuaternion(uint u) : unique(u) {}
    LQuaternion(uint u, float x1, float x2, float x3, float x4) : QQuaternion(x1, x2, x3, x4), unique(u) {}
    LQuaternion(uint u, float x1, const QVector3D& x2) : QQuaternion(x1, x2), unique(u) {}
    LQuaternion(uint u, const QVector4D& x1) : QQuaternion(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRadialGradient : public QRadialGradient {
    friend class N125;
public:
    LRadialGradient(uint u) : unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2, const QPointF& x3) : QRadialGradient(x1, x2, x3), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) : QRadialGradient(x1, x2, x3, x4, x5), unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2) : QRadialGradient(x1, x2), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3) : QRadialGradient(x1, x2, x3), unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2, const QPointF& x3, qreal x4) : QRadialGradient(x1, x2, x3, x4), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QRadialGradient(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LReadLocker : public QReadLocker {
    friend class N126;
public:
    LReadLocker(uint u, QReadWriteLock* x1) : QReadLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LReadWriteLock : public QReadWriteLock {
    friend class N127;
public:
    LReadWriteLock(uint u, RecursionMode x1 = NonRecursive) : QReadWriteLock(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegExp : public QRegExp {
    friend class N128;
public:
    LRegExp(uint u) : unique(u) {}
    LRegExp(uint u, const QString& x1, Qt::CaseSensitivity x2 = Qt::CaseSensitive, PatternSyntax x3 = RegExp) : QRegExp(x1, x2, x3), unique(u) {}
    LRegExp(uint u, const QRegExp& x1) : QRegExp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegion : public QRegion {
    friend class N129;
public:
    LRegion(uint u) : unique(u) {}
    LRegion(uint u, int x1, int x2, int x3, int x4, RegionType x5 = Rectangle) : QRegion(x1, x2, x3, x4, x5), unique(u) {}
    LRegion(uint u, const QPolygon& x1, Qt::FillRule x2 = Qt::OddEvenFill) : QRegion(x1, x2), unique(u) {}
    LRegion(uint u, const QRegion& x1) : QRegion(x1), unique(u) {}
    LRegion(uint u, const QBitmap& x1) : QRegion(x1), unique(u) {}
    LRegion(uint u, const QRect& x1, RegionType x2 = Rectangle) : QRegion(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegularExpression : public QRegularExpression {
    friend class N130;
public:
    LRegularExpression(uint u) : unique(u) {}
    LRegularExpression(uint u, const QString& x1, PatternOptions x2 = NoPatternOption) : QRegularExpression(x1, x2), unique(u) {}
    LRegularExpression(uint u, const QRegularExpression& x1) : QRegularExpression(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LResizeEvent : public QResizeEvent {
    friend class N131;
public:
    LResizeEvent(uint u, const QSize& x1, const QSize& x2) : QResizeEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRunnable : public QRunnable {
    friend class N132;
public:
    LRunnable(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    void run() { quint64 id = LObjects::override_id(unique, 468); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 468, 0, id); }}
};

class LSemaphore : public QSemaphore {
    friend class N133;
public:
    LSemaphore(uint u, int x1 = 0) : QSemaphore(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LShortcutEvent : public QShortcutEvent {
    friend class N134;
public:
    LShortcutEvent(uint u, const QKeySequence& x1, int x2, bool x3 = false) : QShortcutEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LShowEvent : public QShowEvent {
    friend class N135;
public:
    LShowEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSizePolicy : public QSizePolicy {
    friend class N136;
public:
    LSizePolicy(uint u) : unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2, ControlType x3 = DefaultType) : QSizePolicy(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSpacerItem : public QSpacerItem {
    friend class N137;
public:
    LSpacerItem(uint u, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) : QSpacerItem(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { quint64 id = LObjects::override_id(unique, 164); void* fun = LObjects::overrideFun(id); Qt::Orientations ret = (Qt::Orientations)0; if(fun && (LObjects::calling != id)) { ret = (Qt::Orientations)callOverrideFun(fun, 164, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::expandingDirections(); } return ret; }
    QRect geometry() const { quint64 id = LObjects::override_id(unique, 174); void* fun = LObjects::overrideFun(id); QRect ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 174, 0, id).value<QRect>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::geometry(); } return ret; }
    bool isEmpty() const { quint64 id = LObjects::override_id(unique, 175); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 175, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::isEmpty(); } return ret; }
    QSize maximumSize() const { quint64 id = LObjects::override_id(unique, 167); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 167, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::maximumSize(); } return ret; }
    QSize minimumSize() const { quint64 id = LObjects::override_id(unique, 169); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 169, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::minimumSize(); } return ret; }
    void setGeometry(const QRect& x1) { quint64 id = LObjects::override_id(unique, 170); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 170, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSpacerItem::setGeometry(x1); }}
    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::sizeHint(); } return ret; }
    QSpacerItem* spacerItem() { quint64 id = LObjects::override_id(unique, 456); void* fun = LObjects::overrideFun(id); QSpacerItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSpacerItem*)callOverrideFun(fun, 456, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::spacerItem(); } return ret; }
    QSizePolicy::ControlTypes controlTypes() const { quint64 id = LObjects::override_id(unique, 173); void* fun = LObjects::overrideFun(id); QSizePolicy::ControlTypes ret = (QSizePolicy::ControlTypes)0; if(fun && (LObjects::calling != id)) { ret = (QSizePolicy::ControlTypes)callOverrideFun(fun, 173, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::controlTypes(); } return ret; }
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::heightForWidth(x1); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSpacerItem::invalidate(); }}
    QLayout* layout() { quint64 id = LObjects::override_id(unique, 176); void* fun = LObjects::overrideFun(id); QLayout* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QLayout*)callOverrideFun(fun, 176, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::layout(); } return ret; }
    int minimumHeightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 168); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 168, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::minimumHeightForWidth(x1); } return ret; }
    QWidget* widget() { quint64 id = LObjects::override_id(unique, 457); void* fun = LObjects::overrideFun(id); QWidget* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QWidget*)callOverrideFun(fun, 457, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSpacerItem::widget(); } return ret; }
};

class LStandardItem : public QStandardItem {
    friend class N151;
public:
    LStandardItem(uint u) : unique(u) {}
    LStandardItem(uint u, const QString& x1) : QStandardItem(x1), unique(u) {}
    LStandardItem(uint u, const QIcon& x1, const QString& x2) : QStandardItem(x1, x2), unique(u) {}
    LStandardItem(uint u, int x1, int x2 = 1) : QStandardItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QStandardItem* clone() const { quint64 id = LObjects::override_id(unique, 458); void* fun = LObjects::overrideFun(id); QStandardItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QStandardItem*)callOverrideFun(fun, 458, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QStandardItem::clone(); } return ret; }
    QVariant data(int x1 = Qt::UserRole+1) const { quint64 id = LObjects::override_id(unique, 459); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 459, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QStandardItem::data(x1); } return ret; }
    void setData(const QVariant& x1, int x2 = Qt::UserRole+1) { quint64 id = LObjects::override_id(unique, 488); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 488, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QStandardItem::setData(x1, x2); }}
    int type() const { quint64 id = LObjects::override_id(unique, 233); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 233, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QStandardItem::type(); } return ret; }
};

class LStatusTipEvent : public QStatusTipEvent {
    friend class N153;
public:
    LStatusTipEvent(uint u, const QString& x1) : QStatusTipEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LStyleOption : public QStyleOption {
    friend class N154;
public:
    LStyleOption(uint u, int x1 = QStyleOption::Version, int x2 = SO_Default) : QStyleOption(x1, x2), unique(u) {}
    LStyleOption(uint u, const QStyleOption& x1) : QStyleOption(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LStyleOptionGraphicsItem : public QStyleOptionGraphicsItem {
    friend class N155;
public:
    LStyleOptionGraphicsItem(uint u) : unique(u) {}
    LStyleOptionGraphicsItem(uint u, const QStyleOptionGraphicsItem& x1) : QStyleOptionGraphicsItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSystemSemaphore : public QSystemSemaphore {
    friend class N159;
public:
    LSystemSemaphore(uint u, const QString& x1, int x2 = 0, AccessMode x3 = Open) : QSystemSemaphore(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTableWidgetItem : public QTableWidgetItem {
    friend class N160;
public:
    LTableWidgetItem(uint u, int x1 = Type) : QTableWidgetItem(x1), unique(u) {}
    LTableWidgetItem(uint u, const QString& x1, int x2 = Type) : QTableWidgetItem(x1, x2), unique(u) {}
    LTableWidgetItem(uint u, const QIcon& x1, const QString& x2, int x3 = Type) : QTableWidgetItem(x1, x2, x3), unique(u) {}
    LTableWidgetItem(uint u, const QTableWidgetItem& x1) : QTableWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QTableWidgetItem* clone() const { quint64 id = LObjects::override_id(unique, 458); void* fun = LObjects::overrideFun(id); QTableWidgetItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QTableWidgetItem*)callOverrideFun(fun, 458, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTableWidgetItem::clone(); } return ret; }
    QVariant data(int x1) const { quint64 id = LObjects::override_id(unique, 459); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 459, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTableWidgetItem::data(x1); } return ret; }
    void setData(int x1, const QVariant& x2) { quint64 id = LObjects::override_id(unique, 460); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 460, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTableWidgetItem::setData(x1, x2); }}
};

class LTableWidgetSelectionRange : public QTableWidgetSelectionRange {
    friend class N161;
public:
    LTableWidgetSelectionRange(uint u) : unique(u) {}
    LTableWidgetSelectionRange(uint u, int x1, int x2, int x3, int x4) : QTableWidgetSelectionRange(x1, x2, x3, x4), unique(u) {}
    LTableWidgetSelectionRange(uint u, const QTableWidgetSelectionRange& x1) : QTableWidgetSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTabletEvent : public QTabletEvent {
    friend class N162;
public:
    LTabletEvent(uint u, Type x1, const QPointF& x2, const QPointF& x3, int x4, int x5, qreal x6, int x7, int x8, qreal x9, qreal x10, int x11, Qt::KeyboardModifiers x12, qint64 x13, Qt::MouseButton x14, Qt::MouseButtons x15) : QTabletEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlock : public QTextBlock {
    friend class N163;
public:
    LTextBlock(uint u, const QTextBlock& x1) : QTextBlock(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockFormat : public QTextBlockFormat {
    friend class N164;
public:
    LTextBlockFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockUserData : public QTextBlockUserData {
    friend class N165;
public:

    static NumList overrideIds;
    uint unique;
};

class LTextBoundaryFinder : public QTextBoundaryFinder {
    friend class N166;
public:
    LTextBoundaryFinder(uint u) : unique(u) {}
    LTextBoundaryFinder(uint u, const QTextBoundaryFinder& x1) : QTextBoundaryFinder(x1), unique(u) {}
    LTextBoundaryFinder(uint u, BoundaryType x1, const QString& x2) : QTextBoundaryFinder(x1, x2), unique(u) {}
    LTextBoundaryFinder(uint u, BoundaryType x1, const QChar* x2, int x3, uchar* x4 = 0, int x5 = 0) : QTextBoundaryFinder(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCharFormat : public QTextCharFormat {
    friend class N167;
public:
    LTextCharFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCodec : public QTextCodec {
    friend class N168;
public:

    static NumList overrideIds;
    uint unique;

    QList<QByteArray> aliases() const { quint64 id = LObjects::override_id(unique, 489); void* fun = LObjects::overrideFun(id); QList<QByteArray> ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 489, 0, id).value<QList<QByteArray> >(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTextCodec::aliases(); } return ret; }
    int mibEnum() const { quint64 id = LObjects::override_id(unique, 490); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 490, 0, id).toInt(); } return ret; }
    QByteArray name() const { quint64 id = LObjects::override_id(unique, 491); void* fun = LObjects::overrideFun(id); QByteArray ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 491, 0, id).value<QByteArray>(); } return ret; }
    QByteArray convertFromUnicode(const QChar* x1, int x2, ConverterState* x3) const { quint64 id = LObjects::override_id(unique, 492); void* fun = LObjects::overrideFun(id); QByteArray ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 492, args, id).value<QByteArray>(); } return ret; }
    QString convertToUnicode(const char* x1, int x2, ConverterState* x3) const { quint64 id = LObjects::override_id(unique, 493); void* fun = LObjects::overrideFun(id); QString ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 493, args, id).value<QString>(); } return ret; }
};

class LTextCursor : public QTextCursor {
    friend class N169;
public:
    LTextCursor(uint u) : unique(u) {}
    LTextCursor(uint u, QTextDocument* x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, QTextFrame* x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, const QTextBlock& x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, const QTextCursor& x1) : QTextCursor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDecoder : public QTextDecoder {
    friend class N170;
public:
    LTextDecoder(uint u, const QTextCodec* x1) : QTextDecoder(x1), unique(u) {}
    LTextDecoder(uint u, const QTextCodec* x1, QTextCodec::ConversionFlags x2) : QTextDecoder(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentFragment : public QTextDocumentFragment {
    friend class N171;
public:
    LTextDocumentFragment(uint u) : unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocument* x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextCursor& x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocumentFragment& x1) : QTextDocumentFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentWriter : public QTextDocumentWriter {
    friend class N172;
public:
    LTextDocumentWriter(uint u) : unique(u) {}
    LTextDocumentWriter(uint u, const QString& x1, const QByteArray& x2 = QByteArray()) : QTextDocumentWriter(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextEncoder : public QTextEncoder {
    friend class N173;
public:
    LTextEncoder(uint u, const QTextCodec* x1) : QTextEncoder(x1), unique(u) {}
    LTextEncoder(uint u, const QTextCodec* x1, QTextCodec::ConversionFlags x2) : QTextEncoder(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFormat : public QTextFormat {
    friend class N174;
public:
    LTextFormat(uint u) : unique(u) {}
    LTextFormat(uint u, int x1) : QTextFormat(x1), unique(u) {}
    LTextFormat(uint u, const QTextFormat& x1) : QTextFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFragment : public QTextFragment {
    friend class N175;
public:
    LTextFragment(uint u) : unique(u) {}
    LTextFragment(uint u, const QTextFragment& x1) : QTextFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFrameFormat : public QTextFrameFormat {
    friend class N176;
public:
    LTextFrameFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextImageFormat : public QTextImageFormat {
    friend class N177;
public:
    LTextImageFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLayout : public QTextLayout {
    friend class N178;
public:
    LTextLayout(uint u) : unique(u) {}
    LTextLayout(uint u, const QString& x1) : QTextLayout(x1), unique(u) {}
    LTextLayout(uint u, const QString& x1, const QFont& x2, QPaintDevice* x3 = 0) : QTextLayout(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLength : public QTextLength {
    friend class N179;
public:
    LTextLength(uint u) : unique(u) {}
    LTextLength(uint u, Type x1, qreal x2) : QTextLength(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLine : public QTextLine {
    friend class N180;
public:
    LTextLine(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextListFormat : public QTextListFormat {
    friend class N181;
public:
    LTextListFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextOption : public QTextOption {
    friend class N182;
public:
    LTextOption(uint u) : unique(u) {}
    LTextOption(uint u, Qt::Alignment x1) : QTextOption(x1), unique(u) {}
    LTextOption(uint u, const QTextOption& x1) : QTextOption(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCell : public QTextTableCell {
    friend class N183;
public:
    LTextTableCell(uint u) : unique(u) {}
    LTextTableCell(uint u, const QTextTableCell& x1) : QTextTableCell(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCellFormat : public QTextTableCellFormat {
    friend class N184;
public:
    LTextTableCellFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableFormat : public QTextTableFormat {
    friend class N185;
public:
    LTextTableFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTime : public QTime {
    friend class N186;
public:
    LTime(uint u) : unique(u) {}
    LTime(uint u, int x1, int x2, int x3 = 0, int x4 = 0) : QTime(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTimeZone : public QTimeZone {
    friend class N187;
public:
    LTimeZone(uint u) : unique(u) {}
    LTimeZone(uint u, const QByteArray& x1) : QTimeZone(x1), unique(u) {}
    LTimeZone(uint u, int x1) : QTimeZone(x1), unique(u) {}
    LTimeZone(uint u, const QByteArray& x1, int x2, const QString& x3, const QString& x4, QLocale::Country x5 = QLocale::AnyCountry, const QString& x6 = QString()) : QTimeZone(x1, x2, x3, x4, x5, x6), unique(u) {}
    LTimeZone(uint u, const QTimeZone& x1) : QTimeZone(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTimerEvent : public QTimerEvent {
    friend class N188;
public:
    LTimerEvent(uint u, int x1) : QTimerEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LToolTip : public QToolTip {
    friend class N189;
public:

    static NumList overrideIds;
    uint unique;
};

class LTouchEvent : public QTouchEvent {
    friend class N190;
public:
    LTouchEvent(uint u, QEvent::Type x1, QTouchDevice* x2 = 0, Qt::KeyboardModifiers x3 = Qt::NoModifier, Qt::TouchPointStates x4 = 0, const QList<QTouchEvent::TouchPoint>& x5 = QList<QTouchEvent::TouchPoint>()) : QTouchEvent(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTransform : public QTransform {
    friend class N191;
public:
    LTransform(uint u) : unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9 = 1.0) : QTransform(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QTransform(x1, x2, x3, x4, x5, x6), unique(u) {}
    LTransform(uint u, const QMatrix& x1) : QTransform(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTreeWidgetItem : public QTreeWidgetItem {
    friend class N192;
public:
    LTreeWidgetItem(uint u, int x1 = Type) : QTreeWidgetItem(x1), unique(u) {}
    LTreeWidgetItem(uint u, const QStringList& x1, int x2 = Type) : QTreeWidgetItem(x1, x2), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidget* x1, int x2 = Type) : QTreeWidgetItem(x1, x2), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidget* x1, const QStringList& x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidget* x1, QTreeWidgetItem* x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidgetItem* x1, int x2 = Type) : QTreeWidgetItem(x1, x2), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidgetItem* x1, const QStringList& x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidgetItem* x1, QTreeWidgetItem* x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, const QTreeWidgetItem& x1) : QTreeWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QTreeWidgetItem* clone() const { quint64 id = LObjects::override_id(unique, 458); void* fun = LObjects::overrideFun(id); QTreeWidgetItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QTreeWidgetItem*)callOverrideFun(fun, 458, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTreeWidgetItem::clone(); } return ret; }
    QVariant data(int x1, int x2) const { quint64 id = LObjects::override_id(unique, 494); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 494, args, id).value<QVariant>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QTreeWidgetItem::data(x1, x2); } return ret; }
    void setData(int x1, int x2, const QVariant& x3) { quint64 id = LObjects::override_id(unique, 495); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 495, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QTreeWidgetItem::setData(x1, x2, x3); }}
};

class LUndoCommand : public QUndoCommand {
    friend class N193;
public:
    LUndoCommand(uint u, QUndoCommand* x1 = 0) : QUndoCommand(x1), unique(u) {}
    LUndoCommand(uint u, const QString& x1, QUndoCommand* x2 = 0) : QUndoCommand(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int id() const { quint64 id = LObjects::override_id(unique, 496); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 496, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUndoCommand::id(); } return ret; }
    bool mergeWith(const QUndoCommand* x1) { quint64 id = LObjects::override_id(unique, 497); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 497, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QUndoCommand::mergeWith(x1); } return ret; }
    void redo() { quint64 id = LObjects::override_id(unique, 498); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 498, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUndoCommand::redo(); }}
    void undo() { quint64 id = LObjects::override_id(unique, 499); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 499, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QUndoCommand::undo(); }}
};

class LUrl : public QUrl {
    friend class N194;
public:
    LUrl(uint u) : unique(u) {}
    LUrl(uint u, const QUrl& x1) : QUrl(x1), unique(u) {}
    LUrl(uint u, const QString& x1, ParsingMode x2 = TolerantMode) : QUrl(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVariant : public QVariant {
    friend class N195;
public:
    LVariant(uint u, const QCursor& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u) : unique(u) {}
    LVariant(uint u, const QRegExp& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRegularExpression& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QUrl& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QEasingCurve& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QUuid& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QModelIndex& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QPersistentModelIndex& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QJsonValue& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QJsonObject& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QJsonArray& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QJsonDocument& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, Type x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QVariant& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, int x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, uint x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, qlonglong x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, qulonglong x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, bool x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, double x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, float x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const char* x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QByteArray& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QBitArray& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QString& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, QLatin1String x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QStringList& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, QChar x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QDate& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QTime& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QDateTime& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QSize& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QSizeF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QPoint& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QPointF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QLine& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QLineF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRect& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRectF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QLocale& x1) : QVariant(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVector2D : public QVector2D {
    friend class N196;
public:
    LVector2D(uint u) : unique(u) {}
    LVector2D(uint u, float x1, float x2) : QVector2D(x1, x2), unique(u) {}
    LVector2D(uint u, const QPoint& x1) : QVector2D(x1), unique(u) {}
    LVector2D(uint u, const QPointF& x1) : QVector2D(x1), unique(u) {}
    LVector2D(uint u, const QVector3D& x1) : QVector2D(x1), unique(u) {}
    LVector2D(uint u, const QVector4D& x1) : QVector2D(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVector3D : public QVector3D {
    friend class N197;
public:
    LVector3D(uint u) : unique(u) {}
    LVector3D(uint u, float x1, float x2, float x3) : QVector3D(x1, x2, x3), unique(u) {}
    LVector3D(uint u, const QPoint& x1) : QVector3D(x1), unique(u) {}
    LVector3D(uint u, const QPointF& x1) : QVector3D(x1), unique(u) {}
    LVector3D(uint u, const QVector2D& x1) : QVector3D(x1), unique(u) {}
    LVector3D(uint u, const QVector2D& x1, float x2) : QVector3D(x1, x2), unique(u) {}
    LVector3D(uint u, const QVector4D& x1) : QVector3D(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVector4D : public QVector4D {
    friend class N198;
public:
    LVector4D(uint u) : unique(u) {}
    LVector4D(uint u, float x1, float x2, float x3, float x4) : QVector4D(x1, x2, x3, x4), unique(u) {}
    LVector4D(uint u, const QPoint& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QPointF& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QVector2D& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QVector2D& x1, float x2, float x3) : QVector4D(x1, x2, x3), unique(u) {}
    LVector4D(uint u, const QVector3D& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QVector3D& x1, float x2) : QVector4D(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWhatsThis : public QWhatsThis {
    friend class N210;
public:

    static NumList overrideIds;
    uint unique;
};

class LWhatsThisClickedEvent : public QWhatsThisClickedEvent {
    friend class N211;
public:
    LWhatsThisClickedEvent(uint u, const QString& x1) : QWhatsThisClickedEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWheelEvent : public QWheelEvent {
    friend class N212;
public:
    LWheelEvent(uint u, const QPointF& x1, const QPointF& x2, QPoint x3, QPoint x4, int x5, Qt::Orientation x6, Qt::MouseButtons x7, Qt::KeyboardModifiers x8) : QWheelEvent(x1, x2, x3, x4, x5, x6, x7, x8), unique(u) {}
    LWheelEvent(uint u, const QPointF& x1, const QPointF& x2, QPoint x3, QPoint x4, int x5, Qt::Orientation x6, Qt::MouseButtons x7, Qt::KeyboardModifiers x8, Qt::ScrollPhase x9) : QWheelEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LWheelEvent(uint u, const QPointF& x1, const QPointF& x2, QPoint x3, QPoint x4, int x5, Qt::Orientation x6, Qt::MouseButtons x7, Qt::KeyboardModifiers x8, Qt::ScrollPhase x9, Qt::MouseEventSource x10) : QWheelEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWidgetItem : public QWidgetItem {
    friend class N213;
public:
    LWidgetItem(uint u, QWidget* x1) : QWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSizePolicy::ControlTypes controlTypes() const { quint64 id = LObjects::override_id(unique, 173); void* fun = LObjects::overrideFun(id); QSizePolicy::ControlTypes ret = (QSizePolicy::ControlTypes)0; if(fun && (LObjects::calling != id)) { ret = (QSizePolicy::ControlTypes)callOverrideFun(fun, 173, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::controlTypes(); } return ret; }
    Qt::Orientations expandingDirections() const { quint64 id = LObjects::override_id(unique, 164); void* fun = LObjects::overrideFun(id); Qt::Orientations ret = (Qt::Orientations)0; if(fun && (LObjects::calling != id)) { ret = (Qt::Orientations)callOverrideFun(fun, 164, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::expandingDirections(); } return ret; }
    QRect geometry() const { quint64 id = LObjects::override_id(unique, 174); void* fun = LObjects::overrideFun(id); QRect ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 174, 0, id).value<QRect>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::geometry(); } return ret; }
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::heightForWidth(x1); } return ret; }
    bool isEmpty() const { quint64 id = LObjects::override_id(unique, 175); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 175, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::isEmpty(); } return ret; }
    QSize maximumSize() const { quint64 id = LObjects::override_id(unique, 167); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 167, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::maximumSize(); } return ret; }
    QSize minimumSize() const { quint64 id = LObjects::override_id(unique, 169); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 169, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::minimumSize(); } return ret; }
    void setGeometry(const QRect& x1) { quint64 id = LObjects::override_id(unique, 170); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 170, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWidgetItem::setGeometry(x1); }}
    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::sizeHint(); } return ret; }
    QWidget* widget() { quint64 id = LObjects::override_id(unique, 457); void* fun = LObjects::overrideFun(id); QWidget* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QWidget*)callOverrideFun(fun, 457, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::widget(); } return ret; }
    void invalidate() { quint64 id = LObjects::override_id(unique, 165); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 165, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QWidgetItem::invalidate(); }}
    QLayout* layout() { quint64 id = LObjects::override_id(unique, 176); void* fun = LObjects::overrideFun(id); QLayout* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QLayout*)callOverrideFun(fun, 176, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::layout(); } return ret; }
    int minimumHeightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 168); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 168, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::minimumHeightForWidth(x1); } return ret; }
    QSpacerItem* spacerItem() { quint64 id = LObjects::override_id(unique, 456); void* fun = LObjects::overrideFun(id); QSpacerItem* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSpacerItem*)callOverrideFun(fun, 456, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QWidgetItem::spacerItem(); } return ret; }
};

class LWindowStateChangeEvent : public QWindowStateChangeEvent {
    friend class N214;
public:

    static NumList overrideIds;
    uint unique;
};

class LWriteLocker : public QWriteLocker {
    friend class N215;
public:
    LWriteLocker(uint u, QReadWriteLock* x1) : QWriteLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

QT_END_NAMESPACE

#endif
