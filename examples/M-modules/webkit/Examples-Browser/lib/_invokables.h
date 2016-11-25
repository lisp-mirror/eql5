// THIS FILE IS GENERATED (see "invokables.lisp" in sources)

Q_INVOKABLE void clearCache() {
    eql_fun("browser:clear-cache"); }

Q_INVOKABLE bool run(const QString& x1, const QStringList& x2) {
    QVariant ret =
    eql_fun("browser:run", QVariant::Bool,
            Q_ARG(QString, x1),
            Q_ARG(QStringList, x2));
    return ret.toBool(); }

