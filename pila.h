#ifndef PILA_H
#define PILA_H

#include "listadobleligada.h"

template <class T>
class Pila
{
public:
    Pila();
    void push(const T &data);
    void pop();
    T* top();
    size_t size();
    bool empty();

private: 
    ListaDobleLigada<T> lista;
};

template <class T>
Pila<T>::Pila()
{

}

template <class T>
void Pila<T>::push(const T &dato)
{
    lista.push_back(dato);
}

template <class T>
void Pila<T>::pop()
{
    lista.pop_back();
}

template <class T>
T* Pila<T>::top()
{
    return lista.back();
}

template <class T>
size_t Pila<T>::size()
{
    return lista.size();
}

template <class T>
bool Pila<T>::empty()
{
    return lista.empty();
}

#endif