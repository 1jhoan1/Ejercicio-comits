// Ejercicio 42
#include <iostream>
using namespace std;

int main() {
    int num, digitos = 0;
    cout << "Digite un numero menor a 100000: ";
    cin >> num;

    if (num == 0)
        digitos = 1;
    else {
        while (num > 0) {
            num = num / 10;
            digitos++;
        }
    }

    cout << "Tiene " << digitos << " digitos";

    return 0;
}
