#ifndef QT_PLUGIN_H
#define QT_PLUGIN_H

#include <Qt>

#ifdef Q_WS_WIN
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

class QWidget;

extern "C" {
    LIB_EXPORT void onShowPlugin(QWidget*);
    LIB_EXPORT void onHidePlugin();
}

QT_END_NAMESPACE

#endif
