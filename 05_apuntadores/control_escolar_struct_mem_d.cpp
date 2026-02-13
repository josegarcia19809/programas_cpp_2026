//
// Created by Jose Garcia on 13/02/26.
//
// Cuando un estudiante se crea en el sistema, automáticamente se inicializa con valores por
// defecto. Luego puede actualizarse y mostrar su información.

#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    int edad;
    float promedio;

    // Declaración del constructor
    Estudiante();

    // Declaración del método
    void imprimirDatos();
};

// Definición del constructor fuera del struct
Estudiante::Estudiante()
{
    nombre = "Sin registrar";
    edad = 0;
    promedio = 0.0;
}

// Definición del método fuera del struct
void Estudiante::imprimirDatos()
{
    cout << "\n--- Información del estudiante ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Promedio: " << promedio << endl;
}

int main()
{
    // Crear objeto en memoria dinámica
    Estudiante *alumno = new Estudiante();

    // Modificar datos
    alumno->nombre = "Ana";
    alumno->edad = 18;
    alumno->promedio = 9.5;

    // Mostrar información
    alumno->imprimirDatos();

    // Liberar memoria
    delete alumno;

    return 0;
}
