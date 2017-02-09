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
