QT          += webkitwidgets
TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += /usr/local/include
LIBS        += -L/usr/local/lib -leql5
DESTDIR     = ./
TARGET      = webkit_bridge
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

macx:QT     += network

win32 {
    include(../../../../../src/windows.pri)
}

HEADERS += _invokables.h \
           webkit_bridge.h

SOURCES += webkit_bridge.cpp

