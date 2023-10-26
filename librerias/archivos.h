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

int abrirArchivo(FILE **, tString, tChar);
tRegistroProductos leerRegistro(FILE *);
void cerrarArchivo(FILE *);

int abrirArchivo(FILE ** pArchivo, tString pNombreArchivo, tChar pModo ) {
	*pArchivo = fopen(pNombreArchivo,pModo);
	
	if(pArchivo != NULL) {
		return 1; 
	} else {
		return 0;
	}
}

tRegistroProductos leerRegistro(FILE * pArchivo) {

	fscanf(pArchivo, "%d %s %s %f %f", &rProducto.id, &rProducto.nombre, &rProducto.rubro, &rProducto.precioCosto, &rProducto.precioVenta);
	
	return rProducto;
}

void cerrarArchivo(FILE * pArchivo) {
	fclose(pArchivo);
}
