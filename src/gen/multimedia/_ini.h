#ifndef MODULE_MULTIMEDIA_INI_H
#define MODULE_MULTIMEDIA_INI_H

#include "../../ecl_fun.h"
#include "../../module_interface.h"

#ifdef Q_CC_MSVC
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

QT_BEGIN_NAMESPACE

typedef QList<int> NumList;

extern "C" LIB_EXPORT void* multimedia_ini();

class ModuleMultimedia : public ModuleInterface {
public:
    ModuleMultimedia();

    void ini2();
    const QMetaObject* staticMetaObject(int);
    void deleteNObject(int, void*, int);
    NumList* overrideIds(const QByteArray&);
    void* toMetaArg(int, cl_object, bool*);
    cl_object to_lisp_arg(int, void*, bool*);
};

QT_END_NAMESPACE

#endif
