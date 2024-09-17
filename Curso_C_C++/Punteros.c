#include <iostream>
#include <stdio.h>
using namespace std;

int puntero_letra() {
	char letra = 'X';
	char *puntero_letra;

	puntero_letra = &letra;
	
	printf("La direcion de memoria de X es: %p", puntero_letra);
	return 0;
}


int referencia_numero() {
	int numero;
	int &referencia_numero = numero;

	referencia_numero = 0;
	printf("Numero vale: %d \n", referencia_numero);
	referencia_numero++;
	printf("Numero vale: %d \n", referencia_numero);

	return 0;
}

int example() {
	// my_pointer is a pointer variable that stores the address of another variable.
	// & my_pointer gets the address of my_pointer itself.
	// * my_pointer accesses the value at the address stored in my_pointer.

	int x = 5;        // A normal integer variable.
	int* p = &x;      // A pointer variable storing the address of x.

	cout << x << endl;    // Prints the value of x (5).
	cout << &x << endl;   // Prints the memory address of x.
	cout << p << endl;    // Prints the memory address stored in p (same as &x).
	cout << *p << endl;   // Dereferences p and prints the value at that address (5).

	return 0;
}


int main() {
	puntero_letra();
	referencia_numero();
	example();
}

