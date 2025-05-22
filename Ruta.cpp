// Ruta.cpp
// Clase donde se pone en practica la sobrecarga
//

#include "Ruta.h"
#include <iostream>

Ruta::Ruta(string origen, string destino) : origen(origen), destino(destino){
}
Ruta::Ruta(string origen, string destino, int duracion) : origen(origen), destino(destino), duracion(duracion){
}

void Ruta::mostrarRuta() const{
    cout << "Ruta " << origen << "->" << destino << " Con duracion" << duracion << " horas\n"; 
}