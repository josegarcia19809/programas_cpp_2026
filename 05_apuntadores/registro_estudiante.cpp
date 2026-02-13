//
// Created by Jose Garcia on 12/02/26.
//

// Vamos a guardar los datos de un estudiante usando struct
// y acceder a ellos mediante un apuntador.

#include <iostream>
using namespace std;

// Definimos la estructura
struct Estudiante {
    int edad;
    int matricula;
};

int main() {
    // Creamos una variable tipo struct
    Estudiante alumno = {20, 12345};

    // Creamos un apuntador a struct
    Estudiante *ptr = &alumno;

    cout << "Datos del estudiante:\n";

    // Acceso usando apuntador
    cout << "Edad: " << ptr->edad << endl;
    cout << "Matricula: " << ptr->matricula << endl;

    return 0;
}
