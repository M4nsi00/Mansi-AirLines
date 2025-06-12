/*
* Ticket.cpp
* En esta clase se usa composicion de las clases "Ruta","Cliente" y "Avion"
*/

#include "Ticket.h"
#include "Cliente.h"
#include "Ruta.h"
#include "Avion.h"
#include <iostream>

Ticket::Ticket(Cliente cliente, Ruta ruta, Avion avion, string fecha) 
: cliente(cliente), ruta(ruta), avion(avion), fecha(fecha){
}

void Ticket::mostrarTicket(){
    cout << "=== TICKET ===\n";
    cout << "Fecha: " << fecha << "\n";
    cliente.mostrarInformacion();
    ruta.mostrarRuta();
    cout << "Avion: " << avion.getModelo() << " | Capacidad: " << avion.getCapacidad() << "\n";
}

//Setters
void Ticket::setFecha(){
    cout << "Ingrese fecha: " << endl;
    cin >> fecha;
}

//Getters
Cliente Ticket::getCliente(){
    return cliente;
}

Ruta Ticket::getRuta(){
    return ruta;
}

Avion Ticket::getAvion(){
    return avion;
}

string Ticket::getFecha(){
    return fecha;
}