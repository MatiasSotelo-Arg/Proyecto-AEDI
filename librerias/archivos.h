#include <stdio.h>
#include <stdlib.h>

#include "indice.h"
#include "estructura.h"

tRegistroProductos rProducto;

FILE * archivo;

//prototipo de funciones
FILE * abrirArchivo(tStringNombreArchivo, tChar);
tRegistroProductos leerRegistro(FILE *);
void cerrarArchivo(FILE *);

FILE * abrirArchivo(tStringNombreArchivo pNombreArchivo, tChar pModo) {
     archivo = fopen(pNombreArchivo, pModo);
    
    if (archivo != NULL) {
        return archivo;
    } else {
        return NULL;
    }
}

tRegistroProductos leerRegistro(FILE * pArchivo) {
	
	fread(&rProducto,sizeof(rProducto),1,pArchivo);
	
	return rProducto;
}

void cerrarArchivo(FILE * pArchivo) {
	fclose(pArchivo);
}

