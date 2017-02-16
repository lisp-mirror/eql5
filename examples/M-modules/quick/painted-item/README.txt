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

Examples:

    ;; pass T as last argument for repainting

    (qml-set "left" "color" "transparent" t)
    
    (qml-set "right" "ellipse" '(40 40 20 20) t)


HELP
====

Use function QPROPERTIES* to list all QML properties of an item instance,
including user defined ones.

Examples:

    (qproperties* (qml:find-quick-item "left"))

    (show-properties-dialog "left") ; see "properties.lisp"
