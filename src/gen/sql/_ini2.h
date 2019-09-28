#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include <eql5/eql.h>
#include <QtSql>

#define defaultConnection QSqlDatabase::defaultConnection

Q_DECLARE_METATYPE(QSqlIndex)
Q_DECLARE_METATYPE(QSqlRecord)

#endif
