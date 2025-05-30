// Cliente.cpp
// En esta clase se hara practica de sobrecarga en constructores
//

#include "Cliente.h"
#include <iostream>

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

void Cliente::setNombre( ){
    cout << "Ingrese nombre: " << endl;
    cin >> nombre;
}

void Cliente::setCodigoPasaporte( ){
    cout << "Ingrese codigo del pasaporte: " << endl;
    cin >> codigoPasaporte;
}

void Cliente::setEmail( ){
    cout << "Ingrese su email: " << endl;
    cin >> email;
}