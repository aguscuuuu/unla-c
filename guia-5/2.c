#include <stdio.h>
#include <string.h>

// cuando pasas punteros a char simples (char *) en lugar de punteros a punteros a char (char **),
// estás pasando copias de los punteros originales. si intentas intercambiar los valores de a y b
// dentro de la función, solo estarás intercambiando las copias locales de los punteros, no los punteros
// originales en la función llamadora.
void intercambiar(char **a, char **b){
    char *temp = *a;
    *a = *b;
    *b = temp;
}
void ordenarPorInsercion(char *arr[], int longitud){ // toma como entrada un arreglo de punteros a cadenas de caracteres y su longitud
    for(int iterador1 = 1; iterador1 < longitud; iterador1++){ // comienza iterando desde el segundo elemento del arreglo hasta el último
        char *clave = arr[iterador1]; // se guarda una copia del elemento en la posición iterador1 del arreglo en la variable clave
        int iterador2 = iterador1 - 1; // establece la posición del elemento justo antes de la "clave"

        // mientras que iterador2 no llegue a la posición inicial (0) y mientras la cadena en la posición iterador2 del arreglo
        // (arr[iterador2]) sea mayor en términos lexicográficos que la clave...
        while(iterador2 >= 0 && strcmp(arr[iterador2], clave) > 0){
            arr[iterador2 + 1] = arr[iterador2]; // el elemento en la posición iterador2 se desplaza una posición hacia adelante para dejar espacio para la inserción de la clave
            iterador2--; // se decrementa para comparar la clave con el siguiente elemento hacia atrás en el arreglo
        }
        arr[iterador2 + 1] = clave; // dado que iterador2 fue decrementado antes de salir del bucle, esta posición es la correcta para insertar la clave mientras se mantiene el orden alfabético.
    }
}
int main(){
    char *arr[] = {"banana", "manzana", "pera", "uva", "naranja"};
    int longitud = sizeof(arr) / sizeof(arr[0]);

    printf("\nArray original:\n");
    for (int iterador = 0; iterador < longitud; iterador++) {
        printf("%s ", arr[iterador]);
    }
    printf("\n");

    ordenarPorInsercion(arr, longitud);

    printf("\nArray ordenado:\n");
    for (int iterador = 0; iterador < longitud; iterador++) {
        printf("%s ", arr[iterador]);
    }
    printf("\n");

    return 0;
}
