QT            += widgets printsupport uitools
TEMPLATE      = lib
CONFIG        += dll no_keywords release
DEFINES       += EQL_LIBRARY
INCLUDEPATH   += /usr/local/include
LIBS          += -lecl -L. -lini_eql5 -L/usr/local/lib
TARGET        = eql5
DESTDIR       = ../
OBJECTS_DIR   = ./tmp/
MOC_DIR       = ./tmp/

include.files = eql5/*

linux {
    include.path = /usr/include/eql5
    target.path  = /usr/lib
}

osx {
    include.path = /usr/local/include/eql5
    target.path  = /usr/local/lib
}

INSTALLS = include target

msvc {
    PRE_TARGETDEPS += ini_eql5.lib
}

!msvc {
    PRE_TARGETDEPS += libini_eql5.a
}

win32 {
    include(windows.pri)
}

HEADERS += gen/_lobjects.h \
           gen/_main_q_classes.h \
           gen/_main_n_classes.h \
           gen/_main_q_methods.h \
           gen/_main_n_methods.h \
           eql5/eql.h \
           eql5/eql_fun.h \
           eql5/eql_global.h \
           eql5/dyn_object.h \
           qt_eql.h \
           ui_loader.h \
           single_shot.h \
           ecl_fun.h \
           extras.h

SOURCES += gen/_lobjects.cpp \
           qt_eql.cpp \
           dyn_object.cpp \
           ecl_fun.cpp \
           extras.cpp \
           eql.cpp

gcc {
    QMAKE_CXXFLAGS_WARN_ON += -Wno-clobbered -Wno-unknown-warning-option
}

clang {
    QMAKE_CXXFLAGS += -std=c++11
}
