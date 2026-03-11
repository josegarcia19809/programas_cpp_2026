//
// Created by Jose Garcia on 11/03/26.
// Programa para una encuesta sobre helados

#include <iostream>
using namespace std;

int main() {
    cout << "---------ENCUESTA---------------" << endl;
    int contador = 1;
    int vecesSi = 0;
    while (contador <= 3) {
        char respuesta;
        cout << "¿Te gusta el helado de limón? (S o N): ";
        cin >> respuesta;
        if (respuesta == 'S' || respuesta == 's') {
            vecesSi++;
        }
        contador++;
    }
    cout << "A " << vecesSi << " personas les gusta el helado de limón"
            << endl;
    return 0;
}
