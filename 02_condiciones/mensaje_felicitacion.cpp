// Elaborado por José L García
// Fecha: 11 febrero de 2026
// Programa para
#include <iostream>
using namespace std;

int main() {
    cout << "Este programa calcula el promedio de 3 calificaciones" << endl;

    // Pide las 3 calificaciones
    int calificacion1, calificacion2, calificacion3;

    cout << "Dame calificación 1: ";
    cin >> calificacion1;

    cout << "Dame calificación 2: ";
    cin >> calificacion2;

    cout << "Dame calificación 3: ";
    cin >> calificacion3;

    // Calcular el promedio
    float promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0;

    // Si el promedio es mayor que 95, mostrar el mensaje "Es un buen promedio"
    if (promedio > 95) {
        cout << "Es un buen promedio" << endl;
    }

    // Imprime el promedio
    cout << "El promedio es " << promedio << endl;

    return 0;
}
