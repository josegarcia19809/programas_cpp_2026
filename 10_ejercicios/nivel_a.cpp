//
// Created by Jose Garcia on 24/03/26.
//
#include <iostream>
using namespace std;

void sucursales(int no_lista) {
    int noLista = no_lista;
    int sucursales, ventasPorSucursal, ventasTotales = 0, ventasAltas;
    double ventasAltasTotales = 0;
    double porcentajeVentasAltas;

    sucursales = 3;

    int i = 1;
    while (i <= sucursales) {
        ventasPorSucursal = 10 + noLista;
        ventasTotales = ventasTotales + ventasPorSucursal;

        ventasAltas = 6 + noLista;
        ventasAltasTotales = ventasAltasTotales + ventasAltas;

        i = i + 1;
    }

    porcentajeVentasAltas = (ventasAltasTotales * 100.0 / ventasTotales);
    cout << "ventasTotales: " << ventasTotales << endl;
    cout << "ventasAltasTotales: " << ventasAltasTotales << endl;
    cout << "porcentajeVentasAltas: " << porcentajeVentasAltas << endl;
}

int main() {
    sucursales(4);
}
