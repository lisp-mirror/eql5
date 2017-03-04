TEMPLATE     = lib
CONFIG      += dll no_keywords release
INCLUDEPATH += ../src
LIBS        += -L.. -leql5
TARGET       = qt_plugin
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    include(../src/windows.pri)
}

HEADERS = qt_plugin.h
SOURCES = qt_plugin.cpp
