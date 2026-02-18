//
// Created by Jose Garcia on 18/02/26.
//

// 🎓 Contexto: Registro de alumnos en una escuela
//
// Imagina que tienes una clase Alumno y quieres llevar el conteo de:
//
// 📌 Cuántos alumnos se han creado
//
// 📌 Sin importar cuántos objetos existan
//
// 📌 Con un solo contador compartido
//
// Aquí usamos un atributo static, porque el contador pertenece a la clase,
// no a cada alumno individual.

#include <iostream>
using namespace std;

class Alumno {
private:
    string nombre;

public:
    static int totalAlumnos; // Atributo static

    Alumno(string n) {
        nombre = n;
        totalAlumnos++;
    }

    void mostrarNombre() const {
        cout << "Alumno: " << nombre << endl;
    }
};

// Definición del atributo static (obligatorio)
int Alumno::totalAlumnos = 0;


int main() {
    Alumno a1("Carlos");
    Alumno a2("Ana");
    Alumno a3("Luis");

    cout << "Total de alumnos creados: "
            << Alumno::totalAlumnos << endl;
}
