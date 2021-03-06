#ifndef MODULE_HELP_INI_H
#define MODULE_HELP_INI_H

#include "../../ecl_fun.h"
#include "../../module_interface.h"

#ifdef Q_CC_MSVC
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

typedef QList<int> NumList;

extern "C" LIB_EXPORT void* help_ini();

class ModuleHelp : public ModuleInterface {
public:
    ModuleHelp();

    void ini2();
    const QMetaObject* staticMetaObject(int);
    void deleteNObject(int, void*, int);
    NumList* overrideIds(const QByteArray&);
    void* toMetaArg(int, cl_object, bool*);
    cl_object to_lisp_arg(int, void*, bool*);
};

QT_END_NAMESPACE

#endif
