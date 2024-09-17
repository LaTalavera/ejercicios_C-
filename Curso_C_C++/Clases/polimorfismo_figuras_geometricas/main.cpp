/*
Conceptos: Polimorfismo, clases abstractas, métodos virtuales.

Descripción: Crea una clase base abstracta Figura con un método virtual puro calcularArea().
Luego, crea clases derivadas Circulo y Rectangulo que implementen este método. Usa polimorfismo para calcular
el área de diferentes figuras geométricas.

Instrucciones:

Define la clase base abstracta Figura con un método virtual puro calcularArea.
Crea clases derivadas Circulo y Cuadrado que implementen el método calcularArea.
Implementa los constructores y métodos necesarios en cada clase derivada.
Usa polimorfismo para calcular el área de diferentes figuras geométricas.
*/
#include "Figure.h"
#include <vector>
using namespace std;

int main()
{
    vector<Figure *> figures;
    figures.push_back(new Circle(3.5));
    figures.push_back(new Square(4));
    
    for (Figure *figure : figures)
    {
        figure->calculateArea();
    }

    for (Figure *figure : figures)
    {
        delete figure;
    }

    return 0;
}