/*
    Cuadrado de 10x10
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int filas = 10;
int columnas = 10;

int main(){


    for(int i=0; i<filas; i++){             // FOR EXTERNO: FILAS
        for(int j=0; j<columnas; j++){      // FOR INTERNO: COLUMNAS
            printf("X");
        }
        printf("\n");                       // SALTO DE LÍNEA AL TERMINAR CADA FILA
    }

    printf("\n");
    return 0;
}
