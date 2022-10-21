#include <iostream>

using namespace std;

#include "arreglo.h"
#include "listaligada.h"
#include "listadobleligada.h"
#include "pila.h"
#include "cola.h"

//--- No modificar el main ya que es necesario para
//------ la prueba de GitHub Classroom
//--- Puede comentarse para hacer sus
//------- propias pruebas

int main() {
    Arreglo<string> centros;            // arreglo dinamico de strings
    centros << "CUCEI" << "CUCEA"       // agregar strings
            << "CUCS" << "CUCBA";       // agregar strings
    cout << centros.size() << endl;     // cantidad de elementos
    cout << centros[0] << endl;         // elemento en [0]
    centros.burbuja();                  // clasificar elementos
    cout << centros[0] << endl;         // elementos en [0]
    centros.insertar_inicio("CUAAD");   // agregar string
    centros.seleccion();                // clasificar elementos
    cout << centros[0] << endl;         // elementos en [0]
    centros.eliminar_inicio();          // eliminar primer elemento
    centros.eliminar(1);                // eliminar elemento en posicion 2
    cout << centros.size() << endl;     // elementos en [0]

    ListaLigada<string> diviciones;                     // lista de strings
    diviciones.push_back("Electronica y Computacion");  // agregar string al final
    diviciones.push_back("Ciencias Basicas");           // agregar string al final
    diviciones.push_front("Ciencias Quimicas");         // agregar string al inicio
    cout << diviciones.size() << endl;                  // cantidad de elementos en la lista
    diviciones.print();                                 // recorrido e impresion de elementos
    diviciones.pop_back();                              // eliminar ultimo elemento
    cout << diviciones.size() << endl;                  // cantidad de elementos

    ListaDobleLigada<string> departamentos;         // lista doble de strings
    departamentos << "Ciencias Computacionales"     // agregar string
                  << "Electronica"                  // agregar string
                  << "Farmacobiologia"              // agregar string
                  << "Mecanica";                    // agregar string
    cout << departamentos.size() << endl;           // cantidad de elementos
    departamentos.print_reverse();                  // recorrido de fin a inicio
    departamentos.push_front("Microbiologia");      // agregar al inicio
    cout << *departamentos.front() << endl;         // primer elemento
    departamentos.pop_back();
    cout << *departamentos.back() << endl;          // ultimo elemento
    
    Cola<string> carreras_01;               // cola de strings
    carreras_01.push("Robotica");           // encolar
    carreras_01.push("Informatica");        // encolar
    carreras_01.push("Computacion");        // encolar
    carreras_01.push("Quimica");            // encolar
    cout << *carreras_01.front() << endl;   // frente de la cola
    cout << *carreras_01.back() << endl;    // final de la cola
    carreras_01.pop();                      // desencolar
    cout << carreras_01.size() << endl;     // cantidad de elementos
    
    Pila<string> carreras_02;                   // pila de strings
    while (!carreras_01.empty()) {              // desencolar hasta quedar vacia
        auto &carrera = *carreras_01.front();   // referencia hacia el string del inicio de la cola
        cout << carrera << endl;                // imprimir string
        carreras_02.push(carrera);              // apilar string
        carreras_01.pop();                      // desencolar
    }
    cout << *carreras_02.top() << endl;         // tope de la pila
    carreras_02.pop();                          // desapilar
    while (!carreras_02.empty()) {              // desapilar hasta quedar vacia
        auto carrera = *carreras_02.top();      // referencia hacia el string del tope de la pila
        cout << carrera << endl;                // imprimir string
        carreras_02.pop();                      // desapilar
    }
    cout << carreras_02.size() << endl;         // cantidad de elementos
    

    return 0;
}