//
// Created by Jose Garcia on 12/02/26.
//

/*
 * Imagina que una tienda tiene dinero en caja y queremos modificar
 * ese dinero usando un apuntador.
 */

#include <iostream>
using namespace std;

int main() {
    int dinero = 100; // Dinero inicial en caja
    int *ptrDinero; // Declaramos el apuntador

    ptrDinero = &dinero; // El apuntador guarda la dirección de dinero

    cout << "Dinero inicial: " << dinero << endl;

    // Modificamos el valor usando el apuntador
    *ptrDinero = 150;

    cout << "Dinero despues del cambio: " << dinero << endl;

    return 0;
}
