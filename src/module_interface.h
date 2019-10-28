#ifndef MODULE_INTERFACE_H
#define MODULE_INTERFACE_H

#include <ecl/ecl.h>
#include <QByteArray>
#include <QList>

QT_BEGIN_NAMESPACE

struct QMetaObject;

class ModuleInterface {
public:
    virtual void ini2()                                = 0;
    virtual const QMetaObject* staticMetaObject(int)   = 0;
    virtual void deleteNObject(int, void*, int)        = 0;
    virtual QList<int>* overrideIds(const QByteArray&) = 0;
    virtual void* toMetaArg(int, cl_object, bool*)     = 0;
    virtual cl_object to_lisp_arg(int, void*, bool*)   = 0;

    static ModuleInterface* help;
    static ModuleInterface* multimedia;
    static ModuleInterface* network;
    static ModuleInterface* quick;
    static ModuleInterface* sql;
    static ModuleInterface* svg;
    static ModuleInterface* webengine;
    static ModuleInterface* webkit;
};

QT_END_NAMESPACE

#endif
