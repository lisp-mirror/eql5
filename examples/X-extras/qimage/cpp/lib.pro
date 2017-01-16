TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += ../../../../src
LIBS        += -L../../../.. -leql5
DESTDIR     = ./
TARGET      = qimage
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../../../src/windows.pri)

HEADERS += lib.h
SOURCES += lib.cpp
