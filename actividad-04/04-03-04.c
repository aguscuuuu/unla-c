/*
    Resuelve el problema utilizando funciones.
    Realizar un programa en C que pida al usuario su nombre y su apellido y los muestre por pantalla
    con el formato apellido, nombre. Si el usuario ingresó nombre=Juan y apellido=Fernández, el programa
    devolverá el texto "Fernández, Juan".
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

// creamos una función la cual pida el nombre
void solicitarNombre(char nombre[51]){
    printf("\nNOMBRE: ");
    scanf("%s", nombre);
}
// creamos una función la cual pida el apellido
void solicitarApellido(char apellido[51]){
    printf("APELLIDO: ");
    scanf("%s", apellido);
}
// creamos una función la cual muestre el nombre y el apellido
void imprimirNombreyApellido(char nombre[51], char apellido[51]){
    printf("\n%s, %s\n", apellido, nombre);
}

int main(){

    char nombre[51], apellido[51];

    solicitarNombre(nombre);
    solicitarApellido(apellido);
    imprimirNombreyApellido(nombre, apellido);

    return 0;}
