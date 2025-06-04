#include <iostream>
#include "Cliente.h"
#include "Avion.h"
#include "Ruta.h"
#include "Trabajador.h"
#include "Azafata.h"
#include "Piloto.h"
#include "Ticket.h"

using namespace std;

const int MAX_TRAB = 2; //Este maximo se decide por la cantidad de trabajadores que la aerolinea 
// quiere el usuario no decide

int main() {
    Cliente cliente1("Sebastian Mansilla Cots", 786908);
    Cliente cliente2("Ana Gomez", 789437, "ana@gmail.com");

    cliente1.mostrarInformacion();
    cout << endl;
    cliente2.mostrarInformacion();
    cout << endl;

    Ruta ruta1("CDMX", "Nueva York");
    Ruta ruta2("Madrid", "Tokio", 14);

    ruta1.mostrarRuta();
    ruta2.mostrarRuta();
    cout << endl;

    string idiomas[] = {"Espanol", "Ingles", "Frances"};
    
    Trabajador* trabajadores[MAX_TRAB];
    Trabajador* piloto1 = new Piloto("Carlos Ruiz", 1001, 8);
    Trabajador* azafata1 = new Azafata("Laura Mendez", 201, 8, idiomas, 3);

    trabajadores[0] = piloto1;
    trabajadores[1] = azafata1;

    for(int i = 0; i < MAX_TRAB; i++){
        trabajadores[i] ->trabajar();
        cout << endl;
    }

    //piloto1 ->trabajar();    // aplica polimorfismo
    //azafata1 ->trabajar();   // aplica polimorfismo
    //cout << endl;

    Avion avion1("Boeing 737", 180);

    avion1.asignarTripulacion(piloto1);
    avion1.asignarTripulacion(azafata1);

    cout << "Tripulacion del avion " << avion1.getModelo() << ":\n";
    avion1.mostrarTripulacion();
    cout << endl;

    Ticket ticket1(cliente2, ruta2, avion1, "2025-06-10");
    ticket1.mostrarTicket();

    return 0;
}