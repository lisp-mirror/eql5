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

Always set an "on<Property>Changed: update()" handler in QML for properties
which QML:PAINT depends on:

in QML:

    property string color: "coral"; onColorChanged: update()

Now changing the QML properties from Lisp will repaint the item:

Examples:

    (qml-set "left" "color" "transparent")
    
    (qml-set "right" "ellipse" '(40 40 20 20))


HELP
====

To display the output of QPROPERTIES*, run

    (show-properties-dialog) ; see "properties.lisp"

and use [Select] to explore the single QML items.
