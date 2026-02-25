/** @file snprintfconfig.h
 *
 * Dummy config.h for snprintf.c.
 *
 * Copyright 2003 Petteri Kangaslampi
 *
 * See license.txt for full copyright and license information.
*/

#ifndef __SNPRINTF_CONFIG_H__
#define __SNPRINTF_CONFIG_H__

#define HAVE_STDARG_H
#define HAVE_LONG_DOUBLE

#ifndef __cplusplus
#ifdef __WINS__
#pragma warning(disable : 4127) /* conditional expression is constant */
#pragma warning(disable : 4100) /* unreferenced formal parameter */
#pragma warning(disable : 4057) /* XX differs in indirection to slightly different base types from YY */
#pragma warning(disable : 4244) /* conversion from X to Y, possible loss of data */
#endif
#endif

#endif
