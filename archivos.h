typedef char tString[10];
typedef char tChar[2];

int abrirArchivo(FILE **, tString, tChar);
void cerrarArchivo(FILE *);

int abrirArchivo(FILE * pArchivo, tString pNombreArchivo, tChar pModo ) {
	pArchivo = fopen(pNombreArchivo,pModo);
	
	if(pArchivo != NULL) {
		return 1; 
	} else {
		return 0;
	}
}

void cerrarArchivo(FILE *)
