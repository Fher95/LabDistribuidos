/*Declaracion de datos a transferir entre el cliente y el servidor*/
/*Declaracion de constantes*/
const MAXNOM = 30;
const MAXTIPO = 20;
typedef struct nodo_hamburguesa *proxNodoHamburguesa;

/*Declaracion de la estructura que permite almacenar los datos de una hamburguesa*/

struct nodo_hamburguesa{
	char nombre[MAXNOM];		
	int cantidadIngredientesExtra;
	char tipo[MAXTIPO];	
	proxNodoHamburguesa nodoSiguiente;/*Atributo de la hamburguesa que le permite guardar la referencia al siguiente nodo*/
};

/*Declaracion de la estructura que permite almacenar los datos de los costos de una hamburguesa*/

struct nodo_costos_hamburguesa{
	float costoHamburguesaPequenia;
	float costoHamburguesaMediana;
	float costoHamburguesaGrande;
	float costoIngredientesExtra;
};

/*Definicion de las operaciones que se pueden realizar*/
program gestion_hamburguesa{
	version gestion_hamburguesa_version{
		nodo_costos_hamburguesa consultarCostosHamburguesa(void)=1;
		bool registrarHamburguesaSistema(nodo_hamburguesa objHamburguesa)=2;
		proxNodoHamburguesa listarHamburguesasSistema(void)=3;		
	}=1;
}=0x20000001;
