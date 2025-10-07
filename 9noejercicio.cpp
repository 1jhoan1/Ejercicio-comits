// Ejercicio 41
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite un numero entre 0 y 10: ";
    cin >> num;

    if (num == 0) cout << "CERO";
    else if (num == 1) cout << "UNO";
    else if (num == 2) cout << "DOS";
    else if (num == 3) cout << "TRES";
    else if (num == 4) cout << "CUATRO";
    else if (num == 5) cout << "CINCO";
    else if (num == 6) cout << "SEIS";
    else if (num == 7) cout << "SIETE";
    else if (num == 8) cout << "OCHO";
    else if (num == 9) cout << "NUEVE";
    else if (num == 10) cout << "DIEZ";
    else cout << "Fuera de rango";

    return 0;
}
