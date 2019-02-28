TEMPLATE     = lib
CONFIG      += plugin no_keywords release
INCLUDEPATH += /usr/local/include
LIBS        += -L/usr/local/lib -leql5
TARGET       = qt_plugin
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    include(../src/windows.pri)
}

HEADERS = qt_plugin.h
SOURCES = qt_plugin.cpp
