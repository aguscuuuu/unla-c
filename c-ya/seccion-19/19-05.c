// Cargar un vector de 10 elementos y verificar posteriormente si el mismo
// está ordenado de menor a mayor. Hacer las dos actividades en funciones distintas.
#include <stdio.h>
#include <stdlib.h>
void cargar(int vector[10]){
    int iterador;
    for(iterador=0; iterador<10; iterador++){
        printf("vector[%d] = ", iterador);
        scanf("%d", &vector[iterador]);
    }
}
void estaOrdenado(int vector[10]){
    int iterador;
    for(iterador=0; iterador<9; iterador++){
        if(vector[iterador] > vector[iterador+1]){
            printf("\nEL VECTOR NO ESTA ORDENADO DE MENOR A MAYOR\n");
            return;
        }
    }
    printf("\nEL VECTOR ESTA ORDENADO DE MENOR A MAYOR\n");
}
int main(){

    int vector[10];

    printf("\nCARGUE EL SIGUIENTE VECTOR:\n\n");
    cargar(vector);
    estaOrdenado(vector);

    return 0;
}
