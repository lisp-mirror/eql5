QT           += network printsupport uitools
TEMPLATE     = lib
CONFIG       += plugin no_keywords release
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_network
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/network/
MOC_DIR      = ./tmp/network/

linux {
    target.path = /usr/lib
}

osx {
    target.path = /usr/local/lib
}

INSTALLS = target

win32 {
    include(windows.pri)
}

HEADERS += gen/network/_ini.h \
           gen/network/_ini2.h \
           gen/network/_q_classes.h \
           gen/network/_n_classes.h \
           gen/network/_q_methods.h \
           gen/network/_n_methods.h

SOURCES += gen/network/_ini.cpp
