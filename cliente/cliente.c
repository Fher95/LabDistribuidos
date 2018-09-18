/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "gestionHamburguesas.h"
int desplegarMenu(){

	printf("\n=================  MENÚ  =================");
	printf("\n	1. Consultar costos	");
	printf("\n	2. Registrar hamburguesa	");
	printf("\n	3. Listar hamburguesa	");
	printf("\n	0. Salir			");
	printf("\n=================        =================");
	printf("\nDigite opcion: ");
}

nodo_hamburguesa crearHamburguesa(){
	int cantidad=0;
	nodo_hamburguesa objHamburguesa;
	printf("\n Digite el nombre de la hamburguesa: ");
	scanf("%s", objHamburguesa.nombre);
	do{
		printf("\n Digite la cantidad de ingredientes extra: ");
		scanf("%d", &cantidad);
	}while(cantidad<0);
	objHamburguesa.cantidadIngredientesExtra=cantidad;	
	fflush(stdin);
	int varOpcion;
	do{
		printf("\n Seleccione el tipo de hamburguesa 1 para pequeña, 2 para mediana, 3 para grande: ");
		scanf("%i", &varOpcion);
		switch(varOpcion)
		{
			case 1: strcpy(objHamburguesa.tipo,"Pequenia"); break; 
			case 2: strcpy(objHamburguesa.tipo,"Mediana"); break;
			case 3: strcpy(objHamburguesa.tipo,"Grande"); break;
		}
	} while (varOpcion<1 || varOpcion>3);	
	objHamburguesa.nodoSiguiente=NULL;
	return objHamburguesa;	
}
void listarC(nodo_costos_hamburguesa  *result_1){
	if((*result_1).costoHamburguesaPequenia>0){
		printf("\n Mostrando listado de Costos ");
		printf("\n 1. %0.2f \n",(*result_1).costoHamburguesaPequenia);
		printf("\n 2. %0.2f \n",(*result_1).costoHamburguesaMediana);
		printf("\n 3. %0.2f \n",(*result_1).costoHamburguesaGrande);
		printf("\n 4. %0.2f \n",(*result_1).costoIngredientesExtra);
	}
	else{
		printf("\nNo hay costos");
	}
}

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
int varOpcion;
	do {
		
		desplegarMenu();
		scanf("%i",&varOpcion);
		switch(varOpcion)
		{
			case 1:
				result_1 = consultarcostoshamburguesa_1((void*)&consultarcostoshamburguesa_1_arg, clnt);
				listarC(result_1);
			break;
			case 2:
				registrarhamburguesasistema_1_arg = crearHamburguesa();
				result_2 = registrarhamburguesasistema_1(&registrarhamburguesasistema_1_arg, clnt);
				if(*result_2 == TRUE)
				{
					printf("\n	Hamburguesa registrada exitosamente\n");
				}
				else if (*result_2 == FALSE){
					printf("\n 	Limite de hamburguesas alcanzado\n");
				} 
				else if(result_2 == (bool_t *) NULL){
					clnt_perror (clnt, "call failed");
				}
				break;
			break;
			case 3:
				result_3 = listarhamburguesassistema_1((void*)&listarhamburguesassistema_1_arg, clnt);
				int i=0;
				if (result_3 == (proxNodoHamburguesa *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				else
				{
					//proxNodoHamburguesa auxiliar=result_3;
					printf("\n Mostrando listado de hamburguesas \n");
					while((*result_3)!=NULL){
						printf("\n      Hamburguesa %i: ",i+1);
						printf("\n	Nombre de la hamburguesa: %s ",(*result_3)->nombre);
						printf("\n	Cantidad de Ingredientes de la hamburguesa: %i \n",(*result_3)->cantidadIngredientesExtra);
						printf("	Tipo de la hamburguesa: %s \n",(*result_3)->tipo);
						(*result_3)=(*result_3)->nodoSiguiente;
						i++;
					}	
					if (i==0){
						printf("	Aun no existen hamburguesas registradas. \n");
					}		
	
				}
			break;
		}
	}while (varOpcion!=0 || varOpcion<0 || varOpcion>3);

	
	

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
