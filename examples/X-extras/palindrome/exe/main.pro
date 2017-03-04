QT          += widgets
TEMPLATE     = app
CONFIG      += no_keywords release
INCLUDEPATH += ../../../../src
LIBS        += -lecl -L. -lstatic -L../../../.. -leql5
TARGET       = palindrome
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    include(../../../../src/windows.pri)
}

HEADERS += main.h
SOURCES += main.cpp
