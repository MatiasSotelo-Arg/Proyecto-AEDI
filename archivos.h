typedef char tString[10];
typedef char tChar[2];

typedef struct productos {
	int id;
	tString nombre;
	int rubro;
	
}tRegistroProductos; 

int abrirArchivo(FILE **, tString, tChar);
void leerRegistro(FILE *);
void cerrarArchivo(FILE *);

int abrirArchivo(FILE * pArchivo, tString pNombreArchivo, tChar pModo ) {
	pArchivo = fopen(pNombreArchivo,pModo);
	
	if(pArchivo != NULL) {
		return 1; 
	} else {
		return 0;
	}
}

void leerRegistro(FILE * pArchivo) {
		
}

void cerrarArchivo(FILE * pArchivo) {
	fclose(pArchivo);
}
