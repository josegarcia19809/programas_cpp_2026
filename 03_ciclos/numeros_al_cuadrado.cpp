//
// Created by Jose Garcia on 18/03/26.
// Programa para mostrar tabla de números al cuadrado
#include <iostream>
using namespace std;

int main() {
    const int MINIMO = 1;
    const int MAXIMO = 10;
    cout << "Número\t\tCuadrado" << endl;
    cout << "--------------------------" << endl;
    for (int numero = MINIMO; numero <= MAXIMO; numero++) {
        int cuadrado = numero * numero;
        cout << numero << "\t\t\t" << cuadrado << endl;
    }

    return 0;
}
