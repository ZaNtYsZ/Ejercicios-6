Proceso ejer_10
    Definir matriz1 Como Entero[3][3];
    Definir i, j Como Entero;
	
    Para i <- 0 Hasta 2 Con Paso 1 Hacer;
        Para j <- 0 Hasta 2 Con Paso 1 Hacer;
            Escribir "Matriz 1";
            Escribir "Ingresa un numero, fila "; i+1; ", columna "; j+1; ":";
            Leer matriz1[i][j];
        FinPara
    FinPara
	
    Para i <- 0 Hasta 2 Con Paso 1 Hacer
        Para j <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir matriz1[i][j];
        FinPara
        Escribir "";
    FinPara
    Escribir "";
	
    Para i <- 0 Hasta 2 Con Paso 1 Hacer
        Para j <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir matriz1[j][i];
        FinPara
        Escribir "";
    FinPara
FinProceso

