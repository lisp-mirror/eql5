// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LAudioOutput : public QAudioOutput {
    Q_OBJECT
    friend class Q23;
public:
    LAudioOutput(uint u, const QAudioFormat& x1 = QAudioFormat(), QObject* x2 = 0) : QAudioOutput(x1, x2), unique(u) {}
    LAudioOutput(uint u, const QAudioDeviceInfo& x1, const QAudioFormat& x2 = QAudioFormat(), QObject* x3 = 0) : QAudioOutput(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAudioOutput::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAudioOutput::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAudioOutput::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAudioOutput::timerEvent(x1); }}
};

class LAudioRecorder : public QAudioRecorder {
    Q_OBJECT
    friend class Q24;
public:
    LAudioRecorder(uint u, QObject* x1 = 0) : QAudioRecorder(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMediaObject* mediaObject() const { quint64 id = LObjects::override_id(unique, 162); void* fun = LObjects::overrideFun(id); QMediaObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaObject*)callOverrideFun(fun, 162, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAudioRecorder::mediaObject(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QAudioRecorder::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAudioRecorder::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAudioRecorder::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QAudioRecorder::timerEvent(x1); }}
};

class LCamera : public QCamera {
    Q_OBJECT
    friend class Q29;
public:
    LCamera(uint u, QObject* x1 = 0) : QCamera(x1), unique(u) {}
    LCamera(uint u, const QByteArray& x1, QObject* x2 = 0) : QCamera(x1, x2), unique(u) {}
    LCamera(uint u, const QCameraInfo& x1, QObject* x2 = 0) : QCamera(x1, x2), unique(u) {}
    LCamera(uint u, QCamera::Position x1, QObject* x2 = 0) : QCamera(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMultimedia::AvailabilityStatus availability() const { quint64 id = LObjects::override_id(unique, 179); void* fun = LObjects::overrideFun(id); QMultimedia::AvailabilityStatus ret = (QMultimedia::AvailabilityStatus)0; if(fun && (LObjects::calling != id)) { ret = (QMultimedia::AvailabilityStatus)callOverrideFun(fun, 179, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCamera::availability(); } return ret; }
    bool bind(QObject* x1) { quint64 id = LObjects::override_id(unique, 180); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 180, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCamera::bind(x1); } return ret; }
    bool isAvailable() const { quint64 id = LObjects::override_id(unique, 181); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 181, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCamera::isAvailable(); } return ret; }
    QMediaService* service() const { quint64 id = LObjects::override_id(unique, 182); void* fun = LObjects::overrideFun(id); QMediaService* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaService*)callOverrideFun(fun, 182, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCamera::service(); } return ret; }
    void unbind(QObject* x1) { quint64 id = LObjects::override_id(unique, 183); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 183, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCamera::unbind(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCamera::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCamera::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCamera::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCamera::timerEvent(x1); }}
};

class LCameraImageCapture : public QCameraImageCapture {
    Q_OBJECT
    friend class Q32;
public:
    LCameraImageCapture(uint u, QMediaObject* x1, QObject* x2 = 0) : QCameraImageCapture(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMediaObject* mediaObject() const { quint64 id = LObjects::override_id(unique, 162); void* fun = LObjects::overrideFun(id); QMediaObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaObject*)callOverrideFun(fun, 162, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraImageCapture::mediaObject(); } return ret; }
    bool setMediaObject(QMediaObject* x1) { quint64 id = LObjects::override_id(unique, 184); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 184, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraImageCapture::setMediaObject(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraImageCapture::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraImageCapture::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraImageCapture::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraImageCapture::timerEvent(x1); }}
};

class LCameraViewfinder : public QCameraViewfinder {
    Q_OBJECT
    friend class Q34;
public:
    LCameraViewfinder(uint u, QWidget* x1 = 0) : QCameraViewfinder(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::sizeHint(); } return ret; }
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::hideEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { quint64 id = LObjects::override_id(unique, 20); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::showEvent(x1); }}
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { quint64 id = LObjects::override_id(unique, 24); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 24, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { quint64 id = LObjects::override_id(unique, 26); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 12); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 12, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { quint64 id = LObjects::override_id(unique, 27); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 28); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 33); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { quint64 id = LObjects::override_id(unique, 34); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 37); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::mouseReleaseEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::wheelEvent(x1); }}
    void initPainter(QPainter* x1) const { quint64 id = LObjects::override_id(unique, 44); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::initPainter(x1); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QCameraViewfinder::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QCameraViewfinder::timerEvent(x1); }}
};

