#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//estructura
typedef struct nodo {
	tRegistroProductos producto;
	struct nodo * siguiente;
} tListaCarrito;

tListaCarrito * carrito;

//prototipos
void inicializarCarrito();

bool carritoVacio(tListaCarrito *);

void agregarProducto(tRegistroProductos);

 
int cantidadNodos();
//void eliminarProductoK(int);
//void eliminarUltimoProducto();
//
//void mostrarCarrito(tListaCarrito);

//implementacion

void inicializarCarrito(tListaCarrito * pProductoCarrito) {
	pProductoCarrito = NULL; 
}

bool carritoVacio(tListaCarrito * pCarrito) {
	return (pCarrito == NULL);
} 

void agregarProducto(tRegistroProductos pProducto) {
	
	tListaCarrito * nuevoNodo;
	
	nuevoNodo = (tRegistroProductos *) malloc(sizeof(tRegistroProductos));
	
	nuevoNodo->producto = pProducto;
	
	if(carritoVacio(carrito)) {
		nuevoNodo->siguiente = NULL;
	} else {
		nuevoNodo->siguiente = carrito;
	}
	
	carrito = nuevoNodo;
} 

int cantidadNodos() {
	tListaCarrito * aux;
	int contador = 0;
	
	aux = carrito;
	
	if(!carritoVacio(carrito)) {
		while(carrito != NULL) {
			contador++;
		 	aux = aux->siguiente;
		}	
	}
	
	return contador;
}





