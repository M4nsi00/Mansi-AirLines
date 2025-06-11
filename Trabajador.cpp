/*
* Trabajador.cpp
* Clase de la que heredan Azafata y Piloto, clase Abstracta
* Aplica herencias, sobreescritura y polimorfismo
*/

#include "Trabajador.h"
//Connstructor
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
