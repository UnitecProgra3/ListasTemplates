#ifndef NODO_H
#define NODO_H

#include <iostream>

template<typename Tipo>
class Nodo
{
    public:
        Nodo* sig;
        Tipo valor;
        Nodo(Tipo valor)
        {
            this->valor = valor;
            this->sig = NULL;
        }
    protected:
    private:
};

#endif // NODO_H
