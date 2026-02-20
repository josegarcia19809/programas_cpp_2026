//
// Created by Jose Garcia on 20/02/26.
//

// 💎 Problema del Diamante en C++
// 🏢 Contexto real: Sistema de acceso en una empresa
//
// Tenemos:
//
// 👤 Persona
//
// 👨‍💼 Empleado hereda de Persona
//
// 🎓 Estudiante hereda de Persona
//
// 🧑‍💻 Becario hereda de Empleado y Estudiante
//
// El problema aparece porque Becario termina heredando dos veces a Persona.
//
// Visualmente:
//
//         Persona
//         /     \
//    Empleado  Estudiante
//         \     /
//         Becario
// Eso es el 💎 diamante.

// ✅ Solución: Herencia Virtual
//
// La solución es decirle a C++:
//
// "Solo quiero UNA copia de Persona, aunque venga por varios caminos"
//
// Eso se hace con virtual.
//


#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;

    Persona(string n) {
        nombre = n;
    }

    void mostrarNombre() {
        cout << "Nombre: " << nombre << endl;
    }
};

// HERENCIA VIRTUAL
class Empleado : virtual public Persona {
public:
    Empleado(string n) : Persona(n) {
    }
};

class Estudiante : virtual public Persona {
public:
    Estudiante(string n) : Persona(n) {
    }
};

class Becario : public Empleado, public Estudiante {
public:
    // Ahora Becario debe inicializar Persona
    Becario(string n)
        : Persona(n), Empleado(n), Estudiante(n) {
    }
};

int main() {
    Becario b("Carlos");

    b.mostrarNombre(); // Ahora funciona correctamente

    return 0;
}

// 🧠 ¿Qué cambió?
//
// Cuando usamos:
//
// class Empleado : virtual public Persona
//
// Estamos diciendo:
//
// Si alguien vuelve a heredar Persona por otro camino, compartan la misma copia.
//
// Ahora Becario tiene:
//
// ✔ UNA sola Persona
// ✔ No hay ambigüedad
// ✔ No hay duplicación de atributos
//
// 📌 Punto MUY importante
//
// Con herencia virtual:
//
// 👉 La clase más derivada (Becario) es la que debe inicializar la clase base virtual (Persona).
//
// Por eso aparece:
//
// : Persona(n)