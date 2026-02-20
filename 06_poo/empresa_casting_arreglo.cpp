//
// Created by Jose Garcia on 20/02/26.
//

// Vamos a aplicar casting usando dynamic_cast dentro de un arreglo de tipo base, que es
// el escenario más común en polimorfismo real.
//
// Usaremos:
//
// 👉 Downcast (Base → Derivada)
// porque es el más útil cuando tenemos un arreglo de Persona*.
//
// 🏢 Contexto empresarial
//
// Sistema de Recursos Humanos:
//
// 👤 Persona
//
// 👨‍💼 Empleado
//
// 🎓 Estudiante
//
// 🧑‍💻 Becario (hereda múltiple de Empleado y Estudiante)
//
// Guardaremos todos en un arreglo de tipo Persona*.
//
// Luego identificaremos qué tipo real es cada objeto usando dynamic_cast.
//
// 💻 Código
#include <iostream>
using namespace std;

// ===== Clase Base =====
class Persona {
public:
    string nombre;

    Persona(string n) : nombre(n) {
    }

    virtual void mostrar() {
        cout << "Persona: " << nombre << endl;
    }

    virtual ~Persona() {
    }
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
    // 🔹 Arreglo de tipo base
    Persona *personas[3];

    personas[0] = new Empleado("Carlos");
    personas[1] = new Estudiante("Ana");
    personas[2] = new Becario("Luis");

    cout << "\n--- Recorriendo arreglo ---\n\n";

    for (int i = 0; i < 3; i++) {
        personas[i]->mostrar();

        // 🔽 DOWNCAST usando dynamic_cast
        Empleado *emp = dynamic_cast<Empleado *>(personas[i]);
        if (emp) {
            emp->trabajar();
        }

        Estudiante *est = dynamic_cast<Estudiante *>(personas[i]);
        if (est) {
            est->estudiar();
        }

        cout << "-------------------\n";
    }

    // Liberar memoria
    for (int i = 0; i < 3; i++) {
        delete personas[i];
    }

    return 0;
}

// 🧠 ¿Qué está pasando aquí?
//
// Tenemos un arreglo:
//
// Persona* personas[3];
//
// Pero dentro guardamos:
//
// Empleado
//
// Estudiante
//
// Becario
//
// Gracias a dynamic_cast podemos preguntar:
//
// ¿Este objeto realmente es un Empleado?
// ¿Es un Estudiante?
//
// 🔎 Lo interesante
//
// Cuando el objeto es Becario:
//
// personas[2] = new Becario("Luis");
//
// Sucede esto:
//
// ✔ dynamic_cast<Empleado*> funciona
// ✔ dynamic_cast<Estudiante*> funciona
//
// Porque Becario hereda de ambos 🔥
//
// 🎓 Qué tipo de cast usamos
//
// 👉 Downcast
//
// Porque estamos pasando:
//
// Persona*  →  Empleado*
// Persona*  →  Estudiante*
//
// Y eso solo funciona si el objeto real lo permite.
//
// 📌 Por qué usamos dynamic_cast aquí
//
// Si usáramos static_cast, el programa podría compilar
// pero sería peligroso 😬
//
// dynamic_cast nos protege devolviendo nullptr si el tipo no coincide.
