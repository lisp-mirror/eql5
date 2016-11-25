QT          += widgets
TEMPLATE    = lib
CONFIG      += plugin release
DESTDIR     = ./
TARGET      = trafficlight
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../src/windows.pri)

HEADERS += lib.h \
           trafficlight.h

SOURCES += lib.cpp \
           trafficlight.cpp
