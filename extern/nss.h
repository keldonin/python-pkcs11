#ifndef _NSS_H_
#define _NSS_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

#include "pkcs11.h"

/* CK_C_INITIALIZE_NSS_ARGS provides the optional arguments to
 * C_Initialize
 */
typedef struct CK_C_INITIALIZE_NSS_ARGS {
    CK_CREATEMUTEX CreateMutex;
    CK_DESTROYMUTEX DestroyMutex;
    CK_LOCKMUTEX LockMutex;
    CK_UNLOCKMUTEX UnlockMutex;
    CK_FLAGS flags;
    CK_CHAR_PTR LibraryParameters;
    CK_VOID_PTR pReserved;
} CK_C_INITIALIZE_NSS_ARGS;


#ifdef __cplusplus
}
#endif

#endif /* _PKCS11_H_ */

