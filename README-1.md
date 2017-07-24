
*EQL5 is a (extended) Qt5 port of EQL/Qt4*

---

[wiki](https://gitlab.com/eql/EQL5/wikis/home)  
[mailing list](https://groups.google.com/group/eql-user/topics)  
contact: gmail, polos.ruetz

**Many thanks** to the users of the eql-user mailing list and to private mail
contacts for your contributions and testing!



Build (for the impatient)
-------------------------

In `src/` do:

```
  $ ecl -shell make
  $ qmake eql5.pro    # comment out all modules you don't need
  $ make
  $ sudo make install # Unix only
```

Now you should be able to run `eql5`.

If there are problems, or you want more info, see detailed instructions below.

N.B. If the above runs, please don't forget to integrate the
**wrapper functions**, see `README-3-OPTIONAL`, needed for serious development.



Tested with:
------------

*Linux* (development platform), with both gcc and clang:

* ECL 16.1.2
* Qt 5.5.1 (with module 'webkit')
* Qt 5.8   (with module 'webengine')

*Windows/32*:

* MSVC 2010, MinGW 4.9
* ECL git 2017-02 / 32 bit
* Qt 5.5.1 / 32 bit (precompiled from qt.io archives; contains WebKit)

*Windows/64*:

* MSVC 2015
* ECL git 2016-11 / 64 bit (see flag in Makefile)
* Qt 5.7 / 64 bit (precompiled from qt.io archives; WebKit is not included)

*macOS*:

* not tested personally, but has been reported to work (with clang)

--

MinGW note: in order to build successfully, I needed to:

* change a typedef in `ecl.h` (after building ECL); see compile error;
* comment out all offending lines of module :quick; see SGTexture related
  linker errors; the source files are in `eql5/src/gen/quick/`;



Requirements
------------

* ECL (both threads & unicode enabled, as by default)
* Qt >= 5.5

QtWebKit note:

If you want QtWebKit included in the official downloads from qt.io archives,
you need to choose Qt 5.5, and not later versions!  
QtWebKit will continue to work with versions > 5.5, but it has to be
compiled manually (which is not fun).  
QtWebKit has a better, more native integration with Qt than QtWebEngine, see
for example QWebElement, which doesn't exist in QtWebEngine.



Prepare
-------

Install the ECL sources, and build it from the sources (ECL needs to be built
with the same compiler you'll use to compile EQL5).

Just use the standard configuration of ECL (both threads & unicode enabled).

Download Qt5 from here (pay attention to choose the version compiled with the
same compiler you'll use to compile EQL5):

[https://download.qt.io/archive/qt/](https://download.qt.io/archive/qt/)

Qt4/Qt5 note:

You can have both old EQL (Qt4) and EQL5 (Qt5) installed in parallel (exe and
lib names differ).

If you have both Qt4 and Qt5 installed, you can use the following environment
variable to switch between the both on Unix (which requires the different Qt
`bin/` directories to be in `PATH`):

```
  $ export QT_SELECT=5
```

Please note that you need to build EQL5 in a path where you will keep it (you
can't move around the whole file tree later, since the build path needs to be
hard-coded in the executable).



Build
-----

(N.B. for rebuilding, please see `README-2-REBUILD`)

*Windows*

You first need to adapt the file `src/windows.pri` (include & library paths).

You also should add your eql5 directory (for eventual C++ modules), e.g:

```
  INCLUDEPATH += ... c:/eql5/src
  LIBS        += ... -Lc:/eql5
```

Since EQL requires the C compiler anyway (not the bytecode compiler), you
should put this line in your `~/.eclrc`:

```
  (require :cmp)
```

*MSVC*

Substitute `make` with `nmake`.

*MinGW*

If `make` is stuck in an infinite loop of creating the `Makefile`, just
remove the line `include(windows.pri)` from your `*.pro` file, setting
eventually needed paths in your `~/.profile` instead.

### 1) Build Lisp lib

```
  $ cd src
  $ ecl -shell make.lisp
```

### 2) Build C++ lib, exe, modules

Edit `eql5.pro` and comment out all modules you don't need.  
Then run:

```
  $ qmake eql5.pro
  $ make
  $ sudo make install # Unix only
```

This will build the shared library, the executable and the modules.

If you ran `make install`, you'll find the installed files here:

```
  /usr/local/bin/
  /usr/local/lib/
  /usr/local/include/eql5/
```

### 3) Environment

*Linux*

N.B. skip this if you did `sudo make install`  
You need to create links to EQL5, something like:

```
  $ cd /usr/lib
  $ sudo ln -s ~/eql5/libeql5.so.1 libeql5.so.1
  $ cd /usr/bin
  $ sudo ln -s ~/eql5/eql5 eql5
```

*macOS*

N.B. skip this if you did `sudo make install`  
You need to create links to EQL5, something like:

```
  $ cd /usr/local/lib
  $ sudo ln -s ~/eql5/libeql5.1.dylib libeql5.1.dylib
  $ cd /usr/local/bin
  $ sudo ln -s ~/eql5/eql5.app/Contents/MacOS/eql5 eql5
```

*Windows*

Add your EQL5 directory to the `Path` environment variable, see:  
&lt;Control Panel:System:Advanced:Environment Variables&gt;



Run
---

You can run a simple interactive REPL UI doing:

```
  $ eql5 -qgui
```

To run a Lisp file without top-level, do:

```
  $ eql5 examples/2-clock
```

(If you don't see the application window, it might be in the background.
Use your taskbar to show it.)

If you start the EQL5 executable without arguments, it will start the usual ECL
top-level (without processing Qt events).

To *not* load `~/.eclrc` on startup, do:

```
  $ eql5 -norc
```

To quit the tool, do:

```
  (eql:qquit) ; or
  (eql:qq)
```

In order to run (sort of) a top-level processing Qt events, do:

```
  $ eql5 -qtpl
```

Note:

If you want to use `ecl-readline` together with `-qtpl`, just compile
`lib/ecl-readline.lisp` (which depends on the **readline** C library).  
It will then be loaded automatically on startup:

```
  $ cd ~/eql5/lib
  $ ecl -compile ecl-readline.lisp
```

N.B: Using readline, you will often need to `reset` (command) your
console/shell after EQL5 finished working, especially during development
time or other exits than `(eql:qquit)`.  
An alias in `~/.bashrc` can help to make this less annoying, since you might
not see the command while typing:

```
  $ alias r=reset
```



Qt modules
----------

(`help`, `multimedia`, `network`, `quick`, `sql`, `svg`, `webengine`, `webkit`)

N.B. skip this if you already built from `eql5.pro` (see above)  
To build an EQL5 module (corresponding to a Qt module), do the following in
`src/`:

```
  $ qmake module_<name>.pro # e.g. qmake module_network.pro
  $ make
  $ sudo make install       # Unix only
```

*Linux, macOS*

(N.B. skip this if you did `sudo make install`)  
You need to create links to the modules, see EQL5 shared library above.

In Lisp, use function `qrequire` to load a module:

```
  (qrequire :network)
```



Tips
----

You might want to put this in your `~/.eclrc` file:

```
  #+eql
  (setf eql:*qtpl*            t  ; same as -qtpl
        eql:*break-on-errors* t)
```

It is **highly recommended** to integrate the wrapper functions, see
`README-3-OPTIONAL`.  
This will make all Qt functions real Lisp functions, which also means symbol
tab-completion, both in Emacs/Slime and with `ecl-readline`.

Please see also example `examples/X-extras/CLOS-encapsulation.lisp` for
encapsulation of Qt classes in Lisp classes or structs (that is, Lisp classes
that behave like a Qt class if passed to Qt functions).



Notes
-----

For additional information see `doc/index.html`.



License
-------

MIT

For `make-qimage` (contributed by Mark Cox), please see
`LICENSE-MAKE-QIMAGE.txt`.

