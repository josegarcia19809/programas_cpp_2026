// club_deportivo_while
// Created by Jose Garcia on 13/03/26.
// Este programa obtendrá los promedios de los que fueron aceptados en un club

#include <iostream>
using namespace std;

int main() {
    char nombre[20];
    double km;
    double kg;
    cout << "Club deportivo👩🏼" << endl;

    int i = 1;
    int aceptados = 0;
    double totalKilometros = 0;
    double totalKilos = 0;

    while (i <= 6) {
        cout << "\n-----------------------------------" << endl;
        cout << "Aspirante #" << i << endl;
        cout << "Dime tu nombre: ";
        cin >> nombre;

        cout << "Dime los kilometros que corres al día: ";
        cin >> km;

        cout << "Dime tu peso en kg: ";
        cin >> kg;

        if (km >= 3 && kg < 85) {
            // Fue aceptado
            aceptados++;
            totalKilometros = totalKilometros + km;
            totalKilos = totalKilos + kg;
        }

        // Imprimir el nombre de cada aspirante, los kilómetros que corre al día y su peso.
        cout << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Kilómetros que corre al día: " << km << endl;
        cout << "Peso: " << kg << endl;

        i++;
    }

    cout << "" << endl;
    if (aceptados > 0) {
        double promedioKm = totalKilometros / aceptados;
        cout << "Promedio de km los aspirantes aceptados: " << promedioKm << endl;

        // Imprimir el peso promedio de los aspirantes que fueron aceptados en el programa.
        double promedioPeso = totalKilos / aceptados;
        cout << "Promedio de peso de los aspirantes aceptados: " << promedioPeso << endl;

    } else {
        cout << "No hubo aspirantes que fueran aceptados" << endl;
    }

    return 0;
}
