#include <stdio.h>
#include <stdlib.h>

#include "archivos.h"
#include "indice.h"

int cantidad = obtenerUltIndice();
//variables
tRegistroProductos productos[cantidad];

//prototipos
void cargarProductos();
int buscarElemento();

//implementacion
