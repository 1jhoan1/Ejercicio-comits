// Ejercicio 36
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    int suma = a + b;

    if (suma > c)
        cout << "La suma del primero y segundo es mayor que el tercero";
    else if (suma < c)
        cout << "La suma del primero y segundo es menor que el tercero";
    else
        cout << "La suma es igual al tercero";

    return 0;
}
