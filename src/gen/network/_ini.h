#ifndef MODULE_NETWORK_INI_H
#define MODULE_NETWORK_INI_H

#include "../../ecl_fun.h"
#include "../../module_interface.h"

#ifdef Q_CC_MSVC
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

typedef QList<int> NumList;

extern "C" LIB_EXPORT void* network_ini();

class ModuleNetwork : public ModuleInterface {
public:
    ModuleNetwork();

    void ini2();
    const QMetaObject* staticMetaObject(int);
    void deleteNObject(int, void*, int);
    NumList* overrideIds(const QByteArray&);
    void* toMetaArg(int, cl_object, bool*);
    cl_object to_lisp_arg(int, void*, bool*);
};

QT_END_NAMESPACE

#endif
