Proceso ejer_8
    // Tamaño de los vectores
    Definir longitud Como Entero;
    longitud <- 5;
	
    Definir vector1[longitud], vector2[longitud] Como Entero;
	
    Escribir "Ingrese los elementos del primer vector:";
    Para i <- 0 Hasta longitud - 1 Con Paso 1 Hacer
        Escribir "Elemento ", i + 1, ": ";
        Leer vector1[i];
    FinPara
	
    Escribir "Ingrese los elementos del segundo vector:";
    Para i <- 0 Hasta longitud - 1 Con Paso 1 Hacer
        Escribir "Elemento ", i + 1, ": ";
        Leer vector2[i];
    FinPara
	
    // Calcular el producto punto
    Definir producto_punto Como Entero;
    producto_punto <- 0;
    Para i <- 0 Hasta longitud - 1 Con Paso 1 Hacer
        producto_punto <- producto_punto + (vector1[i] * vector2[i]);
    FinPara
	
    Escribir "El producto punto de los dos vectores es: ", producto_punto;
	
FinProceso
