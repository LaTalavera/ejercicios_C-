#include <stdio.h>
#include <cstring>
using namespace std;

	struct Tfecha {
		int dia;
		int mes;
		int anio;
	};

	struct Tlibros {
		char titulo[40];
		char autor[40];
		char tematica[40];
		long int isbn;
		int numero_paginas;
	};


	struct Tjugadores {
		char nombre[20];
		int puntuacion_maxima = 0;
	};

	int main() {
		struct Tjugadores jugadores[6];
		int puntuacion_mayor = 0;
		int puntuacion_menor = 9999;
		char nombre_mayor_puntuacion[50];
		char nombre_menor_puntuacion[50];

		// Rellenar los datos
		for (int i = 0; i < 5 ; i++) {
			printf("\n Introduce el nombre del jugador %d: ", i);
			scanf_s("%s", &jugadores[i].nombre, sizeof(jugadores[i].nombre));
			printf("\n Introduce su puntuacion: ");
			scanf_s("%d", &jugadores[i].puntuacion_maxima);
		}

		// Calcular puntuacion mayor y menor
		for (int i = 0; i < 5; i++) {
			if (jugadores[i].puntuacion_maxima > puntuacion_mayor) {
				strcpy_s(nombre_mayor_puntuacion, jugadores[i].nombre);
				puntuacion_mayor = jugadores[i].puntuacion_maxima;
			}
			if (jugadores[i].puntuacion_maxima < puntuacion_menor) {
				strcpy_s(nombre_menor_puntuacion, jugadores[i].nombre);
				puntuacion_menor = jugadores[i].puntuacion_maxima;
			}
		}

		printf("\n El jugador con la puntuacion menor es: %s con una puntuacion de %d", nombre_menor_puntuacion, puntuacion_menor);
		printf("\n El jugador con la puntuacion mayor es: %s con una puntuacion de %d", nombre_mayor_puntuacion, puntuacion_mayor);
			
		return 0;
	}