//
// Created by Jose Garcia on 17/04/26.
//


#include <iostream>
#include <string>

using namespace std;

struct Libro {
    int clave;
    string titulo;
    string autor;
    string editorial;
    double precio;
    int calificacion;
};

void pedirDatos();

void mostrarDatos();

void insertar(int, string, string, string, double, int);

Libro libro1;

int main() {
    pedirDatos();
    mostrarDatos();
    return 0;
}

void pedirDatos() {
    int clavex, calificacionx;
    string titulox, autorx, editorialx;
    double preciox;

    cout << "Dame los datos del libro" << endl;

    cout << "Dame la clave: ";
    cin >> clavex;

    cin.ignore(); // 👈 limpia el buffer

    cout << "Dame el nombre del libro: ";
    getline(cin, titulox);

    cout << "Dame el autor del libro: ";
    getline(cin, autorx);

    cout << "Dame la editorial del libro: ";
    getline(cin, editorialx);

    cout << "Dame el precio del libro: ";
    cin >> preciox;

    cout << "Dame la calificación del libro: ";
    cin >> calificacionx;

    insertar(clavex, titulox, autorx, editorialx, preciox, calificacionx);
}

void insertar(int clavex, string titulox, string autorx,
              string editorialx, double preciox, int calificacionx) {
    libro1.clave = clavex;
    libro1.titulo = titulox;
    libro1.autor = autorx;
    libro1.editorial = editorialx;
    libro1.precio = preciox;
    libro1.calificacion = calificacionx;
}

void mostrarDatos() {
    cout << "----------------------------------------------" << endl;
    cout << "Datos del libro" << endl;
    cout << "Clave: " << libro1.clave << endl;
    cout << "Titulo: " << libro1.titulo << endl;
    cout << "Autor: " << libro1.autor << endl;
    cout << "Editorial: " << libro1.editorial << endl;
    cout << "Precio: " << libro1.precio << endl;
    cout << "Calificación: " << libro1.calificacion << endl;
}
