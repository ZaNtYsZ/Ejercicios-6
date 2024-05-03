#include <iostream>
using namespace std;

int main() {
    int n, vector1[10], vector2[10], productoPunto = 0;

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

    // Cálculo del producto punto
    for (int i = 0; i < n; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    // Impresión del resultado
    cout << "El producto punto de los vectores es: " << productoPunto << endl;

    return 0;
}