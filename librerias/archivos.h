#include <stdio.h>
#include <stdlib.h>

typedef char tString[10];
typedef char tStringNombreArchivo[20];
typedef char tChar[2];

typedef struct productos {
	int id;
	tString nombre;
	tString rubro;
	float precioCosto;
	float precioVenta;
}tRegistroProductos; 

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
