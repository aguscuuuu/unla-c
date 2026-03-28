// Definir una matriz de 5 filas y 10 columnas. Cargar valores
// aleatorios comprendidos entre 10 y 90.
// Ingresar por teclado un número y verificar si se encuentra en
// la matriz. No buscar más si se lo encuentra, salir de los ciclos mediante un goto.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 5
#define COLUMNAS 10
void cargarMatriz(int matriz[FILAS][COLUMNAS]){
    int iterador1, iterador2;
    srand(time(NULL)); // se agrega esta linea para que varien los numeros cada vez que se ejecute
    printf("\nMATRIZ\n");
    for(iterador1=0; iterador1<FILAS; iterador1++){
        for(iterador2=0; iterador2<COLUMNAS; iterador2++){
            matriz[iterador1][iterador2] = rand()%81+10;
        }
    }
}
void mostrarMatriz(int matriz[FILAS][COLUMNAS]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<FILAS; iterador1++){
        for(iterador2=0; iterador2<COLUMNAS; iterador2++){
        printf("%d ", matriz[iterador1][iterador2]);
        }
        printf("\n");
    }
}
void buscarNumero(int matriz[FILAS][COLUMNAS], int numero){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<FILAS; iterador1++){
        for(iterador2=0; iterador2<COLUMNAS; iterador2++){
            if(matriz[iterador1][iterador2] == numero){
                printf("\nEL NUMERO %d APARECE POR PRIMERA VEZ EN LA POSICION [%d][%d]\n", numero, iterador1+1, iterador2+1);
                goto encontrado;
            }
        }
    }
    printf("\nEL NUMERO %d NO SE ENCUENTRA EN LA MATRIZ\n", numero);
    return;

    encontrado:
        return;
}
int main(){

    int matriz[FILAS][COLUMNAS], numero;

    cargarMatriz(matriz);

    mostrarMatriz(matriz);

    printf("\nINGRESE UN NUMERO A BUSCAR: ");
    scanf("%d", &numero);

    buscarNumero(matriz,numero);

    return 0;
}
