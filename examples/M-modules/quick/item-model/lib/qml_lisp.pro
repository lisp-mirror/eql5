QT          += qml
TEMPLATE    = lib
CONFIG      += plugin release
INCLUDEPATH += ../../../../../src
LIBS        += -L../../../../.. -leql5
DESTDIR     = ./
TARGET      = qml_lisp
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(../../../../../src/windows.pri)

HEADERS += qml_lisp.h
SOURCES += qml_lisp.cpp

