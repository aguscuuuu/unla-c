/*
    Crear un array de punteros a char de 5 posiciones y llenarlo con cinco frases. Mostrarlo por consola.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

int main(){
    char *arr[] = {"A veces pienso", "Chau me voy", "Siento que va a pasar", "Felicitaciones por eso", "No quiero verte"};
    int longitud = sizeof(arr) / sizeof(arr[0]);

    printf("El array contiene las siguientes frases:\n");
    for(int i = 0; i < longitud; i++){
        printf("[%d] %s\n", i, arr[i]);
    }

    return 0;
}
