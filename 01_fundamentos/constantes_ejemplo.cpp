//
// Created by Jose Garcia on 20/02/26.
//

#include <iostream>
using namespace std;

int main() {
    // system("chcp 65001 > nul");
    const int EDAD_MINIMA_VOTAR = 18;
    const double IVA = 0.16;
    const int DIAS_SEMANA = 7;
    const int MESES_ANIO = 12;
    const int MINUTOS_POR_HORA = 60;

    cout << "Edad mínima para votar: 🗳️" << EDAD_MINIMA_VOTAR << " años" << endl;
    cout << "El IVA es: " << (IVA * 100) << "%❗️" << endl;
    cout << "La semana tiene " << DIAS_SEMANA << " días" << endl;
    cout << "El año tiene " << MESES_ANIO << " meses" << endl;
    cout << "Una hora tiene " << MINUTOS_POR_HORA << " minutos" << endl;

    cout << "---------------------------------------------------------------" << endl;
    cout << "🛍️COMPRAS" << endl;

    const double DESCUENTO_BUEN_FIN = 0.30;
    const int MAX_PRODUCTO_CARRITO = 20;
    const double COSTO_ENVIO = 99.90;

    cout << "El descuento del buen fin: " << (DESCUENTO_BUEN_FIN * 100) << "%" << endl;
    cout << "Máximo de productos en el carrito: " << MAX_PRODUCTO_CARRITO << endl;
    cout << "Costo de envío: $" << COSTO_ENVIO << endl;


    return 0;
}
