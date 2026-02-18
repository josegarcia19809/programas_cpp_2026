// Elaborado por José L García
// Fecha: 18 febrero de 2026
// Programa para calcular el total de compras en un supermercado
#include <iostream>
using namespace std;

int main()
{
    float precioProducto1 = 0.0f;
    float precioProducto2 = 0.0f;
    float precioProducto3 = 0.0f;
    int cantidadProductos = 0;
    int porcentajeDescuento = 0;

    // Pedir datos al usuario
    cout << "Coloca el precio del producto 1: ";
    cin >> precioProducto1;

    cout << "Coloca el precio del producto 2: ";
    cin >> precioProducto2;

    cout << "Coloca el precio del produto 3: ";
    cin >> precioProducto3;

    cout << "Coloca la cantidad de productos: ";
    cin >> cantidadProductos;

    cout << "Coloca el porcentaje de descuento: ";
    cin >> porcentajeDescuento;

    // Calcular subtotal de compra
    float subtotalCompra = precioProducto1 + precioProducto2 + precioProducto3;

    // Calcular monto descuento
    float montoDescuento = subtotalCompra * (porcentajeDescuento / 100.0);

    // Calcular total a pagar
    float totalPagar = subtotalCompra - montoDescuento;

    // Mostrar resultados
    cout << "subtotal: $" << subtotalCompra << endl;
    cout << "descuento: $" << montoDescuento << endl;
    return 0;
}