QT           += webkit webkitwidgets printsupport uitools
TEMPLATE     = lib
CONFIG       += no_keywords release
CONFIG       += plugin
#CONFIG       += static
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_webkit
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/webkit/
MOC_DIR      = ./tmp/webkit/
macx:QT      += network

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

HEADERS += gen/webkit/_ini.h \
           gen/webkit/_ini2.h \
           gen/webkit/_q_classes.h \
           gen/webkit/_n_classes.h \
           gen/webkit/_q_methods.h \
           gen/webkit/_n_methods.h

SOURCES += gen/webkit/_ini.cpp
