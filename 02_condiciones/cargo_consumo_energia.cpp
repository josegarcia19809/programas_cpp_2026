//
// Created by Jose Garcia on 25/02/26.
//

#include <iostream>
using namespace std;

int main() {
    // Realiza un programa que pida los kilowatts consumidos en el mes y el costo por kilowatt.

    double kilowattsConsumidos;
    double costoPorKilowatt;
    double subTotal;
    double pagoTotal;

    const double CARGO_FIJO = 120.00;

    cout << "Consumo de energia electrica ⚡" << endl;

    cout << "Dime los kilowatts consumidos en el mes: ";
    cin >> kilowattsConsumidos;

    cout << "Dime el costo por kilowatt: ";
    cin >> costoPorKilowatt;

    subTotal = kilowattsConsumidos * costoPorKilowatt;
    pagoTotal = subTotal + CARGO_FIJO;

    if (pagoTotal > 2500) {
        cout << "Alto consumo de energia" << endl;
    }

    cout << "Pago por consumo: $" << subTotal << " pesos" << endl;
    cout << "Cargo fijo: $" << CARGO_FIJO << " pesos" << endl;
    cout << "Total a pagar: $" << pagoTotal << " pesos" << endl;

    return 0;
}
