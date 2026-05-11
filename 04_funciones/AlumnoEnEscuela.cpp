// Programa para saber si un alumno aprobó o no
#include <iostream>
using namespace std;

void estaAprobado() {
    cout << "Está aprobado :)" << endl;
}

void noEstaAprobado() {
    cout << "No está aprobado :(" << endl;
}

int main() {
    cout << "Sistema de calificaciones" << endl;
    int calificacion, porcentaje;

    cout << "Dime tu calificacion: ";
    cin >> calificacion;

    cout << "Dime porcentaje de asistencias: ";
    cin >> porcentaje;

    if (calificacion >= 70 && porcentaje >= 80) {
        estaAprobado();
    } else {
        noEstaAprobado();
    }

    return 0;
}