class LGraphicsVideoItem : public QGraphicsVideoItem {
    Q_OBJECT
    friend class Q86;
public:
    LGraphicsVideoItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsVideoItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 261); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 261, 0, id).value<QRectF>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsVideoItem::boundingRect(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 232); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 232, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsVideoItem::paint(x1, x2, x3); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsVideoItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsVideoItem::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsVideoItem::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsVideoItem::timerEvent(x1); }}
};

class LMediaControl : public QMediaControl {
    Q_OBJECT
    friend class Q126;
public:

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaControl::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaControl::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaControl::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaControl::timerEvent(x1); }}
};

class LMediaObject : public QMediaObject {
    Q_OBJECT
    friend class Q127;
public:

    static NumList overrideIds;
    uint unique;

    QMultimedia::AvailabilityStatus availability() const { quint64 id = LObjects::override_id(unique, 179); void* fun = LObjects::overrideFun(id); QMultimedia::AvailabilityStatus ret = (QMultimedia::AvailabilityStatus)0; if(fun && (LObjects::calling != id)) { ret = (QMultimedia::AvailabilityStatus)callOverrideFun(fun, 179, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaObject::availability(); } return ret; }
    bool bind(QObject* x1) { quint64 id = LObjects::override_id(unique, 180); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 180, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaObject::bind(x1); } return ret; }
    bool isAvailable() const { quint64 id = LObjects::override_id(unique, 181); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 181, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaObject::isAvailable(); } return ret; }
    QMediaService* service() const { quint64 id = LObjects::override_id(unique, 182); void* fun = LObjects::overrideFun(id); QMediaService* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaService*)callOverrideFun(fun, 182, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaObject::service(); } return ret; }
    void unbind(QObject* x1) { quint64 id = LObjects::override_id(unique, 183); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 183, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaObject::unbind(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaObject::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaObject::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaObject::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaObject::timerEvent(x1); }}
};

class LMediaPlayer : public QMediaPlayer {
    Q_OBJECT
    friend class Q128;
public:
    LMediaPlayer(uint u, QObject* x1 = 0, Flags x2 = 0) : QMediaPlayer(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMultimedia::AvailabilityStatus availability() const { quint64 id = LObjects::override_id(unique, 179); void* fun = LObjects::overrideFun(id); QMultimedia::AvailabilityStatus ret = (QMultimedia::AvailabilityStatus)0; if(fun && (LObjects::calling != id)) { ret = (QMultimedia::AvailabilityStatus)callOverrideFun(fun, 179, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlayer::availability(); } return ret; }
    bool bind(QObject* x1) { quint64 id = LObjects::override_id(unique, 180); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 180, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlayer::bind(x1); } return ret; }
    bool isAvailable() const { quint64 id = LObjects::override_id(unique, 181); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 181, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlayer::isAvailable(); } return ret; }
    QMediaService* service() const { quint64 id = LObjects::override_id(unique, 182); void* fun = LObjects::overrideFun(id); QMediaService* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaService*)callOverrideFun(fun, 182, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlayer::service(); } return ret; }
    void unbind(QObject* x1) { quint64 id = LObjects::override_id(unique, 183); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 183, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlayer::unbind(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlayer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlayer::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlayer::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlayer::timerEvent(x1); }}
};

