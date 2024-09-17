#include <stdio.h>
#include <stdbool.h> // Corrected from <bool.h>
#include <stdlib.h>

void pedir_datos_para_clave();
int comprobar_clave(int clave_numerica);
void par_o_impar(int numero);
void asignar_numero(int *numero); // Corrected typo

int main()
{
    int numero = 0;
    asignar_numero(&numero); // Corrected typo
    printf("El numero introducido es %d ", numero);

    getchar();
    return 0;       // Added return statement
}

void pedir_datos_para_clave()
{
    int clave = 0;
    bool esta_bien_la_clave = false; // Use false for clarity

    while (!esta_bien_la_clave)
    {
        printf("\n Hola amigo, introduce la clave numerica: ");
        scanf("%d", &clave);
        while (getchar() != '\n')
            ;
        esta_bien_la_clave = comprobar_clave(clave);
    }

    printf("\n Acertastes la clave amigo, Adios!");
}

int comprobar_clave(int clave_numerica)
{
    return clave_numerica == 123;
}

void par_o_impar(int numero)
{
    if (numero % 2 == 0)
    {
        printf("\n El numero es par");
    }
    else
    {
        printf("\n El numero es impar");
    }
}

void asignar_numero(int *numero)
{
    printf("Introduzca un numero: ");
    scanf("%d", numero);
    while (getchar() != '\n')
        ;
}