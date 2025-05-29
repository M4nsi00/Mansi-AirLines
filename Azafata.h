// Azafata.h
// Clase que hereda de "Trabajador"
// Se pone en practica el uso de sobreescribir en la funcion trabajo()

#ifndef AZAFATA_H
#define AZAFATA_H
#include <iostream>
#include "Trabajador.h"  //Para que herede de la clase "Trabajador"
using namespace std;

const int MAX_IDIOMAS = 10;

class Azafata : public Trabajador {
    private:
    string idiomasHablados[MAX_IDIOMAS];
    int numIdiomas;

    public:
    //Constructor
    Azafata(string nombre, int id, int horasTrabajo, string idiomasHablados[], int numIdiomas);
    void trabajar();  //Funcion que se va a sobreescribir tambien se aplica polimorfismo

    //Getter
    void getIdiomasHablados();
};
#endif