#include <stdio.h>
#include <stdlib.h>

void ordenarInsercion(int vector[], int longitud){

    for(int iterador1 = 0; iterador1 < longitud; iterador1++){ // iniciamos un bucle exterior para conocer los límites

        int elemento = vector[iterador1]; // almacenamos temporalmente el valor del elemento
        int iterador2 = iterador1 - 1; // empezamos el segundo bucle de atrás para adelante y un lugar antes que el elemento

        // mientras estemos dentro de los límites del subarreglo ordenado Y
        // el elemento en la posición iterador2 del subarreglo ordenado es mayor que el elemento que estamos considerando para la inserción...
        while(iterador2 >= 0 && vector[iterador2] > elemento){
            vector[iterador2 + 1] = vector[iterador2]; // desplazamos el elemento a la derecha en el subarreglo
            iterador2--; // decrementamos para continuar evaluando el elemento anterior en el subarreglo ordenado
        }
        vector[iterador2 + 1] = elemento;
    }
}
void mostrarVector(int vector[], int longitud){
    for(int iterador = 0; iterador < longitud; iterador++){
        printf("%d ", vector[iterador]);
    }
}
int main(){

    int vec[]={6,3,8,5,9,4,1,2,7};
    int longitud = sizeof(vec) / sizeof(vec[0]);

    printf("\nVector original:\n");
    mostrarVector(vec, longitud);
    printf("\n");

    ordenarInsercion(vec, longitud);

    printf("\nVector ordenado:\n");
    mostrarVector(vec, longitud);
    printf("\n");

    return 0;
}
