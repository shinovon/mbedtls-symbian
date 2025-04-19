#ifdef PIPS
#include <stdapis/sys/stdint.h>
#else
#ifndef _SYS_STDINT_H_
#define _SYS_STDINT_H_

#include <sys/types.h>
#include <sys/config.h>

typedef unsigned char uint8_t;
typedef signed char int8_t;

typedef unsigned short uint16_t;
typedef short int16_t;

typedef __int32_t int32_t;
typedef __uint32_t uint32_t;

typedef long long int64_t;
typedef unsigned long long uint64_t;

typedef	__int32_t	intptr_t;
typedef	__uint32_t	uintptr_t;

#define	UINT32_MAX	0xffffffffU
#define	SIZE_MAX	UINT32_MAX

#endif /* !_SYS_STDINT_H_ */
#endif
