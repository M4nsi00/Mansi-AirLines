/*
* Ticket.c
* En esta clase se usa composicion de las clases "Ruta","Cliente" y "Avion"
*/

#ifndef TICKET_H
#define TICKET_H
#include <iostream>
using namespace std;

// Clases que se usan para componer al ticket
#include "Cliente.h"
#include "Ruta.h"
#include "Avion.h"

class Ticket{
    private:
    Cliente cliente;
    Ruta ruta;
    Avion avion;
    string fecha;

    public:
    //Constructor
    Ticket(Cliente cliente, Ruta ruta, Avion avion, string fecha);
    void mostrarTicket();

    //Getters
    Cliente getCliente();
    Ruta getRuta();
    Avion getAvion();
    string getFecha();

    //Setters
    void setFecha( );

};
#endif