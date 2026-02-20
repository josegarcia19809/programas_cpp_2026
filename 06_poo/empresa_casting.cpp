//
// Created by Jose Garcia on 20/02/26.
//

// Vamos a usar herencia múltiple + herencia virtual y aplicar:
//
// 🔼 Upcast
//
// 🔽 Downcast
//
// 🔄 Crosscast
//
// Usando dynamic_cast
//
// 🏢 Contexto: Sistema empresarial
//
// Tenemos:
//
// 👤 Persona
//
// 👨‍💼 Empleado
//
// 🎓 Estudiante
//
// 🧑‍💻 Becario (hereda de Empleado y Estudiante)
//
// Usaremos herencia virtual para evitar el problema del diamante.
//
// 💻 Código completo con los 3 tipos de cast

#include <iostream>
using namespace std;

// ===== Clase Base =====
class Persona {
public:
    string nombre;

    Persona(string n) : nombre(n) {
    }

    // IMPORTANTE: debe tener al menos un método virtual
    virtual void mostrar() {
        cout << "Persona: " << nombre << endl;
    }

    virtual ~Persona() {
    } // Destructor virtual
};

// ===== Herencia Virtual =====
class Empleado : virtual public Persona {
public:
    Empleado(string n) : Persona(n) {
    }

    void trabajar() {
        cout << nombre << " esta trabajando.\n";
    }
};

class Estudiante : virtual public Persona {
public:
    Estudiante(string n) : Persona(n) {
    }

    void estudiar() {
        cout << nombre << " esta estudiando.\n";
    }
};

// ===== Herencia Multiple =====
class Becario : public Empleado, public Estudiante {
public:
    Becario(string n)
        : Persona(n), Empleado(n), Estudiante(n) {
    }

    void actividadMixta() {
        cout << nombre << " trabaja y estudia.\n";
    }
};

int main() {
    // ===============================
    // 🔼 1. UPCAST (Derivada → Base)
    // ===============================

    Becario *b = new Becario("Carlos");

    Persona *p = dynamic_cast<Persona *>(b); // Upcast

    if (p) {
        cout << "Upcast exitoso\n";
        p->mostrar();
    }

    // ===============================
    // 🔽 2. DOWNCAST (Base → Derivada)
    // ===============================

    Persona *personaBase = new Becario("Ana");

    Becario *b2 = dynamic_cast<Becario *>(personaBase);

    if (b2) {
        cout << "\nDowncast exitoso\n";
        b2->actividadMixta();
    }

    // ===============================
    // 🔄 3. CROSSCAST (Entre ramas)
    // ===============================

    Empleado *emp = new Becario("Luis");

    Estudiante *est = dynamic_cast<Estudiante *>(emp);

    if (est) {
        cout << "\nCrosscast exitoso\n";
        est->estudiar();
    }

    delete b;
    delete personaBase;
    delete emp;

    return 0;
}


// 🧠 Explicación clara
// 🔼 1. Upcast
// Persona* p = dynamic_cast<Persona*>(b);
//
// 📌 Convertimos un Becario* a Persona*.
//
// ✔ Siempre es seguro.
// ✔ Puede hacerse incluso sin dynamic_cast.
//
// 🔽 2. Downcast
// Becario* b2 = dynamic_cast<Becario*>(personaBase);
//
// 📌 Convertimos de clase base a derivada.
//
// ✔ Solo funciona si el objeto realmente es un Becario.
// ✔ Si no lo es, devuelve nullptr.
//
// 🔄 3. Crosscast
// Estudiante* est = dynamic_cast<Estudiante*>(emp);
//
// 📌 Convertimos entre ramas de herencia múltiple.
//
// Estamos pasando:
//
// Empleado* → Estudiante*
//
// Eso solo funciona si el objeto real es Becario.
//
// Este es el caso más interesante 🔥
//
// 🚨 Requisitos para usar dynamic_cast
//
// La clase base debe tener al menos un método virtual
//
// Debe usarse con punteros o referencias
//
// Si falla, devuelve:
//
// nullptr (punteros)
//
// excepción bad_cast (referencias)