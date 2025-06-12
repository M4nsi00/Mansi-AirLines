/* 
* Avion
* Clase en donde se agregan Trabajadores
*/ 

#ifndef AVION_H
#define AVION_H
#include "Trabajador.h" //Para agregar a los trabajadores

class Avion {
    private:
    string modelo;
    int capacidad;
    Trabajador* tripulacion[10]; //Se instancia un numero maximo de trabajadores
    int numTripulantes;

    public:
    // Constructor
    Avion(string modelo, int capacidad);

    void asignarTripulacion(Trabajador* t);
    void mostrarTripulacion();

    // Getters
    string getModelo();
    int getCapacidad();

};
#endif