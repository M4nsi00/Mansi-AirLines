// Trabajador.cpp
// Clase de la que heredan Azafata y Piloto
// Aplica herencias y sobreescritura

#include "Trabajador.h"
//Constructor
Trabajador::Trabajador(string nombre, int id,int horasTrabajo) 
: nombre(nombre), id(id), horasTrabajo(horasTrabajo){
}
string Trabajador::getNombre(){ 
    return nombre; 
}
int Trabajador::getId(){
    return id; 
}

int Trabajador::getHorasTrabajo(){
    return horasTrabajo;
}

void Trabajador::trabajar(){
    cout << "Trabajador " << nombre << "trabaja " << horasTrabajo << " horas por dia" << endl;
}