//
// Created by Jose Garcia on 06/03/26.
//

#include <iostream>
using namespace std;

int main() {
    double compra;
    double descuento;
    cout << "Descuento en una hamburgueseria" << endl;
    cout << "Cual es el total de su compra? \n";
    cin >> compra;
    if (compra < 100) {
        cout << "Sin descuento" << endl;
    } else if (compra < 199) {
        cout << "Descuento del 5%" << endl;
        descuento = compra - ((compra / 100.0) * 5);
        cout << "Al final pagaras: " << descuento << endl;
    } else if (compra < 299) {
        cout << "Descuento del 10%" << endl;
        descuento = compra - ((compra / 100.0) * 10);
        cout << "Al final pagaras: " << descuento << endl;
    } else {
        cout << "Descuento del 15%" << endl;
        descuento = compra - ((compra / 100.0) * 15);
        cout << "Al final pagaras: " << descuento << endl;
    }
    return 0;
}
