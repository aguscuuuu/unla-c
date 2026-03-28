#include <stdio.h>
#include <stdlib.h>

int buscarBinario(int *vector, int *pos1, int *pos2, int buscado) {
    if (pos1 <= pos2) {
        int *medio = pos1 + (pos2 - pos1) / 2;

        if (*medio == buscado) {
            return medio - vector;
        } else if (*medio < buscado) {
            return buscarBinario(vector, medio + 1, pos2, buscado);
        } else {
            return buscarBinario(vector, pos1, medio - 1, buscado);
        }
    }
    return -1;
}

int main() {
    int vec[] = {13, 25, 57, 34, 68};
    int n = sizeof(vec) / sizeof(vec[0]);
    int buscado;

    printf("\nQue numero buscas?\n-> ");
    scanf("%d", &buscado);

    int indice = buscarBinario(vec, vec, vec + n - 1, buscado);

    if (indice != -1) {
        printf("\nEl elemento %d se encuentra en la posicion %d\n", buscado, indice+1);
    } else {
        printf("\nEl elemento %d no se encuentra dentro del vector\n", buscado);
    }

    return 0;
}
