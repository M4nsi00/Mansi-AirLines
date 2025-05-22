// Avion.cpp
// Clase en donde se agregan Trabajadores
// 

#include "Avion.h"
#include <iostream>

Avion::Avion(string modelo, int capacidad) : modelo(modelo), capacidad(capacidad){
}

void Avion::asignarTripulacion(Trabajador t){
    tripulacion.push_back(t);
}