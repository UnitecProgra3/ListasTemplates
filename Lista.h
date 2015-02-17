#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

using namespace std;

template <typename Tipo>
class Lista
{
    public:
        Nodo<Tipo>* inicio;

        Lista()
        {
            inicio = NULL;
        }
        void agregar(Tipo valor)
        {
            Nodo<Tipo>*nodo = new Nodo<Tipo>(valor);
            if(estaVacia())
            {
                inicio = nodo;
            }
            else
            {
                Nodo<Tipo>*temp = inicio;
                while(temp->sig != NULL)
                {
                    temp = temp->sig;
                }
                temp->sig = nodo;
            }
        }

        bool estaVacia()
        {
            return inicio == NULL;
        }

        void borrar(Tipo valor)
        {
            if(valor == inicio->valor)
            {
                Nodo<Tipo>* temp_borrar = inicio;
                inicio = inicio->sig;
                delete temp_borrar;
            }else
            {
                Nodo<Tipo>*temp = inicio;
                while(temp->sig->valor != valor)
                {
                    temp = temp->sig;
                    if(temp->sig==NULL)
                    {
                        cout<<"Error: No existe."<<endl;
                        return;
                    }
                }
                Nodo<Tipo>* temp_borrar = temp->sig;
                temp->sig = temp->sig->sig;
                delete temp_borrar;
            }
        }

        void imprimir()
        {
            for(Nodo<Tipo>*temp = inicio;
                temp!=NULL;
                temp=temp->sig)
                cout<<temp->valor<<endl;
        }

        Tipo obtener(int pos)
        {
            if(pos<getTamano())
            {
                Nodo<Tipo>* temp = inicio;
                for(int i=0;i<pos;i++)
                    temp=temp->sig;
                return temp->valor;
            }
            return NULL;
        }

        int getTamano()
        {
            int tam=0;
            for(Nodo<Tipo>*temp = inicio;
                temp!=NULL;
                temp=temp->sig)
                tam++;
            return tam;
        }

    protected:
    private:
};

#endif // LISTA_H
