TEMPLATE     = app
CONFIG      += no_keywords release
CONFIG      += console
INCLUDEPATH += ../../../src
LIBS        += -lecl -L. -leql-local-server -L../../.. -leql5
TARGET       = eql_local_server
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../../../src/windows.pri)

SOURCES += main.cpp
