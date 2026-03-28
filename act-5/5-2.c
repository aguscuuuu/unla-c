#include <stdio.h>
#include <stdlib.h>

int buscarBinario(int vector[], int longitud, int numBuscado){

    int inicio = 0;
    int fin = longitud - 1; // no tenemos al último cero en cuenta

    while(inicio <= fin){ // vamos recorriendo de inicio a fin

        int medio = inicio + (fin - inicio) / 2;

        if(vector[medio] == numBuscado){
            return medio; // elemento encontrado, devolver la posición
        }else if(vector[medio] < numBuscado){
            inicio = medio + 1; // el elemento buscado está en la mitad derecha
        }else{
            fin = medio - 1; // el elemento buscado está en la mitad izquierda
        }
    }
    return -1; // elemento no encontrado
}
int main(){

    int vec[] = {1, 2, 5, 7, 9, 15, 25, 36, 75};
    int longitud = sizeof(vec) / sizeof(vec[0]);
    int numBuscado;

    printf("\nVector:\n");
    for(int iterador = 0; iterador < longitud; iterador++){
        printf("%d ", vec[iterador]);
    }
    printf("\n\nQue numero buscas?\n");
    scanf("%d", &numBuscado);

    int posicion = buscarBinario(vec, longitud, numBuscado);

    if(posicion != -1){
        printf("\nEl elemento %d se encuentra en la posicion %d\n", numBuscado, posicion+1);
    }else{
        printf("\nEl elemento %d no se encuentra dentro del vector\n", numBuscado);
    }

    return 0;
}
