#include <iostream>
using namespace std;

int main() {
    int n, vector1[10], vector2[10], suma[10];

    cout << "Ingrese la longitud de los vectores (hasta 10): ";
    cin >> n;

    // Carga del primer vector
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor de la componente " << i << " del vector 1: ";
        cin >> vector1[i];
    }

    // Carga del segundo vector
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor de la componente " << i << " del vector 2: ";
        cin >> vector2[i];
    }

    // Suma de los vectores
    for (int i = 0; i < n; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

    // Impresión del vector suma
    cout << "La suma de los vectores es: ";
    for (int i = 0; i < n; i++) {
        cout << suma[i] << " ";
    }
    cout << endl;

    return 0;
}