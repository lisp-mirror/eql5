
### Wrapper functions

(for manual loading, see `src/lisp/all-wrappers.lisp`)

Examples:

```
  (|show| widget)

  (|toString| (|currentTime.QTime|)) ; static function
```


### Integrate them permanently

Build EQL5 as usual, then run

```
  $ eql5 make-wrappers.lisp
```

```
  $ touch tmp/eql.o    # Windows: del tmp/eql.obj
```

```
  $ qmake eql_lib.pro
  $ make               # MSVC: nmake
  $ sudo make install  # Unix only
```

Note: The resulting shared library should be stripped (automatically done by
`make install`); this will reduce its size considerably.

--

The convenience macro `x:do-with` has been adapted to work with the wrappers:

```
  (x:do-with item
    (|setTextAlignment| 0 |Qt.AlignRight|)
    (|setText| 0 "123"))
```

--

Normally not needed, but if you want to generate the wrappers for your
Qt version (much different from Qt 5.5) do:

```
  $ cd src/lisp
  $ eql5 define-all-wrappers.lisp
```

