QT          += help printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -lecl -leql5
TARGET      = eql5_help
DESTDIR     = ../
OBJECTS_DIR = ./tmp/help/
MOC_DIR     = ./tmp/help/

include(windows.pri)

HEADERS += gen/help/_ini.h \
           gen/help/_ini2.h \
           gen/help/_q_classes.h \
           gen/help/_n_classes.h \
           gen/help/_q_methods.h \
           gen/help/_n_methods.h

SOURCES += gen/help/_ini.cpp
