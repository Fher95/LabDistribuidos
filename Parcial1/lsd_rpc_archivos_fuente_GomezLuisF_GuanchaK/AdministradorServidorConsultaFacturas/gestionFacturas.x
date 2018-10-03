/*Declaracion de datos a transferir entre el cliente y el servidor*/
/*Declaracion de constantes*/

/*Declaracion de la estructura que permite almacenar los datos de una hamburguesa*/


/*Definicion de las operaciones que se pueden realizar*/
program gestion_facturas{
	version gestion_hamburguesa_version{
		int consultarNumFacturas()=1;
		float consultarCostoTotalCompras()=2;		
	}=1;
}=0x20000002;
