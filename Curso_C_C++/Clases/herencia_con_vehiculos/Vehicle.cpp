#include "Vehicle.h"
#include <iostream>
using namespace std;

void Vehicle::showVehicleInfo()
{
    cout << "Brand " << this->brand << endl;
    cout << "Model " << this->model << endl;
}

void Motorbike::showVehicleInfo()
{
    Vehicle::showVehicleInfo();

    cout << "Wheels " << this->wheels << endl;
    cout << "horsePower " << this->horsePower << endl;
}

void Car::showVehicleInfo()
{
    Vehicle::showVehicleInfo();

    cout << "Seats " << this->seats << endl;
    cout << "ABS " << this->ABS << endl;
}