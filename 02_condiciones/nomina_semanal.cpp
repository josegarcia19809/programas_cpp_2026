//
// Created by Jose Garcia on 09/03/26.
// Programa para calcular un pago de nómina

#include <iostream>
using namespace std;

int main() {
    char nombre[20];
    double horas, tarifa, impuestos, descuento,
            salarioBruto = 0.0,
            salarioNeto, salarioExtra = 0, horasExtras = 0;

    cout << "Programa para calcular un pago de nómina" << endl;

    cout << "Dame tu nombre: ";
    cin >> nombre;

    cout << "Dame horas trabajadas: ";
    cin >> horas;

    cout << "Dame la tarifa por hora: ";
    cin >> tarifa;

    if (horas <= 35) {
        salarioBruto = horas * tarifa;
    } else {
        horasExtras = horas - 35;
        salarioBruto = 35 * tarifa;
        salarioExtra = horasExtras * (tarifa * 1.5);
        cout << "Horas extra: " << horasExtras << endl;
        cout << "Salario extra: " << salarioExtra << endl;
        salarioBruto = salarioBruto + salarioExtra;
        cout << "Salario bruto sin impuestos: " << salarioBruto << endl;
    }

    // Calcular los impuestos
    if (salarioBruto <= 2000) {
        descuento = 0;
    } else if (salarioBruto <= 2220) {
        descuento = .20;
    } else {
        descuento = .30;
    }
    impuestos = salarioBruto * descuento;

    // Calcular el salario neto y mostrar
    salarioNeto = salarioBruto - impuestos;
    cout << "Nombre: " << nombre << endl;
    cout << "Horas trabajadas: " << horas << endl;
    cout << "Tarifa: " << tarifa << endl;
    cout << "Impuestos: " << impuestos << endl;
    cout << "Salario neto: " << salarioNeto << endl;
    return 0;
}
