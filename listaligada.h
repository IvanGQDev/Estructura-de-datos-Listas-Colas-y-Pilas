#ifndef LISTALIGADA_H
#define LISTALIGADA_H

#include <iostream>
using namespace std;

template <class T>
class ListaLigada 
{
private:
    struct Nodo {
        T dato;
        Nodo *sig;

        Nodo(const T& dato, Nodo *sig = nullptr)
        :dato(dato), sig(sig) {}
    };

    Nodo *head;
    size_t cont;
public:
    ListaLigada();
    ~ListaLigada();
    void push_front(const T &dato);
    void pop_front();
    size_t size();

    void print();
    void push_back(const T &dato);
    void pop_back();
};

template <class T>
ListaLigada<T>::ListaLigada()
{
    head = nullptr;
    cont = 0;
}

template <class T>
ListaLigada<T>::~ListaLigada()
{
    while (cont > 0)
    {
        pop_front();
    }
}


template <class T>
void ListaLigada<T>::push_front(const T &dato)
{
    Nodo *nodo = new Nodo(dato, head);
    head = nodo;
    cont++;
}

template <class T>
void ListaLigada<T>::pop_front()
{
    if (cont == 0) {
        cout << "lista ligada vacia" << endl;
    }
    else {
        Nodo *temp = head;
        head = head->sig;
        delete temp;
        cont--;
    }
}

template <class T>
size_t ListaLigada<T>::size()
{
    return cont;
}

template <class T>
void ListaLigada<T>::print()
{
        Nodo *temp = head;
        while (temp != nullptr) {
        cout << temp->dato << endl;
        temp = temp->sig;
    }
}

template <class T>
void ListaLigada<T>::push_back(const T &dato)
{
    if (cont == 0) {
        push_front(dato);
    }
    else {
        Nodo *nodo = new Nodo(dato);
        Nodo *temp = head;

        while (temp->sig != nullptr)
        {
            temp = temp->sig;
        }
        temp->sig = nodo;
        cont++;     

    }
}

template <class T>
void ListaLigada<T>::pop_back()
{
    if (cont == 0) {
        cout << "lista ligada está vacía" << endl;
    }
    else if (cont == 1) {
        pop_front();
    }
    else {
        Nodo *temp = head;

        while (temp->sig->sig != nullptr)
        {
        temp = temp->sig;
        }

        delete temp->sig;
        temp->sig = nullptr;
        cont--;
    }
}
#endif