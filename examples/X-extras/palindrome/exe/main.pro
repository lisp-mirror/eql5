QT          += widgets
TEMPLATE    = app
CONFIG      += no_keywords release
INCLUDEPATH += /usr/local/include
LIBS        += -lecl -L. -lstatic -L/usr/local/lib -leql5
TARGET      = palindrome
DESTDIR     = ./
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

win32 {
    include(../../../../src/windows.pri)
}

HEADERS += main.h

SOURCES += main.cpp
