QT          += widgets printsupport uitools
TEMPLATE     = app
CONFIG      += no_keywords release
INCLUDEPATH += ../src
LIBS        += -lecl -L. -lmy_lib -L.. -leql5
TARGET       = my_app
DESTDIR      = ./
OBJECTS_DIR  = ./tmp/
MOC_DIR      = ./tmp/

include(../src/windows.pri)

SOURCES += main.cpp
