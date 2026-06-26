/*
    Crear una función
    void *copiarVector(int *vector, int longitud);
    que devuelva un puntero a una copia del vector pasado como parámetro. En la función deberá crearse
    el vector copia. Utilizar la función obtenerMemoria definida anteriormente.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void *obtenerMemoria(size_t tamanio){
    void *puntero = malloc(tamanio);
    if(puntero == NULL){
        printf("Error: No se pudo obtener memoria\n");
        exit(1);
    }
    return puntero;
}

void *copiarVector(int *vector, int longitud){
    int *copia = (int *)obtenerMemoria(longitud * sizeof(int));
    for(int iterador = 0; iterador < longitud; iterador++){
        copia[iterador] = vector[iterador];
    }
    return copia;
}

int main(){
    int elementos;
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &elementos);

    int *vector = (int *)obtenerMemoria(elementos * sizeof(int));

    for(int i = 0; i < elementos; i++){
        vector[i] = i * 10;
    }

    int *copia = (int *)copiarVector(vector, elementos);

    printf("\nVector original:\n");
    for(int i = 0; i < elementos; i++){
        printf("%d ", vector[i]);
    }
    printf("\n");

    printf("\nCopia del vector:\n");
    for(int i = 0; i < elementos; i++){
        printf("%d ", copia[i]);
    }
    printf("\n");

    free(vector);
    free(copia);
    return 0;
}
