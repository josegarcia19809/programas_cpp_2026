//
// Created by Jose Garcia on 18/05/26.
// Programa para calcular los costos de mantenimiento de un automovil
#include <iostream>
using namespace std;

void calcularGastosIncurridos(double mensualidad, double seguro, double gasolina, double aceite,
                              double llantas, double mantenimiento) {
    double costoTotalMensual = mensualidad + seguro + gasolina + aceite + llantas + mantenimiento;
    double costoTotalAnual = costoTotalMensual * 12;

    cout << "El costo mensual es: " << costoTotalMensual << endl;
    cout << "El costo total anual es: " << costoTotalAnual << endl;
}

int main() {
    cout << "Calculando gastos del automovil" << endl;
    double mensualidad, seguro, gasolina, aceite, llantas, mantenimiento;

    cout << "Dame gastos de mensualidad: ";
    cin >> mensualidad;

    cout << "Dame gastos de seguro: ";
    cin >> seguro;

    cout << "Dame gastos de gasolina: ";
    cin >> gasolina;

    cout << "Dame gastos de aceite: ";
    cin >> aceite;

    cout << "Dame gastos de llantas: ";
    cin >> llantas;

    cout << "Dame gastos de mantenimiento: ";
    cin >> mantenimiento;

    calcularGastosIncurridos(mensualidad, seguro, gasolina, aceite, llantas, mantenimiento);

    return 0;
}
