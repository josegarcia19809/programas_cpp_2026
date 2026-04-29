//
// Created by Jose Garcia on 29/04/26.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<double> litros(7);

    double sumaLitros = 0;
    cout << "Dime cantidad de litros consumidos" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Día #" << (i + 1) <<": ";
        cin >> litros[i];
        sumaLitros += litros[i];
    }

    // Consumo total y consumo promedio
    cout << fixed << setprecision(2);
    double consumoPromedio = sumaLitros / 7.0;
    cout << "Consumo total: " << sumaLitros << " litros" << endl;
    cout << "Consumo promedio: " << consumoPromedio << " litros" << endl;
}
