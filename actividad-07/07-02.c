/*
    Reescribir alguno de los m�todos de ordenamiento para que reciba un array de punteros a char. A fin de realizar
    la comparaci�n entre strings utilizar la funci�n strcmp vista anteriormente. Reescribir y utilizar tambi�n
    la funci�n intercambiar, que ahora deber� recibir dos punteros a char. La manipulaci�n de los elementos
    de los strings deber� realizarse con punteros.
    M�todo elegido: Inserci�n.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

// cuando pasas punteros a char simples (char *) en lugar de punteros a punteros a char (char **),
// est�s pasando copias de los punteros originales. si intentas intercambiar los valores de a y b
// dentro de la funci�n, solo estar�s intercambiando las copias locales de los punteros, no los punteros
// originales en la funci�n llamadora.
void intercambiar(char **a, char **b){
    char *temp = *a;
    *a = *b;
    *b = temp;
}
void ordenarPorInsercion(char *arr[], int longitud){ // toma como entrada un arreglo de punteros a cadenas de caracteres y su longitud
    for(int iterador1 = 1; iterador1 < longitud; iterador1++){ // comienza iterando desde el segundo elemento del arreglo hasta el �ltimo
        char *clave = arr[iterador1]; // se guarda una copia del elemento en la posici�n iterador1 del arreglo en la variable clave
        int iterador2 = iterador1 - 1; // establece la posici�n del elemento justo antes de la "clave"

        // mientras que iterador2 no llegue a la posici�n inicial (0) y mientras la cadena en la posici�n iterador2 del arreglo
        // (arr[iterador2]) sea mayor en t�rminos lexicogr�ficos que la clave...
        while(iterador2 >= 0 && strcmp(arr[iterador2], clave) > 0){
            arr[iterador2 + 1] = arr[iterador2]; // el elemento en la posici�n iterador2 se desplaza una posici�n hacia adelante para dejar espacio para la inserci�n de la clave
            iterador2--; // se decrementa para comparar la clave con el siguiente elemento hacia atr�s en el arreglo
        }
        arr[iterador2 + 1] = clave; // dado que iterador2 fue decrementado antes de salir del bucle, esta posici�n es la correcta para insertar la clave mientras se mantiene el orden alfab�tico.
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
