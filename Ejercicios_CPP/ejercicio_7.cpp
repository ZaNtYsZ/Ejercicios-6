/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include<iostream>

using namespace std;

int main() {
    int arreglo1[10];
    int arreglo2[10];
    int arreglo3[10]; 

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo2[i];
    }

    // Calcular la suma de los vectores y almacenar el resultado en el tercer vector
    for (int i = 0; i < 5; ++i) {
        arreglo3[i] = arreglo1[i] + arreglo2[i];
    }

    // Mostrar el tercer vector, que contiene la suma de los dos vectores 
    cout << "El tercer vector, que contiene la suma de los dos vectores, es:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arreglo3[i] << " ";
    }
    cout << endl;

    return 0;
}
