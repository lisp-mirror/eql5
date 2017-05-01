QT          += widgets
TEMPLATE     = app
CONFIG      += no_keywords release
CONFIG      += console
INCLUDEPATH += /usr/local/include
LIBS        += -lecl -L. -leql-local-server -L/usr/local/lib -leql5
TARGET       = eql_local_server
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    include(../../../src/windows.pri)
}

SOURCES += main.cpp
