Proceso promedio_general
    Definir num_estudiantes Como Entero;
    num_estudiantes <- 10;
    Definir notas, num_estudiantes Como Real;
    Definir suma_notas, promedio_general Como Real;
    suma_notas <- 0;
	
    Escribir "Ingrese las notas de los ", num_estudiantes, " estudiantes (1-100):";
    Para i <- 0 Hasta num_estudiantes - 1 Con Paso 1 Hacer
        Escribir "Nota del estudiante ", i + 1, ": ";
        Leer notas[i];
        suma_notas <- suma_notas + notas[i];
    FinPara;
	
    // Calcular el promedio general 
    promedio_general <- suma_notas / num_estudiantes;
    Escribir "El promedio general de la seccion es: ", promedio_general;
	
FinProceso
