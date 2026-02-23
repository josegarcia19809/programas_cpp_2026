// Elaborado por José L García
// Fecha: 11 febrero de 2026
// Programa para probar operadores lógicos
#include <iostream>

using namespace std;

int main() {
    int a = 4;
    int b = 6;
    int c = 4;

    cout << "¿b >= a? " << (b >= a) << endl;  // true
    cout << "¿a >= c? " << (a >= c) << endl;  // true
    cout << "¿a >= 5? " << (a >= 5) << endl;  // false
    cout << "---------------------------" << endl;
    cout << "¿a <= c? " << (a <= c) << endl;  // true
    cout << "¿b <= 10? " << (b <= 10) << endl;  // true
    cout << "¿b <= a? " << (b <= a) << endl;  // false
    //   <= ✅   =< ❌    < = ❌
    //   >= ✅   => ❌    > = ❌
    cout << "---------------------------" << endl;
    cout << "¿a == 4? " << (a == 4) << endl;  // true
    cout << "¿a == 2? " << (a == 2) << endl;  // false
    //  == ✅    = = ❌   = ❌
    cout << "---------------------------" << endl;
    cout << "¿a != b? " << (a != b) << endl;  // true
    cout << "¿b != c? " << (b != c) << endl;  // true
    cout << "¿a != c? " << (a != c) << endl;  // false
    //  != ✅    = ! ❌   ! ❌

    return 0;
}
