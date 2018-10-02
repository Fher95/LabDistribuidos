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
	int  *result_1;
	char *getidentificador_1_arg;
	nodo_datos_empresa  *result_2;
	char *consultardatosempresa_1_arg;
	nodo_costos_hamburguesa  *result_3;
	char *consultarcostoshamburguesa_1_arg;
	bool_t  *result_4;
	nodo_hamburguesa_factura  comprarhamburguesasistema_1_arg;
	nodo_hamburguesa  *result_5;
	char * obtenerhamburguesa_1_arg;
	bool_t  *result_6;
	nodo_datos_hamburguesa_modificada  modificarcompra_1_arg;
	bool_t  *result_7;
	char * eliminarahamburguesa_1_arg;
	nodo_factura  *result_8;
	int  mostrarfactura_1_arg;
	bool_t  *result_9;
	nodo_pago  pagarfactura_1_arg;
	proxNodoHamburguesa  *result_10;
	int  listarhamburguesassistema_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, gestion_hamburguesa, gestion_hamburguesa_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = getidentificador_1((void*)&getidentificador_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = consultardatosempresa_1((void*)&consultardatosempresa_1_arg, clnt);
	if (result_2 == (nodo_datos_empresa *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = consultarcostoshamburguesa_1((void*)&consultarcostoshamburguesa_1_arg, clnt);
	if (result_3 == (nodo_costos_hamburguesa *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = comprarhamburguesasistema_1(&comprarhamburguesasistema_1_arg, clnt);
	if (result_4 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = obtenerhamburguesa_1(&obtenerhamburguesa_1_arg, clnt);
	if (result_5 == (nodo_hamburguesa *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = modificarcompra_1(&modificarcompra_1_arg, clnt);
	if (result_6 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = eliminarahamburguesa_1(&eliminarahamburguesa_1_arg, clnt);
	if (result_7 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_8 = mostrarfactura_1(&mostrarfactura_1_arg, clnt);
	if (result_8 == (nodo_factura *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_9 = pagarfactura_1(&pagarfactura_1_arg, clnt);
	if (result_9 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_10 = listarhamburguesassistema_1(&listarhamburguesassistema_1_arg, clnt);
	if (result_10 == (proxNodoHamburguesa *) NULL) {
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
