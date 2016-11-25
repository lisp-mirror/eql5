// copyright (c) Polos Ruetz

#ifndef UI_LOADER_H
#define UI_LOADER_H

#include <QUiLoader>
#include "gen/_lobjects.h"

QT_BEGIN_NAMESPACE

struct UiLoader : public QUiLoader {
    QWidget* createWidget(const QString& className, QWidget* parent, const QString& name) {
        QWidget* w = 0;
        int id = LObjects::q_names.value(className.toLatin1(), -1);
        if(id != -1) {
            // qt_metacall to base constructor "C(uint)"
            QObject* caller = LObjects::Q[id - 1];
            const QMetaObject* mo = caller->metaObject();
            int n = mo->indexOfMethod("C(uint)");
            if(n != -1) {
                void* args[] = { 0, 0 };
                void* pointer = 0;
                args[0] = &pointer; // return value
                uint unique = LObjects::unique();
                args[1] = &unique;
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                if(pointer) {
                    w = (QWidget*)pointer;
                    if(parent) {
                        w->setParent(parent); }
                    w->setProperty("EQL.unique", unique);
                    w->setObjectName(name); }}
            else {
                // fallback
                w = QUiLoader::createWidget(className, parent, name); }}
        return w; }
};

QT_END_NAMESPACE

#endif
