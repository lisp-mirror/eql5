QT           += sql printsupport uitools
TEMPLATE     = lib
CONFIG       += no_keywords release
CONFIG       += plugin
#CONFIG       += static
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_sql
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/sql/
MOC_DIR      = ./tmp/sql/

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

HEADERS += gen/sql/_ini.h \
           gen/sql/_ini2.h \
           gen/sql/_q_classes.h \
           gen/sql/_n_classes.h \
           gen/sql/_q_methods.h \
           gen/sql/_n_methods.h

SOURCES += gen/sql/_ini.cpp
