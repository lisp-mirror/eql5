QT          += widgets printsupport uitools
TEMPLATE    = app
CONFIG      += no_keywords release
INCLUDEPATH += /usr/local/include
LIBS        += -lecl -L. -lmy_lib -L/usr/local/include -leql5
TARGET      = my_app
DESTDIR     = ./
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

win32 {
    include(../src/windows.pri)
}

SOURCES += main.cpp
