QT          += widgets printsupport uitools
TEMPLATE    = lib
CONFIG      += dll no_keywords release
DEFINES     += EQL_LIBRARY
LIBS        += -lecl -L. -lini
TARGET      = eql5
DESTDIR     = ../
OBJECTS_DIR = ./tmp/
MOC_DIR     = ./tmp/

include(windows.pri)

HEADERS += gen/_lobjects.h \
           gen/_main_q_classes.h \
           gen/_main_n_classes.h \
           gen/_main_q_methods.h \
           gen/_main_n_methods.h \
           eql_fun.h \
           qt_eql.h \
           dyn_object.h \
           ui_loader.h \
           single_shot.h \
           eql_global.h \
           ecl_fun.h \
           extras.h \
           eql.h

SOURCES += gen/_lobjects.cpp \
           qt_eql.cpp \
           dyn_object.cpp \
           ecl_fun.cpp \
           extras.cpp \
           eql.cpp

RESOURCES = eql5.qrc

gcc {
    QMAKE_CXXFLAGS_WARN_ON += -Wno-clobbered
}
