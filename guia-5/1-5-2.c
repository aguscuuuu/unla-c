#include <stdio.h>
#include <stdlib.h>

int buscarBinario(int *vector, int longitud, int numBuscado) {
    int *inicio = vector;
    int *fin = vector + longitud - 1;

    while (inicio <= fin) {
        int *medio = inicio + (fin - inicio) / 2;

        if (*medio == numBuscado) {
            return medio - vector; // calculamos la posición mediante la aritmética de punteros
        } else if (*medio < numBuscado) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}
int main() {
    int vec[] = {1, 2, 5, 7, 9, 15, 25, 36, 75};
    int longitud = sizeof(vec) / sizeof(vec[0]);
    int numBuscado;

    printf("\nVector:\n");
    for (int *iterador = vec; iterador < vec + longitud; iterador++) {
        printf("%d ", *iterador);
    }
    printf("\n\nQue numero buscas?\n");
    scanf("%d", &numBuscado);

    int posicion = buscarBinario(vec, longitud, numBuscado);

    if (posicion != -1) {
        printf("\nEl elemento %d se encuentra en la posicion %d\n", numBuscado, posicion);
    } else {
        printf("\nEl elemento %d no se encuentra dentro del vector\n", numBuscado);
    }

    return 0;
}
