QT          += multimedia multimediawidgets printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
LIBS        += -L.. -leql5
TARGET      = eql5_multimedia
DESTDIR     = ../
OBJECTS_DIR = ./tmp/multimedia/
MOC_DIR     = ./tmp/multimedia/

include(windows.pri)

HEADERS += gen/multimedia/_ini.h \
           gen/multimedia/_ini2.h \
           gen/multimedia/_q_classes.h \
           gen/multimedia/_n_classes.h \
           gen/multimedia/_q_methods.h \
           gen/multimedia/_n_methods.h

SOURCES += gen/multimedia/_ini.cpp
