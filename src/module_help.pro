QT           += help printsupport uitools
TEMPLATE     = lib
CONFIG       += plugin no_keywords release
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_help
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/help/
MOC_DIR      = ./tmp/help/

target.path  = /usr/lib
INSTALLS     = target

win32 {
    include(windows.pri)
}

HEADERS += gen/help/_ini.h \
           gen/help/_ini2.h \
           gen/help/_q_classes.h \
           gen/help/_n_classes.h \
           gen/help/_q_methods.h \
           gen/help/_n_methods.h

SOURCES += gen/help/_ini.cpp
