#include <iostream>
#include "tipos.h"
#include "MyFunc.h"
using namespace std;
int main() {
    l_enteros segundos;
    enteros horas, min, seg;

    do {
        cout << "Segundos: ";
        cin >> segundos;
    } while (segundos <1);

    Convertir(segundos, horas, min, seg);
    cout << "Equivale a: ";
    cout << horas << ":" << min << ":" << seg;
    return 0;
}