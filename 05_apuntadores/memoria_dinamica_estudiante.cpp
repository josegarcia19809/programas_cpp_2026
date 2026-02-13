//
// Created by Jose Garcia on 13/02/26.
//

// Imagina que estás haciendo un programa para una escuela.
// La edad del estudiante no se conoce hasta que el usuario la ingresa, entonces usamos
// memoria dinámica para guardarla en tiempo de ejecución.

#include <iostream>
using namespace std;

int main() {
    // Declarar un apuntador para la edad
    int *edad;

    // Reservar memoria dinámica para un entero
    edad = new int;

    cout << "Ingresa la edad del estudiante: ";
    cin >> *edad;

    cout << "La edad guardada es: " << *edad << endl;

    // Liberar la memoria
    delete edad;

    return 0;
}
