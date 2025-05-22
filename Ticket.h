// Ticket.c
// En esta clase se usa composicion de las clases "Ruta","Cliente" y "Avion"
//

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
    void mostrarTicket() const;

    //Getters
    Cliente getCliente() const;
    Ruta getRuta() const;
    Avion getAvion() const;
    string getFecha() const;

    //Setters
    void setCliente(Cliente cliente);
    void setRuta(Ruta ruta);
    void setAvion(Avion avion);
    void setFecha(string fecha);

};
#endif