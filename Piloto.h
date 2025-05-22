// Clase Piloto.h
// Clase que hereda de "Trabajador"
// Se pone en practica el uso de herencias y sobreescritura en la funcion trabajo()

#ifndef PILOTO_H
#define PILOTO_H
#include "Trabajador.h" //Para que herede de la clase "Trabajador"
#include <iostream>
using namespace std;

class Piloto : public Trabajador{
    private:
    int horasVuelo;

    public:
    // Constructor
    Piloto(string nombre,int id,int horasVuelo);
    void trabajar() const;  //Sobreescribir la funcion
    //Getters
    int getHorasVuelo() const;
    //Setters
    void setHorasVuelo(int horas);
};
#endif