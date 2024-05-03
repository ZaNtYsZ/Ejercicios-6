/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Introduce un número natural: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "La suma es: " << sum;
    return 0;
}