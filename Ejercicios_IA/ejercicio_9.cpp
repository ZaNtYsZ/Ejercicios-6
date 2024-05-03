#include <iostream>
using namespace std;

// Función para ingresar los elementos de una matriz
void ingresarMatriz(int matriz[][10], int& filas, int& columnas) {
    cout << "Ingrese el número de filas hasta 10: ";
    cin >> filas;
    cout << "Ingrese el número de columnas hasta 10: ";
    cin >> columnas;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para multiplicar dos matrices
void multiplicarMatrices(int matriz1[][10], int matriz2[][10], int matrizResultante[][10], int filas1, int columnas1, int filas2, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matrizResultante[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                matrizResultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
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
    int matriz1[10][10], matriz2[10][10], matrizResultante[10][10];
    int filas1, columnas1, filas2, columnas2;

    // Ingresar los elementos de la primera matriz
    ingresarMatriz(matriz1, filas1, columnas1);

    // Ingresar los elementos de la segunda matriz
    ingresarMatriz(matriz2, filas2, columnas2);

    // Verificar si las dimensiones son compatibles para la multiplicación
    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación..." << endl;
    } else {
        // Realizar la multiplicación de matrices
        multiplicarMatrices(matriz1, matriz2, matrizResultante, filas1, columnas1, filas2, columnas2);

        // Mostrar la matriz resultante
        cout << "Matriz resultante:" << endl;
        mostrarMatriz(matrizResultante, filas1, columnas2);
    }

    return 0;
}