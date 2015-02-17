#include <iostream>
#include "Lista.h"

//using namespace std;

int main()
{
    Lista<int>l;

    l.agregar(1);
    l.agregar(2);
    l.agregar(3);
    l.agregar(4);

    l.borrar(3);

    for(int i=0;i<l.getTamano();i++)
        cout<<l.obtener(i)<<endl;

    cout<<l.obtener(6)<<endl;

    //l.imprimir();

    return 0;
}
