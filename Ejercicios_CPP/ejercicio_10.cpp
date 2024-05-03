/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include<iostream>

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    cout << "Ingrese los elementos de la matriz (3x3):" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }

    //transposición de la matriz
    int matriz_transpuesta[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz_transpuesta[j][i] = matriz[i][j];
        }
    }

    //matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz_transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
