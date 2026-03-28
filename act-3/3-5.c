#include <stdio.h>
#include <stdlib.h>

int main(){

    int suma, iterador, carlos[5]; // vector comienza en 0 termina en 4
    float media;

    printf("\nEl siguiente vector se llama Carlos y tiene una dimension de 5 posiciones (va de cero a cuatro)\n");
    printf("Por favor, asignele un valor entero a cada posicion para luego saber el promedio (la media)\n\n");

    for(iterador = 0; iterador < 5; iterador++){
        printf("Carlos[%d] = ", iterador);
        scanf("%d", &carlos[iterador]);
        suma = suma + carlos[iterador];
    }

    media = (float)suma / 5;
    printf("\nEl promedio (la media) de los valores del vector Carlos es = %f\n", media);

    return 0;}
