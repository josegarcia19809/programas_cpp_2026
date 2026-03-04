// Programa para mostrar si recibe promoción por compra de boletos
#include <iostream>
using namespace std;

int main()
{
    const double COSTO_BOLETO = 75;
    int boletosComprados;

    cout << "¿Cuántos boletos compro? ";
    cin >> boletosComprados;

    double totalAPagar = (boletosComprados * COSTO_BOLETO);
    cout << "Total a pagar: " << totalAPagar << endl;
    if (totalAPagar > 300)
    {
        cout << "¡Felicidades!, recibes palomitas gratis" << endl;
    }
    else {
        cout << "No hay promocion disponible" << endl;
    }
    return 0;
}