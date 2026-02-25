/** @file snprintf.h
 *
 * snprintf() and vsnprintf() for Symbian OS. See snprintf.c.
 *
 * Copyright 2003 Petteri Kangaslampi
 *
 * See license.txt for full copyright and license information.
*/

#ifndef __SNPRINTF_H__
#define __SNPRINTF_H__


#include <stdarg.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

int snprintf(char *str, size_t count, const char *fmt, ...);
int vsnprintf(char *str, size_t count, const char *fmt, va_list arg);

#ifdef __cplusplus
}    
#endif

#endif
