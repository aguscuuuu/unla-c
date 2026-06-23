#include <stdio.h>
#include <stdlib.h>

void ordenarSeleccion(int *vector, int longitud) {
    for (int *iterador1 = vector; iterador1 < vector + longitud; iterador1++) {
        int *numMinimo = iterador1;

        for (int *iterador2 = iterador1 + 1; iterador2 < vector + longitud; iterador2++) {
            if (*iterador2 < *numMinimo) {
                numMinimo = iterador2;
            }
        }

        if (numMinimo != iterador1) {
            int temp = *iterador1;
            *iterador1 = *numMinimo;
            *numMinimo = temp;
        }
    }
}
void mostrarVector(int *vector, int longitud) {
    for (int *iterador = vector; iterador < vector + longitud; iterador++) {
        printf("%d ", *iterador);
    }
}
int main() {
    int vec[] = {1, 7, 3, 8, 9, 4, 2, 5, 6};
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
