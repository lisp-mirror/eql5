QT          += quick quickwidgets qml printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -lecl -leql5
TARGET      = eql5_quick
DESTDIR     = ../
OBJECTS_DIR = ./tmp/quick/
MOC_DIR     = ./tmp/quick/

include(windows.pri)

HEADERS += gen/quick/_ini.h \
           gen/quick/_ini2.h \
           gen/quick/_q_classes.h \
           gen/quick/_n_classes.h \
           gen/quick/_q_methods.h \
           gen/quick/_n_methods.h

SOURCES += gen/quick/_ini.cpp
