/*
* Piloto.cpp
/* Clase que hereda de "Trabajador"
/* Se pone en practica el uso de herencias y sobreescritura en la funcion trabajo()
*/

#include "Piloto.h"
#include <iostream>
using namespace std;

Piloto :: Piloto(string nombre, int id, int horasVuelo) 
: Trabajador(nombre, id, horasVuelo), horasVuelo(horasVuelo)  {
}

// Se sobreescribe la funcion trabajo cambiando la variable horasTrabajo por horasVuelo
void Piloto::trabajar(){
    cout << "Piloto " << nombre << " vuela por: " << horasVuelo << "horas" << endl;
}

//Getter
int Piloto::getHorasVuelo(){
    return horasVuelo;
}

//Setter
void Piloto::setHorasVuelo(int horas) {
    horasVuelo = horas;
}