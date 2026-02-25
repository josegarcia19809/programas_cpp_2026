//
// Created by Jose Garcia on 25/02/26.
//
#include <iostream>
using namespace std;

int main() {
    // Realiza un programa que pida el peso de un paquete en kilogramos y el costo por kilogramo.

    float peso;
    float costoPorKg;
    float costoTotal;
    float cargoAdicional;
    float totalFinal;

    cout << "Envio de un paquete" << endl;

    cout << "Ingresa el peso maximo de un paquete en kilogramos: ";
    cin >> peso;

    cout << "Ingresa el costo por kilogramo: ";
    cin >> costoPorKg;

    costoTotal = peso * costoPorKg;
    cargoAdicional = costoTotal * 0.10;
    totalFinal = costoTotal + cargoAdicional;

    if (totalFinal > 1500) {
        cout << "Envio costoso" << endl;
    }

    cout << "Costo total: $" << costoTotal << endl;
    cout << "Cargo adicional: $" << cargoAdicional << endl;
    cout << "Total final: $" << totalFinal << endl;

    return 0;
}
