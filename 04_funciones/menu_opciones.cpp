//
// Created by Jose Garcia on 10/04/26.
//
#include <iostream>
using namespace std;

// declaración de procedimientos
void menu();

void nivelesOceano();

void caloriasQuemadas();


int main() {
    int opcion;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                nivelesOceano();
                break;
            case 2:
                caloriasQuemadas();
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 3);
    return 0;
}

void menu() {
    cout << endl << endl;
    cout << "Menú de opciones" << endl;
    cout << "1.- Niveles del océano" << endl;
    cout << "2.- Calorías quemadas" << endl;
    cout << "3.- Salir" << endl;
    cout << "Elige tu opción: ";
}

void nivelesOceano() {
    cout << "Programa para calcular los niveles del óceano para los próximos 25 años" <<
            endl;
    int anio = 1;
    cout << "Año\t\tAumento mm" << endl;
    do {
        cout << anio << "\t\t" << (anio * 1.5) << endl;
        anio++;
    } while (anio <= 25);
}

void caloriasQuemadas() {
    cout << "Programa para calcular calorías quemadas" << endl;
    int minutos = 5;
    cout << "Minutos\t\t\tCalorías quemadas" << endl;
    do {
        cout << minutos << "\t\t\t" << (minutos * 3.6) << endl;
        minutos = minutos + 5;
    } while (minutos <= 30);
}
