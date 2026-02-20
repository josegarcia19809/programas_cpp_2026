//
// Created by Jose Garcia on 20/02/26.
// Programa que calcula la circunferencia de un círculo con diametro 10

#include <iostream>
using namespace std;

int main() {
    // Constantes
    const double PI = 3.14159;
    const double DIAMETRO = 10.0;

    // Variables
    double circunferencia = 0.0;

    circunferencia = PI * DIAMETRO;

    // Mostrar el resultado
    cout << "La circunferencia es: " << circunferencia << endl;

    return 0;
}
