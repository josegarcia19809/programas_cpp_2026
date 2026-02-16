// Elaborado por José L García
// Fecha: 16 febrero de 2026
// Programa para calcular el total de un producto
#include <iostream>
using namespace std;

int main() {
    double precio;
    int cantidad;
    double total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingresa la cantidad comprada: ";
    cin >> cantidad;

    total = precio * cantidad;
    cout << "El total a pagar es: " << total << endl;

    return 0;
}
