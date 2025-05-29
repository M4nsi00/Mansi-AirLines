// Trabajador.h
// Clase de la que heredan Azafata y Piloto
// Aplica herencias y sobreescritura

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
    virtual void trabajar(); //Funcion que se sobreescribe en las clases hija
    // Getters
    string getNombre();
    int getId();
    int getHorasTrabajo();
};
#endif