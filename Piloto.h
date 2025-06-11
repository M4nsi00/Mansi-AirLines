/* 
* Clase Piloto.h
* Clase que hereda de "Trabajador"
* Se pone en practica el uso de herencias y sobreescritura en la funcion trabajo()
* , forma parte del polimorfismo
*/

#ifndef PILOTO_H
#define PILOTO_H
#include "Trabajador.h" //Para que herede de la clase "Trabajador"
#include <iostream>
using namespace std;

class Piloto : public Trabajador{
    private:
    int horasVuelo;

    public:
    // Constructor
    Piloto(string nombre,int id,int horasVuelo);
    void trabajar();  //Sobreescribir la funcion
    //Getters
    int getHorasVuelo();
    //Setters
    void setHorasVuelo(int horas);
};
#endif