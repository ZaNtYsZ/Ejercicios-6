#include <iostream>

using namespace std;

int main() {
    const int num_estudiantes = 8;
    int notas[num_estudiantes];
    int suma_notas = 0;
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese las notas de los " << num_estudiantes << " estudiantes:" << endl;
    for (int i = 0; i < num_estudiantes; ++i) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma_notas += notas[i];
    }

    // Calcular la cantidad de aprobados y reprobados
    for (int i = 0; i < num_estudiantes; ++i) {
        if (notas[i] >= 60) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    float promedio_general = static_cast<float>(suma_notas) / num_estudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio_general << endl;

    return 0;
}
