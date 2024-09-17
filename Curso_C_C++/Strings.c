#include <stdio.h>
#include <cstring>
using namespace std;

int numero_veces_caracter() {
   char frase[100];
   char caracter;
   int contador = 0;

   printf("Introduce una frase: ");
   fgets(frase, sizeof(frase), stdin); // Reemplazo de gets

   printf("Introduce un caracter: ");
   scanf_s("%c", &caracter, 1);

   for (int i = 0; i < sizeof(frase); i++) {
       if (frase[i] == caracter) {
           contador++;
       }
   }

   printf("El caracter %c ha sido encontrado %d veces", caracter, contador);

   return 0;
}

int comparar_palabras() {
   char palabra1[20];
   char palabra2[20];

   printf("Escribe la primera palabra: ");
   fgets(palabra1, sizeof(palabra1), stdin);

   printf("Escribe la segunda palabra: ");
   fgets(palabra2, sizeof(palabra1), stdin);

   if (strcmp(palabra1, palabra2) < 0) {
       printf(" %s", palabra1);
       printf(" %s", palabra2);
   }
   else {
       printf(" %s", palabra2);
       printf(" %s", palabra1);
   }

   return 0;
}

int invertir_frase() {
   char frase[50];
   char frase_alreves[50];
   int tamanio = 0;

   printf("Introduce una frase: ");
   fgets(frase, sizeof(frase), stdin);
   tamanio = sizeof(frase);

   for (int i = 0; i < sizeof(frase); i++) {
       frase_alreves[tamanio  - 1] = frase[i];
       tamanio--;        
   }

   for (int i = 0; i < sizeof(frase_alreves); i++) {
       printf(" %c ", frase_alreves[i]);
   }

   return 0;
}


int main() {
   numero_veces_caracter();
   comparar_palabras();
   invertir_frase();
}
