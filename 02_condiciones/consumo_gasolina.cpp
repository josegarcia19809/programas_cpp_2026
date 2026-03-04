// Programa para mostrar si el consumo de gasolina fue alto
#include <iostream>
using namespace std;

int main()
{
    double kilometrosRecorridos;
    const double KILOMETROS_POR_LITRO = 12;
    cout << "Consumo de gasolina" << endl;
    cout << "Dime cuántos kilometros recorriste: ";
    cin >> kilometrosRecorridos;

    double litrosConsumidos = kilometrosRecorridos / KILOMETROS_POR_LITRO;
    cout << "Litros consumidos: " << litrosConsumidos << endl;
    if (litrosConsumidos > 40)
    {
        cout << "El consumo de gasolina fue alto." << endl;
    }
    else
    {
        cout << "El consumo de gasolina fue normal." << endl;
    }

    return 0;
}