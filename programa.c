#include <stdio.h>
#include <string.h>

#include "librerias/estructura.h"  
#include "librerias/archivos.h"       
#include "librerias/indice.h"


//prototipos de funciones
void mostrarProductos();
//void validarAperturaArchivo(FILE *,tString);
void ingDatosProducto();
void agregarNuevoProducto();


FILE * archivoProductos;

int main() {

	//abrir y mostrar
//	mostrarProductos();

	
	//agregar nuevo producto
//	agregarNuevoProducto();	
	
	mostrarProductos();
	
	
    return 0;
}

//void validarAperturaArchivo( FILE * pArchivo, tString pNombre) {
//	if(pArchivo != NULL){
//		printf("\nArchivo %s Abierto.\n",pNombre);
//	}
//	else{
//		printf("\nError.\n");
//		cerrarArchivo(pArchivo);
//		printf("\nArchivo %s Cerrado.\n",pNombre);
//	}
//}


void mostrarProductos(){
	archivoProductos = abrirArchivo("archivos/productos.dat", "rb");
//	validarAperturaArchivo(archivoProductos, "productos");
	
	tRegistroProductos registro;
	printf("\nid\tnombre\t\t\trubro\t\tcosto\tventa\n");
	
	registro = leerRegistro(archivoProductos);
	while(!feof(archivoProductos)) {
		printf("%d\t%s\t%s\t%.2f\t%.2f\n", registro.id, registro.nombre, registro.rubro, registro.precioCosto, registro.precioVenta);	
		registro = leerRegistro(archivoProductos);
	}
	
	cerrarArchivo(archivoProductos);
}

void ingDatosProducto(){

	printf("\nIngrese nuevo producto: ");
	
	rProducto.id = obtenerUltIndice();
	
	printf("Id %d",rProducto.id);
	
	printf("\nnombre: ");
	fflush(stdin);
	fgets(rProducto.nombre, sizeof(rProducto.nombre), stdin);
    
	
	printf("\nrubro: ");
	fflush(stdin);
	fgets(rProducto.rubro, sizeof(rProducto.rubro), stdin);

	
	printf("\nprecio de costo: ");
	scanf("%f",&rProducto.precioCosto);
	
	printf("\nprecio de venta: ");
	scanf("%f",&rProducto.precioVenta);
	
}
void agregarNuevoProducto() {
	char continuar; 
	int ultioIndice = obtenerUltIndice();
	
	archivoProductos = abrirArchivo("archivos/productos.dat","ab");
//	validarAperturaArchivo(archivoProductos, "productos");
	
	do {
		ingDatosProducto();
		
		printf("Ingresar otro? s - n: ");
		fflush(stdin);
		scanf("%c",&continuar);
		
		fwrite(&rProducto,sizeof(rProducto), 1, archivoProductos);
		
		actualizarUltIndice(ultioIndice);
	} while(continuar != 'n');
	
	cerrarArchivo(archivoProductos);
	printf("\nArchivo Productos Cerrado.\n");
}	



	
	
