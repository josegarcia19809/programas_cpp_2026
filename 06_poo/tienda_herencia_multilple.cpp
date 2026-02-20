//
// Created by Jose Garcia on 20/02/26.
//

// 🏢 Contexto: Sistema de una tienda tecnológica
//
// En una tienda tenemos:
//
// 👨‍💼 Empleado → Tiene salario.
//
// 💻 Programador → Puede programar sistemas.
//
// 📊 Administrador → Puede generar reportes.
//
// 🚀 GerenteTI → Es Empleado, Programador y Administrador al mismo tiempo.
//
// Aquí aplicaremos herencia múltiple, ya que GerenteTI hereda de más de una clase.

#include <iostream>
using namespace std;

// ===== Clase Base 1 =====
class Empleado {
protected:
    string nombre;
    double salario;

public:
    Empleado(string n, double s) {
        nombre = n;
        salario = s;
    }

    void mostrarEmpleado() {
        cout << "Nombre: " << nombre << endl;
        cout << "Salario: $" << salario << endl;
    }
};

// ===== Clase Base 2 =====
class Programador {
public:
    void programar() {
        cout << "Desarrollando sistema de inventario...\n";
    }
};

// ===== Clase Base 3 =====
class Administrador {
public:
    void generarReporte() {
        cout << "Generando reporte financiero mensual...\n";
    }
};

// ===== Clase con Herencia Múltiple =====
class GerenteTI : public Empleado, public Programador, public Administrador {
private:
    string departamento;

public:
    GerenteTI(string n, double s, string d)
        : Empleado(n, s) {
        departamento = d;
    }

    void mostrarGerente() {
        mostrarEmpleado();
        cout << "Departamento: " << departamento << endl;
    }
};

// ===== Programa principal =====
int main() {
    GerenteTI gerente("Laura", 30000, "Tecnologia");

    cout << "--- Informacion del Gerente ---\n";
    gerente.mostrarGerente();

    cout << "\n--- Actividades ---\n";
    gerente.programar();
    gerente.generarReporte();

    return 0;
}
