// Ingresar por teclado dos nombres de personas y luego mostrarlas
// primero el que tiene más caracteres y luego el que tiene menos.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nombre1[31];
    char nombre2[31];

    printf("\nNOMBRE 1: ");
    gets(nombre1);
    printf("NOMBRE 2: ");
    gets(nombre2);

    if(strlen(nombre1) > strlen(nombre2)){
        printf("\n-%s \n-%s\n", nombre1, nombre2);
    }else{
        printf("\n-%s \n-%s\n", nombre2, nombre1);
    }

    return 0;
}
