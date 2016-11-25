HOWTO
=====


Prepare:

  - in "make.lisp", add all of your lisp files to *lisp-files* (see "lisp/")

  - adapt main.cpp (translations, initial Lisp form to evaluate, package name).


Build:
  
  remove "tmp/" (if present)

  eql5 make
  qmake
  make      (MSVC: nmake)


Now you should find a "my_app" executable.
