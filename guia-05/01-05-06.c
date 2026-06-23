#include <stdio.h>
#include <stdlib.h>

void ordenarBurbuja(int *vector, int longitud) {
    for (int iterador1 = 0; iterador1 < longitud - 1; iterador1++) {
        for (int iterador2 = 0; iterador2 < longitud - iterador1 - 1; iterador2++) {
            if (*(vector + iterador2) > *(vector + iterador2 + 1)) {
                int temp = *(vector + iterador2);
                *(vector + iterador2) = *(vector + iterador2 + 1);
                *(vector + iterador2 + 1) = temp;
            }
        }
    }
}
void mostrarVector(int *vector, int longitud) {
    for (int iterador = 0; iterador < longitud; iterador++) {
        printf("%d ", *(vector + iterador));
    }
}
int main() {
    int vec[] = {1, 6, 3, 4, 2, 7, 9, 8, 5};
    int longitud = sizeof(vec) / sizeof(vec[0]);

    printf("\nVector original:\n");
    mostrarVector(vec, longitud);
    printf("\n");

    ordenarBurbuja(vec, longitud);

    printf("\nVector ordenado:\n");
    mostrarVector(vec, longitud);
    printf("\n");

    return 0;
}
