#include <stdio.h>
#include <stdlib.h>
/// sin utilizar la biblioteca <string.h>

// creamos una función para devolver la longitud de un string (con return)
int obtenerLongitudString(char cadena[]){
    int longitud;

    while(cadena[longitud] != '\0'){ // iterar hasta que se llegue al caracter nulo
        longitud++; // ir incrementando la longitud
    }
    return longitud; // devolver el valor de la longitud
}

int main(){

    char stringXD[51];
    int longitud;

    printf("\nEscriba una sola palabra para asignarsela a este string\n-> ");
    scanf("%s", stringXD);

    // asignarle a la variable longitud (del main) el valor que retorna la función
    longitud = obtenerLongitudString(stringXD);

    printf("\nLa longitud de este string es de %d caracteres \n", longitud);

    return 0;}
