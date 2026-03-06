// nivel_videojuego
// Created by Jose Garcia on 06/03/26.
// Este programa servirá para asignar una calificación en letra

#include <iostream>
using namespace std;

int main() {
    int puntos;
    cout << "ingresa tus puntos de experiencia:";
    cin >> puntos;
    if (puntos < 100) {
        cout << "nivel:Principiante";
    } else if (puntos < 200) {
        cout << "nivel:Aventurero" << endl;
    } else if (puntos < 300) {
        cout << "tu nivel es Guerrero" << endl;
    } else {
        cout << "tu nivel es Maestro" << endl;
    }

    return 0;
}
