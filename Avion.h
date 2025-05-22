// Avion
// Clase en donde se agregan Trabajadores
// 

#ifndef AVION_H
#define AVION_H
#include <vector> //Para agregar a los trabajadores en forma de lista
#include "Trabajador.h" //Para agregar a los trabajadores

class Avion {
    private:
    string modelo;
    int capacidad;
    std::vector<Trabajador> tripulacion;

    public:
    // Constructor
    Avion(string modelo, int capacidad);

    void asignarTripulacion(Trabajador t);

    // Getters
    string getModelo() const;
    int getCapacidad() const;
    std::vector<Trabajador> getTripulacion() const;

    //Setters
    void setModelo(string modelo);
    void setCapacidad(int capacidad);
    void setTripulacion(std::vector<Trabajador>);
};

#endif