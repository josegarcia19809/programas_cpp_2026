//
// Created by Jose Garcia on 29/04/26.
//

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int empleados;
    cout << "¿Cuántos empleados son? ";
    cin >> empleados;

    vector<int> horas(empleados);

    double pagoHora;

    // Pedir las horas trabajadas
    cout << "Dame horas trabajadas de los " << empleados
            << " empleados" << endl;
    for (int i = 0; i < empleados; i++) {
        cout << "Empleado #" << (i + 1) << ": ";
        cin >> horas[i];
    }

    cout << "Dime el pago por hora: ";
    cin >> pagoHora;

    cout << "\nPago de los empleados de Megan" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < empleados; i++) {
        double pagoTotal = horas[i] * pagoHora;
        cout << "Pago del empleado " << (i + 1) << ": $"
                << pagoTotal << endl;
    }

    return 0;
}
