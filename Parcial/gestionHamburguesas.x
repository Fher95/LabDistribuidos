/*Declaracion de datos a transferir entre el cliente y el servidor*/
/*Declaracion de constantes*/
const MAXNOM = 30;
const MAXTIPO = 20;
typedef struct nodo_hamburguesa_factura *proxNodoHamburguesa;
typedef struct nodo_factura *proxNodoFactura;

/*Declaracion de la estructura que permite almacenar los datos de una hamburguesa*/

struct nodo_hamburguesa{
	char nombre[MAXNOM];		
	int cantidadIngredientesExtra;
	char tipo[MAXTIPO];	
	int idCliente;	
};

struct nodo_hamburguesa_factura{
	char nombre[MAXNOM];		
	int cantidadIngredientesExtra;
	char tipo[MAXTIPO];	
	int idCliente;
	float costo;
	proxNodoHamburguesa nodoSiguiente;/*Atributo de la hamburguesa que le permite guardar la referencia al siguiente nodo*/
};


/*Declaracion de la estructura que permite almacenar los datos de los costos de una hamburguesa*/
struct nodo_datos_empresa{
	char nombre[MAXNOM];
	int nit;
};

struct nodo_costos_hamburguesa{
	float costoHamburguesaPequenia;
	float costoHamburguesaMediana;
	float costoHamburguesaGrande;
	float costoIngredientesExtra;
};

struct nodo_factura{
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

struct nodo_datos_hamburguesa_modificada{
	nodo_hamburguesa varHamburguesa;
	char nombreAntiguo[MAXNOM];

};

/*Definicion de las operaciones que se pueden realizar*/
program gestion_hamburguesa{
	version gestion_hamburguesa_version{
		int getIdentificador(void)=1;
		nodo_datos_empresa consultarDatosEmpresa(void)=2;
		nodo_costos_hamburguesa consultarCostosHamburguesa(void)=3;
		bool comprarHamburguesaSistema(nodo_hamburguesa_factura objHamburguesa)=4;
		nodo_hamburguesa obtenerHamburguesa(string nombreHamburguesa)=5;		
		bool modificarCompra(nodo_datos_hamburguesa_modificada parHamburguesa)=6;
		bool eliminaraHamburguesa(string nombreHamburguesa)=7;
		nodo_factura mostrarFactura(int idCliente)=8;
		bool pagarFactura(char tipoPago)=9;
		proxNodoHamburguesa listarHamburguesasSistema(int idCliente)=10;		
	}=1;
}=0x20000001;
