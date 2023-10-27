#ifndef MIESTRUCTURA_H
#define MIESTRUCTURA_H

typedef char tString[30];
typedef char tStringNombreArchivo[20];
typedef char tChar[2];

typedef struct productos {
	int id;
	tString nombre;
	tString rubro;
	float precioCosto;
	float precioVenta;
}tRegistroProductos; 

#endif
