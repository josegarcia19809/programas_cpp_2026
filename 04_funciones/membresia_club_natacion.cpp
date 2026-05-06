//
// Created by Jose Garcia on 06/05/26.
// Programa para mostrar datos de membresía club de natación
#include <iostream>
using namespace std;

void mostrarNombre();

void mostrarTarifas();

void verFechaRegistro();

void verFechaCaducidad();

void imprimirLinea();

int main() {
    cout << "Club de natación 🌊" << endl;
    mostrarNombre();
    imprimirLinea();
    mostrarTarifas();
    imprimirLinea();
    verFechaRegistro();
    imprimirLinea();
    verFechaCaducidad();
    return 0;
}

void mostrarNombre() {
    cout << "Nombre: Monserrat" << endl;
}

void mostrarTarifas() {
    cout << "Tarifas" << endl;
    cout << "Niños: $300.00" << endl;
    cout << "Jovenes: $600.00" << endl;
    cout << "Adultos: $800.00" << endl;
}

void verFechaRegistro() {
    cout << "Fecha de registro" << endl;
    cout << "06 de mayo de 2026" << endl;
}

void verFechaCaducidad() {
    cout << "Fecha de caducidad" << endl;
    cout << "06 de agosto de 2026" << endl;
}

void imprimirLinea() {
    cout << "_______________________________________________" << endl;
}
