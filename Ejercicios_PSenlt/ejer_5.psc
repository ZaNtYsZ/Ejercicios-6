Proceso ejer_5
    Definir num_estudiantes Como Entero;
    num_estudiantes <- 8;
    Definir notas[num_estudiantes] Como Entero;
    Definir suma_notas, aprobados, reprobados Como Entero;
    Definir i Como Entero;
    Definir promedio_general Como Real;
    suma_notas <- 0;
    aprobados <- 0;
    reprobados <- 0;
	
    Escribir "Ingrese las notas de los ", num_estudiantes, " estudiantes (1-100):";
    Para i <- 0 Hasta num_estudiantes - 1 Con Paso 1 Hacer
        Escribir "Nota del estudiante ", i + 1, ": ";
        Leer notas[i];
        suma_notas <- suma_notas + notas[i];
		
        // Verificar si el estudiante aprobó o reprobó
        Si notas[i] >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi;
    FinPara;
	
    // Calcular el promedio general
    promedio_general <- suma_notas / num_estudiantes;
	
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio_general;
	
FinProceso.
