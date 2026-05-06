//
// Created by Jose Garcia on 06/05/26.
// Programa para mostrar datos de un estudiante en funciones
#include <iostream>
using namespace std;

void mostrarNombre();

void visualizarCarrera();

void desplegarPromedio();

void imprimirLinea();

int main() {
    mostrarNombre();
    imprimirLinea();
    visualizarCarrera();
    imprimirLinea();
    desplegarPromedio();
    imprimirLinea();
    return 0;
}

void imprimirLinea() {
    cout << "--------------------------------------" << endl;
}

void mostrarNombre() {
    cout << "Mi nombre es José L García" << endl;
}

void visualizarCarrera() {
    cout << "Mi carrera es: Informatica Administrativa" << endl;
}

void desplegarPromedio() {
    cout << "Mi promedio es: 10" << endl;
}
