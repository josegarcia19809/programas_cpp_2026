// Elaborado por José L García
// Fecha: 11 febrero de 2026
// Programa para ver si un empleado recibe un bono por sus ventas
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float bono = 0.0f;
    float ventas;

    cout << "Dame el total de ventas de este día: ";
    cin >> ventas;

    if (ventas > 50000) {
        bono = 500.00;
    }

    cout << "Tu bono es de $" << fixed << setprecision(2) << bono << endl;

    return 0;
}
