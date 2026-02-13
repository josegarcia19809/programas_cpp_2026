//
// Created by Jose Garcia on 12/02/26.
//
// Vamos a registrar los datos de un empleado y acceder a ellos usando un apuntador
// y la sintaxis completa.

#include <iostream>
using namespace std;

// Definimos la estructura
struct Empleado {
    int edad;
    int salario;
};

int main() {
    // Creamos un empleado
    Empleado trabajador = {35, 15000};

    // Creamos un apuntador al struct
    Empleado *ptr = &trabajador;

    cout << "Datos del empleado:\n";

    // Acceso usando la forma completa
    cout << "Edad: " << (*ptr).edad << endl;
    cout << "Salario: " << (*ptr).salario << endl;

    return 0;
}
