#ifdef __SYMBIAN32__

#include <unistd.h>
#include <stdlib.h>

int mbedtls_hardware_poll(void *data, unsigned char *output, size_t len, size_t *olen)
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
