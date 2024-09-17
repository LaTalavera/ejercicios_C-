/*
Conceptos: Herencia, clases derivadas, constructores.

Descripción: Crea una clase base Vehiculo con atributos como marca y modelo.
Luego, crea clases derivadas Coche y Moto que hereden de Vehiculo y agreguen atributos específicos 
como número de puertas para Coche y tipo de manillar para Moto.

Instrucciones:

Define la clase base Vehiculo con atributos marca y modelo.
Crea clases derivadas Coche y Moto que hereden de Vehiculo.
Agrega atributos específicos en Coche y Moto.
Implementa constructores y métodos específicos para cada clase..
*/
#include "Vehicle.h"
#include <iostream>
using namespace std;

int main(){
    Vehicle my_vehicle("Honda", "Civic");
    my_vehicle.showVehicleInfo();
    cout << "========================" << endl;
    Car my_car("Honda", "Civic", 4, true);
    my_car.showVehicleInfo();
    cout << "========================" << endl;
    Motorbike *my_moto = new Motorbike("Yamaha", "Tricity", 2, 35);
    my_moto->showVehicleInfo();

    delete my_moto;
    return 0;
}