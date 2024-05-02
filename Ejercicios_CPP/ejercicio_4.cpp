#include <iostream>

using namespace std;

int main() {
    const int num_estudiantes = 10;
    float notas[num_estudiantes];
    float suma_notas = 0;

    cout << "Ingrese las notas de los " << num_estudiantes << " estudiantes (0-100):" << endl;
    for (int i = 0; i < num_estudiantes; ++i) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma_notas += notas[i];
    }

    //promedio general 
    float promedio_general = suma_notas / num_estudiantes;
    cout << "El promedio general de la seccion es: " << promedio_general << endl;

    return 0;
}
