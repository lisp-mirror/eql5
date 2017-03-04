QT          += widgets printsupport uitools
TEMPLATE     = app
CONFIG       += no_keywords release
INCLUDEPATH  += ../src
LIBS         = -lecl -L.. -leql5
TARGET       = eql5
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

win32 {
    include(windows.pri)
}

win32 {
    CONFIG += console
}

SOURCES += main.cpp

