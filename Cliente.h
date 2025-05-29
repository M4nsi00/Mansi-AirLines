// Cliente.h
// En esta clase se hara practica de sobrecarga en constructores
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;

class Cliente{
    private:
    string nombre;
    int codigoPasaporte;
    string email; //Valor que solo se usa en el segundo constructor

    public:
    // Constructores
    Cliente(string nombre, int codigoPasaporte);
    Cliente(string nombre, int codigoPasaporte,string email); //Sobrecarga

    void mostrarInformacion();

    //Getters
    string getNombre();
    int getCodigoPasaporte();
    string getEmail();

    //Setters
    void setNombre();
    void setCodigoPasaporte();
    void setEmail();
};
#endif