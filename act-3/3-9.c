#include <stdio.h>
#include <stdlib.h>

int main(){

    // declaramos tres matrices que contienen tres filas y tres columnas cada una
    // las matrices tienen un valor indefinido si no se les asigna un valor explícitamente.
    int matriz1[3][3]={
        {0,1,2},
        {1,2,3},
        {2,3,4}};
    int matriz2[3][3]={
        {0,1,2},
        {1,2,3},
        {2,3,4}};
    int matriz3[3][3]={0}; // el '={0}' indica que todos los valores de la matriz son 0
    int fila;
    int columna;

    // mostramos la matriz 1
    printf("\nMATRIZ 1\n");
    for(fila = 0; fila < 3; fila++){
        for(columna = 0; columna < 3; columna++){
            printf("%d ", matriz1[fila][columna]);
        }
        printf("\n");
    }
    // mostramos la matriz2
    printf("\nMATRIZ 2\n");
    for(fila = 0; fila < 3; fila++){
        for(columna = 0; columna < 3; columna++){
            printf("%d ", matriz2[fila][columna]);
        }
        printf("\n");
    }

    // nuevamente recorremos fila por fila y columna por columna
    for(fila = 0; fila < 3; fila++){
        for(columna = 0; columna < 3; columna++){
            // vamos sumamos los elementos de la matriz1 y matriz2 y lo almacenamos dentro de la matriz3
            matriz3[fila][columna] = matriz1[fila][columna] + matriz2[fila][columna];
        }
    }

    // mostramos la matriz3
    printf("\nMATRIZ 3 (sumatoria de las dos matrices)\n");
    for(fila = 0; fila < 3; fila++){
        for(columna = 0; columna < 3; columna++){
            printf("%d ", matriz3[fila][columna]);
        }
        printf("\n");
    }

    return 0;}



