//
// Created by Jose Garcia on 09/04/26.
//

#include <iostream>
using namespace std;

int main() {
    string usuario, password;

    cout << "Usuario: ";
    cin >> usuario;

    cout << "Password: ";
    cin >> password;

    if (usuario == "admin" && password == "1234") {
        cout << "Acceso permitido 🔓" << endl;
    } else {
        cout << "Acceso denegado 🚫" << endl;
    }

    return 0;
}