class LMediaPlaylist : public QMediaPlaylist {
    Q_OBJECT
    friend class Q129;
public:
    LMediaPlaylist(uint u, QObject* x1 = 0) : QMediaPlaylist(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMediaObject* mediaObject() const { quint64 id = LObjects::override_id(unique, 162); void* fun = LObjects::overrideFun(id); QMediaObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaObject*)callOverrideFun(fun, 162, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlaylist::mediaObject(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaPlaylist::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlaylist::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlaylist::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaPlaylist::timerEvent(x1); }}
};

class LMediaRecorder : public QMediaRecorder {
    Q_OBJECT
    friend class Q130;
public:
    LMediaRecorder(uint u, QMediaObject* x1, QObject* x2 = 0) : QMediaRecorder(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMediaObject* mediaObject() const { quint64 id = LObjects::override_id(unique, 162); void* fun = LObjects::overrideFun(id); QMediaObject* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaObject*)callOverrideFun(fun, 162, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaRecorder::mediaObject(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QMediaRecorder::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaRecorder::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaRecorder::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QMediaRecorder::timerEvent(x1); }}
};

class LRadioTuner : public QRadioTuner {
    Q_OBJECT
    friend class Q187;
public:
    LRadioTuner(uint u, QObject* x1 = 0) : QRadioTuner(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMultimedia::AvailabilityStatus availability() const { quint64 id = LObjects::override_id(unique, 179); void* fun = LObjects::overrideFun(id); QMultimedia::AvailabilityStatus ret = (QMultimedia::AvailabilityStatus)0; if(fun && (LObjects::calling != id)) { ret = (QMultimedia::AvailabilityStatus)callOverrideFun(fun, 179, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QRadioTuner::availability(); } return ret; }
    bool bind(QObject* x1) { quint64 id = LObjects::override_id(unique, 180); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 180, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QRadioTuner::bind(x1); } return ret; }
    bool isAvailable() const { quint64 id = LObjects::override_id(unique, 181); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 181, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QRadioTuner::isAvailable(); } return ret; }
    QMediaService* service() const { quint64 id = LObjects::override_id(unique, 182); void* fun = LObjects::overrideFun(id); QMediaService* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QMediaService*)callOverrideFun(fun, 182, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QRadioTuner::service(); } return ret; }
    void unbind(QObject* x1) { quint64 id = LObjects::override_id(unique, 183); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 183, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QRadioTuner::unbind(x1); }}
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QRadioTuner::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QRadioTuner::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QRadioTuner::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QRadioTuner::timerEvent(x1); }}
};

class LVideoWidget : public QVideoWidget {
    Q_OBJECT
    friend class Q263;
public:
    LVideoWidget(uint u, QWidget* x1 = 0) : QVideoWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 25, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::sizeHint(); } return ret; }
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::hideEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { quint64 id = LObjects::override_id(unique, 20); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::showEvent(x1); }}
    bool hasHeightForWidth() const { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 21, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { quint64 id = LObjects::override_id(unique, 24); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 24, 0, id).value<QSize>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { quint64 id = LObjects::override_id(unique, 26); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 12); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 12, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { quint64 id = LObjects::override_id(unique, 27); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 28); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 33); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 13); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { quint64 id = LObjects::override_id(unique, 34); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 37); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::mouseReleaseEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::wheelEvent(x1); }}
    void initPainter(QPainter* x1) const { quint64 id = LObjects::override_id(unique, 44); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::initPainter(x1); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidget::timerEvent(x1); }}
};

class LVideoWidgetControl : public QVideoWidgetControl {
    Q_OBJECT
    friend class Q264;
public:

    static NumList overrideIds;
    uint unique;

    Qt::AspectRatioMode aspectRatioMode() const { quint64 id = LObjects::override_id(unique, 419); void* fun = LObjects::overrideFun(id); Qt::AspectRatioMode ret = (Qt::AspectRatioMode)0; if(fun && (LObjects::calling != id)) { ret = (Qt::AspectRatioMode)callOverrideFun(fun, 419, 0, id).toInt(); } return ret; }
    int brightness() const { quint64 id = LObjects::override_id(unique, 420); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 420, 0, id).toInt(); } return ret; }
    int contrast() const { quint64 id = LObjects::override_id(unique, 421); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 421, 0, id).toInt(); } return ret; }
    int hue() const { quint64 id = LObjects::override_id(unique, 422); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 422, 0, id).toInt(); } return ret; }
    bool isFullScreen() const { quint64 id = LObjects::override_id(unique, 423); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 423, 0, id).toBool(); } return ret; }
    int saturation() const { quint64 id = LObjects::override_id(unique, 424); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 424, 0, id).toInt(); } return ret; }
    void setAspectRatioMode(Qt::AspectRatioMode x1) { quint64 id = LObjects::override_id(unique, 425); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 425, args, id); }}
    void setBrightness(int x1) { quint64 id = LObjects::override_id(unique, 426); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 426, args, id); }}
    void setContrast(int x1) { quint64 id = LObjects::override_id(unique, 427); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 427, args, id); }}
    void setFullScreen(bool x1) { quint64 id = LObjects::override_id(unique, 428); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 428, args, id); }}
    void setHue(int x1) { quint64 id = LObjects::override_id(unique, 429); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 429, args, id); }}
    void setSaturation(int x1) { quint64 id = LObjects::override_id(unique, 430); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 430, args, id); }}
    QWidget* videoWidget() { quint64 id = LObjects::override_id(unique, 431); void* fun = LObjects::overrideFun(id); QWidget* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QWidget*)callOverrideFun(fun, 431, 0, id).value<void*>(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QVideoWidgetControl::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidgetControl::childEvent(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidgetControl::customEvent(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QVideoWidgetControl::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
