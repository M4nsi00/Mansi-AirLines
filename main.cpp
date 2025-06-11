#include <iostream>
#include "Cliente.h"
#include "Avion.h"
#include "Ruta.h"
#include "Trabajador.h"
#include "Azafata.h"
#include "Piloto.h"
#include "Ticket.h"

using namespace std;

const int MAX_TRAB = 2; 
/*
*Este maximo se decide por la cantidad de trabajadores que la aerolinea 
* quiere el usuario no decide
*/

const int MAX_CLIENTES = 10;

int main() {
    Cliente clientes[MAX_CLIENTES];
    int numClientes = 0;
   
    Ruta ruta1("CDMX", "Nueva York",4);
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

    Avion avion1("Boeing 737", 180);

    avion1.asignarTripulacion(piloto1);
    avion1.asignarTripulacion(azafata1);

    string fecha = "2025-05-24";


    int opcion;
    do {
        cout << "\n=== Menu de Clientes ===\n";
        cout << "1. Agregar cliente\n";
        cout << "2. Modificar nombre\n";
        cout << "3. Modificar codigo de pasaporte\n";
        cout << "4. Modificar el email\n";
        cout << "5. Salir del menu\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer

        if (opcion == 1) {
            if (numClientes < MAX_CLIENTES) {
                string nombre;
                int pasaporte;
                string email;

                cout << "Ingrese nombre completo: ";
                getline(cin, nombre);
                cout << "Ingrese codigo de pasaporte: ";
                cin >> pasaporte;
                cin.ignore();
                cout << "Ingrese email: ";
                getline(cin, email);

                clientes[numClientes] = Cliente(nombre, pasaporte,email);
                numClientes++;
                cout << "Cliente agregado con exito.\n";
            } else {
                cout << "Limite de clientes alcanzado.\n";
            }

        } else if (opcion == 2) {
            int index;
            cout << "Ingrese numero de cliente (0 a " << numClientes - 1 << "): ";
            cin >> index;
            cin.ignore();

            if (index >= 0 && index < numClientes) {
                string nn;
                cout << "Ingrese nuevo nombre completo: ";
                getline(cin, nn);
                clientes[index].setNombre(nn);
                cout << "Nombre actualizado.\n";
            } else {
                cout << "Indice invalido.\n";
            }

        } else if (opcion == 3) {
            int index;
            cout << "Ingrese numero de cliente (0 a " << numClientes - 1 << "): ";
            cin >> index;
            cin.ignore();

            if (index >= 0 && index < numClientes) {
                int cp;
                cout << "Ingrese nuevo codigo de Pasaporte: ";
                cin >> cp;
                clientes[index].setCodigoPasaporte(cp);
                cout << "Codigo de Pasaporte actualizado.\n";
            } else {
                cout << "Indice invalido.\n";
            }
        } else if (opcion == 4) {
            int index;
            cout << "Ingrese numero de cliente (0 a " << numClientes - 1 << "): ";
            cin >> index;

            if (index >= 0 && index < numClientes) {
                string ne;
                cout << "Ingrese nuevo email: ";
                cin >> ne;
                clientes[index].setEmail(ne);
                cout << "Email actualizado.\n";
            } else {
                cout << "Indice invalido.\n";
            }
        } else if (opcion == 5) {
            cout << "\nSaliendo del menu...\n";
        } else {
            cout << "Opción no válida.\n";
        }

    } while (opcion != 5);

    // Después del menú: generar tickets para cada cliente
    cout << "\n=== Generacion de tickets ===\n";
    for (int i = 0; i < numClientes; ++i) {
        Ticket t(clientes[i], ruta1, avion1, fecha);
        cout << "\nTicket para cliente #" << i << ":\n";
        t.mostrarTicket();
    }

    return 0;
}