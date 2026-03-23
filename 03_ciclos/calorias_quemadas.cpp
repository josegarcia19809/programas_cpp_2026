//
// Created by Jose Garcia on 23/03/26.
// Programa para
#include <iostream>
using namespace std;

int main() {
    cout << "Calorias quemadas" << endl;
    cout << "Minutos\t\t" << "Calorias quemadas" << endl;
    cout << "-----------------------------------" << endl;
    for (int minutos = 5; minutos <= 30; minutos += 5) {
        cout << minutos << "\t\t\t" << (minutos * 3.6) << endl;
    }
    return 0;
}
