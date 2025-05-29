// Ruta.h
// Clase donde se pone en practica la sobrecarga
//

#ifndef RUTA_H
#define RUTA_H
#include <iostream>
using namespace std;

class Ruta{
    private:
    int duracion;  //Cambio que se hara en el segundo constructor
    string destino;
    string origen;

    public:
    // Constructores
    Ruta(string origen, string destino);
    Ruta(string origen, string destino, int duracion); //Sobrecarga al agregar la variable de duracion

    void mostrarRuta();

    //Getters
    string getOrigen();
    string getDestino();
    int getDuracion();
};
#endif