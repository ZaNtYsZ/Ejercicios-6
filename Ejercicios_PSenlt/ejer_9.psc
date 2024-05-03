Proceso ejer_9
    Definir matriz1 Como Entero[3][3];
    Definir matriz2 Como Entero[3][3];
    Definir matriz3 Como Entero[3][3];
    Definir f, c Como Entero;
	
    Escribir "Matriz 1...";
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir "Para la fila "; f + 1; " y la columna "; c + 1; " El numero es: ";
            Leer matriz1[f][c];
        FinPara
        Escribir "";
    FinPara
    Escribir "";
	
    Escribir "Matriz 2...";
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir "Para la fila "; f + 1; " y la columna "; c + 1; " El numero es: ";
            Leer matriz2[f][c];
        FinPara
        Escribir "";
    FinPara
    Escribir "";
	
    Escribir "Matriz 1...";
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir matriz1[f][c];
            Escribir "\t";
        FinPara
        Escribir "";
    FinPara
	
    Escribir "Matriz 2...";
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir matriz2[f][c];
            Escribir "\t";
        FinPara
        Escribir "";
    FinPara
	
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            matriz3[f][c] <- (matriz1[f][c]) * (matriz2[f][c]);
        FinPara
    FinPara
	
    Escribir "Matriz Multiplicacion Resultado...";
    Para f <- 0 Hasta 2 Con Paso 1 Hacer
        Para c <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir matriz3[f][c];
            Escribir "\t";
        FinPara
        Escribir "";
    FinPara
FinProceso
