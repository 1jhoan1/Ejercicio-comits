// Ejercicio 35
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    int mayor, menor;

    if (a > b && a > c)
        mayor = a;
    else if (b > c)
        mayor = b;
    else
        mayor = c;

    if (a < b && a < c)
        menor = a;
    else if (b < c)
        menor = b;
    else
        menor = c;

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
