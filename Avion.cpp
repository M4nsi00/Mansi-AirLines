/* 
* Avion
* Clase en donde se agregan Trabajadores
*/ 

#include "Avion.h"
#include <iostream>

Avion::Avion(string modelo, int capacidad) 
: modelo(modelo), capacidad(capacidad){
    numTripulantes = 0;
}

//Getters
int Avion::getCapacidad(){
    return capacidad;
}

string Avion::getModelo(){
    return modelo;
}


void Avion::asignarTripulacion(Trabajador* t){
    if (numTripulantes < 10){
        tripulacion[numTripulantes++] = t;
    } else{
        cout << "Tripulacion llena \n";
    }
}

void Avion::mostrarTripulacion(){
    cout << "Trpulacion del avion modelo: " << modelo << endl;
    for (int i = 0; i < numTripulantes; ++i){
        tripulacion[i] -> trabajar();
    }
}