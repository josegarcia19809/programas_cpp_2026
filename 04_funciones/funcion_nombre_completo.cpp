//
// Created by Jose Garcia on 13/05/26.
//

#include <iostream>
#include <string>
using namespace std;


void mostrarNombreCompleto(string nombre, string apellidoP, string apellidoM) {
    cout << apellidoP << " " << apellidoM << ", " << nombre << endl;
}

void imprimirLinea() {
    cout << "--------------------------------" << endl;
}

int main() {
    mostrarNombreCompleto("Jose Luis", "Garcia", "Morales");
    imprimirLinea();
    mostrarNombreCompleto("Mariana", "Garcia", "Monroy");
    return 0;
}
