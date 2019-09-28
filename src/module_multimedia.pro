QT           += multimedia multimediawidgets printsupport uitools
TEMPLATE     = lib
CONFIG       += no_keywords release
CONFIG       += plugin
#CONFIG       += static
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_multimedia
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/multimedia/
MOC_DIR      = ./tmp/multimedia/

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

HEADERS += gen/multimedia/_ini.h \
           gen/multimedia/_ini2.h \
           gen/multimedia/_q_classes.h \
           gen/multimedia/_n_classes.h \
           gen/multimedia/_q_methods.h \
           gen/multimedia/_n_methods.h

SOURCES += gen/multimedia/_ini.cpp
