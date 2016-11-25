NOTES
=====

This is only an experimental, simple, "scratch buffer" like toy editor.

Run it:
  
  0) You'll need the :network module (see QREQUIRE).

  1) Run the independent local Lisp server:
      eql -norc local-server

  2) Run the editor:
      eql editor <file>.lisp (defaults to "my.lisp")

The main motivation behind this editor is the need for a popup completer
for the (huge) Qt library.

The completer works for:

  qnew
  qlet
  qset
  qget
  qfun
  qconnect
  qoverride
  qfind-child

It tries to be intelligent, for example:

  - it looks for the type (Qt class) for both global and local variables
  - it automatically cuts optional type lists in Qt function calls (qfun)



USAGE NOTES
===========

There's no "New" button; instead, "new.lisp" can be used as simple template.

Please see the context menu of the editor window for generic editor commands
(offered by Qt, which include some other commands too, like Ctrl+<arrow key>).

"Eval Region" note: (see initial status-bar message)
Remember to change to the desired package prior to eval anything.

Tab completion note: hitting Tab will pop up a window with symbol completions.
This works in both the editor and command line widget, at any cursor position.
Currently, tab completion works for all CL and EQL symbols (including Qt
enums).
If the inserted symbol is a function, its argument list (if available) will be
shown in the status bar.
Hitting Tab after a " character will show the pathname completer instead (works
for absolute path names only).

Auto indent note: hitting the Ctrl+Tab keys will auto indent the paragraph
starting from the current line until the next empty line found.

On errors, the local Lisp server will pop up a debug dialog, asking for an
ECL debug command (even for internal errors of "local-server.lisp").

If you want to pause/continue the local-server process, use the usual Ctrl+C
(terminal command) and :c (ECL command).
(N.B. might not work on Windows).

The "Save and Run" action (Ctrl+R) will load the current code in the local
Lisp server process (if you don't see the application window, it might be
in the background. Use your taskbar to show it).

When using "Save and Run", on errors, after the local-server entered the
debugger, you can enter the ECL debugger command :f, which will send the
position of the offending region to the editor, and it will be marked red.

Closing & re-opening the editor does not affect the local-server process.
You may even open multiple editor instances, which will all connect to the
same local-server.

You can put an ini file ".ini-eql-editor.lisp" in your working directory,
which will be loaded on startup, having full access to all editor variables
and functions.
Example: (! "showMaximized" editor::*main*)

