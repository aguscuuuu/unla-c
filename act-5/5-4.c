#include <stdio.h>
#include <stdlib.h>

void ordenarSeleccion(int vector[], int longitud){
    for(int iterador1 = 0; iterador1 < longitud; iterador1++){ // iniciamos un bucle exterior

        int numMinimo = iterador1; // establecemos el primer elemento como el mínimo

        for(int iterador2 = iterador1 + 1; iterador2 < longitud; iterador2++){ // inciamos otro bucle interior sin contar ese elemento
            if(vector[iterador2] < vector[numMinimo]){ // si ese elemento es menor que el establecido...
                numMinimo = iterador2; // pasa a ser el menor a partir de ahora
            }
        }
        if(numMinimo != iterador1){ // si no son iguales, significa que encontramos un nuevo mínimo en el bucle interior
            int temp = vector[iterador1];
            vector[iterador1] = vector[numMinimo];
            vector[numMinimo] = temp; // intercambiamos los valores
        }
    }
}
void mostrarVector(int vector[], int longitud){
    for(int iterador = 0; iterador < longitud; iterador++){
        printf("%d ", vector[iterador]);
    }
}
int main(){

    int vec[]={1, 7, 3, 8, 9, 4, 2, 5, 6};
    int longitud = sizeof(vec) / sizeof(vec[0]);

    printf("\nVector original:\n");
    mostrarVector(vec, longitud);
    printf("\n");

    ordenarSeleccion(vec, longitud);

    printf("\nVector ordenado:\n");
    mostrarVector(vec, longitud);
    printf("\n");

    return 0;
}
