QT          += webenginewidgets printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -lecl -leql5
TARGET      = eql5_webengine
DESTDIR     = ../
OBJECTS_DIR = ./tmp/webengine/
MOC_DIR     = ./tmp/webengine/

macx:QT     += network

win32 {
    include(windows.pri)
}

HEADERS += gen/webengine/_ini.h \
           gen/webengine/_ini2.h \
           gen/webengine/_q_classes.h \
           gen/webengine/_n_classes.h \
           gen/webengine/_q_methods.h \
           gen/webengine/_n_methods.h

SOURCES += gen/webengine/_ini.cpp
