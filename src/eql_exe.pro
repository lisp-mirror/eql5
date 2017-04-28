QT             += widgets printsupport uitools
TEMPLATE       = app
CONFIG         += no_keywords release
INCLUDEPATH    += ../src /usr/local/include
LIBS           += -lecl -leql5 -L.. -L/usr/local/lib
TARGET         = eql5
DESTDIR        = ../
OBJECTS_DIR    = ./tmp/
MOC_DIR        = ./tmp/

QMAKE_RPATHDIR = /usr/local/lib
target.path    = /usr/local/bin
INSTALLS       += target

win32 {
    include(windows.pri)
    CONFIG += console
}

SOURCES += main.cpp
