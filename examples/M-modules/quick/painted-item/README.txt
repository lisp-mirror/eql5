INFO
====

This is an alternative to 'Canvas' in QML, using a QQuickPaintedItem,
which means using QPainter from Lisp (instead of JS in QML).


RUN
===

Run "painted-item.lisp" from this directory.


NOTES
=====

Use QQuickWidget here, because QQuickView would crash (e.g. on Windows).

You need to tell QML-SET to call |update| after any change to data which
QML:PAINT depends on.
Only in this exceptional case there is no way to do it implicitly using QML.

Examples:

    ;; pass T as last argument for repainting

    (qml-set "left" "color" "transparent" t)
    
    (qml-set "right" "ellipse" '(40 40 20 20) t)


HELP
====

To display the output of QPROPERTIES*, run

    (show-properties-dialog) ; see "properties.lisp"

and use [Select] to explore the single QML items.
