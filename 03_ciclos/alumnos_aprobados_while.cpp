//
// Created by Jose Garcia on 11/03/26.
// Este programa determina cuántos alumnos han aprobado
// y cuántos no

#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    int aprobados = 0;
    int reprobados = 0;
    while (contador <= 6) {
        double calificacion;
        cout << "Dime tu calificación: ";
        cin >> calificacion;
        if (calificacion >= 6) {
            aprobados++;
        } else {
            reprobados++;
        }
        contador++;
    }
    cout << "Total de alumnos aprobados: " << aprobados << endl;
    cout << "Total de alumnos reprobados: " << reprobados << endl;

    return 0;
}
