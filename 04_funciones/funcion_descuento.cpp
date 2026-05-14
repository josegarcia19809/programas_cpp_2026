//
// Created by Jose Garcia on 13/05/26.
// Programa para calcular un descuento
#include <iostream>
#include <iomanip>
using namespace std;

void calcularDescuento(double precio, int porcentajeDescuento) {
    double descuento = precio * (porcentajeDescuento / 100.0);
    cout << "El descuento es de $" << fixed << setprecision(2) << descuento << " pesos" << endl;
}

int main() {
    cout << "Programa para calcular descuentos" << endl;

    double precio;
    int porcentajeDescuento;

    cout << "Dame el precio del producto: ";
    cin >> precio;

    cout << "Dame el porcentaje de descuento: ";
    cin >> porcentajeDescuento;

    calcularDescuento(precio, porcentajeDescuento);
    return 0;
}
