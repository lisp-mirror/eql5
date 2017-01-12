QT          += quickwidgets
TEMPLATE    = lib
CONFIG      += plugin release
DESTDIR     = ../
TARGET      = quick_widget_cpp
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../../src/windows.pri)

HEADERS += lib.h
SOURCES += lib.cpp
