QT           += quick quickwidgets qml printsupport uitools
TEMPLATE     = lib
CONFIG       += no_keywords release
CONFIG       += plugin
#CONFIG       += static
INCLUDEPATH  += ../src /usr/local/include
LIBS         += -lecl -leql5 -L.. -L/usr/local/lib
TARGET       = eql5_quick
DESTDIR      = ../
OBJECTS_DIR  = ./tmp/quick/
MOC_DIR      = ./tmp/quick/

linux {
    target.path = /usr/lib
}

osx {
    target.path = /usr/local/lib
}

INSTALLS = target

win32 {
    include(windows.pri)
}

HEADERS += gen/quick/_ini.h \
           gen/quick/_ini2.h \
           gen/quick/_q_classes.h \
           gen/quick/_n_classes.h \
           gen/quick/_q_methods.h \
           gen/quick/_n_methods.h \
           gen/quick/qml_lisp.h

SOURCES += gen/quick/_ini.cpp \
           gen/quick/qml_lisp.cpp
