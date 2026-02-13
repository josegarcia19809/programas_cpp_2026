//
// Created by Jose Garcia on 12/02/26.
//

/*
* Una tienda registró sus ventas durante 5 días.
Vamos a recorrer el arreglo usando un apuntador que se mueve con ptr++.
 *
 */

#include <iostream>
using namespace std;

int main() {
    int ventas[5] = {100, 200, 150, 300, 250};

    int *ptr = ventas; // Apunta al primer elemento

    cout << "Algunas ventas de la semana:\n";
    cout << "Primera venta: " << *ptr << endl;
    ptr++; // Avanza al siguiente elemento

    cout << "Segunda venta: " << *ptr << endl;
    ptr += 3; // Avanza 3 posiciones

    cout << "Quinta venta: " << *ptr << endl;

    return 0;
}
