/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.
*/

#include <iostream>

using namespace std;

int main()
{
    int suma_pares = 0;

    // Sumar los números pares
    for (int i = 100; i <= 200; ++i)
    {
        if (i % 2 == 0)
        { // Si el número es par
            suma_pares += i;
        }
    }

    cout << "La suma de los numeros pares entre 100 y 200 es: " << suma_pares << endl;

    return 0;
}
