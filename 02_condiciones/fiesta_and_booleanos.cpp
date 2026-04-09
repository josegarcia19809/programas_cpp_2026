//
// Created by Jose Garcia on 09/04/26.
//

#include <iostream>
using namespace std;

int main() {
    bool personaPizza = true;
    bool personaRefresco = true;

    if (personaPizza && personaRefresco) {
        cout << "Puede entrar a la fiesta 🎉" << endl;
    } else {
        cout << "No puede entrar 🚫" << endl;
    }

    return 0;
}
