//
// Created by Jose Garcia on 13/02/26.
//
#include <iostream>
using namespace std;

int main() {
    // Declarar un apuntador a entero
    int *ptr;

    // Reservar memoria dinámica para un entero
    ptr = new int;

    // Guardar un valor en la memoria reservada
    *ptr = 25;

    // Mostrar el valor
    cout << "Valor guardado: " << *ptr << endl;

    // Liberar la memoria
    delete ptr;

    return 0;
}

/*
* 🔎 ¿Qué está pasando?

int *ptr;
👉 Declaramos un apuntador a entero.

ptr = new int;
👉 Se reserva memoria en el heap (memoria dinámica).

*ptr = 25;
👉 Guardamos el valor 25 en esa dirección de memoria.

delete ptr;
👉 Liberamos la memoria para evitar fugas (memory leaks).

🧠 ¿Por qué usar memoria dinámica?

Se usa cuando:

No sabemos el tamaño exacto que necesitaremos.

Queremos crear datos en tiempo de ejecución.

Necesitamos que la memoria viva más tiempo que una variable normal.
 */