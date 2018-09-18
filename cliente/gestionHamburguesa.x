/*Declaracion de datos a transferir entre el cliente y el servidor*/

/*Declaracion de constantes*/
const MAXNOM = 30;
const MAXTIPO = 20;


/*Declaracion de la estructura que permite almacenar los datos de una hamburguesa*/
struct nodo_hamburguesa{
	char nombre[MAXNOM];
	int cantidadIngredientesExtra;	
	char tipo[MAXTIPO];
};

/*Definicion de las operaciones que se pueden realizar*/
program gestion_hamburguesa{
	version gestion_hamburguesa_version{
		bool registrarHamburguesaSistema(nodo_hamburguesa objHamburguesa)=1;
		nodo_hamburguesa consultarHamburguesa(string nombreHamburguesa)=2;		
	}=1;
}=0x20000001;

