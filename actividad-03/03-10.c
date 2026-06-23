/*
    Realizar un programa en C que pida al usuario su nombre y su apellido y los muestre por pantalla
    con el formato apellido, nombre. Si el usuario ingresó nombre=Juan y apellido=Fernández, el programa
    devolverá el texto "Fernández, Juan".
    --------------------------------------------------------------------------------------------------------
*/

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
