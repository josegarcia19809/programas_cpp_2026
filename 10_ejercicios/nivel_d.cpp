//
// Created by Jose Garcia on 09/06/26.
//

#include <iostream>
using namespace std;

void valores_p(int noLista) {
    int no_lista = noLista;
    int numero = no_lista;
    int p1 = numero + (5 * 100);
    double p2 = (numero * 10) * (pow(numero, 2)) / 10.0;
    double p3 = numero + 15 / 100.0;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;
}

void valores_total_salida(int noLista) {
    int numero = noLista;
    int c1 = 10;
    int c2 = 8;
    int c3 = 4;
    int c4 = 2;

    int total = c1 + (c2 * 5) + (c3 * 10) + (c4 * 25);
    double salida;

    if (total > 100) {
        salida = sqrt(total) - (c1 * numero);
    } else {
        salida = sqrt(total) + (c1 * numero);
    }

    cout << "total: " << total << endl;
    cout << "salida: " << salida << endl;
}

void valores_s1_x(int noLista) {
    int no_lista = noLista;
    int s1 = 0;
    int num = no_lista;
    int cont = 10;

    while (cont >= 4) {
        cout << cont << endl;
        s1 = s1 + num;
        cont = cont - 1;
    }

    int x = 0;
    for (int i = num; i < 21; i++) {
        x = x + i;
    }


    cout << "s1: " << s1 << endl;
    cout << "x: " << x << endl;
}

void ventas(int noLista) {
    int numLista = noLista;

    int ventasAltas = 0, pocosClientes = 0;
    float sumaClientesVentasAltas = 0;
    float sumaVentasTotal = 0;
    float promedioClientes = 0, promedioVentas = 0;

    for (int dia = 1; dia <= 6; dia++) {
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
    for (int i = 1; i <= 11; ++i) {
        cout << "------------------------------------" << i << endl;
        valores_p(i);
        cout << endl;
        valores_total_salida(i);
        cout << endl;
        valores_s1_x(i);
        cout << endl;
        ventas(i);
        cout << endl;
    }
}
