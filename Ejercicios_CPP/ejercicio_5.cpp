/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
nota minima 70*/

#include <iostream>

using namespace std;

int main() {
    const int num_estudiantes = 8;
    int notas[num_estudiantes];
    int suma_notas = 0;
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese las notas de los " << num_estudiantes << " estudiantes (1-100):" << endl;
    for (int i = 0; i < num_estudiantes; ++i) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma_notas += notas[i];

        // Verificar si el estudiante aprobó o reprobó
        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    // Calcular el promedio general
    float promedio_general = static_cast<float>(suma_notas) / num_estudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio_general << endl;

    return 0;
}
