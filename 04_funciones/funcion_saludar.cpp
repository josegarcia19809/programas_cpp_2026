//
// Created by Jose Garcia on 13/05/26.
#include <iostream>
#include <string>
using namespace std;

void saludar(string nombre) {
    cout << "Hola amigo(a) " << nombre << endl;
}

void imprimirLinea() {
    cout << "----------------------------------------------------------" << endl;
}

int main() {
    saludar("Jose");
    saludar("Maria");
    saludar("Rox");
    saludar("Fabiola");
    imprimirLinea();
    return 0;
}
