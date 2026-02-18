//
// Created by Jose Garcia on 18/02/26.
//

// 🏫 Contexto: Control de accesos en una biblioteca escolar
//
// Imagina que tienes una función que registra cuántos estudiantes han entrado a la
// biblioteca durante el día.
//
// Queremos que cada vez que se llame la función:
//
// 📌 Aumente el contador
//
// 📌 Recuerde cuántos ya han entrado antes
//
// 📌 No se reinicie en cada llamada
//
// Aquí es donde usamos static.

#include <iostream>
using namespace std;

void registrarEntrada() {
    static int totalEstudiantes = 0; // Se crea solo una vez

    totalEstudiantes++;

    cout << "Estudiantes en la biblioteca: "
            << totalEstudiantes << endl;
}

int main() {
    registrarEntrada();
    registrarEntrada();
    registrarEntrada();
    registrarEntrada();
    return 0;
}
