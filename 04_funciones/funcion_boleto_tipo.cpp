//
// Created by Jose Garcia on 27/05/26.
// Programa para calcular precio de tu boleto según el servicio
#include <iostream>
using namespace std;

void calcularPrecioFinal(double precioBase, int tipoServicio) {
    double ajuste = 0.0;
    switch (tipoServicio) {
        case 1:
            ajuste = 0.0;
            break;
        case 2:
            ajuste = 50.0;
            break;
        case 3:
            ajuste = 100.0;
            break;
        case 4:
            ajuste = 150.0;
            break;
        default:
            cout << "Opción no válida" << endl;
            return;
            break;
    }
    double precioFinal = precioBase + ajuste;
    cout << "El precio final es de " << precioFinal << " pesos" << endl;
}

void menu() {
    cout << "Tipos de servicio" << endl;
    cout << "1. Servicio básico -> Sin cambios en el precio" << endl;
    cout << "2. Servicio cómodo -> +50 pesos" << endl;
    cout << "3. Servicio ejecutivo -> +100 pesos" << endl;
    cout << "4. Servicio VIP -> +150 pesos" << endl;
    cout << "Elige: ";
}

void pedirDatos() {
    cout << "-----------------------------------------------" << endl;
    cout << "Precio del boleto :)" << endl;
    double precio;
    int servicio;

    cout << "Dame el precio del boleto: ";
    cin >> precio;

    menu();
    cin >> servicio;

    calcularPrecioFinal(precio, servicio);
}

int main() {
    char respuesta = 's';
    while (respuesta == 's' || respuesta == 'S') {
        pedirDatos();
        cout << "Desea ingresar otro dato? (s/n): ";
        cin >> respuesta;
    }
    return 0;
}
