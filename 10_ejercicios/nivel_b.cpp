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

void comisiones(int noLista) {
    int no_lista = noLista;
    int acciones = 950;
    double precio_accion = 35.00;
    double comision = no_lista;

    double monto_por_acciones = acciones * precio_accion;
    double monto_comision = monto_por_acciones * (comision / 100);
    double monto_por_acciones_y_comision = monto_por_acciones + monto_comision;

    cout << "monto_comision: " << monto_comision << endl;
    cout << "monto_por_acciones_y_comision: " << monto_por_acciones_y_comision << endl;
}

int main() {
    for (int i = 11; i <= 19; ++i) {
        cout << endl;
        cout << "----------------------------------" << i << endl;
        comisiones(i);
        biblioteca(i);
    }
}
