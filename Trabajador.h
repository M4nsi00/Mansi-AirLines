/*
* Trabajador.cpp
* Clase de la que heredan Azafata y Piloto, clase Abstracta
* Aplica herencias, sobreescritura y polimorfismo
*/

#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
using namespace std;

class Trabajador {
    protected:
    string nombre;
    int id;
    int horasTrabajo;

    public:
    //Constructor
    Trabajador(string nombre,int id, int horasTrabajo);
    virtual void trabajar() = 0; //Funcion que se sobreescribe en las clases hija
    // Getters
    string getNombre();
    int getId();
    int getHorasTrabajo();
};
#endif