#include <stdio.h>
#include <stdlib.h>
/// sin utilizar la biblioteca <string.h>

// creamos una función para invertir el string
void invertir(char stringXD[]){
    int longitud = 0; // va a almacenar la longitud del string del usuario
    int iterador = 0; // se va a utilizar como índice para recorrer el string del usuario
    int auxiliar = 0; // se va a utilizar para hacer intercambios de valores
    char temp; // se va a utilizar para almacenar temporalmente un carácter durante el intercambio

    // calculamos la longitud del string de esta manera:
    while(stringXD[longitud] != '\0'){ // mientras los valores del string no lleguen a 0 (final de un string)...
        longitud++; // seguir incrementando
    }

    // esto se hace porque necesitaremos el índice del último carácter del arreglo
    // para intercambiarlo con el primer carácter, el segundo con el penúltimo, y así sucesivamente:
    auxiliar = longitud - 1;

    // en cada iteración, realizamos el intercambio de caracteres:
    while(iterador < auxiliar){ // mientras el iterador sea menor que el auxiliar...
        temp = stringXD[iterador];
        stringXD[iterador] = stringXD[auxiliar];
        stringXD[auxiliar] = temp;
        iterador++; // este proceso se repite hasta que iterador y auxiliar se crucen, es
        auxiliar--; // decir, cuando iterador sea igual o mayor que auxiliar
    }
}
int main(){
    char stringXD[51];

    printf("\nEscribe un nombre para verlo invertido\n-> ");
    scanf("%s", stringXD);

    invertir(stringXD);
    printf("\n%s\n", stringXD);

    return 0;}
