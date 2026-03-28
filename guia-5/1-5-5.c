#include <stdio.h>
#include <stdlib.h>

void ordenarInsercion(int vector[], int longitud) {
    for (int* iterador1 = vector; iterador1 < vector + longitud; iterador1++) {
        int elemento = *iterador1;
        int* iterador2 = iterador1 - 1;

        while (iterador2 >= vector && *iterador2 > elemento) {
            *(iterador2 + 1) = *iterador2;
            iterador2--;
        }
        *(iterador2 + 1) = elemento;
    }
}
void mostrarVector(int vector[], int longitud) {
    for (int* iterador = vector; iterador < vector + longitud; iterador++) {
        printf("%d ", *iterador);
    }
}
int main() {
    int vec[] = {6, 3, 8, 5, 9, 4, 1, 2, 7};
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
