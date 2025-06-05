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
    Cliente();
    Cliente(string nombre, int codigoPasaporte);
    Cliente(string nombre, int codigoPasaporte,string email); //Sobrecarga

    void mostrarInformacion();

    //Getters
    string getNombre();
    int getCodigoPasaporte();
    string getEmail();

    //Setters
    void setNombre(string nn);
    void setCodigoPasaporte(int cp);
    void setEmail(string ne);
};
#endif