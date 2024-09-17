#include <iostream>
#include <stdio.h>
using namespace std;

void vocales() {
	char letras[10];
	char vocales[10];
	int contador = 0;

	for (int i = 0; i < 10; i++) {
		printf("Introduce una letra: \n");
		scanf_s(" %c", &letras[i], 1); //c para char y d para int
		if (letras[i] == 'a' || letras[i] == 'e' || letras[i] == 'i' || letras[i] == 'o' || letras[i] == 'u') {
			vocales[contador] = letras[i];
			contador++;
		}
	}

	printf("\n Has introducido %d vocales", contador);
	printf("\n Las cuales son: ");
	for (int i = 0; i <= contador; i++) {
		printf("\n %c", vocales[i]);
	}
}

void numeros() {
	int numeros[5];
	float media = 0;
	int mayor = 0;
	int menor = 0;

	for (int i = 0; i < 5; i++) {
		printf("\n Introduce un numero: ");
		scanf_s(" %d", &numeros[i]);
	}

	for (int i = 0; i < 5; i++) {
		menor = numeros[i];
		media += numeros[i];

		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
		if (numeros[i] < menor) {
			menor = numeros[i];
		}
	}

	media = media / 5;
	printf("\n La media es %f", media);
	printf("\n El mayor es %d", mayor);
	printf("\n El menor es %d", menor);
}

void array_alreves() {
	int numeros[6];
	int numeros_alreves[6];
	int contador = 5;

	for (int i = 0; i < 6; i++) {
		printf("\n Introduce un numero: ");
		scanf_s(" %d", &numeros[i]);
	}

	for (int i = 0; i < 6; i++) {
		numeros_alreves[contador] = numeros[i];
		contador--;
	}
	printf("Los numeros introducidos alreves son: \n");
	for (int i = 0; i < 6; i++) {
		printf("\n %d", numeros_alreves[i]);
	}

}

int main() {
	vocales();
	numeros();
	array_alreves();
}