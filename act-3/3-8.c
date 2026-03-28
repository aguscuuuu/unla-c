#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // declaramos un string de caracteres
    char palabra[101]; // los strings siempre terminan en 0

    // le pedimos al usuario un valor que se deposita en un string
    printf("\nIngrese un sola palabra (sin espacios) para verla invertida\n\n");
    scanf("%s", palabra);
    printf("\n\n");

    // declaramos una variable entera que tiene como valor la longitud exacta
    // de los valores que ocupó el usuario en el string 'nombre'.
    // si escribe 'Carlos', este ocuparía 6 espacios dentro del string
    int longitud = strlen(palabra);
    int iterador;

    // 'longitud - 1' es el último caracter del string
    //
    for(iterador = longitud - 1; iterador >= 0; iterador--){
        printf("%c", palabra[iterador]);
    }
    printf("\n\n");

    return 0;}



