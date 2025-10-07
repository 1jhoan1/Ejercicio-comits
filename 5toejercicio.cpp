// Ejercicio 37
#include <iostream>
using namespace std;

int main() {
    float km;
    int dias;
    float precio, total;

    cout << "Digite la distancia en km: ";
    cin >> km;
    cout << "Digite los dias de estancia: ";
    cin >> dias;

    precio = km * 5000;

    if (precio < 100000)
        precio = 100000;

    if (km > 1000 && dias > 7)
        total = precio - (precio * 0.15);
    else
        total = precio;

    cout << "El valor del pasaje es: $" << total;

    return 0;
}
