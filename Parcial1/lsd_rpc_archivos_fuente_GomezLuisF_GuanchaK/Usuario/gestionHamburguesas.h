/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GESTIONHAMBURGUESAS_H_RPCGEN
#define _GESTIONHAMBURGUESAS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXNOM 30
#define MAXTIPO 20

typedef struct nodo_hamburguesa_factura *proxNodoHamburguesa;

typedef struct nodo_factura *proxNodoFactura;

struct nodo_hamburguesa {
	char nombre[MAXNOM];
	int cantidadIngredientesExtra;
	char tipo[MAXTIPO];
	int idCliente;
};
typedef struct nodo_hamburguesa nodo_hamburguesa;

struct nodo_hamburguesa_factura {
	char nombre[MAXNOM];
	int cantidadIngredientesExtra;
	char tipo[MAXTIPO];
	int idCliente;
	float costo;
	proxNodoHamburguesa nodoSiguiente;
};
typedef struct nodo_hamburguesa_factura nodo_hamburguesa_factura;

struct nodo_datos_empresa {
	char nombre[MAXNOM];
	int nit;
};
typedef struct nodo_datos_empresa nodo_datos_empresa;

struct nodo_costos_hamburguesa {
	float costoHamburguesaPequenia;
	float costoHamburguesaMediana;
	float costoHamburguesaGrande;
	float costoIngredientesExtra;
};
typedef struct nodo_costos_hamburguesa nodo_costos_hamburguesa;

struct nodo_factura {
	int idCliente;
	char id_factura[MAXNOM];
	proxNodoHamburguesa listaHamburguesas;
	proxNodoFactura nodoFacturaSiguiente;
	int cantidadHamburguesasPequenias;
	int cantidadHamburguesasMedianas;
	int cantidadHamburguesasGrandes;
	float costoSinIva;
	float costoIva;
	float costo_total;
};
typedef struct nodo_factura nodo_factura;

struct nodo_datos_hamburguesa_modificada {
	nodo_hamburguesa varHamburguesa;
	char nombreAntiguo[MAXNOM];
};
typedef struct nodo_datos_hamburguesa_modificada nodo_datos_hamburguesa_modificada;

struct nodo_pago {
	nodo_factura varFactura;
	char varTipoPago[20];
};
typedef struct nodo_pago nodo_pago;

