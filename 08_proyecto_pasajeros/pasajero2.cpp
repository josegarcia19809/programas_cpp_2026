//
// Created by Jose Garcia on 24/04/26.
// Este programa crea una estructura para guardar los datos de un pasajero


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>

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

void escribirEnArchivo();

void recuperarDeArchivo();

void crearArchivoSiNoExiste();

vector<string> dividirEnTokens(const string &linea, char delimitador);

Pasajero pasajero1;

int main() {
    // crearArchivoSiNoExiste();
    // pedirDatos();
    // escribirEnArchivo();

    recuperarDeArchivo();
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

void insertar(int clavex, string nombrex, string origenx, string destinox,
              double pasajex) {
    pasajero1.clave = clavex;
    pasajero1.nombre = nombrex;
    pasajero1.origen = origenx;
    pasajero1.destino = destinox;
    pasajero1.pasaje = pasajex;
}

void mostrarDatos() {
    cout << ".................................." << endl;
    cout << "Datos del pasajero: " << endl;
    cout << "Clave: " << pasajero1.clave << endl;
    cout << "Nombre: " << pasajero1.nombre << endl;
    cout << "Origen: " << pasajero1.origen << endl;
    cout << "Destino: " << pasajero1.destino << endl;
    cout << "Pasaje: " << pasajero1.pasaje << endl;
}

void crearArchivoSiNoExiste() {
    ifstream archivoExistente("pasajeros2.txt");
    if (!archivoExistente) {
        // El archivo no existe, lo creamos vacío
        ofstream nuevoArchivo("pasajeros2.txt", ios::out);
        if (!nuevoArchivo) {
            cerr << "No se pudo crear el archivo" << endl;
            exit(1);
        }
        cout << "Archivo creado" << endl;
    } else {
        cout << "El archivo ya existe" << endl;
    }
}

vector<string> dividirEnTokens(const string &linea, char delimitador) {
    vector<string> tokens;
    stringstream ss(linea);
    string token;
    while (getline(ss, token, delimitador)) {
        tokens.push_back(token);
    }
    return tokens;
}


void escribirEnArchivo() {
    ofstream salidaArchivo("pasajeros2.txt", ios::out);
    if (!salidaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    salidaArchivo << pasajero1.clave << "|"
            << pasajero1.nombre << "|"
            << pasajero1.origen << "|"
            << pasajero1.destino << "|"
            << pasajero1.pasaje << endl;
}

void recuperarDeArchivo() {
    ifstream lecturaArchivo("pasajeros2.txt");
    if (!lecturaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    string linea;
    while (getline(lecturaArchivo, linea)) {
        vector<string> campos = dividirEnTokens(linea, '|');

        if (campos.size() == 5) {
            int clavex = stoi(campos[0]);
            string nombrex = campos[1];
            string destinox = campos[2];
            string origenx = campos[3];
            double pasajex = stod(campos[4]);
            insertar(clavex, nombrex, origenx, destinox, pasajex);
            mostrarDatos();
        }
    }
}
