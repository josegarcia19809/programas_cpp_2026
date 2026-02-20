//
// Created by Jose Garcia on 20/02/26.
//

#include <iostream>
using namespace std;

int main() {
    // 📌 Aquí quitamos la parte decimal.
    double precio = 19.75;

    int precioEntero = static_cast<int>(precio);

    cout << "Precio original: " << precio << endl;
    cout << "Precio convertido: " << precioEntero << endl;

    // Si no usamos static_cast, la división sería entera.
    int total = 10;
    int cantidad = 3;

    double promedio = static_cast<double>(total) / cantidad;

    cout << "Promedio: " << promedio << endl;
    return 0;
}