#define gestion_hamburguesa 0x20000001
#define gestion_hamburguesa_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define getIdentificador 1
extern  int * getidentificador_1(void *, CLIENT *);
extern  int * getidentificador_1_svc(void *, struct svc_req *);
#define consultarDatosEmpresa 2
extern  nodo_datos_empresa * consultardatosempresa_1(void *, CLIENT *);
extern  nodo_datos_empresa * consultardatosempresa_1_svc(void *, struct svc_req *);
#define consultarCostosHamburguesa 3
extern  nodo_costos_hamburguesa * consultarcostoshamburguesa_1(void *, CLIENT *);
extern  nodo_costos_hamburguesa * consultarcostoshamburguesa_1_svc(void *, struct svc_req *);
#define comprarHamburguesaSistema 4
extern  bool_t * comprarhamburguesasistema_1(nodo_hamburguesa_factura *, CLIENT *);
extern  bool_t * comprarhamburguesasistema_1_svc(nodo_hamburguesa_factura *, struct svc_req *);
#define obtenerHamburguesa 5
extern  nodo_hamburguesa * obtenerhamburguesa_1(char **, CLIENT *);
extern  nodo_hamburguesa * obtenerhamburguesa_1_svc(char **, struct svc_req *);
#define modificarCompra 6
extern  bool_t * modificarcompra_1(nodo_datos_hamburguesa_modificada *, CLIENT *);
extern  bool_t * modificarcompra_1_svc(nodo_datos_hamburguesa_modificada *, struct svc_req *);
#define eliminaraHamburguesa 7
extern  bool_t * eliminarahamburguesa_1(char **, CLIENT *);
extern  bool_t * eliminarahamburguesa_1_svc(char **, struct svc_req *);
#define mostrarFactura 8
extern  nodo_factura * mostrarfactura_1(int *, CLIENT *);
extern  nodo_factura * mostrarfactura_1_svc(int *, struct svc_req *);
#define pagarFactura 9
extern  bool_t * pagarfactura_1(nodo_pago *, CLIENT *);
extern  bool_t * pagarfactura_1_svc(nodo_pago *, struct svc_req *);
#define listarHamburguesasSistema 10
extern  proxNodoHamburguesa * listarhamburguesassistema_1(int *, CLIENT *);
extern  proxNodoHamburguesa * listarhamburguesassistema_1_svc(int *, struct svc_req *);
extern int gestion_hamburguesa_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define getIdentificador 1
extern  int * getidentificador_1();
extern  int * getidentificador_1_svc();
#define consultarDatosEmpresa 2
extern  nodo_datos_empresa * consultardatosempresa_1();
extern  nodo_datos_empresa * consultardatosempresa_1_svc();
#define consultarCostosHamburguesa 3
extern  nodo_costos_hamburguesa * consultarcostoshamburguesa_1();
extern  nodo_costos_hamburguesa * consultarcostoshamburguesa_1_svc();
#define comprarHamburguesaSistema 4
extern  bool_t * comprarhamburguesasistema_1();
extern  bool_t * comprarhamburguesasistema_1_svc();
#define obtenerHamburguesa 5
extern  nodo_hamburguesa * obtenerhamburguesa_1();
extern  nodo_hamburguesa * obtenerhamburguesa_1_svc();
#define modificarCompra 6
extern  bool_t * modificarcompra_1();
extern  bool_t * modificarcompra_1_svc();
#define eliminaraHamburguesa 7
extern  bool_t * eliminarahamburguesa_1();
extern  bool_t * eliminarahamburguesa_1_svc();
#define mostrarFactura 8
extern  nodo_factura * mostrarfactura_1();
extern  nodo_factura * mostrarfactura_1_svc();
#define pagarFactura 9
extern  bool_t * pagarfactura_1();
extern  bool_t * pagarfactura_1_svc();
#define listarHamburguesasSistema 10
extern  proxNodoHamburguesa * listarhamburguesassistema_1();
extern  proxNodoHamburguesa * listarhamburguesassistema_1_svc();
extern int gestion_hamburguesa_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_proxNodoHamburguesa (XDR *, proxNodoHamburguesa*);
extern  bool_t xdr_proxNodoFactura (XDR *, proxNodoFactura*);
extern  bool_t xdr_nodo_hamburguesa (XDR *, nodo_hamburguesa*);
extern  bool_t xdr_nodo_hamburguesa_factura (XDR *, nodo_hamburguesa_factura*);
extern  bool_t xdr_nodo_datos_empresa (XDR *, nodo_datos_empresa*);
extern  bool_t xdr_nodo_costos_hamburguesa (XDR *, nodo_costos_hamburguesa*);
extern  bool_t xdr_nodo_factura (XDR *, nodo_factura*);
extern  bool_t xdr_nodo_datos_hamburguesa_modificada (XDR *, nodo_datos_hamburguesa_modificada*);
extern  bool_t xdr_nodo_pago (XDR *, nodo_pago*);

#else /* K&R C */
extern bool_t xdr_proxNodoHamburguesa ();
extern bool_t xdr_proxNodoFactura ();
extern bool_t xdr_nodo_hamburguesa ();
extern bool_t xdr_nodo_hamburguesa_factura ();
extern bool_t xdr_nodo_datos_empresa ();
extern bool_t xdr_nodo_costos_hamburguesa ();
extern bool_t xdr_nodo_factura ();
extern bool_t xdr_nodo_datos_hamburguesa_modificada ();
extern bool_t xdr_nodo_pago ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GESTIONHAMBURGUESAS_H_RPCGEN */
