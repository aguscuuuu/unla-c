// Cargar en una matriz los nombres de 5 países y en un vector
// paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente
// e imprimir los resultados. Por último ordenar con respecto a la cantidad
// de habitantes (de mayor a menor) e imprimir nuevamente.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cargarPaises(char matriz[5][21], int vector[5]){
    int iterador;
    printf("\nNOMBRE LOS PAISES: \n");
    for(iterador = 0; iterador < 5; iterador++){
        printf("PAIS %d: ", iterador + 1);
        gets(matriz[iterador]);
        printf("HABITANTES: ");
        scanf("%d", &vector[iterador]);
        fflush(stdin);
    }
}
void ordenarPorNombre(char matriz[5][21], int vector[5]){
    int iterador1, iterador2, auxHabitantes;
    char auxPais[21];
    for(iterador1 = 0; iterador1 < 4; iterador1++){
        for(iterador2 = 0; iterador2 < 4 - iterador1; iterador2++){
            if(strcmp(matriz[iterador2], matriz[iterador2 + 1]) > 0){
                strcpy(auxPais, matriz[iterador2]);
                strcpy(matriz[iterador2], matriz[iterador2 + 1]);
                strcpy(matriz[iterador2 + 1], auxPais);
                auxHabitantes = vector[iterador2];
                vector[iterador2] = vector[iterador2 + 1];
                vector[iterador2 + 1] = auxHabitantes;
            }
        }
    }
}
void ordenarPorHabitantes(char matriz[5][21], int vector[5]){
    int iterador1, iterador2, auxHabitantes;
    char auxPais[21];
    for(iterador1 = 0; iterador1 < 4; iterador1++){
        for(iterador2 = 0; iterador2 < 4 - iterador1; iterador2++){
            if(vector[iterador2] < vector[iterador2 + 1]){
                auxHabitantes = vector[iterador2];
                vector[iterador2] = vector[iterador2 + 1];
                vector[iterador2 + 1] = auxHabitantes;
                strcpy(auxPais, matriz[iterador2]);
                strcpy(matriz[iterador2], matriz[iterador2 + 1]);
                strcpy(matriz[iterador2 + 1], auxPais);
            }
        }
    }
}
void mostrarPaises(char matriz[5][21], int vector[5]){
    int iterador;
    for(iterador = 0; iterador < 5; iterador++){
        printf("%s - %d\n", matriz[iterador], vector[iterador]);
    }
}
int main(){
    char matrizPaises[5][21];
    int vectorPaises[5];
    printf("\nCARGUE LA SIGUIENTE INFORMACION:\n");
    cargarPaises(matrizPaises, vectorPaises);

    ordenarPorNombre(matrizPaises, vectorPaises);
    printf("\nINFORMACION ORDENADA ALFABETICAMENTE:\n");
    mostrarPaises(matrizPaises, vectorPaises);

    ordenarPorHabitantes(matrizPaises, vectorPaises);
    printf("\nINFORMACION ORDENADA POR HABITANTES (DE MAYOR A MENOR):\n");
    mostrarPaises(matrizPaises, vectorPaises);

    return 0;
}
