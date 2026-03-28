// Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor.
#include <stdio.h>
#include <stdlib.h>
void cargarMatriz(int matriz[3][4]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<3; iterador1++){
        for(iterador2=0; iterador2<4; iterador2++){
            printf("  matriz[%d][%d] = ", iterador1, iterador2);
            scanf("%d", &matriz[iterador1][iterador2]);
        }
    }
}
void mostrarMatriz(int matriz[3][4]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<3; iterador1++){
        for(iterador2=0; iterador2<4; iterador2++){
            printf(" %d ", matriz[iterador1][iterador2]);
        }
        printf("\n");
    }
}
int valorMayor(int matriz[3][4]){
    int iterador1, iterador2;
    int mayor = matriz[0][0];
    for(iterador1=0; iterador1<2; iterador1++){
        for(iterador2=0; iterador2<3; iterador2++){
            if(matriz[iterador1+1][iterador2+1] > mayor){
                mayor = matriz[iterador1+1][iterador2+1];
            }
        }
    }
    return mayor;
}
int main(){
    int matriz[3][4];
    printf("\nCARGUE LA SIGUIENTE MATRIZ:\n");
    cargarMatriz(matriz);

    printf("\nMATRIZ:\n");
    mostrarMatriz(matriz);

    printf("\nVALOR MAYOR: %d\n", valorMayor(matriz));

    return 0;
}
