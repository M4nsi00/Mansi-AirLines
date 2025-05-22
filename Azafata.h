// Azafata.h
// Clase que hereda de "Trabajador"
// Se pone en practica el uso de sobreescribir en la funcion trabajo()

#ifndef AZAFATA_H
#define AZAFATA_H
#include <iostream>
#include "Trabajador.h"  //Para que herede de la clase "Trabajador"
#include <vector> //Para crear la lista de idiomas que habla
using namespace std;

class Azafata : public Trabajador {
    private:
    vector<string> idiomasHablados;

    public:
    //Constructor
    Azafata(string nombre, int id, vector<string> idiomasHablados);
    void trabajar() const;  //Funcion que se va a sobreescribir

    //Getter
    vector<string> getIdiomasHablados() const;

    //Setter
    void setIdiomasHablados(const vector<string>& idiomasHablados);
};
#endif