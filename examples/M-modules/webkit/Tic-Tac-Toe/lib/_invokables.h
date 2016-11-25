// THIS FILE IS GENERATED (see "invokables.lisp" in sources)

Q_INVOKABLE QPixmap pixmap() {
    QVariant ret =
    eql_fun("h-utils:%web-pixmap", QVariant::Pixmap);
    return ret.value<QPixmap>(); }

Q_INVOKABLE QString fun(const QString& x1, const QVariantList& x2 = QVariantList()) {
    QVariant ret =
    eql_fun("h-utils:fun", QVariant::String,
            Q_ARG(QString, x1),
            Q_ARG(QVariantList, x2));
    return ret.toString(); }

Q_INVOKABLE QString fun2(const QString& x1, const QWebElement& x2, const QVariantList& x3 = QVariantList()) {
    QVariant ret =
    eql_fun("h-utils:fun*", QVariant::String,
            Q_ARG(QString, x1),
            Q_ARG(QWebElement, x2),
            Q_ARG(QVariantList, x3));
    return ret.toString(); }

