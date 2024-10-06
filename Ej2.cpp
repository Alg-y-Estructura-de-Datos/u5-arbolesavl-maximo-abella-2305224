#include <iostream>
using namespace std;
#include "Arbol/ArbolBinarioAVL.h"
int main() {
    // Prueba AVL
    cout << "Ejercicio N° 2" << endl;
    ArbolBinarioAVL<int> ar1;
    for (int i = 0; i < 100; i++)
    {
        ar1.put(i);
    }
    ar1.print();
    return 0;
}
