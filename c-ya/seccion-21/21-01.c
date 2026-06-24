// Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor
// y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.
#include <stdio.h>
#include <stdlib.h>
void cargarVector(int vector[5]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("  [%d] = ", iterador);
        scanf("%d", &vector[iterador]);
    }
}
void mostrarVector(int vector[5]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("  [%d] = %d\n", iterador, vector[iterador]);
    }
}
void ordenarVector(int vector[5]){
    int iterador1, iterador2, auxiliar;
    for(iterador1=0; iterador1<4; iterador1++){
        for(iterador2=0; iterador2<4-iterador1; iterador2++){
            if(vector[iterador2] > vector[iterador2+1]){
                auxiliar = vector[iterador2];
                vector[iterador2] = vector[iterador2+1];
                vector[iterador2+1] = auxiliar;
            }
        }
    }
}
int main(){
    int vector[5];
    printf("\nCARGUE EL SIGUIENTE VECTOR:\n");
    cargarVector(vector);
    printf("\nVECTOR:\n");
    mostrarVector(vector);
    ordenarVector(vector);
    printf("\nVECTOR ORDENADO:\n");
    mostrarVector(vector);
    return 0;
}
