//
// Created by Jose Garcia on 20/02/26.
// Este programa calcula el total de ventas de un estadio

#include <iostream>
#include <iomanip> // Para usar fixed y setprecision

using namespace std;

int main() {
    cout << "🎟️🏟️ Asientos del estadio – ¡Vamos al partido! ⚽🔥" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    // Definir los precios de los boletos
    const double PRECIO_BOLETO_A = 15.00;
    const double PRECIO_BOLETO_B = 12.00;
    const double PRECIO_BOLETO_C = 9.00;

    // Variables para guardar cantidad de boletos vendidos de cada clase
    int boletosVendidosA = 0;
    int boletosVendidosB = 0;
    int boletosVendidosC = 0;

    // Pedir al usuario la cantidad de boletos vendidos de cada clase
    cout << "Dame cantidad de boletos vendidos" << endl;
    cout << "De clase A: ";
    cin >> boletosVendidosA;

    cout << "De clase B: ";
    cin >> boletosVendidosB;

    cout << "De clase C: ";
    cin >> boletosVendidosC;

    // Calcular los ingresos totales (Precio de cada tipo * cantidad)
    double ingresosTotales = (PRECIO_BOLETO_A * boletosVendidosA) +
                             (PRECIO_BOLETO_B * boletosVendidosB) +
                             (PRECIO_BOLETO_C * boletosVendidosC);

    // Mostrar los ingresos totales con formato de moneda
    cout << "Ingresos totales: $" << fixed << setprecision(2)
            << ingresosTotales << endl;
    return 0;
}
