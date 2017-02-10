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

You need to tell QML-SET to call |update| after any change to data which
QML:PAINT depends on.
Only in this exceptional case there is no way to do it implicitly using QML.

Example:

    (qml-set (first (children (root-item)))
             "fillColor" "yellow" t)        ; pass T for repainting
