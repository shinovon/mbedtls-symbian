#if defined(__SYMBIAN32__) && !defined(PIPS)

#include <e32base.h>
extern "C" {
#include "mbedtls/threading.h"
}

static void threading_mutex_init_symbian(mbedtls_threading_mutex_t *mutex)
{
    if (mutex == NULL) {
        return;
    }

    RMutex* rmutex = new RMutex;
    if (!rmutex) {
        mutex->is_valid = false;
        return;
    }
    
    rmutex->CreateLocal();
    mutex->mutex = (void*) rmutex;
    mutex->is_valid = true;
}

static void threading_mutex_free_symbian(mbedtls_threading_mutex_t *mutex)
{
    if (mutex == NULL || !mutex->is_valid) {
        return;
    }
    
    if (mutex->mutex) {
		RMutex* rmutex = (RMutex*) mutex->mutex;
		rmutex->Close();
		delete rmutex;
    }
    
    mutex->is_valid = 0;
}

static int threading_mutex_lock_symbian(mbedtls_threading_mutex_t *mutex)
{
    if (mutex == NULL || !mutex->is_valid) {
        return MBEDTLS_ERR_THREADING_BAD_INPUT_DATA;
    }
    
    if (!mutex->mutex) {
    	threading_mutex_init_symbian(mutex);
    }

    RMutex* rmutex = (RMutex*) mutex->mutex;
    rmutex->Wait();

    return 0;
}

static int threading_mutex_unlock_symbian(mbedtls_threading_mutex_t *mutex)
{
    if (mutex == NULL || !mutex->is_valid) {
        return MBEDTLS_ERR_THREADING_BAD_INPUT_DATA;
    }
    
    if (!mutex->mutex) {
    	threading_mutex_init_symbian(mutex);
    }

    RMutex* rmutex = (RMutex*) mutex->mutex;
    rmutex->Signal();

    return 0;
}

extern "C" {
void (*mbedtls_mutex_init)(mbedtls_threading_mutex_t *) = threading_mutex_init_symbian;
void (*mbedtls_mutex_free)(mbedtls_threading_mutex_t *) = threading_mutex_free_symbian;
int (*mbedtls_mutex_lock)(mbedtls_threading_mutex_t *) = threading_mutex_lock_symbian;
int (*mbedtls_mutex_unlock)(mbedtls_threading_mutex_t *) = threading_mutex_unlock_symbian;
}

#endif
