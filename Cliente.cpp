// Cliente.cpp
// En esta clase se hara practica de sobrecarga en constructores
//

#include "Cliente.h"
#include <iostream>

Cliente::Cliente(){}
Cliente::Cliente(string nombre, int codigoPasaporte) 
: nombre(nombre), codigoPasaporte(codigoPasaporte){
}
Cliente::Cliente(string nombre, int codigoPasaporte, string email) 
: nombre(nombre), codigoPasaporte(codigoPasaporte), email(email){
}

void Cliente::mostrarInformacion(){
    cout << "Cliente " << nombre << "\n";
    cout << "Codigo del pasaporte " << codigoPasaporte << "\n";
    cout << "Email " << email << "\n";
}

string Cliente::getNombre(){
    return nombre;
}

int Cliente::getCodigoPasaporte(){
    return codigoPasaporte;
}

string Cliente::getEmail(){
    return email;
}

void Cliente::setNombre(string nn){
    nombre = nn;
}

void Cliente::setCodigoPasaporte(int cp){
    codigoPasaporte = cp;
}

void Cliente::setEmail(string ne){
    email = ne;
}