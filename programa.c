#include <stdio.h>
#include <string.h>
#include "librerias/archivos.h"

//prototipos de funciones
void mostrarProductos();
void validarAperturaArchivo(FILE *);
void ingDatosProducto();
void agregarNuevoProducto();
int actualizarUltIndice();

FILE * archivoProductos;

int main() {

	//abrir y mostrar
	
//	archivoProductos = abrirArchivo("archivos/productos.dat", "rb");
//	validarAperturaArchivo(archivoProductos);
//	mostrarProductos();
//	cerrarArchivo(archivoProductos);
	
	
	//agregar nuevo producto
	agregarNuevoProducto();	
	
    return 0;
}

void validarAperturaArchivo( FILE * pArchivo) {
	if(pArchivo != NULL){
		printf("\nArchivo Productos Abierto.\n");
	}
	else{
		printf("\nError.\n");
		cerrarArchivo(pArchivo);
		printf("\nArchivo Productos Cerrado.\n");
	}
}


void mostrarProductos(){
	
	tRegistroProductos registro;
	printf("\nid\tnombre\t\t\trubro\t\tcosto\tventa\n");
	
	registro = leerRegistro(archivoProductos);
	while(!feof(archivoProductos)) {
		printf("%d\t%s\t%s\t%.2f\t%.2f\n", registro.id, registro.nombre, registro.rubro, registro.precioCosto, registro.precioVenta);	
		registro = leerRegistro(archivoProductos);
	}
}

void ingDatosProducto(){
	printf("\nIngrese nuevo producto: ");
	
	rProducto.id = actualizarUltIndice();
	
	printf("Id %d",rProducto.id);
	
	printf("\nnombre: ");
	fflush(stdin);
	gets(rProducto.nombre);
	
	printf("\nrubro: ");
	fflush(stdin);
	gets(rProducto.rubro);
	
	printf("\nprecio de costo: ");
	scanf("%f",&rProducto.precioCosto);
	
	printf("\nprecio de venta: ");
	scanf("%f",&rProducto.precioVenta);
	
}
void agregarNuevoProducto() {
	char continuar; 
	
	archivoProductos = abrirArchivo("archivos/productos.dat","ab");
	validarAperturaArchivo(archivoProductos);
	
	do {
		ingDatosProducto();
		
		printf("Ingresar otro? s - n: ");
		fflush(stdin);
		scanf("%c",&continuar);
		
		fwrite(&rProducto,sizeof(rProducto), 1, archivoProductos);
	} while(continuar != 'n');
	
	cerrarArchivo(archivoProductos);
	printf("\nArchivo Productos Cerrado.\n");
}	

int actualizarUltIndice(){
	FILE * archivoIndice;
	archivoIndice = abrirArchivo("archivos/ultIndice.txt" , "r");
	validarAperturaArchivo(archivoIndice);
	
	int ultIndex = 0;
	
	char registroAux[3];
	
	fgets(registroAux, sizeof(registroAux), archivoIndice);
	
	ultIndex = atoi(registroAux);
	
	cerrarArchivo(archivoIndice);
	
	return ultIndex + 1;
}

	
	
