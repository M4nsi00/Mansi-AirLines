/*
* Azafata.h
* Clase que hereda de "Trabajador"
* Se pone en practica el uso de sobreescribir en la funcion trabajo()
*/

#include "Azafata.h"
#include <iostream>

Azafata::Azafata(string nombre, int id,int horasTrabajo, string idiomasHablados[]
, int numIdiomas) : Trabajador(nombre, id, horasTrabajo) , numIdiomas (numIdiomas){
    for (int i = 0; i < numIdiomas && i < MAX_IDIOMAS; ++i) {
    this -> idiomasHablados[i] = idiomasHablados[i];
    }
}

// Funcion que va a sobreescribirse cambiando horasTrabajo por idiomasHablados
void Azafata::trabajar(){ 
    cout << "Azafata  " << nombre << " habla los siguientes idiomas: " << endl;
    for(int i = 0; i < numIdiomas; i++){
        cout << idiomasHablados[i] << endl;
    }
}

//Getter
void Azafata::getIdiomasHablados(){
    for(int i = 0; i < numIdiomas; i++){
        cout << idiomasHablados[i] << endl;
    }
}