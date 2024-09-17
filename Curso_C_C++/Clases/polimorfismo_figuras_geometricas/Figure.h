#pragma once
#include <iostream>
using namespace std;

//Clase abstracta  es una clase que no puede ser instanciada directamente. 
//Su principal propósito es servir como una base para otras clases.
class Figure
{
public:
    Figure() = default;
    //Un método virtual puro es una función que se declara en una clase base pero no se define en ella.
    //Se define asignándole = 0 al final de su declaración. Esto obliga a las clases derivadas a proporcionar una implementación para este método. 
    //Si una clase tiene al menos un método virtual puro, se convierte en una clase abstracta.
    void virtual calculateArea() = 0; 
};

class Circle : public Figure
{
private:
    double radius;

public:
    Circle(double radius);
    void calculateArea() override;
};

class Square : public Figure
{
private:
    double side;

public:
    Square(double side);
    void calculateArea() override;
};