QT          += svg printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -leql5
TARGET      = eql5_svg
DESTDIR     = ../
OBJECTS_DIR = ./tmp/svg/
MOC_DIR     = ./tmp/svg/

include(windows.pri)

HEADERS += gen/svg/_ini.h \
           gen/svg/_ini2.h \
           gen/svg/_q_classes.h \
           gen/svg/_n_classes.h \
           gen/svg/_q_methods.h \
           gen/svg/_n_methods.h

SOURCES += gen/svg/_ini.cpp
