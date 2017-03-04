QT          += sql printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -lecl -leql5
TARGET      = eql5_sql
DESTDIR     = ../
OBJECTS_DIR = ./tmp/sql/
MOC_DIR     = ./tmp/sql/

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
