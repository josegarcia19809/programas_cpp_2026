//
// Created by Jose Garcia on 15/02/26.
//

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double costoBoletoAvion;
    double costoHotelPorNoche;
    int numeroNoches;
    float gastoDiarioComida;
    double gastoTransporteLocal;
    double gastosExtras;

    double costoHospedajeTotal;
    double costoComidaTotal;
    double costoTotalViaje;

    // Solicitar datos al usuario
    cout << "✈ PRESUPUESTO PARA UN VIAJE 🧳" << endl;

    cout << "Ingrese el costo del boleto de avion: ";
    cin >> costoBoletoAvion;

    cout << "Ingrese el costo del hotel por noche: ";
    cin >> costoHotelPorNoche;

    cout << "Ingrese el numero de noches: ";
    cin >> numeroNoches;

    cout << "Ingrese el gasto diario estimado en comida: ";
    cin >> gastoDiarioComida;

    cout << "Ingrese el gasto total en transporte local: ";
    cin >> gastoTransporteLocal;

    cout << "Ingrese los gastos extras: ";
    cin >> gastosExtras;

    // Cálculos
    costoHospedajeTotal = costoHotelPorNoche * numeroNoches;
    costoComidaTotal = gastoDiarioComida * numeroNoches;

    costoTotalViaje = costoBoletoAvion +
                      costoHospedajeTotal +
                      costoComidaTotal +
                      gastoTransporteLocal +
                      gastosExtras;

    // Mostrar resultados
    cout << "\n📊 RESULTADOS DEL VIAJE:" << endl;
    cout << "Costo total de hospedaje: $" << costoHospedajeTotal << endl;
    cout << "Costo total de comida: $" << costoComidaTotal << endl;
    cout << "Costo total del viaje: $" << costoTotalViaje << endl;

    return 0;
}
