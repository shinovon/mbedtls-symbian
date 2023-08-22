SOURCES += \
    $$PWD/library/aes.c \ 
    $$PWD/library/aesce.c \ 
    $$PWD/library/aesni.c \ 
    $$PWD/library/aria.c \ 
    $$PWD/library/asn1parse.c \ 
    $$PWD/library/asn1write.c \ 
    $$PWD/library/base64.c \ 
    $$PWD/library/bignum.c \ 
    $$PWD/library/bignum_core.c \ 
    $$PWD/library/bignum_mod.c \ 
    $$PWD/library/bignum_mod_raw.c \ 
    $$PWD/library/camellia.c \ 
    $$PWD/library/ccm.c \ 
    $$PWD/library/chacha20.c \ 
    $$PWD/library/chachapoly.c \ 
    $$PWD/library/cipher.c \ 
    $$PWD/library/cipher_wrap.c \ 
    $$PWD/library/cmac.c \ 
    $$PWD/library/constant_time.c \ 
    $$PWD/library/ctr_drbg.c \ 
    $$PWD/library/debug.c \ 
    $$PWD/library/des.c \ 
    $$PWD/library/dhm.c \ 
    $$PWD/library/ecdh.c \ 
    $$PWD/library/ecdsa.c \ 
    $$PWD/library/ecjpake.c \ 
    $$PWD/library/ecp.c \ 
    $$PWD/library/ecp_curves.c \ 
    $$PWD/library/entropy.c \ 
    $$PWD/library/entropy_poll.c \ 
    $$PWD/library/error.c \ 
    $$PWD/library/gcm.c \ 
    $$PWD/library/hash_info.c \ 
    $$PWD/library/hkdf.c \ 
    $$PWD/library/hmac_drbg.c \ 
    $$PWD/library/lmots.c \ 
    $$PWD/library/lms.c \ 
    $$PWD/library/md.c \ 
    $$PWD/library/md5.c \ 
    $$PWD/library/memory_buffer_alloc.c \ 
    $$PWD/library/mps_reader.c \ 
    $$PWD/library/mps_trace.c \ 
    $$PWD/library/net_sockets.c \ 
    $$PWD/library/nist_kw.c \ 
    $$PWD/library/oid.c \ 
    $$PWD/library/padlock.c \ 
    $$PWD/library/pem.c \ 
    $$PWD/library/pk.c \ 
    $$PWD/library/pk_wrap.c \ 
    $$PWD/library/pkcs12.c \ 
    $$PWD/library/pkcs5.c \ 
    $$PWD/library/pkcs7.c \ 
    $$PWD/library/pkparse.c \ 
    $$PWD/library/pkwrite.c \ 
    $$PWD/library/platform.c \ 
    $$PWD/library/platform_util.c \ 
    $$PWD/library/poly1305.c \ 
    $$PWD/library/psa_crypto.c \ 
    $$PWD/library/psa_crypto_aead.c \ 
    $$PWD/library/psa_crypto_cipher.c \ 
    $$PWD/library/psa_crypto_client.c \ 
    $$PWD/library/psa_crypto_driver_wrappers.c \ 
    $$PWD/library/psa_crypto_ecp.c \ 
    $$PWD/library/psa_crypto_hash.c \ 
    $$PWD/library/psa_crypto_mac.c \ 
    $$PWD/library/psa_crypto_pake.c \ 
    $$PWD/library/psa_crypto_rsa.c \ 
    $$PWD/library/psa_crypto_se.c \ 
    $$PWD/library/psa_crypto_slot_management.c \ 
    $$PWD/library/psa_crypto_storage.c \ 
    $$PWD/library/psa_its_file.c \ 
    $$PWD/library/psa_util.c \ 
    $$PWD/library/ripemd160.c \ 
    $$PWD/library/rsa.c \ 
    $$PWD/library/rsa_alt_helpers.c \ 
    $$PWD/library/sha1.c \ 
    $$PWD/library/sha256.c \ 
    $$PWD/library/sha512.c \ 
    $$PWD/library/ssl_cache.c \ 
    $$PWD/library/ssl_ciphersuites.c \ 
    $$PWD/library/ssl_client.c \ 
    $$PWD/library/ssl_cookie.c \ 
    $$PWD/library/ssl_debug_helpers_generated.c \ 
    $$PWD/library/ssl_msg.c \ 
    $$PWD/library/ssl_ticket.c \ 
    $$PWD/library/ssl_tls.c \ 
    $$PWD/library/ssl_tls12_client.c \ 
    $$PWD/library/ssl_tls12_server.c \ 
    $$PWD/library/ssl_tls13_client.c \ 
    $$PWD/library/ssl_tls13_generic.c \ 
    $$PWD/library/ssl_tls13_keys.c \ 
    $$PWD/library/ssl_tls13_server.c \ 
    $$PWD/library/threading.c \ 
    $$PWD/library/timing.c \ 
    $$PWD/library/version.c \ 
    $$PWD/library/version_features.c \ 
    $$PWD/library/x509.c \ 
    $$PWD/library/x509_create.c \ 
    $$PWD/library/x509_crl.c \ 
    $$PWD/library/x509_crt.c \ 
    $$PWD/library/x509_csr.c \ 
    $$PWD/library/x509write_crt.c \ 
    $$PWD/library/x509write_csr.c

symbian:LIBS += -llibc -llibpthread -leuser

QMAKE_CFLAGS += -std=c99

include($$PWD/headers.pri)