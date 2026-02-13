//
// Created by Jose Garcia on 13/02/26.
//

// Una escuela quiere registrar a un estudiante en el sistema.
// Como los datos se ingresan en tiempo de ejecución, vamos a usar memoria
// dinámica para crear el estudiante.

#include <iostream>
using namespace std;

// Definir la estructura
struct Estudiante
{
    string nombre;
    int edad;
    float promedio;
};

int main()
{
    // Declarar un apuntador a Estudiante
    Estudiante *alumno;

    // Reservar memoria dinámica para un estudiante
    alumno = new Estudiante();

    // Pedir datos
    cout << "Ingresa el nombre: ";
    cin >> alumno->nombre;

    cout << "Ingresa la edad: ";
    cin >> alumno->edad;

    cout << "Ingresa el promedio: ";
    cin >> alumno->promedio;

    // Mostrar datos
    cout << "\n--- Datos del estudiante ---" << endl;
    cout << "Nombre: " << alumno->nombre << endl;
    cout << "Edad: " << alumno->edad << endl;
    cout << "Promedio: " << alumno->promedio << endl;

    // Liberar memoria
    delete alumno;

    return 0;
}
