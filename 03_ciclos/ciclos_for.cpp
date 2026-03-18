//
// Created by Jose Garcia on 18/03/26.
// Programa para probar los ciclos for

#include  <iostream>
using namespace std;

int main() {
    for (int contador = 0; contador < 5; contador++) {
        cout << "Hola" << endl;
    }
    cout << "-------------------------" << endl;

    for (int contador = 0; contador < 9; contador++) {
        cout << " " << contador;
    }
    cout << endl;
    cout << "-------------------------" << endl;

    for (int m = 10; m <= 20; m++) {
        cout << " " << m;
    }
    cout << endl;
    cout << "-------------------------" << endl;

    for (int x = 9; x >= 1; x--) {
        cout << " " << x;
    }
    cout << endl;
    cout << "-------------------------" << endl;

    for (int i = 0; i <= 100; i = i + 2) {
        cout << " " << i;
    }
    cout << endl;
    cout << "-------------------------" << endl;

    return 0;
}
