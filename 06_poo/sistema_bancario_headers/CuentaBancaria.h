//
// Created by Jose Garcia on 20/02/26.
//

#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>
using namespace std;

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    CuentaBancaria(string t, double sInicial);

    void depositar(double cantidad);

    void retirar(double cantidad);

    void mostrarSaldo() const;
};

#endif
