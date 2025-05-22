// Azafata.cpp
// Clase que hereda de "Trabajador"
// Se pone en practica el uso de sobreescribir en la funcion trabajo()

#include "Azafata.h"
#include <iostream>

Azafata::Azafata(string nombre, int id, std::vector<string> idiomasHablados) : Trabajador(nombre, id, horasTrabajo) , idiomasHablados(idiomasHablados){
}

void Azafata::trabajar() const{ // Funcion que va a sobreescribirse cambiando horasTrabajo por idiomasHablados
    std::cout << "Azafata" << nombre << "habla los siguientes idiomas: ";
    for(size_t i = 0; i < idiomasHablados.size(); ++i) {
        std::cout << idiomasHablados[i];
        if (i < idiomasHablados.size() - 1) std::cout << ", ";
    }
    std::cout << ".\n";
}