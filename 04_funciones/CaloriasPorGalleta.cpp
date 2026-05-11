//
// Created by Jose Garcia on 11/05/26.
// Programa para saber si una persona come dentro de sus límites
#include <iostream>
using namespace std;

void estaEnRiesgo() {
    cout << "Estás en riesgo, casi :(" << endl;
}

void noEstaEnRiesgo() {
    cout << "Muy bien, no estás en riesgo :)" << endl;
}

int main() {
    cout << "Calorías consumidas" << endl;
    const double CALORIAS_POR_GALLETA = 75.0;

    int galletasConsumidas;

    cout << "Cuántas galletas te comiste? ";
    cin >> galletasConsumidas;

    double caloriasConsumidas = galletasConsumidas * CALORIAS_POR_GALLETA;
    cout << "Calorías consumidas: " << caloriasConsumidas << endl;

    if (caloriasConsumidas > 500) {
        estaEnRiesgo();
    } else {
        noEstaEnRiesgo();
    }

    return 0;
}
