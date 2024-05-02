#include<iostream>

using namespace std;

int main() {
    // Imprimir los números impares en orden descendente desde 100 hasta 1
    cout << "Numeros impares entre 1 y 100:" << endl;
    for (int i = 100; i >= 1; i--) {
        if (i % 2 != 0) {
          cout << i << endl;
        }
    }
    return 0;
}