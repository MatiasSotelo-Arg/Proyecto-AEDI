#include <stdio.h>
#include <stdlib.h>

typedef char tString[10];
typedef char tChar[2];

typedef struct productos {
	int id;
	tString nombre;
	tString rubro;
	float precioCosto;
	float precioVenta;
}tRegistroProductos; 

tRegistroProductos rProducto;

FILE * abrirArchivo(tString, tChar);
tRegistroProductos leerRegistro(FILE *);
void cerrarArchivo(FILE *);

FILE *abrirArchivo(tString pNombreArchivo, tChar pModo) {
    FILE *archivo = fopen(pNombreArchivo, pModo);
    
    if (archivo != NULL) {
        return archivo;
    } else {
        return NULL;
    }
}

tRegistroProductos leerRegistro(FILE * pArchivo) {

	fscanf(pArchivo, "%d %s %s %f %f", &rProducto.id, &rProducto.nombre, &rProducto.rubro, &rProducto.precioCosto, &rProducto.precioVenta);
	
	return rProducto;
}

void cerrarArchivo(FILE * pArchivo) {
	fclose(pArchivo);
}
