// Trabajador.cpp
// Clase de la que heredan Azafata y Piloto
// Aplica herencias y sobreescritura

#include "Trabajador.h"
//Constructor
Trabajador::Trabajador(string nombre, int id,int horasTrabajo) : nombre(nombre), id(id), horasTrabajo(horasTrabajo){
}
string Trabajador::getNombre() const { 
    return nombre; 
}
int Trabajador::getId() const {
    return id; 
}
void Trabajador::trabajar() const{
    cout << "Trabajador " << nombre << "trabaja " << horasTrabajo << "por dia" << endl;
}