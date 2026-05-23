//
// Created by Jose Garcia on 22/05/26.
// Este programa usa una colección para guardar los datos de varios pasajeros
// Se pueden ordenar estos datos y hacer búsquedas


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

void menu();

vector<Pasajero> pasajeros;
string nombreArchivo = "pasajeros3.txt";

/* AGREGAR */

void ordenacionBurbujaPorPrecioPasaje();

void ordenacionBurbujaPorNombre();

void ordenacionBurbujaPorClave();

int busquedaSecuencial(int);

int busquedaBinaria(int);

void mostrarPasajero(int);

Pasajero aux;
/* FIN DE AGREGAR */

int main() {
    crearArchivoSiNoExiste();
    recuperarDeArchivo();
    mostrarDatos();

    int opcion;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                pedirDatos();
                escribirEnArchivo();
                break;
            case 2:
                mostrarDatos();
                break;
            case 3:
                ordenacionBurbujaPorPrecioPasaje();
                cout << endl;
                cout << "Pasajeros ordenados por precio" << endl;
                mostrarDatos();
                break;
            case 4:
                ordenacionBurbujaPorNombre();
                cout << endl;
                cout << "Pasajeros ordenados por nombre" << endl;
                mostrarDatos();
                break;
            case 5: {
                int claveBuscar;
                cout << "Dame la clave a buscar: ";
                cin >> claveBuscar;

                int posicion = busquedaSecuencial(claveBuscar);
                if (posicion != -1) {
                    mostrarPasajero(posicion);
                } else {
                    cout << "No se encontró al pasajero" << endl;
                }
                break;
            }
            case 6: {
                ordenacionBurbujaPorClave();
                int claveBuscar;
                cout << "Dame la clave a buscar: ";
                cin >> claveBuscar;

                int posicion = busquedaBinaria(claveBuscar);
                if (posicion != -1) {
                    mostrarPasajero(posicion);
                } else {
                    cout << "No se encontró al pasajero" << endl;
                }
                break;
            }
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 0);
}

void menu() {
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "SISTEMA DE PASAJEROS" << endl;
    cout << "1.- ALTA DE PASAJEROS" << endl;
    cout << "2.- REPORTE GENERAL" << endl;
    cout << "3.- ORDENAR POR PRECIO" << endl;
    cout << "4.- ORDENAR POR NOMBRE" << endl;
    cout << "5.- BUSCAR SECUENCIAL" << endl;
    cout << "6.- BUSCAR BINARIA" << endl;
    cout << "0.- SALIR" << endl;
    cout << "Elige: ";
}

void pedirDatos() {
    int clavex;
    string nombrex, origenx, destinox;
    double pasajex;
    cout << "--------------NUEVO PASAJERO----------------" << endl;
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
    Pasajero nuevo;
    nuevo.clave = clavex;
    nuevo.nombre = nombrex;
    nuevo.origen = origenx;
    nuevo.destino = destinox;
    nuevo.pasaje = pasajex;

    // Se agrega dinamicamente
    pasajeros.push_back(nuevo);
}

void mostrarDatos() {
    if (pasajeros.empty()) {
        cout << "No hay pasajeros registrados" << endl;
        return;
    }

    cout << endl;

    cout << left
            << setw(8) << "CLAVE"
            << setw(25) << "NOMBRE"
            << setw(25) << "ORIGEN"
            << setw(25) << "DESTINO"
            << setw(10) << "PASAJE" << endl;

    for (int i = 0; i < pasajeros.size(); i++) {
        cout << left
                << setw(8) << pasajeros[i].clave
                << setw(25) << pasajeros[i].nombre
                << setw(25) << pasajeros[i].origen
                << setw(25) << pasajeros[i].destino
                << setw(10) << pasajeros[i].pasaje
                << endl;
    }
}

void crearArchivoSiNoExiste() {
    ifstream archivoExistente(nombreArchivo);
    if (!archivoExistente) {
        // El archivo no existe, lo creamos vacío
        ofstream nuevoArchivo(nombreArchivo, ios::out);
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
    ofstream salidaArchivo(nombreArchivo, ios::out);
    if (!salidaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    for (int i = 0; i < pasajeros.size(); i++) {
        salidaArchivo << pasajeros[i].clave << "|"
                << pasajeros[i].nombre << "|"
                << pasajeros[i].origen << "|"
                << pasajeros[i].destino << "|"
                << pasajeros[i].pasaje << endl;
    }
}

void recuperarDeArchivo() {
    ifstream lecturaArchivo(nombreArchivo);
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
        }
    }
}


void ordenacionBurbujaPorPrecioPasaje() {
    for (int i = 0; i < pasajeros.size() - 1; i++) {
        for (int j = 0; j < pasajeros.size() - 1; j++) {
            if (pasajeros[j].pasaje > pasajeros[j + 1].pasaje) {
                aux = pasajeros[j];
                pasajeros[j] = pasajeros[j + 1];
                pasajeros[j + 1] = aux;
            }
        }
    }
}

void ordenacionBurbujaPorNombre() {
    for (int i = 0; i < pasajeros.size() - 1; i++) {
        for (int j = 0; j < pasajeros.size() - 1; j++) {
            if (pasajeros[j].nombre > pasajeros[j + 1].nombre) {
                aux = pasajeros[j];
                pasajeros[j] = pasajeros[j + 1];
                pasajeros[j + 1] = aux;
            }
        }
    }
}

void ordenacionBurbujaPorClave() {
    for (int i = 0; i < pasajeros.size() - 1; i++) {
        for (int j = 0; j < pasajeros.size() - 1; j++) {
            if (pasajeros[j].clave > pasajeros[j + 1].clave) {
                aux = pasajeros[j];
                pasajeros[j] = pasajeros[j + 1];
                pasajeros[j + 1] = aux;
            }
        }
    }
}

int busquedaSecuencial(int claveBuscar) {
    for (int i = 0; i < pasajeros.size(); ++i) {
        if (pasajeros[i].clave == claveBuscar) {
            return i;
        }
    }
    return -1;
}

int busquedaBinaria(int claveBuscar) {
    int bajo = 0;
    int alto = pasajeros.size() - 1;
    while (bajo <= alto) {
        int central = (bajo + alto) / 2;
        if (claveBuscar == pasajeros[central].clave) {
            return central;
        } else if (claveBuscar < pasajeros[central].clave) {
            alto = central - 1;
        } else {
            bajo = central + 1;
        }
    }
    return -1;
}

void mostrarPasajero(int posicion) {
    cout << endl;
    cout << "PASAJERO ENCONTRADO" << endl;

    cout << "Clave: " << pasajeros[posicion].clave << endl;
    cout << "Nombre: " << pasajeros[posicion].nombre << endl;
    cout << "Origen: " << pasajeros[posicion].origen << endl;
    cout << "Destino: " << pasajeros[posicion].destino << endl;
    cout << "Pasaje: " << pasajeros[posicion].pasaje << endl;
}
