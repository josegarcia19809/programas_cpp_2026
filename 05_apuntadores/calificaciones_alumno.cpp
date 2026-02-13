//
// Created by Jose Garcia on 12/02/26.
//

/*
* Un alumno tiene 5 calificaciones guardadas en un arreglo.
Queremos recorrerlas usando un apuntador y mostrar cada una.
 */

#include <iostream>
using namespace std;

int main() {
    int calificaciones[5] = {80, 85, 90, 75, 95}; // Arreglo de enteros

    int *ptr = calificaciones;
    // El nombre del arreglo ya es la dirección del primer elemento

    cout << "Mostrando calificaciones usando apuntador:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
