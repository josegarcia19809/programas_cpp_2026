//
// Created by Jose Garcia on 17/04/26.
// Este programa crea una estructura para guardar los datos de un pasajero

#include <iostream>
#include <string>
using namespace std;

struct Pasajero {
    int clave;
    string nombre;
    string origen;
    string destino;
    double pasaje;
};

// Prototipos de función
void pedirDatos();

void mostrarDatos();

void insertar(int, string, string, string, double);

Pasajero p1;

int main() {
    pedirDatos();
    mostrarDatos();
    return 0;
}

void pedirDatos() {
    int clavex;
    string nombrex, origenx, destinox;
    double pasajex;

    cout << "Escribe los datos del pasajero" << endl;

    cout << "Dame la clave: ";
    cin >> clavex;

    cin.ignore(); // 👈 limpia el buffer

    cout << "Dame el nombre: ";
    getline(cin, nombrex);

    cout << "Dame origen: ";
    getline(cin, origenx);

    cout << "Dame destino: ";
    getline(cin, destinox);

    cout << "Dame precio del pasaje: ";
    cin >> pasajex;

    insertar(clavex, nombrex, origenx, destinox, pasajex);
}

void insertar(int clavex, string nombrex, string origenx, string destinox, double pasajex) {
    p1.clave = clavex;
    p1.nombre = nombrex;
    p1.origen = origenx;
    p1.destino = destinox;
    p1.pasaje = pasajex;
}

void mostrarDatos() {
    cout << ".................................." << endl;
    cout << "Datos del pasajero: " << endl;
    cout << "Clave: " << p1.clave << endl;
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Origen: " << p1.origen << endl;
    cout << "Destino: " << p1.destino << endl;
    cout << "Pasaje: " << p1.pasaje << endl;
}
