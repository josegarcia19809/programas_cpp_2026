//
// Created by Jose Garcia on 20/02/26.
//

#include <iostream>
#include "CuentaBancaria.h"

using namespace std;

CuentaBancaria::CuentaBancaria(string t, double sInicial) {
    titular = t;
    saldo = sInicial;
}

void CuentaBancaria::depositar(double cantidad) {
    saldo += cantidad;
}

void CuentaBancaria::retirar(double cantidad) {
    if (cantidad <= saldo) {
        saldo -= cantidad;
    } else {
        cout << "Fondos insuficientes\n";
    }
}

void CuentaBancaria::mostrarSaldo() const {
    cout << "Titular: " << titular << endl;
    cout << "Saldo actual: $" << saldo << endl;
}