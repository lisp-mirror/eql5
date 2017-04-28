Wrapper functions
=================

If you want to use wrapper functions for all Qt functions, see:

  "src/lisp/all-wrappers.lisp"

Examples:

  (|show| widget)

  (|toString| (|currentTime.QTime|)) ; static function


Notes
=====

If you want to add the wrappers permanently, build EQL as usual, then run

  eql5 make-wrappers.lisp

Re-link EQL doing something like:

  touch tmp/eql.o*   (or delete "tmp/eql.o*")
  qmake eql_lib.pro
  make
  sudo make install  (Unix only)

(The resulting shared library will be considerably bigger than before).

---

The convenience macro X:DO-WITH has been adapted to work with the wrappers:

  (x:do-with item
    (|setTextAlignment| 0 |Qt.AlignRight|)
    (|setText| 0 "123"))

---

Normally not needed, but if you want to generate the wrappers for your
Qt version (much different from Qt 5.5) do:

  cd src/lisp
  eql5 define-all-wrappers.lisp

---

See also note in Sokoban example (no more casts needed).

