//
// Created by Jose Garcia on 27/04/26.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> calificaciones;

    // Agregar calificaciones
    calificaciones.push_back(85);
    calificaciones.push_back(90);
    calificaciones.push_back(78);

    cout << "📊 Calificaciones del alumno:\n";

    for (int i = 0; i < calificaciones.size(); i++) {
        cout << "Materia " << i + 1 << ": " << calificaciones[i] << endl;
    }

    return 0;
}
