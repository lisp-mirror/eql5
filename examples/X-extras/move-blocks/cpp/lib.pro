TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += /usr/local/include
LIBS        += -L/usr/local/lib -leql5
DESTDIR     = ./
TARGET      = easing_curve
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

win32 {
    include(../../../../src/windows.pri)
}

HEADERS += lib.h

SOURCES += lib.cpp
