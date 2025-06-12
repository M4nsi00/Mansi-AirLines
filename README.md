# Mansi-AirLines
Bienvenido a Mansi AirLines,este proyecto simula el funcionamiento básico de una aerolínea, enfocándose en la gestión de vuelos y la generación de boletos para clientes. Se implementa una estructura de clases que permite organizar los elementos clave de una aerolínea: aviones, rutas, clientes, trabajadores (pilotos y azafatas) y tickets de vuelo.

## Funcionalidad
El programa busca realizar las siguientes cosas:
Dar de alta nuevos clientes
En el programa se ve un menú, donde se puede agregar los cleintes o modificar sus datos.
Genera tickets (boletos) que incluyen: Cliente, Ruta, Avión y Fecha

## Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ .\Avion.cpp .\Azafata.cpp .\Cliente.cpp .\main.cpp .\Piloto.cpp .\Ruta.cpp .\Ticket.cpp .\Trabajador.cpp -o .\mansi_airlines.exe"

correr en linux: "/a.out"

correr en windows: "a.exe"

## Posibles errores
Falta de tripulación en un avión: para la creación de un objeto avión es importante crear antes los objetos de la tripulación, utilizando la clase Azafata o Piloto.

Asignar trabajadores en multpiles vuelos: no asignar a un trabajador en dos vuelos al mismo tiempo.

Crear un ticket con valores nulos: Pueden haber fallos al no instanciar todas las variables de un boleto.
