#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "archivos.h"

//estructura
typedef struct nodo {
	tRegistroProductos producto;
	struct nodo * siguiente;
} tNodoCarrito;

tNodoCarrito * productoCarrito;

//prototipos 
void inicializarCarrito();
bool carritoVacio(tNodoCarrito *);

void agregarProducto(tRegistroProductos,int);

int cantidadNodos(tNodoCarrito);
void eliminarProductoK(int);
void eliminarUltimoProducto();

void mostrarCarrito(tNodoCarrito);

//implementacion
void inicializarCarrito() {
	productoCarrito = NULL; 
}

bool carritoVacio(tNodoCarrito * pCarrito) {
	return (pCarrito == NULL);
} 

//void agregarProducto(tRegistroProductos, int) {
//	
//}





