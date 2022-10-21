#ifndef COLA_H
#define COLA_H

#include "listadobleligada.h"

template <class T>
class Cola
{
public:
    Cola();
    void push(const T &dato); //encolar
    void pop(); // desencolar
    T* front(); // inicio
    T* back();  //final
    size_t size(); 
    bool empty(); 

private:
    ListaDobleLigada<T> lista;
};

template <class T>
Cola<T>::Cola()
{
    
}

template <class T>
void Cola<T>::push(const T &dato)
{
    lista.push_back(dato);
}

template <class T>
void Cola<T>::pop()
{
    lista.pop_front();
}

template <class T>
T* Cola<T>::front()
{
    return lista.front();
}

template <class T>
T* Cola<T>::back()
{
    return lista.back();
}

template <class T>
size_t Cola<T>::size()
{
    return lista.size();
}

template <class T>
bool Cola<T>::empty()
{
    return lista.empty();
}

#endif