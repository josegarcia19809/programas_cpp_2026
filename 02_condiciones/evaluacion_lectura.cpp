//
// Created by Jose Garcia on 06/03/26.
//


#include <iostream>
using namespace std;

int main() {
    double libros;
    cout << "EVALUACION LECTURA" << endl;
    cout << "Cuantos libros leiste? ";
    cin >> libros;
    if (libros == 0) {
        cout << "No comenzo" << endl;
    } else if (libros <= 2) {
        cout << "Lector inicial" << endl;
    } else if (libros <= 4) {
        cout << "Buen lector" << endl;
    } else {
        cout << "Super lector" << endl;
    }
    return 0;
}
