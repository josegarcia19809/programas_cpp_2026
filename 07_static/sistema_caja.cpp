//
// Created by Jose Garcia on 18/02/26.
//
// 🛒 Contexto: Sistema de caja en una tienda escolar
//
// Imagina que tienes una clase CajaRegistradora que:
//
// Se activa cuando empieza el día
//
// Se destruye cuando termina el programa
//
// Solo debe crearse una vez durante el día
//
// Queremos que el objeto se cree una sola vez, aunque la función se llame muchas veces.
//
// Ahí usamos un objeto static dentro de una función.

#include <iostream>
using namespace std;

class CajaRegistradora {
public:
    CajaRegistradora() {
        cout << "Caja iniciada 🟢" << endl;
    }

    ~CajaRegistradora() {
        cout << "Caja cerrada 🔴" << endl;
    }

    void registrarVenta() {
        cout << "Venta registrada 💵" << endl;
    }
};

void abrirSistema() {
    static CajaRegistradora caja; // Objeto static
    caja.registrarVenta();
}

int main() {
    abrirSistema();
    abrirSistema();
    abrirSistema();
    return 0;
}
