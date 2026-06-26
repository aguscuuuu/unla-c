/*
    Actividad 8 = Guía 6
    Escribir una función
    void *obtenerMemoria(size_t tamanio);
    que devuelva un puntero al bloque de memoria solicitado o que provoque la detención del programa
    con un mensaje de error en la obtención de memoria.
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

int main(){
    int cantidad;
    printf("Ingrese la cantidad de enteros a reservar: ");
    scanf("%d", &cantidad);

    int *arr = (int *)obtenerMemoria(cantidad * sizeof(int));

    for(int i = 0; i < cantidad; i++){
        arr[i] = (i + 1) * 5;
    }

    printf("Memoria reservada con exito. Contenido:\n");
    for(int i = 0; i < cantidad; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
