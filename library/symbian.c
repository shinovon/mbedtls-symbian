#include "common.h"

#ifdef __SYMBIAN32__

#include <unistd.h>

extern int __aeabi_uidivmod(unsigned int a, unsigned int b);
extern int __aeabi_idivmod(int a, int b);
int __aeabi_idiv(int a, int b)
{
	return __aeabi_idivmod(a, b);
}

int __aeabi_uidiv(unsigned int a, unsigned int b)
{
	return __aeabi_uidivmod(a, b);
}

#endif

#ifdef MBEDTLS_ENTROPY_HARDWARE_ALT

#include <stdlib.h>

EXPORT_C int mbedtls_hardware_poll(void *data, unsigned char *output, size_t len, size_t *olen)
{
    uint32_t rnd = 0, i;
    for (i = 0; i < len; ++i) {
        if (i % 4 == 0)
            rnd = rand();
        output[i] = rnd;
        rnd >>= 8;
    }
    *olen += len;
    return 0;
}

#endif
