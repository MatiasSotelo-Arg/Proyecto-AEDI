/* 
	Nombre: FabriMat 
	Rubro: Electronica
	
PUNTO DE VENTAS

Archivos 
	productos.dat
	ventas.dat
	ultimoIndice.txt

Lista Enlazada 
	carrito de compras
	
TAD
	archivos
	lista

Archivos 
	abrirArchivo -> ventas, productos
	cerrarArchivo
	leerRegistros

Ordenamiento 
	leerRegistro: array[] -> precio, rubro , stock (productos)
	
#####################################################################
	
//crear productos
	nuevoProducto() 
		indice = ultimoIndice(): abrimos el archivo ultimoIndice.txt y su valor lo incrementamos en 1
		nombre:
		rubro:
		costoUnitario
		margenBenefico 
		precioUnitario = calcularPrecioVenta() -> return costoUnitario / (1-margenBeneficio)
	
	guardaElRegistro() -> (productos)

// abrir ultimoIndice
	abrirArchivo() 
		modificarArchivoAnterior
	cerrarArchivo()
	
//carrito de compras
	definir 
		estructura 
		nodo
		variables
	
	inicializarCarrito() 
	listaVacia()
	agregarElementoCarrito();
	eliminarK()
	cantidadNodos()
	mostrarCarrito()
		imprimir: nombre, precioVenta, cantidad, subTotal (precio * cantidad) 
		imprimir: total 
		acumulador -> (total = acumulador + subtotal);
	borrarCarrito();
	
	printf -> confirmar venta 
		si: guardarVenta();
		no: borrarCarrito();
		
//generar Venta
	abrirArchivo(venta);
	escribirArchivo(venta);
	cerrarArchivo();
	
	abrirArchivo(productos) -> cargar el nuevo archivo con la modificacion de stock 
	cerrarArchivo();
	

//calcularStockValorizado 
	recorrer[]
	
	subTotalCosto = precioCosto * cantidad;
	subTotalVenta = precioVenta * cantidad;
	
	acumuladorCosto = acumuladorCosto + subTotalCosto; 
	acumuladorVenta = acumuladorVenta + subTotalVenta; 
	
	totalGanancia = acumuladorVenta - acumuladorCosto;
	

// mostrarProductosOrdenados(nombre o rubro): ordenamiento
	imprima el arreglo ordenado 
*/



	
