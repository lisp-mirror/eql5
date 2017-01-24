QT          += webkitwidgets printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -lecl -leql5
TARGET      = eql5_webkit
DESTDIR     = ../
OBJECTS_DIR = ./tmp/webkit/
MOC_DIR     = ./tmp/webkit/

macx:QT     += network

include(windows.pri)

HEADERS += gen/webkit/_ini.h \
           gen/webkit/_ini2.h \
           gen/webkit/_q_classes.h \
           gen/webkit/_n_classes.h \
           gen/webkit/_q_methods.h \
           gen/webkit/_n_methods.h

SOURCES += gen/webkit/_ini.cpp
