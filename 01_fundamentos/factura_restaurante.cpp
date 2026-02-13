// Elaborado por José L García
// Fecha: 13 febrero de 2026
// Programa para calcular el total de una factura de restaurante
#include <iostream>
using namespace std;

int main() {
    double costoComida = 88.00;
    int porcentajePropina = 20;
    double propina = costoComida * (porcentajePropina / 100.0);
    double total = costoComida + propina;

    cout << "Costo de la comida: $" << costoComida << endl;
    cout << "Propina: $" << propina << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
