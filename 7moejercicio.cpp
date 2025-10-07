// Ejercicio 39
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2;
    cout << "Digite a, b y c: ";
    cin >> a >> b >> c;

    float d = b * b - 4 * a * c;

    if (d < 0)
        cout << "No hay soluciones reales";
    else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }

    return 0;
}
