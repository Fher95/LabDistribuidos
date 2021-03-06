/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GESTIONFACTURAS_H_RPCGEN
#define _GESTIONFACTURAS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define gestion_facturas 0x20000002
#define gestion_hamburguesa_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define consultarNumFacturas 1
extern  int * consultarnumfacturas_1(void *, CLIENT *);
extern  int * consultarnumfacturas_1_svc(void *, struct svc_req *);
#define consultarCostoTotalCompras 2
extern  float * consultarcostototalcompras_1(void *, CLIENT *);
extern  float * consultarcostototalcompras_1_svc(void *, struct svc_req *);
extern int gestion_facturas_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define consultarNumFacturas 1
extern  int * consultarnumfacturas_1();
extern  int * consultarnumfacturas_1_svc();
#define consultarCostoTotalCompras 2
extern  float * consultarcostototalcompras_1();
extern  float * consultarcostototalcompras_1_svc();
extern int gestion_facturas_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GESTIONFACTURAS_H_RPCGEN */
