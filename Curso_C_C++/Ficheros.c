#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to display the content of a file
int nombre_fichero()
{
	FILE *mifichero;
	char nombre_fichero[50];
	char cadena_texto[1024];

	printf("Introduce el nombre del fichero a mostrar: ");
	scanf("%s", nombre_fichero);

	mifichero = fopen(nombre_fichero, "r");

	if (!mifichero)
	{
		printf("No se ha podido abrir el fichero\n");
	}
	else
	{
		while (!feof(mifichero))
		{
			if (fgets(cadena_texto, 1024, mifichero) != NULL)
				printf("%s", cadena_texto);
		}
	}

	fclose(mifichero);

	return 0;
}

// Function to store phrases in a file
int almacenar_frases_en_fichero()
{
	FILE *mifichero;
	char frase[250];
	char respuesta = 's';

	mifichero = fopen("test.txt", "a"); // Open for appending

	if (!mifichero)
	{
		printf("El archivo no se pudo abrir\n");
	}
	else
	{
		do
		{
			printf("Escribe una frase para almacenar en el archivo (maximo 250 caracteres): ");
			// Clear input buffer
			while (getchar() != '\n')
				;
			fgets(frase, sizeof(frase), stdin);
			// Remove newline character if present
			frase[strcspn(frase, "\n")] = 0;
			// Write a newline character before the new phrase to ensure separation
			fprintf(mifichero, "\n%s", frase); // Prepend \n to each new entry
			printf("Quieres agregar otra frase? S/N: ");
			respuesta = getchar();
		} while (respuesta == 's' || respuesta == 'S');
	}
	fclose(mifichero);
	return 0;
}

int main()
{
	nombre_fichero();
	almacenar_frases_en_fichero();
	return 0;
}