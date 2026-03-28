// Crear una matriz de 3 filas y 5 columnas. Realizar la carga de componentes
// por columna (es decir primero ingresar toda la primer columna, luego la segunda
// columna y así sucesivamente) Imprimir luego la matriz.
#include <stdio.h>
#include <stdlib.h>
void cargarMatriz(int matriz[3][5]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<3; iterador1++){
        for(iterador2=0; iterador2<5; iterador2++){
            printf("  FILA %d COLUMNA %d = ", iterador1, iterador2);
            scanf("%d", &matriz[iterador1][iterador2]);
        }
    }
}
void mostrarMatriz(int matriz[3][5]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<3; iterador1++){
        for(iterador2=0; iterador2<5; iterador2++){
            printf(" %d ", matriz[iterador1][iterador2]);
        }
        printf("\n");
    }
}
int main(){
    int matriz[3][5];

    printf("\nCARGUE LA MATRIZ POR FILAS:\n");
    cargarMatriz(matriz);

    printf("\nMATRIZ:\n");
    mostrarMatriz(matriz);

    return 0;
}
