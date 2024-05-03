#include <iostream>
using namespace std;

// Función para ingresar los elementos de una matriz
void ingresarMatriz(int matriz[][10], int& filas, int& columnas) {
    cout << "Ingrese el número de filas (hasta 10): ";
    cin >> filas;
    cout << "Ingrese el número de columnas (hasta 10): ";
    cin >> columnas;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para transponer una matriz
void transponerMatriz(int matriz[][10], int matrizTranspuesta[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }
}

// Función para mostrar una matriz
void mostrarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[10][10], matrizTranspuesta[10][10];
    int filas, columnas;

    // Ingresar los elementos de la matriz
    ingresarMatriz(matriz, filas, columnas);

    // Transponer la matriz
    transponerMatriz(matriz, matrizTranspuesta, filas, columnas);

    // Mostrar la matriz transpuesta
    cout << "Matriz transpuesta:" << endl;
    mostrarMatriz(matrizTranspuesta, columnas, filas);

    return 0;
}