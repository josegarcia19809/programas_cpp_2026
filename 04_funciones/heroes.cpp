//
// Created by Jose Garcia on 06/05/26.
// Programa para mostrar heroes
#include <iostream>
using namespace std;

void mostrarHeroeSpiderman();
void mostrarHeroeBatichica();

int main()
{
    mostrarHeroeBatichica();
    mostrarHeroeSpiderman();
    return 0;
}

void mostrarHeroeBatichica() {
    cout<<"Batichica en acción"<<endl;
}

void mostrarHeroeSpiderman() {
    cout<<"Tu amigable vecino Spiderman"<<endl;
}
