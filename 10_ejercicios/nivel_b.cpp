//
// Created by Jose Garcia on 24/03/26.
//
#include <iostream>
using namespace std;

void biblioteca(int no_lista) {
    int noLista = no_lista;
    int dias, librosPorDia, librosTotales = 0, librosAtrasados;
    double librosAtrasadosTotales = 0;
    double porcentajeAtrasados;

    dias = 3;

    int i = 1;
    while (i <= dias) {
        librosPorDia = 8 + noLista;
        librosTotales = librosTotales + librosPorDia;

        librosAtrasados = 3 + noLista;
        librosAtrasadosTotales = librosAtrasadosTotales + librosAtrasados;

        i = i + 1;
    }

    porcentajeAtrasados = (librosAtrasadosTotales * 100.0 / librosTotales);

    cout << "librosTotales: " << librosTotales << endl;
    cout << "librosAtrasadosTotales: " << librosAtrasadosTotales << endl;
    cout << "porcentajeAtrasados: " << porcentajeAtrasados << endl;
}

int main() {
    biblioteca(4);
}