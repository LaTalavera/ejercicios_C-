/*
Conceptos: Clases, atributos y métodos, constructores, encapsulamiento.

Descripción: Crea una clase Estudiante que tenga atributos como nombre, edad y calificación. 
Implementa métodos para establecer y obtener estos atributos. Asegúrate de que los atributos sean privados y se accedan mediante métodos públicos.

Instrucciones:

Define la clase Estudiante con atributos privados: nombre, edad y calificacion.
Implementa un constructor que inicialice estos atributos.
Implementa métodos get y set para cada atributo.
Implementa un método que imprima los detalles del estudiante.
*/


#include "Student.h"

int main(){
    Student *my_student = new Student;

    my_student->setname("Jesus");
    my_student->setage(38);
    my_student->setrate(9);
    my_student->showInfo();

    delete my_student;

    return 0;
}