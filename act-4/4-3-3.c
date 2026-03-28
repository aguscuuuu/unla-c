#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// creamos una función que de vuelta una palabra
void invertirPalabra(char palabra[]){
    int longitud;
    int iterador;

    // declaramos una variable entera que tiene como valor la longitud exacta
    // de los valores que ocupó el usuario en el string 'nombre'.
    // si escribe 'Carlos', este ocuparía 6 espacios dentro del string
    longitud = strlen(palabra);

    for(iterador = longitud - 1; iterador >= 0; iterador--){ // 'longitud - 1' es el último caracter del string
        printf("%c", palabra[iterador]);
    }
    printf("\n\n");
}

int main(){

    // declaramos un string de caracteres
    char palabra[101]; // los strings siempre terminan en 0

    // le pedimos al usuario un valor que se deposita en el string
    printf("\nIngrese un sola palabra (sin espacios) para verla invertida\n\n");
    scanf("%s", palabra);
    printf("\n\n");

    invertirPalabra(palabra);

    return 0;}
