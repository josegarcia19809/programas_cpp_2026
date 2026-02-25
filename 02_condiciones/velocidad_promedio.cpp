// Programa para calcular la velocidad promedio de un vehículo
#include <iostream>
using namespace std;

int main() {
    cout << "Calcular distancia promedio🚗" << endl;
    double tiempo, distancia;
    cout << "Dame distancia recorrida(km): ";
    cin >> distancia;
    cout << "Dame tiempo ocupado(hrs): ";
    cin >> tiempo;
    double velocidad = distancia / tiempo;
    if (velocidad > 100) {
        cout << "Exceso de velocidad ‼️" << endl;
    }
    cout << "🏃🏻‍♂️Tu velocidad promedio fue de " << velocidad << " km/h";
    return 0;
}
