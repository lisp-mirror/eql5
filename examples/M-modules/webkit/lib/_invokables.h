// THIS FILE IS GENERATED (see "invokables.lisp" in sources)

Q_INVOKABLE void setParams(const QStringList& x1, const QStringList& x2) {
    eql_fun("eql-user:set-params",
            Q_ARG(QStringList, x1),
            Q_ARG(QStringList, x2)); }

Q_INVOKABLE QString eval(const QString& x1) {
    QVariant ret =
    eql_fun("eql-user:eval*", QVariant::String,
            Q_ARG(QString, x1));
    return ret.toString(); }

Q_INVOKABLE void flipValue(const QWebElement& x1) {
    eql_fun("eql-user:flip-value",
            Q_ARG(QWebElement, x1)); }

Q_INVOKABLE QStringList testCall(const QDateTime& x1, const QVariantList& x2 = QVariantList()) {
    QVariant ret =
    eql_fun("eql-user:test-call", QVariant::StringList,
            Q_ARG(QDateTime, x1),
            Q_ARG(QVariantList, x2));
    return ret.toStringList(); }

