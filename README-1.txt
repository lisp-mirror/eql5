*********************************
* EQL5 is a Qt5 port of EQL/Qt4 *
*********************************

# contact: gmail, polos.ruetz
# mailing list: http://groups.google.com/group/eql-user/topics
#
# MANY THANKS to the users of the eql-user mailing list for their contributions!



TESTED WITH
===========

  Linux:
    ECL 16.1.2
    Qt 5.5

  Windows: (MSVC 2015, free version)
    ECL git 2016-11 / 64 bit (see flag in Makefile)
    Qt 5.7 / 64 bit

  (currently not tested on OSX)



REQUIREMENTS
============

  * ECL threads + unicode
  * Qt >= 5.5
  * /should/ run cross-platform

  QtWebKit note:
    If you want QtWebKit included in the official downloads from qt.io archives,
    you need to choose Qt 5.5, and not later versions!
    QtWebKit will continue to work with versions > 5.5, but it has to be compiled
    manually (which is not fun).
    Since QtWebKit has a better, more native integration with Qt than QtWebEngine,
    there is currently no plan to switch to QtWebEngine in EQL5 (we would very much
    miss QWebElement).



PREPARE
=======

You can have both old EQL and EQL5 installed in parallel (exe and lib names differ).

If you have both Qt4 and Qt5 installed, you can use the following environment variable
to switch between the both (Unix):

    export QT_SELECT=5



BUILD
=====

(N.B. for rebuilding, please see README-REBUILD.txt)

  [Windows]
    You first need to adapt the file src/windows.pri (include & library paths).
    
  [MSVC]
    substitute make with nmake

  [OSX]
    To force creation of a Makefile (instead of an Xcode project), use this flag:
        qmake -spec macx-g++

1) In src/ run:

    ecl -shell make-eql-lib.lisp

2) Do:

    qmake eql_lib.pro
    make

    qmake eql_exe.pro
    make

   This will build both the EQL executable and shared library.

3) cd ..

  [Linux]
    You need to create links to EQL, something like (note the "5"):
        cd /usr/lib
        sudo ln -s ~/eql5/libeql5.so.1 libeql5.so.1
        cd /usr/bin
        sudo ln -s ~/eql5/eql5 eql5

  [OSX]
    You need to create links to EQL, something like (note the "5"):
        cd /usr/lib
        sudo ln -s ~/eql5/libeql5.1.dylib libeql5.1.dylib
        cd /usr/bin
        sudo ln -s ~/eql5/eql5.app/Contents/MacOS/eql5 eql5
        
  [Windows]
    Add your EQL directory to the Path environment variable, see:
    <Control Panel:System:Advanced:Environment Variables>



RUN
===

PLEASE NOTE:
You will often need to "reset" (command) your console/shell after EQL finished
working, especially during development time or other exits than "(eql:qquit)".


You can run a simple interactive REPL UI doing:
    eql5 -qgui

To run a Lisp file without top-level, do:
    eql5 examples/2-clock

(If you don't see the application window, it might be in the background.
Use your taskbar to show it.)

If you start the EQL executable without arguments, it will start the usual ECL top-level
(without processing Qt events).

To _not_ load ~/.eclrc on startup, do:
    eql5 -norc

To quit the tool, do:
    (eql:qquit) or
    (eql:qq)

In order to run (sort of) a top-level processing Qt events, do (requires ECL threads):
    eql5 -qtpl

    Note: If you want to use "ecl-readline" together with "-qtpl", just compile
          "eql5/src/lisp/ecl-readline.lisp" (which depends on the "readline" C library).
          It will then be loaded automatically on startup.



QT MODULES (help, network, sql, svg, webkit)
==========

To build an EQL module (corresponding to a Qt module), do the following in src/:

    qmake module_<name>.pro (e.g. qmake module_network.pro)
    make

  [Linux,OSX]
    You need to create links to the modules, see EQL library above.

In Lisp, use the function QREQUIRE to load a module:
    (qrequire :network)



TIPS
====

You might want to put this in your ~/.eclrc file:

    #+eql
    (setf eql:*qtpl*            t  ; same as -qtpl
          eql:*break-on-errors* t)

It is HIGHLY RECOMMENDED to integrate the wrapper functions, see README-3-OPTIONAL.
This will bring you very convenient symbol tab-completion of all Qt functions in
Emacs/Slime.



NOTES
=====

For additional information see doc/index.html.



LICENSE
=======

MIT

for MAKE-QIMAGE (contributed by Mark Cox), please see LICENSE-MAKE-QIMAGE.txt

