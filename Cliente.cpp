// Cliente.cpp
// En esta clase se hara practica de sobrecarga en constructores
//

#include "Cliente.h"
#include <iostream>

Cliente::Cliente(string nombre, int codigoPasaporte) : nombre(nombre), codigoPasaporte(codigoPasaporte){
}
Cliente::Cliente(string nombre, int codigoPasaporte, string email) : nombre(nombre), codigoPasaporte(codigoPasaporte), email(email){
}

void Cliente::mostrarInformacion() const{
    cout << "Cliente " << nombre << "\n";
    cout << "Codigo del pasaporte " << codigoPasaporte << "\n";
    cout << "Email " << email << "\n";
}