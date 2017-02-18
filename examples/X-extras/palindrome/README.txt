INFO
====

One of the most fascinating palindromes, see:

http://en.wikipedia.org/wiki/Sator_Square


RUN
===

  eql5 palindrome 400 8/10 # optionally pass width / opacity

N.B: If you load this file in Slime, you need to use QLOAD instead of LOAD!


HTML VERSION
============

Since this is a relatively complex application, it would be
convenient to generate a 'lazy' (pre-calculated) Html5 version,
using the <canvas> element and JS.

Use command line option :html to have it generated:

  eql5 palindrome.lisp :html

(optionally pass the width, which defaults to 450)


QML VERSION
===========

Using QML + Lisp means reducing the complexity to a minimum!

Please see "examples/M-modules/quick/palindrome/".
