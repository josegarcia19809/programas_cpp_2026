//
// Created by Jose Garcia on 16/02/26.
//
/*
* Imaginemos que estamos creando un sistema para una tienda escolar,
* donde cada producto guarda:

📦 cantidad (entero dinámico → int*)

💲 precio (decimal dinámico → float*)

Usaremos:

✅ Constructor vacío

✅ Dos variables tipo puntero (int* y float*)

✅ Destructor para liberar memoria
 */


#include <iostream>
using namespace std;

class Producto {
private:
    int *cantidad;
    float *precio;

public:
    // Constructor
    Producto() {
        cantidad = new int;
        precio = new float;

        *cantidad = 0;
        *precio = 0.0;
        cout << "Memoria asignada correctamente" << endl;
    }

    void asignarDatos(int c, float p) {
        *cantidad = c;
        *precio = p;
    }

    void mostrarDatos() {
        cout << "Cantidad: " << *cantidad << endl;
        cout << "Precio: $" << *precio << endl;
    }

    ~Producto() {
        delete cantidad;
        delete precio;
        cout << "Memoria liberada correctamente" << endl;
    }
};

int main() {
    Producto *prod = new Producto;
    prod->asignarDatos(10, 25.5);
    prod->mostrarDatos();
    delete prod;
    return 0;
}
