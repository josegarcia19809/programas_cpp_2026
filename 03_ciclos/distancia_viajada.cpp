//
// Created by Jose Garcia on 23/03/26.
// Programa para mostrar la distancia de viajes
#include <iostream>
using namespace std;

int main() {
    cout << "Distancia de viajes" << endl;
    double velocidad;
    cout << "¿Cual es la velocidad del vehiculo en mph? ";
    cin >> velocidad;

    // No tener velocidades negativas
    if (velocidad < 0) {
        cout << "No se permiten velocidades negativas" << endl;
        cout << "Vuelve a ejecutar el programa" << endl;
        return 0;
    }

    int horasViaje;
    cout << "¿Cuantas horas ha viajado? ";
    cin >> horasViaje;

    if (horasViaje < 1) {
        cout << "No se permiten tiempos de menos de 1 hora" << endl;
        cout << "Vuelve a ejecutar el programa" << endl;
        return 0;
    }
    cout << "Hora\t\tDistancia recorrida" << endl;
    cout << "------------------------" << endl;

    for (int horas = 1; horas <= horasViaje; horas++) {
        cout << horas << "\t\t" << (velocidad * horas) << endl;
    }

    return 0;
}
