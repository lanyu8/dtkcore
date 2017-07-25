#ifndef CUTELOGGER_GLOBAL_H
#define CUTELOGGER_GLOBAL_H

#include "dtkcore_global.h"

#if defined(CUTELOGGER_LIBRARY)
#  define CUTELOGGERSHARED_EXPORT Q_DECL_EXPORT
#else
#if defined(Q_OS_WIN32)
#  define CUTELOGGERSHARED_EXPORT
#else
#  define CUTELOGGERSHARED_EXPORT Q_DECL_IMPORT
#endif
#endif

#endif // CUTELOGGER_GLOBAL_H
