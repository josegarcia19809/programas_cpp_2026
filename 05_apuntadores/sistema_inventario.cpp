//
// Created by Jose Garcia on 12/02/26.
//

/*
*Imagina que tienes un sistema donde guardas la cantidad de productos en una tienda.
El gerente quiere que una función pueda modificar directamente la cantidad
original sin hacer copias.

Para eso usamos apuntadores (punteros).
*/
#include <iostream>
using namespace std;

// Función que recibe un apuntador a entero
void agregarStock(int *cantidad) {
    // Aumentamos el valor original usando el apuntador
    *cantidad = *cantidad + 10;
}

int main() {
    int productos = 50; // Cantidad inicial
    int *ptrProductos = &productos; // Apuntador que guarda la dirección

    cout << "Stock inicial: " << productos << endl;

    // Llamamos la función y pasamos la dirección
    agregarStock(ptrProductos);

    cout << "Stock despues de agregar: " << productos << endl;

    return 0;
}
