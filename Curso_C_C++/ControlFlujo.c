#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int comprobarNumero()
{
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero); // Use scanf_s and the address of 'numero'
    while (getchar() != '\n')
        ;
    if (numero > 10)
    {
        printf("El numero %d es mayor que 10 \n", numero);
    }
    else
    {
        printf("El numero %d es menor que 10 \n", numero);
    }
    return 0;
}

int numeroParImpar()
{
    int numero, opcion;
    bool exit = false;
    while (exit == false)
    {
        printf("Elija una opcion: \n");
        printf("1.Introducir un numero nuevo para ver si es par o impar \n");
        printf("2.Salir \n");
        scanf("%d", &opcion);
        while (getchar() != '\n')
            ;
        switch (opcion)
        {
        case 1:
            printf("Introduce el numero: \n");
            scanf("%d", &numero);
            while (getchar() != '\n')
                ;
            if (numero % 2 == 0)
            {
                printf("El numero es par \n");
                printf("\n");
            }
            else
            {
                printf("El numero es impar \n");
                printf("\n");
            }
            break;
        case 2:
            printf("Adios!");
            exit = true;
            break;
        default:
            printf("No ha introducido un numero");
        }
    }
    return 0;
}

int numerosDiezEnDiez()
{
    int numero = 10;
    for (int i = 1; i <= 10; i++)
    {
        printf("Numero %d es %d \n", i, numero);
        numero += 10;
    }
    return 0;
}

int main()
{
    comprobarNumero();
    numeroParImpar();
    numerosDiezEnDiez();
}
