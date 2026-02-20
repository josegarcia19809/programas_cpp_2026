//
// Created by Jose Garcia on 20/02/26.
//

// Perfecto 👌 Ahora vamos a aplicar polimorfismo real usando un arreglo de punteros de tipo Empleado.
//
// 💡 La idea es:
//
// Tener un arreglo de tipo Empleado*
//
// Guardar objetos Empleado, Vendedor y VendedorOnline
//
// Llamar al método calcularBono() desde el tipo base
//
// Que C++ decida en tiempo de ejecución cuál versión ejecutar (gracias a virtual)
//
// 🔥 Cambios importantes
//
// Usaremos punteros.
//
// El método debe seguir siendo virtual.
//
// Agregamos un destructor virtual (buena práctica cuando usamos polimorfismo).
//
// Usaremos new y luego delete.

#include <iostream>
using namespace std;

// ===== Clase Base =====
class Empleado {
protected:
    string nombre;
    double salarioBase;

public:
    Empleado(string n, double salario) {
        nombre = n;
        salarioBase = salario;
    }

    // Método virtual
    virtual double calcularBono() {
        cout << "Empleado: ";
        return salarioBase * 0.05;
    }

    // Destructor virtual (MUY IMPORTANTE en polimorfismo)
    virtual ~Empleado() {
    }
};

// ===== Primera clase derivada =====
class Vendedor : public Empleado {
protected:
    double ventas;

public:
    Vendedor(string n, double salario, double v)
        : Empleado(n, salario) {
        ventas = v;
    }

    double calcularBono() override {
        cout << "Vendedor: ";

        double bonoBase = Empleado::calcularBono();
        double comision = ventas * 0.10;

        return bonoBase + comision;
    }
};

// ===== Segunda clase derivada =====
class VendedorOnline : public Vendedor {
private:
    double ventasDigitales;

public:
    VendedorOnline(string n, double salario, double v, double vd)
        : Vendedor(n, salario, v) {
        ventasDigitales = vd;
    }

    double calcularBono() override {
        cout << "Vendedor Online: ";

        double bonoVendedor = Vendedor::calcularBono();
        double extraDigital = ventasDigitales * 0.05;

        return bonoVendedor + extraDigital;
    }
};

// ===== Programa principal =====
int main() {
    // Arreglo de punteros tipo Empleado
    Empleado *empleados[3];

    empleados[0] = new Empleado("Carlos", 10000);
    empleados[1] = new Vendedor("Ana", 10000, 20000);
    empleados[2] = new VendedorOnline("Luis", 10000, 20000, 15000);

    cout << "\n--- Calculo de Bonos ---\n";

    for (int i = 0; i < 3; i++) {
        cout << empleados[i]->calcularBono() << endl;
    }

    // Liberar memoria
    for (int i = 0; i < 3; i++) {
        delete empleados[i];
    }

    return 0;
}
