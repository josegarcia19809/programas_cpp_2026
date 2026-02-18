//
// Created by Jose Garcia on 18/02/26.
//

// 🏦 Contexto: Conversor de moneda en una tienda
//
// Imagina que tienes una clase Conversor que convierte pesos a dólares.
//
// Pero…
//
// ❌ No necesitas crear un objeto para convertir.
//
// ❌ No depende de datos de un cliente específico.
//
// ✅ Solo realiza una operación general.
//
// Entonces usamos un método static.

#include <iostream>
using namespace std;

class Conversor {
private:
    static float tipoCambio; // Atributo static

public:
    static float convertirADolares(float pesos) {
        return pesos / tipoCambio;
    }

    static void mostrarTipoCambio() {
        cout << "Tipo de cambio actual: " << tipoCambio << endl;
    }
};

// Definición del atributo static
float Conversor::tipoCambio = 17.5;


int main() {
    float resultado = Conversor::convertirADolares(350);
    cout << "Equivalente a dolares: " << resultado << endl;
    Conversor::mostrarTipoCambio();
}
