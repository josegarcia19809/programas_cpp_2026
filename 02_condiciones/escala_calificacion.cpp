// escala_calificacion
// Created by Jose Garcia on 06/03/26.
// Este programa servirá para asignar una calificación en letra

#include <iostream>
using namespace std;

int main() {
    int calificacion;
    cout << "Bienvenido a tu sistema de calificaciones" << endl;

    cout << "Ingresa tu calificación del examen: ";
    cin >> calificacion;

    if (calificacion < 60) {
        cout << "Tu calificación es F ❌" << endl;
    } else if (calificacion < 70) {
        cout << "Tu calificación es D 🥹" << endl;
    } else if (calificacion < 80) {
        cout << "Tu calificación es C 😌" << endl;
    } else if (calificacion < 90) {
        cout << "Tu calificación es B 😀" << endl;
    } else {
        cout << "Tu calificación es A 😁" << endl;
    }

    return 0;
}
