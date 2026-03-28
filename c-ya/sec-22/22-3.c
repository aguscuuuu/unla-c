// Definir una matriz de 2 filas y 5 columnas. Realizar su carga e impresión.
// Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la matriz.
#include <stdio.h>
#include <stdlib.h>
void cargarMatriz(int matriz[2][5]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<2; iterador1++){
        for(iterador2=0; iterador2<5; iterador2++){
            printf("  matriz[%d][%d] = ", iterador1, iterador2);
            scanf("%d", &matriz[iterador1][iterador2]);
        }
    }
}
void mostrarMatriz(int matriz[2][5]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<2; iterador1++){
        for(iterador2=0; iterador2<5; iterador2++){
            printf(" %d ", matriz[iterador1][iterador2]);
        }
        printf("\n");
    }
}
void intercambiarValores(int matriz[2][5]){
    int iterador1, auxiliar;
    for(iterador1=0; iterador1<5; iterador1++){
                    auxiliar = matriz[0][iterador1];
        matriz[0][iterador1] = matriz[1][iterador1];
        matriz[1][iterador1] = auxiliar;
    }
}
int main(){
    int matriz[2][5];
    printf("\nCARGUE LA SIGUIENTE MATRIZ:\n");
    cargarMatriz(matriz);
    printf("\nMATRIZ:\n");
    mostrarMatriz(matriz);

    intercambiarValores(matriz);

    printf("\nMATRIZ:\n");
    mostrarMatriz(matriz);

    return 0;
}
