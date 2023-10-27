#include <stdio.h>
#include <stdlib.h>

#include "estructura.h"

//prototipos
int obtenerUltIndice();
void actualizarUltIndice(int pIndex);

//implementacion 
int obtenerUltIndice(){
	FILE * archivoIndice;
	archivoIndice = abrirArchivo("archivos/ultIndice.txt" , "r");
//	validarAperturaArchivo(archivoIndice, "ultIndice");
	
	int ultIndex = 0;
	char registroAux[3];
	
	fgets(registroAux, sizeof(registroAux), archivoIndice);
	
	ultIndex = atoi(registroAux);
	
	cerrarArchivo(archivoIndice);
	
	return ultIndex + 1;
}

void actualizarUltIndice(int pIndex) {
	FILE * archivoIndice;
	archivoIndice = abrirArchivo("archivos/ultIndice.txt" , "w");
//	validarAperturaArchivo(archivoIndice, "ultIndice");
	
	char cadena[3];
	sprintf(cadena, "%d", pIndex);
	
	fprintf(archivoIndice,"%s",cadena);
	
	cerrarArchivo(archivoIndice);
}
