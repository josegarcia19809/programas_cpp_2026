#include <iostream>
using namespace std;
//
// Created by Jose Garcia on 31/05/26.
//
void ventas(int noLista) {
    int numLista = noLista;

    int ventasAltas = 0, pocosClientes = 0;
    float sumaClientesVentasAltas = 0;
    float sumaVentasTotal = 0;
    float promedioClientes = 0, promedioVentas = 0;

    for (int dia = 1; dia <= 8; dia++) {
        int clientes = numLista + dia + 5;
        int ventas = numLista + (dia * 4) + 30;

        if (ventas > 50) {
            ventasAltas++;
            sumaClientesVentasAltas += clientes;
        }

        if (clientes < 30) {
            pocosClientes++;
        }

        sumaVentasTotal += ventas;
    }

    if (ventasAltas > 0) {
        promedioClientes = sumaClientesVentasAltas / ventasAltas;
    } else {
        promedioClientes = 0;
    }

    promedioVentas = sumaVentasTotal / 8;

    cout << "ventasAltas: " << ventasAltas << endl;
    cout << "pocosClientes: " << pocosClientes << endl;
    cout << "promedioClientes: " << promedioClientes << endl;
    cout << "promedioVentas: " << promedioVentas << endl;
}

int main(int argc, char *argv[]) {
    for (int i = 1; i <= 19; ++i) {
        cout << "------------------------------------" << i << endl;
        ventas(i);
        cout<<endl;
    }
}
