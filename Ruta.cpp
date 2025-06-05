// Ruta.cpp
// Clase donde se pone en practica la sobrecarga
//

#include "Ruta.h"
#include <iostream>

Ruta::Ruta(string origen, string destino, int duracion) : origen(origen), destino(destino), duracion(duracion){
}

void Ruta::mostrarRuta(){
    cout << "Ruta " << origen << " -> " << destino << " con duracion " << duracion << " horas\n"; 
}

string Ruta::getOrigen(){
    return origen;
}

string Ruta::getDestino(){
    return destino;
}

int Ruta::getDuracion(){
    return duracion;
}
