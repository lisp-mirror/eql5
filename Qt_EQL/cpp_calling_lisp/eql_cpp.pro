QT          += widgets
TEMPLATE    = lib
CONFIG      += plugin release
LIBS        += -L../.. -leql5
DESTDIR     = ../
TARGET      = eql_fun_cpp
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

win32 {
    include(../../src/windows.pri)
}

HEADERS += lib.h
SOURCES += lib.cpp
