#include <stdio.h>
#include <string.h>
#include "librerias/archivos.h"

//prototipos de funciones
void mostrarProductos();

FILE * archivoProductos;

int main() {
	
	archivoProductos = abrirArchivo("archivos/productos.dat", "rb");
	if(archivoProductos != NULL){
		printf("\nArchivo Productos Abierto.\n");
	}
	else{
		printf("\nError.\n");
		cerrarArchivo(archivoProductos);
		printf("\nArchivo Productos Cerrado.\n");
	}
	
	mostrarProductos();
	
	cerrarArchivo(archivoProductos);
	printf("\nArchivo Productos Cerrado.\n");
	
    return 0;
}

void mostrarProductos(){
	
	tRegistroProductos registro ;
	while(!feof(archivoProductos)){
		registro = leerRegistro(archivoProductos);
		printf("%d\t%s\t%s\t%.2f\t%.2f\n", registro.id, registro.nombre, registro.rubro, registro.precioCosto, registro.precioVenta);
	}
}
