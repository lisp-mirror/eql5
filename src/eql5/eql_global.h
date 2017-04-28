#include <QtCore/QtGlobal>

#if defined(EQL_LIBRARY)
#  define EQL_EXPORT Q_DECL_EXPORT
#else
#  define EQL_EXPORT Q_DECL_IMPORT
#endif
