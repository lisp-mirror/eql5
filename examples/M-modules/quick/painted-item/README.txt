INFO
====

This is an alternative to 'Canvas' in QML, using a QQuickPaintedItem,
which means using QPainter from Lisp (instead of JS in QML).


RUN
===

Run "painted-item.lisp" from this directory.


NOTE
====

Use QQuickWidget here, because QQuickView would crash (e.g. on Windows).

You need to explicitly call 'update' after any change to paint dependent data.
In this case, that is, doing the painting directly, there is no way to detect
it automatically.

Example:

  (defparameter *item* (first (children (root-item))))
  (qml-set *item* "fillColor" "yellow")
  (|update| *item*)

