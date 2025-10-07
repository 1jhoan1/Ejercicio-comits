// Ejercicio 40
#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, clave;

    cout << "Usuario: ";
    cin >> usuario;
    cout << "Contrasena: ";
    cin >> clave;

    if (usuario == "carlos" && clave == "1234")
        cout << "Acceso permitido";
    else
        cout << "Acceso denegado";

    return 0;
}
