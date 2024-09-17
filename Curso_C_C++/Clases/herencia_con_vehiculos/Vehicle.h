#pragma once
#include <string>
using namespace std;

class Vehicle
{
private:
    string brand;
    string model;

public:
    Vehicle() = default;
    Vehicle(string brand, string model) : brand(brand), model(model) {}
    void virtual showVehicleInfo();
    virtual ~Vehicle() = default; // Make destructor virtual for proper cleanup of derived classes
};

class Motorbike : public Vehicle
{
private:
    int wheels;
    int horsePower;

public:
    Motorbike() = default;
    Motorbike(string brand, string model, int wheels, int horsePower)
        : Vehicle(brand, model), wheels(wheels), horsePower(horsePower) {}
    void showVehicleInfo();
    ~Motorbike() override = default;
};

class Car : public Vehicle
{
private:
    int seats;
    bool ABS;

public:
    Car() = default;
    Car(string brand, string model, int seats, bool ABS)
        : Vehicle(brand, model), seats(seats), ABS(ABS) {}
    void showVehicleInfo();
    ~Car() override = default;
};