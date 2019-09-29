QT           += svg printsupport uitools
TEMPLATE     = lib
CONFIG       += no_keywords release
CONFIG       += plugin
#CONFIG       += static
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_svg
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/svg/
MOC_DIR      = ./tmp/svg/

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

HEADERS += gen/svg/_ini.h \
           gen/svg/_ini2.h \
           gen/svg/_q_classes.h \
           gen/svg/_n_classes.h \
           gen/svg/_q_methods.h \
           gen/svg/_n_methods.h

SOURCES += gen/svg/_ini.cpp
