#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[61], apellido[61];

    printf("\nNOMBRE: ");
    scanf("%s", nombre);
    printf("APELLIDO: ");
    scanf("%s", apellido);

    printf("\n%s, %s\n", apellido, nombre);

    return 0;}
