//
// Created by Jose Garcia on 20/02/26.
//

// cd programas_cpp_2026/06_poo/sistema_bancario_headers/
// g++ CuentaBancariaPrueba.cpp CuentaBancaria.cpp -o banco
// ./banco

#include "CuentaBancaria.h"

int main() {

    CuentaBancaria cuenta("Carlos Lopez", 1000);

    cuenta.depositar(500);
    cuenta.retirar(300);
    cuenta.mostrarSaldo();

    return 0;
}