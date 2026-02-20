//
// Created by Jose Garcia on 20/02/26.
//

// Perfecto 👌 Vamos a trabajar con un contexto real de negocio: un sistema de
// empleados en una tienda.
//
// Imagina que tenemos:
//
// 🔹 Una clase base Empleado
//
// 🔹 Una clase derivada Vendedor
//
// 🔹 Otra clase derivada más específica VendedorOnline
//
// Cada clase calculará el bono mensual, pero cada una lo hará diferente.
// Además, cada clase derivada podrá llamar al método de su clase padre.
//
// 🎯 Contexto del negocio
//
// Una tienda paga bonos así:
//
// 👨‍💼 Empleado → bono base fijo.
//
// 🛍 Vendedor → bono base + comisión por ventas.
//
// 💻 VendedorOnline → bono de vendedor + extra por ventas digitales.

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
        cout << "Calculando bono base de empleado...\n";
        return salarioBase * 0.05; // 5% del salario
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

    // Sobrescribe el método
    double calcularBono() override {
        cout << "Calculando bono de vendedor...\n";

        // Llamamos al método de la clase base
        double bonoBase = Empleado::calcularBono();

        double comision = ventas * 0.10; // 10% de ventas
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

    // Sobrescribe nuevamente el método
    double calcularBono() override {
        cout << "Calculando bono de vendedor online...\n";

        // Llamamos al método de la clase padre (Vendedor)
        double bonoVendedor = Vendedor::calcularBono();

        double extraDigital = ventasDigitales * 0.05; // 5% adicional
        return bonoVendedor + extraDigital;
    }
};

// ===== Programa principal =====
int main() {
    Empleado emp("Carlos", 10000);
    Vendedor vend("Ana", 10000, 20000);
    VendedorOnline vendOnline("Luis", 10000, 20000, 15000);

    cout << "\nBono Empleado: " << emp.calcularBono() << endl;
    cout << "\nBono Vendedor: " << vend.calcularBono() << endl;
    cout << "\nBono Vendedor Online: " << vendOnline.calcularBono() << endl;

    return 0;
}
