Proceso ejer_1
    Definir  n, suma,i Como Entero;
    suma<-0;
    Escribir "Ingrese un numero natural: ";
    Leer n;
	
    // Calcular la suma de los números naturales
    Para i <- 1 hasta n hacer
        suma <- suma + i;
    FinPara;
	
    Escribir "La suma de los numeros naturales desde 1 hasta ", n, " es: ", suma;
	
FinProceso
