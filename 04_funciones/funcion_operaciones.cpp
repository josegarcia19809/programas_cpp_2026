//
// Created by Jose Garcia on 13/05/26.
// Programa para varias operaciones con funciones
#include <iostream>
using namespace std;

void sumar(double numero1, double numero2) {
    double suma = numero1 + numero2;
    cout << "La suma es " << suma << endl;
}

int main() {
    sumar(5.0, 7.0);
    sumar(2.5, 3.5);
    sumar(3.0, 2.0);

    return 0;
}
