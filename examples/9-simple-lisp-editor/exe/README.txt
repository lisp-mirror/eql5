BUILD
=====

  eql5 make
  qmake
  make


QUIT
====

See menu of "Q" system tray icon.


NOTES
=====

If you don't want console output, pass command line option "-silent"
(or set "local-server::*silent*" to T).

Additionally, comment this line in "local_server.pro" (Windows):
# CONFIG += console

