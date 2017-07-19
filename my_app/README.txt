HOWTO
=====


Prepare:
--------

  - in "make.lisp", add all of your lisp files to *lisp-files* (see "lisp/")

  - adapt main.cpp (translations, initial Lisp form to evaluate, package name).


Build (simple, no ASDF):
------------------------

  remove "tmp/" (if present)

  $ eql5 make
  $ qmake
  $ make      (MSVC: nmake)


  Now you should find a "my_app" executable.


Build (using ASDF with dependencies):
-------------------------------------

  remove "tmp/" (if present)

  $ eql5 make-ASDF
  $ qmake
  $ make           (MSVC: nmake)

  Please note files:

    my-app.asd        ; define system
    package.lisp      ; example package
    dependencies.lisp ; for Quicklisp (used in "run" and "make-ASDF")
    run.lisp          ; load system


Notes:
------

  [Windows]

    Please note function

      eql.ignoreIOStreams();

    in main.cpp, as printing to *standard-output* would crash your GUI
    application.


Deploy:
-------

  You may want to strip your exe before deploying:

    $ strip my_app

