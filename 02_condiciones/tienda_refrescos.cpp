#include <iostream>
using namespace std;

int main() {
    cout << "¡Bienvenido a la tienda de refrescos!" << endl;

    const double costoRefresco = 20;
    int cantidadRefrescos;

    cout << "Dime cuántos refrescos compraste: ";
    cin >> cantidadRefrescos;

    double total = cantidadRefrescos * costoRefresco;

    cout << "El total de tu compra es: $" << total << " pesos" << endl;

    if (total != 100) {
        cout << "El total no coincide con la promoción especial." << endl;
    } else {
        cout << "¡Exacto! Obtienes un refresco gratis." << endl;
    }

    return 0;
}
