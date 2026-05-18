//
// Created by Jose Garcia on 18/05/26.
// Programa para calcular precio combo
#include <iostream>
using namespace std;

void menu() {
    cout << "Tamaños de combos" << endl;
    cout << "1.  🍔Combo pequeño -> +20 pesos" << endl;
    cout << "2. Combo mediano -> +40 pesos" << endl;
    cout << "3. Combo grande -> +60 pesos" << endl;
    cout << "4. Combo extra grande -> +80 pesos" << endl;
    cout << "Elige: ";
}

void calcularPrecioCombo(double precioBase, int tamanoCombo) {
    double extra = 0;
    switch (tamanoCombo) {
        case 1:
            extra = 20.0;
            break;
        case 2:
            extra = 40.0;
            break;
        case 3:
            extra = 60.0;
            break;
        case 4:
            extra = 80.0;
            break;
        default:
            cout << "el tamaño de combo no valido";
            return;
            break;
    }
    double precioFinal = precioBase + extra;
    cout << "El precio final es de: " << precioFinal << " pesos " << endl;
}

int main() {

    int tamanio = 0;
    double precio = 0.0;

    cout << "Dame el precio del combo: ";
    cin >> precio;

    menu();
    cin >> tamanio;

    calcularPrecioCombo(precio, tamanio);
    return 0;
}
