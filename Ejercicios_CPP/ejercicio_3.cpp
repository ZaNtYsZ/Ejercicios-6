/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>

using namespace std;

int main() {
    int suma_cuadrados = 0;

    // Calcular la suma de los cuadrados 
    for (int i = 1; i <= 100; ++i) {
        suma_cuadrados += i * i;
    }

    cout << "La suma de los cuadrados entre 1 y 100 es: " << suma_cuadrados << endl;

    return 0;
}
