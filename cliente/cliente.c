/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "gestionHamburguesas.h"


void
gestion_hamburguesa_1(char *host)
{
	CLIENT *clnt;
	nodo_costos_hamburguesa  *result_1;
	char *consultarcostoshamburguesa_1_arg;
	bool_t  *result_2;
	nodo_hamburguesa  registrarhamburguesasistema_1_arg;
	proxNodoHamburguesa  *result_3;
	char *listarhamburguesassistema_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, gestion_hamburguesa, gestion_hamburguesa_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = consultarcostoshamburguesa_1((void*)&consultarcostoshamburguesa_1_arg, clnt);
	if (result_1 == (nodo_costos_hamburguesa *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = registrarhamburguesasistema_1(&registrarhamburguesasistema_1_arg, clnt);
	if (result_2 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = listarhamburguesassistema_1((void*)&listarhamburguesassistema_1_arg, clnt);
	if (result_3 == (proxNodoHamburguesa *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	gestion_hamburguesa_1 (host);
exit (0);
}
