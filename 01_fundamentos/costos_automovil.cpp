//
// Created by Jose Garcia on 15/02/26.
//

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double pagoPrestamo;
    double seguroAuto;
    double gastoGasolina;
    double gastoAceite;
    double gastoLlantas;
    double gastoMantenimiento;

    double costoMensualTotal;
    double costoAnualTotal;

    // Solicitar datos al usuario
    cout << "🚗 COSTOS DE MANTENIMIENTO DEL AUTOMOVIL 💰" << endl;

    cout << "Ingrese el pago mensual del prestamo: ";
    cin >> pagoPrestamo;

    cout << "Ingrese el costo del seguro del auto: ";
    cin >> seguroAuto;

    cout << "Ingrese el gasto mensual en gasolina: ";
    cin >> gastoGasolina;

    cout << "Ingrese el gasto mensual en aceite: ";
    cin >> gastoAceite;

    cout << "Ingrese el gasto mensual en llantas: ";
    cin >> gastoLlantas;

    cout << "Ingrese el gasto mensual en mantenimiento: ";
    cin >> gastoMantenimiento;

    // Cálculo del costo mensual total
    costoMensualTotal = pagoPrestamo + seguroAuto + gastoGasolina +
                        gastoAceite + gastoLlantas + gastoMantenimiento;

    // Cálculo del costo anual total
    costoAnualTotal = costoMensualTotal * 12;

    // Mostrar resultados
    cout << "\n📊 RESULTADOS:" << endl;
    cout << "Costo mensual total: $" << costoMensualTotal << endl;
    cout << "Costo anual total: $" << costoAnualTotal << endl;

    return 0;
}
