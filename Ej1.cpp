#include <iostream>
using namespace std;
#include "Arbol/ArbolBinarioAVL.h"
#include "Menu/UiMenu_lib.h"
int main() {

    cout << "Ejercicio N° 1" << endl;

    UiMenu::Menu m1[5] = {
        {1,"Agregar Codigo de producto"},
        {2,"Eliminar Codigo de producto"},
        {3,"Buscar Producto por codigo"},
        {4,"Mostrar Arbol"},
        {5,"Salir"},
    };

    ArbolBinarioAVL<int> ids;

    int opcion;
    UiMenu::MostrarMenu(5,m1);
    while (true)
    {
    opcion = UiMenu::selection(m1,5);
    switch (opcion)
    {
    case 1:{
        int n;
        std::cout<<"Ingrese el id del producto"<<std::endl;
        std::cin>>n;
        try
        {
            ids.put(n);
        }
        catch(...)
        {
            std::cout<<"Codigo ya existe"<<std::endl;
        }
        break;   
    }
    case 2:{
        std::cout<<"Ingrese el codigo a eliminar"<<std::endl;
        int n;
        std::cin>>n;
        try
        {
            ids.remove(n);
        }
        catch(...)
        {
            std::cout<<"Codigo inexistente"<<std::endl;
        }
        
        break;
    }
    case 3: {
        try
        {
            std::cout<<"Ingrese el id que quiere buscar"<<std::endl;
            int n;
            std::cin>>n;
            ids.search(n);
            std::cout<<"El producto esta en stock"<<std::endl;
        }
        catch(...)
        {
            std::cout<<"El id no esta en stock"<<std::endl;
        }
        break;
    }
    case 4:{
        ids.print();
        break;
    }
    case 5: {
        return 0;
    }
    default:
        break;
    }

    }
    
    return 0;
}
