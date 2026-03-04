// Programa para mostrar si la estadía fue larga en un estacionamiento
#include <iostream>
using namespace std;

int main()
{
    const double COSTO_POR_HORA = 20;
    double horas;

    cout << "Cuantas horas estuvo estacionado? ";
    cin >> horas;

    double costoTotal = horas * COSTO_POR_HORA;

    cout << "El costo total fue de: " << costoTotal << endl;

    if (costoTotal >= 200)
    {
        cout << "La estadia fue larga" << endl;
    }
    else
    {
        cout << "La estadia fue corta" << endl;
    }
    return 0;
}