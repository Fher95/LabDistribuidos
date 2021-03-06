/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "gestionHamburguesas.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

nodo_costos_hamburguesa *
consultarcostoshamburguesa_1(void *argp, CLIENT *clnt)
{
	static nodo_costos_hamburguesa clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, consultarCostosHamburguesa,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_nodo_costos_hamburguesa, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
registrarhamburguesasistema_1(nodo_hamburguesa *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, registrarHamburguesaSistema,
		(xdrproc_t) xdr_nodo_hamburguesa, (caddr_t) argp,
		(xdrproc_t) xdr_bool, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

proxNodoHamburguesa *
listarhamburguesassistema_1(void *argp, CLIENT *clnt)
{
	static proxNodoHamburguesa clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, listarHamburguesasSistema,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_proxNodoHamburguesa, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
