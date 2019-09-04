QT           += webenginewidgets printsupport uitools
TEMPLATE     = lib
CONFIG       += plugin no_keywords release
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_webengine
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/webengine/
MOC_DIR      = ./tmp/webengine/

linux {
    target.path = /usr/lib
}

osx {
    target.path = /usr/local/lib
}

INSTALLS = target

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
