/*
    Pirámide
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int alto, i, j;
    alto = 10;

    for (i = 1; i <= alto; i++) {           // ALTO = FILAS

        for (j = 1; j <= alto - i; j++) {   // ESPACIOS
            printf(" ");
        }

        for (j = 1; j <= 2*i - 1; j++) {    // RELLENOS
            printf("X");
        }

        printf("\n");
    }

    return 0;
}
