#include <iostream>
using namespace std;

int main() {
    int notas[8];
    int aprobados = 0;
    int reprobados = 0;
    int suma = 0;

    // Ingresar las notas de los 8 estudiantes
    for (int i = 0; i < 8; i++) {
        cout << "Ingresa la nota del estudiante " << i+1 << ": ";
        cin >> notas[i];

        // Verificar si el estudiante está aprobado o reprobado
        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }

        // Sumar la nota al total
        suma += notas[i];
    }

    // Calcular y mostrar el promedio general
    double promedio = static_cast<double>(suma) / 8;
    cout << "Promedio general: " << promedio << endl;

    // Mostrar la cantidad de alumnos aprobados y reprobados
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;

    return 0;
}