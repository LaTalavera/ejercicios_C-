#include <stdio.h>
#include <stdlib.h>

struct t_ficha
{
    int numero;
    char palabra[20];
};

int main(void)
{
    struct t_ficha *mi_ficha;
    mi_ficha = (struct t_ficha *)malloc(sizeof(struct t_ficha));

    printf("Escriba un numero: ");
    scanf("%d", &mi_ficha->numero);
    while (getchar() != '\n')
        ; // consume newline character left by scanf

    printf("Escriba una palabra: ");
    fgets(mi_ficha->palabra, 20, stdin); 

    printf("El numero es: %d\n", mi_ficha->numero);
    printf("La palabra es: %s\n", mi_ficha->palabra);

    free(mi_ficha);

    printf("Pulse una tecla para terminar");
    getchar();

    return 0;
}

