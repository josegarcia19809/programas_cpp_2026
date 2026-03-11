//
// Created by Jose Garcia on 11/03/26.
// Programa para saber cuántos clientes compraron más de $500

#include <iostream>
using namespace std;

int main () {
    double compra;
    int gastalones = 0;
    int contador = 1;
    while (contador <= 8) {
        cout<<"cual fue el monto de tu compra:";
        cin>>compra;
        if (compra>500) {
            gastalones++;
        }
        contador++;
    }
    cout << "total de personas que gastaron mas de 500: "
    << gastalones << endl;



    return 0;
}