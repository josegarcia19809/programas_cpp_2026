// Programa para calcular la velocidad promedio de un vehículo
#include <iostream>
using namespace std;

int main()
{
    cout << "Calcular distancia promedio🚗" << endl;
    double tiempo, distancia;
    cout << "Dame distancia recorrida: ";
    cin >> distancia;
    cout << "Dame tiempo ocupado: ";
    cin >> tiempo;
    double velocidad = distancia / tiempo;
    if ( velocidad > 100 ){
        cout << "Exceso de velocidad ‼️";
    }
    cout << "🏃🏻‍♂️Tu velocidad promedio es " << velocidad ;
    return 0;
}