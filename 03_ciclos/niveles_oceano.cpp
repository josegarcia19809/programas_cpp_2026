//
// Created by Jose Garcia on 23/03/26.
// Programa para calcular niveles del mar durante 25 años
#include <iostream>
using namespace std;

int main() {
    cout << "Nivel del mar durante 25 años" << endl;
    cout << "Año\t\tIncremento en mm" << endl;
    cout << "------------------------" << endl;
    for (int anio = 1; anio <= 25; anio++) {
        cout << anio << "\t\t" << (anio * 1.5) << endl;
    }
    return 0;
}
