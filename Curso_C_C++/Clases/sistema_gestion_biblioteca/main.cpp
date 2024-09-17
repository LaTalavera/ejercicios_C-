/*
Conceptos: Clases, constructores, encapsulamiento, métodos.

Descripción: Crea una clase Libro que tenga atributos como título, autor y número de páginas.
Implementa métodos para prestar y devolver el libro, así como para mostrar los detalles del libro.

Instrucciones:

Define la clase Libro con atributos privados: titulo, autor y paginas.
Implementa un constructor que inicialice estos atributos.
Implementa métodos prestar y devolver.
Implementa un método para mostrar los detalles del libro.
*/

#include "Books.h"
#include <iostream>
using namespace std;

int main()
{
    Book *my_book = new Book;
    my_book->setTitle("El sirmarilion");
    my_book->setAuthor("J.R. Tolkien");
    my_book->setPageNumber(500);
    my_book->showInfo();
    cout << "===============================" << endl;
    
    string title = my_book->getTitle();
    cout << "Title " << title << endl;
    cout << "===============================" << endl;

    Book my_book2("El quijote", "Talavera", 300, false);
    my_book2.showInfo();
    delete my_book;
    return 0;
}