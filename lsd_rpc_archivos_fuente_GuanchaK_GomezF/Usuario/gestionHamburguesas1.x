/*Declaracion de datos a transferir entre el cliente y el servidor*/
/*Declaracion de constantes*/
const MAXNOM = 30;
const MAXTIPO = 20;
typedef struct nodo_hamburguesa_factura *proxNodoHamburguesa;

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
	char id_factura[MAXNOM];
	proxNodoHamburguesa listaHamburguesas;
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
		nodo_datos_empresa consultarDatosEmpresa(void)=1;
		nodo_costos_hamburguesa consultarCostosHamburguesa(void)=1;
		bool comprarHamburguesaSistema(nodo_hamburguesa_factura objHamburguesa)=2;		
		bool modificarCompra(nodo_datos_hamburguesa_modificada parHamburguesa)=4;
		bool eliminaraHamburguesa(string nombreHamburguesa)=5;
		nodo_factura mostrarFactura()=6;
		bool generarPago(char tipoPago)=7;
		proxNodoHamburguesa listarHamburguesasSistema(void)=8;		
	}=1;
}=0x20000001;
