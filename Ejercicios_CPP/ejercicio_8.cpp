/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.
*/

#include <iostream>

using namespace std;

int main() {
    //tamaño de los vectores
    const int longitud = 5;

    int vector1[longitud];
    int vector2[longitud];

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular el producto punto
    int producto_punto = 0;
    for (int i = 0; i < longitud; ++i) {
        producto_punto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los dos vectores es: " << producto_punto << endl;

    return 0;
}
