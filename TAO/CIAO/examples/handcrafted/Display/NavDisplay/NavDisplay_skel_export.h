
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl NAVDISPLAY_SKEL
// ------------------------------
#ifndef NAVDISPLAY_SKEL_EXPORT_H
#define NAVDISPLAY_SKEL_EXPORT_H

#include "ace/config-all.h"

#if !defined (NAVDISPLAY_SKEL_HAS_DLL)
#  define NAVDISPLAY_SKEL_HAS_DLL 1
#endif /* ! NAVDISPLAY_SKEL_HAS_DLL */

#if defined (NAVDISPLAY_SKEL_HAS_DLL) && (NAVDISPLAY_SKEL_HAS_DLL == 1)
#  if defined (NAVDISPLAY_SKEL_BUILD_DLL)
#    define NAVDISPLAY_SKEL_Export ACE_Proper_Export_Flag
#    define NAVDISPLAY_SKEL_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define NAVDISPLAY_SKEL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* NAVDISPLAY_SKEL_BUILD_DLL */
#    define NAVDISPLAY_SKEL_Export ACE_Proper_Import_Flag
#    define NAVDISPLAY_SKEL_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define NAVDISPLAY_SKEL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* NAVDISPLAY_SKEL_BUILD_DLL */
#else /* NAVDISPLAY_SKEL_HAS_DLL == 1 */
#  define NAVDISPLAY_SKEL_Export
#  define NAVDISPLAY_SKEL_SINGLETON_DECLARATION(T)
#  define NAVDISPLAY_SKEL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* NAVDISPLAY_SKEL_HAS_DLL == 1 */

// Set NAVDISPLAY_SKEL_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (NAVDISPLAY_SKEL_NTRACE)
#  if (ACE_NTRACE == 1)
#    define NAVDISPLAY_SKEL_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define NAVDISPLAY_SKEL_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !NAVDISPLAY_SKEL_NTRACE */

#if (NAVDISPLAY_SKEL_NTRACE == 1)
#  define NAVDISPLAY_SKEL_TRACE(X)
#else /* (NAVDISPLAY_SKEL_NTRACE == 1) */
#  define NAVDISPLAY_SKEL_TRACE(X) ACE_TRACE_IMPL(X)
#endif /* (NAVDISPLAY_SKEL_NTRACE == 1) */

#endif /* NAVDISPLAY_SKEL_EXPORT_H */

// End of auto generated file.
